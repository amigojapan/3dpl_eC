/*
@define
class struct_CD_Point:
    x: float
    y: float
    z: float
*/
struct struct_CD_Point {
   float x;
   float y;
   float z;
};
/*
@define
class struct_Edge:
    a: struct_CD_Point
    b: struct_CD_Point
*/
struct struct_Edge {
   struct_CD_Point a;
   struct_CD_Point b;
};

/*
@define
class struct_Face:
    # counter-clockwise
    a: struct_CD_Point
    b: struct_CD_Point
    c: struct_CD_Point
    d: struct_CD_Point
*/

struct struct_Face {
   // counter-clockwise
   struct_CD_Point a;
   struct_CD_Point b;
   struct_CD_Point c;
   struct_CD_Point d;
};

/*
@define
class struct_CD_Cube:
    # A cube looks like this
    #
    # h -- g
    # |    |    North struct_Face
    # e -- f
    #
    # d -- c
    # |    |    South struct_Face
    # a -- b
    #
    a: struct_CD_Point
    b: struct_CD_Point
    c: struct_CD_Point
    d: struct_CD_Point
    e: struct_CD_Point
    f: struct_CD_Point
    g: struct_CD_Point
    h: struct_CD_Point
*/
struct struct_CD_Cube {
   // counter-clockwise
    // A cube looks like this
    //
    // h -- g
    // |    |    North struct_Face
    // e -- f
    //
    // d -- c
    // |    |    South struct_Face
    // a -- b
   struct_CD_Point a;
   struct_CD_Point b;
   struct_CD_Point c;
   struct_CD_Point d;
   struct_CD_Point e;
   struct_CD_Point f;
   struct_CD_Point g;
   struct_CD_Point h;
};

#define __version__  '0.1.0'
//__version__ = '0.1.0'

/*
# Return the 6 struct_Faces of the cube
def get_Faces(r: struct_CD_Cube):
    return [struct_Face(r.a, r.b, r.c, r.d), # S
            struct_Face(r.a, r.e, r.h, r.d), # W
            struct_Face(r.b, r.c, r.g, r.f), # E
            struct_Face(r.e, r.f, r.g, r.h), # N
            struct_Face(r.a, r.b, r.f, r.e), # front
            struct_Face(r.d, r.c, r.g, r.h)] # back
*/
// Return the 6 struct_Faces of the cube
//unsure what return type to give this
void get_Faces(struct struct_CD_Cube r,
   struct struct_Face*S,struct struct_Face*W,
   struct struct_Face*E,struct struct_Face*N,
   struct struct_Face*Front,struct struct_Face*Back) {
    //trying to return many values at once by refferences
    S->a=r.a; S->b=r.b; S->c=r.c; S->d=r.d;
    W->a=r.a; W->b=r.b; W->c=r.c; W->d=r.d;
    E->a=r.a; E->b=r.b; E->c=r.c; E->d=r.d;
    N->a=r.a; N->b=r.b; N->c=r.c; N->d=r.d;
    Front->a=r.a; Front->b=r.b; Front->c=r.c; Front->d=r.d;
    Back->a=r.a; Back->b=r.b; Back->c=r.c; Back->d=r.d;
}
/*
# Return the 12 struct_Edges of the cube
def get_Edges(r: struct_CD_Cube):
    return [struct_Edge(r.a, r.b),
            struct_Edge(r.b, r.c),
            struct_Edge(r.c, r.d),
            struct_Edge(r.d, r.a),
            struct_Edge(r.e, r.f),
            struct_Edge(r.f, r.g),
            struct_Edge(r.g, r.h),
            struct_Edge(r.h, r.e),
            struct_Edge(r.a, r.e),
            struct_Edge(r.d, r.h),
            struct_Edge(r.b, r.f),
            struct_Edge(r.c, r.g)]
*/
void get_Edges(struct struct_CD_Cube r,
struct struct_Edge*E1,struct struct_Edge*E2,
struct struct_Edge*E3,struct struct_Edge*E4,
struct struct_Edge*E5,struct struct_Edge*E6,
struct struct_Edge*E7,struct struct_Edge*E8,
struct struct_Edge*E9,struct struct_Edge*E10,
struct struct_Edge*E11,struct struct_Edge*E12){
            E1->a=r.a;E1->b=r.b;
            E2->a=r.a;E2->b=r.b;
            E3->a=r.a;E3->b=r.b;
            E4->a=r.a;E4->b=r.b;
            E5->a=r.a;E5->b=r.b;
            E6->a=r.a;E6->b=r.b;
            E7->a=r.a;E7->b=r.b;
            E8->a=r.a;E8->b=r.b;
            E9->a=r.a;E9->b=r.b;
            E10->a=r.a;E10->b=r.b;
            E11->a=r.a;E11->b=r.b;
            E12->a=r.a;E12->b=r.b;
}
/*
# subtract struct_CD_Point q from struct_CD_Point p
def point_minus(p: struct_CD_Point, q: struct_CD_Point):
    return struct_CD_Point(p.x - q.x, p.y - q.y, p.z - q.z)

*/
struct_CD_Point point_minus(struct_CD_Point p, struct_CD_Point q){
    struct_CD_Point P;
    P.x=p.x - q.x;
    P.y=p.y - q.y;
    P.z=p.z - q.z;
    return P;
}
/*

# calculate the dot product of two points
# https://en.wikipedia.org/wiki/Dot_product
def dot_product(p: struct_CD_Point, q: struct_CD_Point):
    return p.x * q.x + p.y * q.y + p.z * q.z
*/
float dot_product(struct struct_CD_Point p,struct struct_CD_Point q) {
    return p.x * q.x + p.y * q.y + p.z * q.z;
}
/*

# calculate the cross product of two points
# https://en.wikipedia.org/wiki/Cross_product
def cross_product(p: struct_CD_Point, q: struct_CD_Point):
    return struct_CD_Point(p.y*q.z - p.z*q.y, p.z*q.x - p.x*q.z, p.x*q.y - p.y*q.x)
*/
struct_CD_Point cross_product(struct struct_CD_Point p,struct struct_CD_Point q){
    struct_CD_Point P;
    P.x=p.y*q.z - p.z*q.y;
    P.y=p.z*q.x - p.x*q.z;
    P.z=p.x*q.y - p.y*q.x;
    return P;
}
/*

# return unnormalized perpendicular point to struct_Face
def normal(struct_Face: struct_Face):
    u = point_minus(struct_Face.b, struct_Face.a)
    v = point_minus(struct_Face.d, struct_Face.a)
    n = cross_product(u, v)
    return n

*/
struct_CD_Point normal(struct struct_Face F) {
    struct_CD_Point u;
    struct_CD_Point v;
    struct_CD_Point n;
    u = point_minus(F.b, F.a);
    v = point_minus(F.d, F.a);
    n = cross_product(u, v);
    return n;
}
/*
# return true if point is above or inside struct_Face, but not below
def above(p: struct_CD_Point, f: struct_Face):
    return dot_product(p, normal(f)) >= 0
*/
bool above(struct struct_CD_Point p,struct struct_Face f) {
    return dot_product(p, normal(f)) >= 0;
}
/*

def struct_Edge_struct_Face_intersect(e: struct_Edge, f: struct_Face):
    n = normal(f)
    t = dot_product(e.b, n)
    s = dot_product(point_minus(e.b, e.a), n)
    if s != 0 and t/s >= 0 and t/s <= 1:
        return True
    else:
        return False

*/
bool struct_Edge_struct_Face_intersect(struct_Edge e, struct_Face f) {
    struct_CD_Point n {};
    float t=0.0f;
    float s=0.0f;
    n = normal(f);
    t = dot_product(e.b, n);
    s = dot_product(point_minus(e.b, e.a), n);
    if(s != 0 && t/s >= 0 && t/s <= 1) {
        return true;
    } else {
        return false;
    }
}
/*

# r is contained in s
def cube_contains_cube(s: struct_CD_Cube, r: struct_CD_Cube):
    for struct_Face in get_Faces(s):
        if not above(r.a, struct_Face):
            return False
    return True

*/
bool cube_contains_cube(struct_CD_Cube s, struct_CD_Cube r){
          //for struct_Face in get_Faces(s):
         struct_Face S;
         struct_Face W;
         struct_Face E;
         struct_Face N;
         struct_Face Front;
         struct_Face Back;

          get_Faces(s,
         &S,&W,&E,&N,
         &Front,&Back);
         if(!above(r.a, S)){
             return false;
         }
         if(!above(r.a, S)){
             return false;
         }
         if(!above(r.a, W)){
             return false;
         }
         if(!above(r.a, E)){
             return false;
         }
         if(!above(r.a, N)){
             return false;
         }
         if(!above(r.a, Front)){
             return false;
         }
          if(!above(r.a, Back)){
             return false;
         }
         return true;
}
/*

# Return True if two cubes intersect
def intersect(r: struct_CD_Cube, s: struct_CD_Cube):
    struct_Edges = get_Edges(r)
    struct_Faces = get_Faces(s)
    for struct_Edge in struct_Edges:
        for struct_Face in struct_Faces:
            if struct_Edge_struct_Face_intersect(struct_Edge, struct_Face):
                return True
    return cube_contains_cube(r, s) or cube_contains_cube(s, r)
*/
#define case_intersect(struct_Edge,struct_Face) if(struct_Edge_struct_Face_intersect(struct_Edge,struct_Face)) return true;
bool intersect(struct_CD_Cube r, struct_CD_Cube s) {
         struct_Face S {};
         struct_Face W {};
         struct_Face E {};
         struct_Face N {};
         struct_Face Front {};
         struct_Face Back {};

         struct_Edge E1 {};
         struct_Edge E2 {};
         struct_Edge E3 {};
         struct_Edge E4 {};
         struct_Edge E5 {};
         struct_Edge E6 {};
         struct_Edge E7 {};
         struct_Edge E8 {};
         struct_Edge E9 {};
         struct_Edge E10 {};
         struct_Edge E11 {};
         struct_Edge E12 {};

         get_Edges(r,
         &E1,&E2,&E3,&E4,&E5,
         &E6,&E7,&E8,&E9,&E10,
         &E11,&E12);

          get_Faces(s,
         &S,&W,&E,&N,
         &Front,&Back);

    //struct_Edges = get_Edges(r)
    //struct_Faces = get_Faces(s)
    //for struct_Edge in struct_Edges:
    //    for struct_Face in struct_Faces:
            //if(struct_Edge_struct_Face_intersect(E1, S)) return true;
    case_intersect(E1, S);
    case_intersect(E2, S);
    case_intersect(E3, S);
    case_intersect(E4, S);
    case_intersect(E5, S);
    case_intersect(E6, S);
    case_intersect(E7, S);
    case_intersect(E8, S);
    case_intersect(E9, S);
    case_intersect(E10, S);
    case_intersect(E11, S);
    case_intersect(E12, S);

    case_intersect(E1, W);
    case_intersect(E2, W);
    case_intersect(E3, W);
    case_intersect(E4, W);
    case_intersect(E5, W);
    case_intersect(E6, W);
    case_intersect(E7, W);
    case_intersect(E8, W);
    case_intersect(E9, W);
    case_intersect(E10, W);
    case_intersect(E11, W);
    case_intersect(E12, W);

    case_intersect(E1, E);
    case_intersect(E2, E);
    case_intersect(E3, E);
    case_intersect(E4, E);
    case_intersect(E5, E);
    case_intersect(E6, E);
    case_intersect(E7, E);
    case_intersect(E8, E);
    case_intersect(E9, E);
    case_intersect(E10, E);
    case_intersect(E11, E);
    case_intersect(E12, E);

    case_intersect(E1, N);
    case_intersect(E2, N);
    case_intersect(E3, N);
    case_intersect(E4, N);
    case_intersect(E5, N);
    case_intersect(E6, N);
    case_intersect(E7, N);
    case_intersect(E8, N);
    case_intersect(E9, N);
    case_intersect(E10, N);
    case_intersect(E11, N);
    case_intersect(E12, N);

    case_intersect(E1, Front);
    case_intersect(E2, Front);
    case_intersect(E3, Front);
    case_intersect(E4, Front);
    case_intersect(E5, Front);
    case_intersect(E6, Front);
    case_intersect(E7, Front);
    case_intersect(E8, Front);
    case_intersect(E9, Front);
    case_intersect(E10, Front);
    case_intersect(E11, Front);
    case_intersect(E12, Front);

    case_intersect(E1, Back);
    case_intersect(E2, Back);
    case_intersect(E3, Back);
    case_intersect(E4, Back);
    case_intersect(E5, Back);
    case_intersect(E6, Back);
    case_intersect(E7, Back);
    case_intersect(E8, Back);
    case_intersect(E9, Back);
    case_intersect(E10, Back);
    case_intersect(E11, Back);
    case_intersect(E12, Back);

    return cube_contains_cube(r, s) || cube_contains_cube(s, r);
}
/*

def start():
    r = struct_CD_Cube(struct_CD_Point(0, 0, 0), struct_CD_Point(1, 0, 0), struct_CD_Point(1, 1, 0), struct_CD_Point(0, 1, 0),
             struct_CD_Point(0, 0, 1), struct_CD_Point(1, 0, 1), struct_CD_Point(1, 1, 1), struct_CD_Point(0, 1, 1))
    s = struct_CD_Cube(struct_CD_Point(0, 0, 0), struct_CD_Point(2, 0, 0), struct_CD_Point(2, 2, 0), struct_CD_Point(0, 2, 0),
             struct_CD_Point(0, 0, 2), struct_CD_Point(2, 0, 2), struct_CD_Point(2, 2, 2), struct_CD_Point(0, 2, 2))
    print(intersect(r,s))

*/