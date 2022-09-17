/* Code generated from eC source file: form1.ec */
#if defined(_WIN32)
#define __runtimePlatform 1
#elif defined(__APPLE__)
#define __runtimePlatform 3
#else
#define __runtimePlatform 2
#endif
#if defined(__GNUC__) || defined(__clang__)
#if defined(__clang__) && defined(__WIN32__)
#define int64 long long
#define uint64 unsigned long long
#if defined(_WIN64)
#define ssize_t long long
#else
#define ssize_t long
#endif
#else
typedef long long int64;
typedef unsigned long long uint64;
#endif
#ifndef _WIN32
#define __declspec(x)
#endif
#elif defined(__TINYC__)
#include <stdarg.h>
#define __builtin_va_list va_list
#define __builtin_va_start va_start
#define __builtin_va_end va_end
#ifdef _WIN32
#define strcasecmp stricmp
#define strncasecmp strnicmp
#define __declspec(x) __attribute__((x))
#else
#define __declspec(x)
#endif
typedef long long int64;
typedef unsigned long long uint64;
#else
typedef __int64 int64;
typedef unsigned __int64 uint64;
#endif
#ifdef __BIG_ENDIAN__
#define __ENDIAN_PAD(x) (8 - (x))
#else
#define __ENDIAN_PAD(x) 0
#endif
#if defined(_WIN32)
#   if defined(__clang__) && defined(__WIN32__)
#      define ecere_stdcall __stdcall
#      define ecere_gcc_struct
#   elif defined(__GNUC__) || defined(__TINYC__)
#      define ecere_stdcall __attribute__((__stdcall__))
#      define ecere_gcc_struct __attribute__((gcc_struct))
#   else
#      define ecere_stdcall __stdcall
#      define ecere_gcc_struct
#   endif
#else
#   define ecere_stdcall
#   define ecere_gcc_struct
#endif

#line 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __u_char;

#line 55 "obj/debug.linux/form1.c"


#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __u_short;

#line 61 "obj/debug.linux/form1.c"


#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int;

#line 67 "obj/debug.linux/form1.c"


#line 34 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_long;

#line 73 "obj/debug.linux/form1.c"


#line 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed char __int8_t;

#line 79 "obj/debug.linux/form1.c"


#line 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __uint8_t;

#line 85 "obj/debug.linux/form1.c"


#line 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed short int __int16_t;

#line 91 "obj/debug.linux/form1.c"


#line 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __uint16_t;

#line 97 "obj/debug.linux/form1.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed int __int32_t;

#line 103 "obj/debug.linux/form1.c"


#line 42 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uint32_t;

#line 109 "obj/debug.linux/form1.c"


#line 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed long int __int64_t;

#line 115 "obj/debug.linux/form1.c"


#line 45 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uint64_t;

#line 121 "obj/debug.linux/form1.c"


#line 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int8_t __int_least8_t;

#line 127 "obj/debug.linux/form1.c"


#line 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint8_t __uint_least8_t;

#line 133 "obj/debug.linux/form1.c"


#line 54 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int16_t __int_least16_t;

#line 139 "obj/debug.linux/form1.c"


#line 55 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint16_t __uint_least16_t;

#line 145 "obj/debug.linux/form1.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int32_t __int_least32_t;

#line 151 "obj/debug.linux/form1.c"


#line 57 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint32_t __uint_least32_t;

#line 157 "obj/debug.linux/form1.c"


#line 58 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int64_t __int_least64_t;

#line 163 "obj/debug.linux/form1.c"


#line 59 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint64_t __uint_least64_t;

#line 169 "obj/debug.linux/form1.c"


#line 63 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __quad_t;

#line 175 "obj/debug.linux/form1.c"


#line 64 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_quad_t;

#line 181 "obj/debug.linux/form1.c"


#line 72 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intmax_t;

#line 187 "obj/debug.linux/form1.c"


#line 73 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uintmax_t;

#line 193 "obj/debug.linux/form1.c"


#line 145 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __dev_t;

#line 199 "obj/debug.linux/form1.c"


#line 146 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t;

#line 205 "obj/debug.linux/form1.c"


#line 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t;

#line 211 "obj/debug.linux/form1.c"


#line 148 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino_t;

#line 217 "obj/debug.linux/form1.c"


#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino64_t;

#line 223 "obj/debug.linux/form1.c"


#line 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t;

#line 229 "obj/debug.linux/form1.c"


#line 151 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __nlink_t;

#line 235 "obj/debug.linux/form1.c"


#line 152 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off_t;

#line 241 "obj/debug.linux/form1.c"


#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off64_t;

#line 247 "obj/debug.linux/form1.c"


#line 154 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;

#line 253 "obj/debug.linux/form1.c"


#line 155 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef struct
{

#line 155 "/usr/include/x86_64-linux-gnu/bits/types.h"
int __val[2];

#line 263 "obj/debug.linux/form1.c"
} ecere_gcc_struct __fsid_t;

#line 266 "obj/debug.linux/form1.c"


#line 156 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __clock_t;

#line 272 "obj/debug.linux/form1.c"


#line 157 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim_t;

#line 278 "obj/debug.linux/form1.c"


#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim64_t;

#line 284 "obj/debug.linux/form1.c"


#line 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __id_t;

#line 290 "obj/debug.linux/form1.c"


#line 160 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __time_t;

#line 296 "obj/debug.linux/form1.c"


#line 161 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __useconds_t;

#line 302 "obj/debug.linux/form1.c"


#line 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __suseconds_t;

#line 308 "obj/debug.linux/form1.c"


#line 164 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __daddr_t;

#line 314 "obj/debug.linux/form1.c"


#line 165 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __key_t;

#line 320 "obj/debug.linux/form1.c"


#line 168 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __clockid_t;

#line 326 "obj/debug.linux/form1.c"


#line 171 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef void * __timer_t;

#line 332 "obj/debug.linux/form1.c"


#line 174 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blksize_t;

#line 338 "obj/debug.linux/form1.c"


#line 179 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt_t;

#line 344 "obj/debug.linux/form1.c"


#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt64_t;

#line 350 "obj/debug.linux/form1.c"


#line 183 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt_t;

#line 356 "obj/debug.linux/form1.c"


#line 184 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt64_t;

#line 362 "obj/debug.linux/form1.c"


#line 187 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt_t;

#line 368 "obj/debug.linux/form1.c"


#line 188 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt64_t;

#line 374 "obj/debug.linux/form1.c"


#line 191 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __fsword_t;

#line 380 "obj/debug.linux/form1.c"


#line 193 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __ssize_t;

#line 386 "obj/debug.linux/form1.c"


#line 196 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __syscall_slong_t;

#line 392 "obj/debug.linux/form1.c"


#line 198 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __syscall_ulong_t;

#line 398 "obj/debug.linux/form1.c"


#line 202 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __off64_t __loff_t;

#line 404 "obj/debug.linux/form1.c"


#line 203 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef char * __caddr_t;

#line 410 "obj/debug.linux/form1.c"


#line 206 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intptr_t;

#line 416 "obj/debug.linux/form1.c"


#line 209 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t;

#line 422 "obj/debug.linux/form1.c"


#line 214 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __sig_atomic_t;

#line 428 "obj/debug.linux/form1.c"


#line 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int8_t int8_t;

#line 434 "obj/debug.linux/form1.c"


#line 25 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int16_t int16_t;

#line 440 "obj/debug.linux/form1.c"


#line 26 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int32_t int32_t;

#line 446 "obj/debug.linux/form1.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int64_t int64_t;

#line 452 "obj/debug.linux/form1.c"


#line 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint8_t uint8_t;

#line 458 "obj/debug.linux/form1.c"


#line 25 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint16_t uint16_t;

#line 464 "obj/debug.linux/form1.c"


#line 26 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint32_t uint32_t;

#line 470 "obj/debug.linux/form1.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint64_t uint64_t;

#line 476 "obj/debug.linux/form1.c"


#line 43 "/usr/include/stdint.h"
typedef __int_least8_t int_least8_t;

#line 482 "obj/debug.linux/form1.c"


#line 44 "/usr/include/stdint.h"
typedef __int_least16_t int_least16_t;

#line 488 "obj/debug.linux/form1.c"


#line 45 "/usr/include/stdint.h"
typedef __int_least32_t int_least32_t;

#line 494 "obj/debug.linux/form1.c"


#line 46 "/usr/include/stdint.h"
typedef __int_least64_t int_least64_t;

#line 500 "obj/debug.linux/form1.c"


#line 49 "/usr/include/stdint.h"
typedef __uint_least8_t uint_least8_t;

#line 506 "obj/debug.linux/form1.c"


#line 50 "/usr/include/stdint.h"
typedef __uint_least16_t uint_least16_t;

#line 512 "obj/debug.linux/form1.c"


#line 51 "/usr/include/stdint.h"
typedef __uint_least32_t uint_least32_t;

#line 518 "obj/debug.linux/form1.c"


#line 52 "/usr/include/stdint.h"
typedef __uint_least64_t uint_least64_t;

#line 524 "obj/debug.linux/form1.c"


#line 58 "/usr/include/stdint.h"
typedef signed char int_fast8_t;

#line 530 "obj/debug.linux/form1.c"


#line 60 "/usr/include/stdint.h"
typedef long int int_fast16_t;

#line 536 "obj/debug.linux/form1.c"


#line 61 "/usr/include/stdint.h"
typedef long int int_fast32_t;

#line 542 "obj/debug.linux/form1.c"


#line 62 "/usr/include/stdint.h"
typedef long int int_fast64_t;

#line 548 "obj/debug.linux/form1.c"


#line 71 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;

#line 554 "obj/debug.linux/form1.c"


#line 73 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t;

#line 560 "obj/debug.linux/form1.c"


#line 74 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t;

#line 566 "obj/debug.linux/form1.c"


#line 75 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t;

#line 572 "obj/debug.linux/form1.c"


#line 87 "/usr/include/stdint.h"
typedef long int intptr_t;

#line 578 "obj/debug.linux/form1.c"


#line 90 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t;

#line 584 "obj/debug.linux/form1.c"


#line 101 "/usr/include/stdint.h"
typedef __intmax_t intmax_t;

#line 590 "obj/debug.linux/form1.c"


#line 102 "/usr/include/stdint.h"
typedef __uintmax_t uintmax_t;

#line 596 "obj/debug.linux/form1.c"


#line 33 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_char u_char;

#line 602 "obj/debug.linux/form1.c"


#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_short u_short;

#line 608 "obj/debug.linux/form1.c"


#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_int u_int;

#line 614 "obj/debug.linux/form1.c"


#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_long u_long;

#line 620 "obj/debug.linux/form1.c"


#line 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __quad_t quad_t;

#line 626 "obj/debug.linux/form1.c"


#line 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_quad_t u_quad_t;

#line 632 "obj/debug.linux/form1.c"


#line 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsid_t fsid_t;

#line 638 "obj/debug.linux/form1.c"


#line 42 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __loff_t loff_t;

#line 644 "obj/debug.linux/form1.c"


#line 47 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ino_t ino_t;

#line 650 "obj/debug.linux/form1.c"


#line 59 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __dev_t dev_t;

#line 656 "obj/debug.linux/form1.c"


#line 64 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __gid_t gid_t;

#line 662 "obj/debug.linux/form1.c"


#line 69 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __mode_t mode_t;

#line 668 "obj/debug.linux/form1.c"


#line 74 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __nlink_t nlink_t;

#line 674 "obj/debug.linux/form1.c"


#line 79 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uid_t uid_t;

#line 680 "obj/debug.linux/form1.c"


#line 85 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __off_t off_t;

#line 686 "obj/debug.linux/form1.c"


#line 97 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;

#line 692 "obj/debug.linux/form1.c"


#line 103 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __id_t id_t;

#line 698 "obj/debug.linux/form1.c"


#line 108 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ssize_t ssize_t;

#line 704 "obj/debug.linux/form1.c"


#line 114 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __daddr_t daddr_t;

#line 710 "obj/debug.linux/form1.c"


#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __caddr_t caddr_t;

#line 716 "obj/debug.linux/form1.c"


#line 121 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __key_t key_t;

#line 722 "obj/debug.linux/form1.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h"
typedef __clock_t clock_t;

#line 728 "obj/debug.linux/form1.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h"
typedef __clockid_t clockid_t;

#line 734 "obj/debug.linux/form1.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h"
typedef __time_t time_t;

#line 740 "obj/debug.linux/form1.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h"
typedef __timer_t timer_t;

#line 746 "obj/debug.linux/form1.c"


#line 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
typedef long unsigned int size_t;

#line 752 "obj/debug.linux/form1.c"


#line 148 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned long int ulong;

#line 758 "obj/debug.linux/form1.c"


#line 149 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned short int ushort;

#line 764 "obj/debug.linux/form1.c"


#line 150 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint;

#line 770 "obj/debug.linux/form1.c"


#line 158 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint8_t u_int8_t;

#line 776 "obj/debug.linux/form1.c"


#line 159 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint16_t u_int16_t;

#line 782 "obj/debug.linux/form1.c"


#line 160 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint32_t u_int32_t;

#line 788 "obj/debug.linux/form1.c"


#line 161 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint64_t u_int64_t;

#line 794 "obj/debug.linux/form1.c"


#line 164 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int register_t __attribute__((__mode__ (__word__)));

#line 800 "obj/debug.linux/form1.c"

static __inline __uint16_t __bswap_16(__uint16_t __bsx)

#line 35 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 37 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap16(__bsx);
#line 809 "obj/debug.linux/form1.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 814 "obj/debug.linux/form1.c"


static __inline __uint32_t __bswap_32(__uint32_t __bsx)

#line 50 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 52 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap32(__bsx);
#line 824 "obj/debug.linux/form1.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 829 "obj/debug.linux/form1.c"


 static __inline __uint64_t __bswap_64(__uint64_t __bsx)

#line 71 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 73 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap64(__bsx);
#line 839 "obj/debug.linux/form1.c"


#line 77 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 844 "obj/debug.linux/form1.c"


static __inline __uint16_t __uint16_identity(__uint16_t __x)

#line 34 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 35 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 854 "obj/debug.linux/form1.c"


#line 36 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 859 "obj/debug.linux/form1.c"


static __inline __uint32_t __uint32_identity(__uint32_t __x)

#line 40 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 41 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 869 "obj/debug.linux/form1.c"


#line 42 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 874 "obj/debug.linux/form1.c"


static __inline __uint64_t __uint64_identity(__uint64_t __x)

#line 46 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 884 "obj/debug.linux/form1.c"


#line 48 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 889 "obj/debug.linux/form1.c"



#line 5 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
typedef struct
{

#line 7 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
unsigned long int __val[16];

#line 900 "obj/debug.linux/form1.c"
} ecere_gcc_struct __sigset_t;

#line 903 "obj/debug.linux/form1.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h"
typedef __sigset_t sigset_t;

#line 909 "obj/debug.linux/form1.c"


#line 8 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
struct timeval
{

#line 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
__time_t tv_sec;

#line 919 "obj/debug.linux/form1.c"

#line 11 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
__suseconds_t tv_usec;

#line 924 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 927 "obj/debug.linux/form1.c"


#line 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
struct timespec
{

#line 12 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
__time_t tv_sec;

#line 937 "obj/debug.linux/form1.c"

#line 16 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
__syscall_slong_t tv_nsec;

#line 942 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 945 "obj/debug.linux/form1.c"


#line 43 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef __suseconds_t suseconds_t;

#line 951 "obj/debug.linux/form1.c"


#line 49 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask;

#line 957 "obj/debug.linux/form1.c"


#line 59 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef struct
{

#line 67 "/usr/include/x86_64-linux-gnu/sys/select.h"
__fd_mask __fds_bits[16];

#line 967 "obj/debug.linux/form1.c"
} ecere_gcc_struct fd_set;

#line 970 "obj/debug.linux/form1.c"


#line 77 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef __fd_mask fd_mask;

#line 976 "obj/debug.linux/form1.c"


#line 101 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval * __restrict __timeout);

#line 982 "obj/debug.linux/form1.c"


#line 113 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec * __restrict __timeout, const __sigset_t * __restrict __sigmask);

#line 988 "obj/debug.linux/form1.c"


#line 185 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __blksize_t blksize_t;

#line 994 "obj/debug.linux/form1.c"


#line 192 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __blkcnt_t blkcnt_t;

#line 1000 "obj/debug.linux/form1.c"


#line 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t;

#line 1006 "obj/debug.linux/form1.c"


#line 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t;

#line 1012 "obj/debug.linux/form1.c"


#line 49 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
typedef struct __pthread_internal_list
{

#line 51 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_list * __prev;

#line 1022 "obj/debug.linux/form1.c"

#line 52 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_list * __next;

#line 1027 "obj/debug.linux/form1.c"
} ecere_gcc_struct __pthread_list_t;

#line 1030 "obj/debug.linux/form1.c"


#line 55 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
typedef struct __pthread_internal_slist
{

#line 57 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_slist * __next;

#line 1040 "obj/debug.linux/form1.c"
} ecere_gcc_struct __pthread_slist_t;

#line 1043 "obj/debug.linux/form1.c"


#line 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
struct __pthread_mutex_s
{

#line 24 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __lock;

#line 1053 "obj/debug.linux/form1.c"

#line 25 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
unsigned int __count;

#line 1058 "obj/debug.linux/form1.c"

#line 26 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __owner;

#line 1063 "obj/debug.linux/form1.c"

#line 28 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
unsigned int __nusers;

#line 1068 "obj/debug.linux/form1.c"

#line 32 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __kind;

#line 1073 "obj/debug.linux/form1.c"

#line 34 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
short __spins;

#line 1078 "obj/debug.linux/form1.c"

#line 35 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
short __elision;

#line 1083 "obj/debug.linux/form1.c"

#line 36 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
__pthread_list_t __list;

#line 1088 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1091 "obj/debug.linux/form1.c"


#line 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
struct __pthread_rwlock_arch_t
{

#line 25 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __readers;

#line 1101 "obj/debug.linux/form1.c"

#line 26 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __writers;

#line 1106 "obj/debug.linux/form1.c"

#line 27 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __wrphase_futex;

#line 1111 "obj/debug.linux/form1.c"

#line 28 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __writers_futex;

#line 1116 "obj/debug.linux/form1.c"

#line 29 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __pad3;

#line 1121 "obj/debug.linux/form1.c"

#line 30 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __pad4;

#line 1126 "obj/debug.linux/form1.c"

#line 32 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
int __cur_writer;

#line 1131 "obj/debug.linux/form1.c"

#line 33 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
int __shared;

#line 1136 "obj/debug.linux/form1.c"

#line 34 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
signed char __rwelision;

#line 1141 "obj/debug.linux/form1.c"

#line 39 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned char __pad1[7];

#line 1146 "obj/debug.linux/form1.c"

#line 42 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned long int __pad2;

#line 1151 "obj/debug.linux/form1.c"

#line 45 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __flags;

#line 1156 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1159 "obj/debug.linux/form1.c"


#line 92 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_cond_s
{

#line 94 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 union
{

#line 96 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 unsigned long long int __wseq;

#line 1173 "obj/debug.linux/form1.c"

#line 97 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct
{

#line 99 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __low;

#line 1182 "obj/debug.linux/form1.c"

#line 100 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __high;

#line 1187 "obj/debug.linux/form1.c"
} ecere_gcc_struct __wseq32;

#line 1190 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1193 "obj/debug.linux/form1.c"

#line 103 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 union
{

#line 105 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 unsigned long long int __g1_start;

#line 1202 "obj/debug.linux/form1.c"

#line 106 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct
{

#line 108 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __low;

#line 1211 "obj/debug.linux/form1.c"

#line 109 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __high;

#line 1216 "obj/debug.linux/form1.c"
} ecere_gcc_struct __g1_start32;

#line 1219 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1222 "obj/debug.linux/form1.c"

#line 112 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_refs[2];

#line 1227 "obj/debug.linux/form1.c"

#line 113 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_size[2];

#line 1232 "obj/debug.linux/form1.c"

#line 114 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g1_orig_size;

#line 1237 "obj/debug.linux/form1.c"

#line 115 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __wrefs;

#line 1242 "obj/debug.linux/form1.c"

#line 116 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_signals[2];

#line 1247 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1250 "obj/debug.linux/form1.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;

#line 1256 "obj/debug.linux/form1.c"


#line 32 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 34 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1266 "obj/debug.linux/form1.c"

#line 35 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1271 "obj/debug.linux/form1.c"
} ecere_gcc_struct pthread_mutexattr_t;

#line 1274 "obj/debug.linux/form1.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 43 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1284 "obj/debug.linux/form1.c"

#line 44 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1289 "obj/debug.linux/form1.c"
} ecere_gcc_struct pthread_condattr_t;

#line 1292 "obj/debug.linux/form1.c"


#line 49 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;

#line 1298 "obj/debug.linux/form1.c"


#line 53 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef int pthread_once_t;

#line 1304 "obj/debug.linux/form1.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t
{

#line 58 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[56];

#line 1314 "obj/debug.linux/form1.c"

#line 59 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1319 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1322 "obj/debug.linux/form1.c"


#line 62 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;

#line 1328 "obj/debug.linux/form1.c"


#line 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_mutex_s __data;

#line 1338 "obj/debug.linux/form1.c"

#line 70 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[40];

#line 1343 "obj/debug.linux/form1.c"

#line 71 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1348 "obj/debug.linux/form1.c"
} ecere_gcc_struct pthread_mutex_t;

#line 1351 "obj/debug.linux/form1.c"


#line 75 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_cond_s __data;

#line 1361 "obj/debug.linux/form1.c"

#line 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[48];

#line 1366 "obj/debug.linux/form1.c"

#line 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
 long long int __align;

#line 1371 "obj/debug.linux/form1.c"
} ecere_gcc_struct pthread_cond_t;

#line 1374 "obj/debug.linux/form1.c"


#line 86 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 88 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_rwlock_arch_t __data;

#line 1384 "obj/debug.linux/form1.c"

#line 89 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[56];

#line 1389 "obj/debug.linux/form1.c"

#line 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1394 "obj/debug.linux/form1.c"
} ecere_gcc_struct pthread_rwlock_t;

#line 1397 "obj/debug.linux/form1.c"


#line 93 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 95 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[8];

#line 1407 "obj/debug.linux/form1.c"

#line 96 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1412 "obj/debug.linux/form1.c"
} ecere_gcc_struct pthread_rwlockattr_t;

#line 1415 "obj/debug.linux/form1.c"


#line 103 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t;

#line 1421 "obj/debug.linux/form1.c"


#line 108 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[32];

#line 1431 "obj/debug.linux/form1.c"

#line 111 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1436 "obj/debug.linux/form1.c"
} ecere_gcc_struct pthread_barrier_t;

#line 1439 "obj/debug.linux/form1.c"


#line 114 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 116 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1449 "obj/debug.linux/form1.c"

#line 117 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1454 "obj/debug.linux/form1.c"
} ecere_gcc_struct pthread_barrierattr_t;

#line 1457 "obj/debug.linux/form1.c"


#line 40 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;

#line 1463 "obj/debug.linux/form1.c"


#line 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
typedef struct
{

#line 15 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
int __count;

#line 1473 "obj/debug.linux/form1.c"

#line 16 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
union
{

#line 18 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
unsigned int __wch;

#line 1482 "obj/debug.linux/form1.c"

#line 19 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h"
char __wchb[4];

#line 1487 "obj/debug.linux/form1.c"
} ecere_gcc_struct __value;

#line 1490 "obj/debug.linux/form1.c"
} ecere_gcc_struct __mbstate_t;

#line 1493 "obj/debug.linux/form1.c"


#line 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h"
typedef struct _G_fpos_t
{

#line 12 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h"
__off_t __pos;

#line 1503 "obj/debug.linux/form1.c"

#line 13 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h"
__mbstate_t __state;

#line 1508 "obj/debug.linux/form1.c"
} ecere_gcc_struct __fpos_t;

#line 1511 "obj/debug.linux/form1.c"


#line 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h"
typedef struct _G_fpos64_t
{

#line 12 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h"
__off64_t __pos;

#line 1521 "obj/debug.linux/form1.c"

#line 13 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h"
__mbstate_t __state;

#line 1526 "obj/debug.linux/form1.c"
} ecere_gcc_struct __fpos64_t;

#line 1529 "obj/debug.linux/form1.c"


#line 4 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
struct _IO_FILE;

#line 1535 "obj/debug.linux/form1.c"


#line 5 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
typedef struct _IO_FILE __FILE;

#line 1541 "obj/debug.linux/form1.c"


#line 4 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
struct _IO_FILE;

#line 1547 "obj/debug.linux/form1.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
typedef struct _IO_FILE FILE;

#line 1553 "obj/debug.linux/form1.c"


#line 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_FILE;

#line 1559 "obj/debug.linux/form1.c"


#line 36 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_marker;

#line 1565 "obj/debug.linux/form1.c"


#line 37 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_codecvt;

#line 1571 "obj/debug.linux/form1.c"


#line 38 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_wide_data;

#line 1577 "obj/debug.linux/form1.c"


#line 43 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
typedef void _IO_lock_t;

#line 1583 "obj/debug.linux/form1.c"


#line 49 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_FILE
{

#line 51 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
int _flags;

#line 1593 "obj/debug.linux/form1.c"

#line 54 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_read_ptr;

#line 1598 "obj/debug.linux/form1.c"

#line 55 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_read_end;

#line 1603 "obj/debug.linux/form1.c"

#line 56 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_read_base;

#line 1608 "obj/debug.linux/form1.c"

#line 57 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_write_base;

#line 1613 "obj/debug.linux/form1.c"

#line 58 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_write_ptr;

#line 1618 "obj/debug.linux/form1.c"

#line 59 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_write_end;

#line 1623 "obj/debug.linux/form1.c"

#line 60 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_buf_base;

#line 1628 "obj/debug.linux/form1.c"

#line 61 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_buf_end;

#line 1633 "obj/debug.linux/form1.c"

#line 64 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_save_base;

#line 1638 "obj/debug.linux/form1.c"

#line 65 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_backup_base;

#line 1643 "obj/debug.linux/form1.c"

#line 66 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char * _IO_save_end;

#line 1648 "obj/debug.linux/form1.c"

#line 68 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_marker * _markers;

#line 1653 "obj/debug.linux/form1.c"

#line 70 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_FILE * _chain;

#line 1658 "obj/debug.linux/form1.c"

#line 72 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
int _fileno;

#line 1663 "obj/debug.linux/form1.c"

#line 73 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
int _flags2;

#line 1668 "obj/debug.linux/form1.c"

#line 74 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
__off_t _old_offset;

#line 1673 "obj/debug.linux/form1.c"

#line 77 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
unsigned short _cur_column;

#line 1678 "obj/debug.linux/form1.c"

#line 78 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
signed char _vtable_offset;

#line 1683 "obj/debug.linux/form1.c"

#line 79 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char _shortbuf[1];

#line 1688 "obj/debug.linux/form1.c"

#line 81 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
_IO_lock_t * _lock;

#line 1693 "obj/debug.linux/form1.c"

#line 89 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
__off64_t _offset;

#line 1698 "obj/debug.linux/form1.c"

#line 91 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_codecvt * _codecvt;

#line 1703 "obj/debug.linux/form1.c"

#line 92 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_wide_data * _wide_data;

#line 1708 "obj/debug.linux/form1.c"

#line 93 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_FILE * _freeres_list;

#line 1713 "obj/debug.linux/form1.c"

#line 94 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
void * _freeres_buf;

#line 1718 "obj/debug.linux/form1.c"

#line 95 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
size_t __pad5;

#line 1723 "obj/debug.linux/form1.c"

#line 96 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
int _mode;

#line 1728 "obj/debug.linux/form1.c"

#line 98 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
char _unused2[20];

#line 1733 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1736 "obj/debug.linux/form1.c"


#line 52 "/usr/include/stdio.h"
typedef __gnuc_va_list va_list;

#line 1742 "obj/debug.linux/form1.c"


#line 84 "/usr/include/stdio.h"
typedef __fpos_t fpos_t;

#line 1748 "obj/debug.linux/form1.c"


#line 137 "/usr/include/stdio.h"
extern FILE * stdin;

#line 1754 "obj/debug.linux/form1.c"


#line 138 "/usr/include/stdio.h"
extern FILE * stdout;

#line 1760 "obj/debug.linux/form1.c"


#line 139 "/usr/include/stdio.h"
extern FILE * stderr;

#line 1766 "obj/debug.linux/form1.c"


#line 146 "/usr/include/stdio.h"
extern int remove(const char * __filename) __attribute__((__nothrow__, __leaf__));

#line 1772 "obj/debug.linux/form1.c"


#line 148 "/usr/include/stdio.h"
extern int rename(const char * __old, const char * __new) __attribute__((__nothrow__, __leaf__));

#line 1778 "obj/debug.linux/form1.c"


#line 152 "/usr/include/stdio.h"
extern int renameat(int __oldfd, const char * __old, int __newfd, const char * __new) __attribute__((__nothrow__, __leaf__));

#line 1784 "obj/debug.linux/form1.c"


#line 173 "/usr/include/stdio.h"
extern FILE * tmpfile(void);

#line 1790 "obj/debug.linux/form1.c"


#line 187 "/usr/include/stdio.h"
extern char * tmpnam(char * __s) __attribute__((__nothrow__, __leaf__));

#line 1796 "obj/debug.linux/form1.c"


#line 192 "/usr/include/stdio.h"
extern char * tmpnam_r(char * __s) __attribute__((__nothrow__, __leaf__));

#line 1802 "obj/debug.linux/form1.c"


#line 204 "/usr/include/stdio.h"
extern char * tempnam(const char * __dir, const char * __pfx) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__));

#line 1808 "obj/debug.linux/form1.c"


#line 213 "/usr/include/stdio.h"
extern int fclose(FILE * __stream);

#line 1814 "obj/debug.linux/form1.c"


#line 218 "/usr/include/stdio.h"
extern int fflush(FILE * __stream);

#line 1820 "obj/debug.linux/form1.c"


#line 227 "/usr/include/stdio.h"
extern int fflush_unlocked(FILE * __stream);

#line 1826 "obj/debug.linux/form1.c"


#line 246 "/usr/include/stdio.h"
extern FILE * fopen(const char * __restrict __filename, const char * __restrict __modes);

#line 1832 "obj/debug.linux/form1.c"


#line 252 "/usr/include/stdio.h"
extern FILE * freopen(const char * __restrict __filename, const char * __restrict __modes, FILE * __restrict __stream);

#line 1838 "obj/debug.linux/form1.c"


#line 279 "/usr/include/stdio.h"
extern FILE * fdopen(int __fd, const char * __modes) __attribute__((__nothrow__, __leaf__));

#line 1844 "obj/debug.linux/form1.c"


#line 292 "/usr/include/stdio.h"
extern FILE * fmemopen(void * __s, size_t __len, const char * __modes) __attribute__((__nothrow__, __leaf__));

#line 1850 "obj/debug.linux/form1.c"


#line 298 "/usr/include/stdio.h"
extern FILE * open_memstream(char ** __bufloc, size_t * __sizeloc) __attribute__((__nothrow__, __leaf__));

#line 1856 "obj/debug.linux/form1.c"


#line 304 "/usr/include/stdio.h"
extern void setbuf(FILE * __restrict __stream, char * __restrict __buf) __attribute__((__nothrow__, __leaf__));

#line 1862 "obj/debug.linux/form1.c"


#line 308 "/usr/include/stdio.h"
extern int setvbuf(FILE * __restrict __stream, char * __restrict __buf, int __modes, size_t __n) __attribute__((__nothrow__, __leaf__));

#line 1868 "obj/debug.linux/form1.c"


#line 314 "/usr/include/stdio.h"
extern void setbuffer(FILE * __restrict __stream, char * __restrict __buf, size_t __size) __attribute__((__nothrow__, __leaf__));

#line 1874 "obj/debug.linux/form1.c"


#line 318 "/usr/include/stdio.h"
extern void setlinebuf(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 1880 "obj/debug.linux/form1.c"


#line 326 "/usr/include/stdio.h"
extern int fprintf(FILE * __restrict __stream, const char * __restrict __format, ...);

#line 1886 "obj/debug.linux/form1.c"


#line 332 "/usr/include/stdio.h"
extern int printf(const char * __restrict __format, ...);

#line 1892 "obj/debug.linux/form1.c"


#line 334 "/usr/include/stdio.h"
extern int sprintf(char * __restrict __s, const char * __restrict __format, ...) __attribute__((__nothrow__));

#line 1898 "obj/debug.linux/form1.c"


#line 341 "/usr/include/stdio.h"
extern int vfprintf(FILE * __restrict __s, const char * __restrict __format, __gnuc_va_list __arg);

#line 1904 "obj/debug.linux/form1.c"


#line 347 "/usr/include/stdio.h"
extern int vprintf(const char * __restrict __format, __gnuc_va_list __arg);

#line 1910 "obj/debug.linux/form1.c"


#line 349 "/usr/include/stdio.h"
extern int vsprintf(char * __restrict __s, const char * __restrict __format, __gnuc_va_list __arg) __attribute__((__nothrow__));

#line 1916 "obj/debug.linux/form1.c"


#line 354 "/usr/include/stdio.h"
extern int snprintf(char * __restrict __s, size_t __maxlen, const char * __restrict __format, ...) __attribute__((__nothrow__)) __attribute__((__format__ (__printf__, 3, 4)));

#line 1922 "obj/debug.linux/form1.c"


#line 358 "/usr/include/stdio.h"
extern int vsnprintf(char * __restrict __s, size_t __maxlen, const char * __restrict __format, __gnuc_va_list __arg) __attribute__((__nothrow__)) __attribute__((__format__ (__printf__, 3, 0)));

#line 1928 "obj/debug.linux/form1.c"


#line 379 "/usr/include/stdio.h"
extern int vdprintf(int __fd, const char * __restrict __fmt, __gnuc_va_list __arg) __attribute__((__format__ (__printf__, 2, 0)));

#line 1934 "obj/debug.linux/form1.c"


#line 382 "/usr/include/stdio.h"
extern int dprintf(int __fd, const char * __restrict __fmt, ...) __attribute__((__format__ (__printf__, 2, 3)));

#line 1940 "obj/debug.linux/form1.c"


#line 391 "/usr/include/stdio.h"
extern int fscanf(FILE * __restrict __stream, const char * __restrict __format, ...);

#line 1946 "obj/debug.linux/form1.c"


#line 397 "/usr/include/stdio.h"
extern int scanf(const char * __restrict __format, ...);

#line 1952 "obj/debug.linux/form1.c"


#line 399 "/usr/include/stdio.h"
extern int sscanf(const char * __restrict __s, const char * __restrict __format, ...) __attribute__((__nothrow__, __leaf__));

#line 1958 "obj/debug.linux/form1.c"


#line 407 "/usr/include/stdio.h"
extern int fscanf(FILE * __restrict __stream, const char * __restrict __format, ...) __asm__("__isoc99_fscanf");

#line 1964 "obj/debug.linux/form1.c"


#line 410 "/usr/include/stdio.h"
extern int scanf(const char * __restrict __format, ...) __asm__("__isoc99_scanf");

#line 1970 "obj/debug.linux/form1.c"


#line 412 "/usr/include/stdio.h"
extern int sscanf(const char * __restrict __s, const char * __restrict __format, ...) __asm__("__isoc99_sscanf") __attribute__((__nothrow__, __leaf__));

#line 1976 "obj/debug.linux/form1.c"


#line 432 "/usr/include/stdio.h"
extern int vfscanf(FILE * __restrict __s, const char * __restrict __format, __gnuc_va_list __arg) __attribute__((__format__ (__scanf__, 2, 0)));

#line 1982 "obj/debug.linux/form1.c"


#line 440 "/usr/include/stdio.h"
extern int vscanf(const char * __restrict __format, __gnuc_va_list __arg) __attribute__((__format__ (__scanf__, 1, 0)));

#line 1988 "obj/debug.linux/form1.c"


#line 444 "/usr/include/stdio.h"
extern int vsscanf(const char * __restrict __s, const char * __restrict __format, __gnuc_va_list __arg) __attribute__((__nothrow__, __leaf__)) __attribute__((__format__ (__scanf__, 2, 0)));

#line 1994 "obj/debug.linux/form1.c"


#line 451 "/usr/include/stdio.h"
extern int vfscanf(FILE * __restrict __s, const char * __restrict __format, __gnuc_va_list __arg) __asm__("__isoc99_vfscanf") __attribute__((__format__ (__scanf__, 2, 0)));

#line 2000 "obj/debug.linux/form1.c"


#line 456 "/usr/include/stdio.h"
extern int vscanf(const char * __restrict __format, __gnuc_va_list __arg) __asm__("__isoc99_vscanf") __attribute__((__format__ (__scanf__, 1, 0)));

#line 2006 "obj/debug.linux/form1.c"


#line 459 "/usr/include/stdio.h"
extern int vsscanf(const char * __restrict __s, const char * __restrict __format, __gnuc_va_list __arg) __asm__("__isoc99_vsscanf") __attribute__((__nothrow__, __leaf__)) __attribute__((__format__ (__scanf__, 2, 0)));

#line 2012 "obj/debug.linux/form1.c"


#line 485 "/usr/include/stdio.h"
extern int fgetc(FILE * __stream);

#line 2018 "obj/debug.linux/form1.c"


#line 486 "/usr/include/stdio.h"
extern int getc(FILE * __stream);

#line 2024 "obj/debug.linux/form1.c"


#line 492 "/usr/include/stdio.h"
extern int getchar(void);

#line 2030 "obj/debug.linux/form1.c"


#line 499 "/usr/include/stdio.h"
extern int getc_unlocked(FILE * __stream);

#line 2036 "obj/debug.linux/form1.c"


#line 500 "/usr/include/stdio.h"
extern int getchar_unlocked(void);

#line 2042 "obj/debug.linux/form1.c"


#line 510 "/usr/include/stdio.h"
extern int fgetc_unlocked(FILE * __stream);

#line 2048 "obj/debug.linux/form1.c"


#line 521 "/usr/include/stdio.h"
extern int fputc(int __c, FILE * __stream);

#line 2054 "obj/debug.linux/form1.c"


#line 522 "/usr/include/stdio.h"
extern int putc(int __c, FILE * __stream);

#line 2060 "obj/debug.linux/form1.c"


#line 528 "/usr/include/stdio.h"
extern int putchar(int __c);

#line 2066 "obj/debug.linux/form1.c"


#line 537 "/usr/include/stdio.h"
extern int fputc_unlocked(int __c, FILE * __stream);

#line 2072 "obj/debug.linux/form1.c"


#line 545 "/usr/include/stdio.h"
extern int putc_unlocked(int __c, FILE * __stream);

#line 2078 "obj/debug.linux/form1.c"


#line 546 "/usr/include/stdio.h"
extern int putchar_unlocked(int __c);

#line 2084 "obj/debug.linux/form1.c"


#line 553 "/usr/include/stdio.h"
extern int getw(FILE * __stream);

#line 2090 "obj/debug.linux/form1.c"


#line 556 "/usr/include/stdio.h"
extern int putw(int __w, FILE * __stream);

#line 2096 "obj/debug.linux/form1.c"


#line 564 "/usr/include/stdio.h"
extern char * fgets(char * __restrict __s, int __n, FILE * __restrict __stream);

#line 2102 "obj/debug.linux/form1.c"


#line 603 "/usr/include/stdio.h"
extern __ssize_t __getdelim(char ** __restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);

#line 2108 "obj/debug.linux/form1.c"


#line 606 "/usr/include/stdio.h"
extern __ssize_t getdelim(char ** __restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);

#line 2114 "obj/debug.linux/form1.c"


#line 616 "/usr/include/stdio.h"
extern __ssize_t getline(char ** __restrict __lineptr, size_t * __restrict __n, FILE * __restrict __stream);

#line 2120 "obj/debug.linux/form1.c"


#line 626 "/usr/include/stdio.h"
extern int fputs(const char * __restrict __s, FILE * __restrict __stream);

#line 2126 "obj/debug.linux/form1.c"


#line 632 "/usr/include/stdio.h"
extern int puts(const char * __s);

#line 2132 "obj/debug.linux/form1.c"


#line 639 "/usr/include/stdio.h"
extern int ungetc(int __c, FILE * __stream);

#line 2138 "obj/debug.linux/form1.c"


#line 646 "/usr/include/stdio.h"
extern size_t fread(void * __restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);

#line 2144 "obj/debug.linux/form1.c"


#line 652 "/usr/include/stdio.h"
extern size_t fwrite(const void * __restrict __ptr, size_t __size, size_t __n, FILE * __restrict __s);

#line 2150 "obj/debug.linux/form1.c"


#line 673 "/usr/include/stdio.h"
extern size_t fread_unlocked(void * __restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);

#line 2156 "obj/debug.linux/form1.c"


#line 675 "/usr/include/stdio.h"
extern size_t fwrite_unlocked(const void * __restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);

#line 2162 "obj/debug.linux/form1.c"


#line 684 "/usr/include/stdio.h"
extern int fseek(FILE * __stream, long int __off, int __whence);

#line 2168 "obj/debug.linux/form1.c"


#line 689 "/usr/include/stdio.h"
extern long int ftell(FILE * __stream);

#line 2174 "obj/debug.linux/form1.c"


#line 694 "/usr/include/stdio.h"
extern void rewind(FILE * __stream);

#line 2180 "obj/debug.linux/form1.c"


#line 707 "/usr/include/stdio.h"
extern int fseeko(FILE * __stream, __off_t __off, int __whence);

#line 2186 "obj/debug.linux/form1.c"


#line 712 "/usr/include/stdio.h"
extern __off_t ftello(FILE * __stream);

#line 2192 "obj/debug.linux/form1.c"


#line 731 "/usr/include/stdio.h"
extern int fgetpos(FILE * __restrict __stream, fpos_t * __restrict __pos);

#line 2198 "obj/debug.linux/form1.c"


#line 736 "/usr/include/stdio.h"
extern int fsetpos(FILE * __stream, const fpos_t * __pos);

#line 2204 "obj/debug.linux/form1.c"


#line 757 "/usr/include/stdio.h"
extern void clearerr(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2210 "obj/debug.linux/form1.c"


#line 759 "/usr/include/stdio.h"
extern int feof(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2216 "obj/debug.linux/form1.c"


#line 761 "/usr/include/stdio.h"
extern int ferror(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2222 "obj/debug.linux/form1.c"


#line 765 "/usr/include/stdio.h"
extern void clearerr_unlocked(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2228 "obj/debug.linux/form1.c"


#line 766 "/usr/include/stdio.h"
extern int feof_unlocked(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2234 "obj/debug.linux/form1.c"


#line 767 "/usr/include/stdio.h"
extern int ferror_unlocked(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2240 "obj/debug.linux/form1.c"


#line 775 "/usr/include/stdio.h"
extern void perror(const char * __s);

#line 2246 "obj/debug.linux/form1.c"


#line 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern int sys_nerr;

#line 2252 "obj/debug.linux/form1.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
extern const char * const sys_errlist[];

#line 2258 "obj/debug.linux/form1.c"


#line 786 "/usr/include/stdio.h"
extern int fileno(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2264 "obj/debug.linux/form1.c"


#line 791 "/usr/include/stdio.h"
extern int fileno_unlocked(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2270 "obj/debug.linux/form1.c"


#line 800 "/usr/include/stdio.h"
extern FILE * popen(const char * __command, const char * __modes);

#line 2276 "obj/debug.linux/form1.c"


#line 806 "/usr/include/stdio.h"
extern int pclose(FILE * __stream);

#line 2282 "obj/debug.linux/form1.c"


#line 812 "/usr/include/stdio.h"
extern char * ctermid(char * __s) __attribute__((__nothrow__, __leaf__));

#line 2288 "obj/debug.linux/form1.c"


#line 840 "/usr/include/stdio.h"
extern void flockfile(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2294 "obj/debug.linux/form1.c"


#line 844 "/usr/include/stdio.h"
extern int ftrylockfile(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2300 "obj/debug.linux/form1.c"


#line 847 "/usr/include/stdio.h"
extern void funlockfile(FILE * __stream) __attribute__((__nothrow__, __leaf__));

#line 2306 "obj/debug.linux/form1.c"


#line 858 "/usr/include/stdio.h"
extern int __uflow(FILE *);

#line 2312 "obj/debug.linux/form1.c"


#line 859 "/usr/include/stdio.h"
extern int __overflow(FILE *, int);

#line 2318 "obj/debug.linux/form1.c"


#line 49 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSRuntime JSRuntime;

#line 2324 "obj/debug.linux/form1.c"


#line 50 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSContext JSContext;

#line 2330 "obj/debug.linux/form1.c"


#line 51 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSObject JSObject;

#line 2336 "obj/debug.linux/form1.c"


#line 52 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSClass JSClass;

#line 2342 "obj/debug.linux/form1.c"


#line 53 "/usr/local/include/quickjs/quickjs.h"
typedef uint32_t JSClassID;

#line 2348 "obj/debug.linux/form1.c"


#line 54 "/usr/local/include/quickjs/quickjs.h"
typedef uint32_t JSAtom;

#line 2354 "obj/debug.linux/form1.c"


#line 67 "/usr/local/include/quickjs/quickjs.h"
enum
{
JS_TAG_FIRST = -11, JS_TAG_BIG_DECIMAL = -11, JS_TAG_BIG_INT = -10, JS_TAG_BIG_FLOAT = -9, JS_TAG_SYMBOL = -8, JS_TAG_STRING = -7, JS_TAG_MODULE = -3, JS_TAG_FUNCTION_BYTECODE = -2, JS_TAG_OBJECT = -1, JS_TAG_INT = 0, JS_TAG_BOOL = 1, JS_TAG_NULL = 2, JS_TAG_UNDEFINED = 3, JS_TAG_UNINITIALIZED = 4, JS_TAG_CATCH_OFFSET = 5, JS_TAG_EXCEPTION = 6, JS_TAG_FLOAT64 = 7
};

#line 2363 "obj/debug.linux/form1.c"


#line 90 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSRefCountHeader
{

#line 91 "/usr/local/include/quickjs/quickjs.h"
int ref_count;

#line 2373 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSRefCountHeader;

#line 2376 "obj/debug.linux/form1.c"


#line 197 "/usr/local/include/quickjs/quickjs.h"
typedef union JSValueUnion
{

#line 199 "/usr/local/include/quickjs/quickjs.h"
int32_t qjs_int32;

#line 2386 "obj/debug.linux/form1.c"

#line 203 "/usr/local/include/quickjs/quickjs.h"
double float64;

#line 2391 "obj/debug.linux/form1.c"

#line 204 "/usr/local/include/quickjs/quickjs.h"
void * ptr;

#line 2396 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSValueUnion;

#line 2399 "obj/debug.linux/form1.c"


#line 207 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSValue
{

#line 208 "/usr/local/include/quickjs/quickjs.h"
JSValueUnion u;

#line 2409 "obj/debug.linux/form1.c"

#line 209 "/usr/local/include/quickjs/quickjs.h"
int64_t tag;

#line 2414 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSValue;

#line 2417 "obj/debug.linux/form1.c"

static inline JSValue __JS_NewFloat64(JSContext * ctx, double d)

#line 241 "/usr/local/include/quickjs/quickjs.h"
{

#line 242 "/usr/local/include/quickjs/quickjs.h"
JSValue v;

#line 2427 "obj/debug.linux/form1.c"


#line 243 "/usr/local/include/quickjs/quickjs.h"
v.tag = JS_TAG_FLOAT64;
#line 2432 "obj/debug.linux/form1.c"


#line 244 "/usr/local/include/quickjs/quickjs.h"
v.u.float64 = d;
#line 2437 "obj/debug.linux/form1.c"


#line 245 "/usr/local/include/quickjs/quickjs.h"
return v;
#line 2442 "obj/debug.linux/form1.c"


#line 246 "/usr/local/include/quickjs/quickjs.h"
}
#line 2447 "obj/debug.linux/form1.c"


static inline int JS_VALUE_IS_NAN(JSValue v)

#line 249 "/usr/local/include/quickjs/quickjs.h"
{

#line 250 "/usr/local/include/quickjs/quickjs.h"
union
{

#line 251 "/usr/local/include/quickjs/quickjs.h"
double d;

#line 2462 "obj/debug.linux/form1.c"

#line 252 "/usr/local/include/quickjs/quickjs.h"
uint64_t u64;

#line 2467 "obj/debug.linux/form1.c"
} ecere_gcc_struct u;

#line 2470 "obj/debug.linux/form1.c"


#line 254 "/usr/local/include/quickjs/quickjs.h"
if(v.tag != JS_TAG_FLOAT64)

#line 255 "/usr/local/include/quickjs/quickjs.h"
return 0;
#line 2478 "obj/debug.linux/form1.c"

#line 2480 "obj/debug.linux/form1.c"


#line 256 "/usr/local/include/quickjs/quickjs.h"
u.d = v.u.float64;
#line 2485 "obj/debug.linux/form1.c"


#line 257 "/usr/local/include/quickjs/quickjs.h"
return (u.u64 & 0x7fffffffffffffff) > 0x7ff0000000000000;
#line 2490 "obj/debug.linux/form1.c"


#line 258 "/usr/local/include/quickjs/quickjs.h"
}
#line 2495 "obj/debug.linux/form1.c"



#line 326 "/usr/local/include/quickjs/quickjs.h"
typedef JSValue JSCFunction(JSContext * ctx, JSValue this_val, int argc, JSValue * argv);

#line 2502 "obj/debug.linux/form1.c"


#line 327 "/usr/local/include/quickjs/quickjs.h"
typedef JSValue JSCFunctionMagic(JSContext * ctx, JSValue this_val, int argc, JSValue * argv, int magic);

#line 2508 "obj/debug.linux/form1.c"


#line 328 "/usr/local/include/quickjs/quickjs.h"
typedef JSValue JSCFunctionData(JSContext * ctx, JSValue this_val, int argc, JSValue * argv, int magic, JSValue * func_data);

#line 2514 "obj/debug.linux/form1.c"


#line 330 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSMallocState
{

#line 331 "/usr/local/include/quickjs/quickjs.h"
size_t malloc_count;

#line 2524 "obj/debug.linux/form1.c"

#line 332 "/usr/local/include/quickjs/quickjs.h"
size_t malloc_size;

#line 2529 "obj/debug.linux/form1.c"

#line 333 "/usr/local/include/quickjs/quickjs.h"
size_t malloc_limit;

#line 2534 "obj/debug.linux/form1.c"

#line 334 "/usr/local/include/quickjs/quickjs.h"
void * opaque;

#line 2539 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSMallocState;

#line 2542 "obj/debug.linux/form1.c"


#line 337 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSMallocFunctions
{

#line 338 "/usr/local/include/quickjs/quickjs.h"
void * (* js_malloc)(JSMallocState * s, size_t size);

#line 2552 "obj/debug.linux/form1.c"

#line 339 "/usr/local/include/quickjs/quickjs.h"
void (* js_free)(JSMallocState * s, void * ptr);

#line 2557 "obj/debug.linux/form1.c"

#line 340 "/usr/local/include/quickjs/quickjs.h"
void * (* js_realloc)(JSMallocState * s, void * ptr, size_t size);

#line 2562 "obj/debug.linux/form1.c"

#line 341 "/usr/local/include/quickjs/quickjs.h"
size_t (* js_malloc_usable_size)(const void * ptr);

#line 2567 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSMallocFunctions;

#line 2570 "obj/debug.linux/form1.c"


#line 344 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSGCObjectHeader JSGCObjectHeader;

#line 2576 "obj/debug.linux/form1.c"


#line 346 "/usr/local/include/quickjs/quickjs.h"
JSRuntime * JS_NewRuntime(void);

#line 2582 "obj/debug.linux/form1.c"


#line 348 "/usr/local/include/quickjs/quickjs.h"
void JS_SetRuntimeInfo(JSRuntime * rt, const char * info);

#line 2588 "obj/debug.linux/form1.c"


#line 349 "/usr/local/include/quickjs/quickjs.h"
void JS_SetMemoryLimit(JSRuntime * rt, size_t limit);

#line 2594 "obj/debug.linux/form1.c"


#line 350 "/usr/local/include/quickjs/quickjs.h"
void JS_SetGCThreshold(JSRuntime * rt, size_t gc_threshold);

#line 2600 "obj/debug.linux/form1.c"


#line 352 "/usr/local/include/quickjs/quickjs.h"
void JS_SetMaxStackSize(JSRuntime * rt, size_t stack_size);

#line 2606 "obj/debug.linux/form1.c"


#line 355 "/usr/local/include/quickjs/quickjs.h"
void JS_UpdateStackTop(JSRuntime * rt);

#line 2612 "obj/debug.linux/form1.c"


#line 356 "/usr/local/include/quickjs/quickjs.h"
JSRuntime * JS_NewRuntime2(const JSMallocFunctions * mf, void * opaque);

#line 2618 "obj/debug.linux/form1.c"


#line 357 "/usr/local/include/quickjs/quickjs.h"
void JS_FreeRuntime(JSRuntime * rt);

#line 2624 "obj/debug.linux/form1.c"


#line 358 "/usr/local/include/quickjs/quickjs.h"
void * JS_GetRuntimeOpaque(JSRuntime * rt);

#line 2630 "obj/debug.linux/form1.c"


#line 359 "/usr/local/include/quickjs/quickjs.h"
void JS_SetRuntimeOpaque(JSRuntime * rt, void * opaque);

#line 2636 "obj/debug.linux/form1.c"


#line 360 "/usr/local/include/quickjs/quickjs.h"
typedef void JS_MarkFunc(JSRuntime * rt, JSGCObjectHeader * gp);

#line 2642 "obj/debug.linux/form1.c"


#line 361 "/usr/local/include/quickjs/quickjs.h"
void JS_MarkValue(JSRuntime * rt, JSValue val, JS_MarkFunc * mark_func);

#line 2648 "obj/debug.linux/form1.c"


#line 362 "/usr/local/include/quickjs/quickjs.h"
void JS_RunGC(JSRuntime * rt);

#line 2654 "obj/debug.linux/form1.c"


#line 363 "/usr/local/include/quickjs/quickjs.h"
int JS_IsLiveObject(JSRuntime * rt, JSValue obj);

#line 2660 "obj/debug.linux/form1.c"


#line 365 "/usr/local/include/quickjs/quickjs.h"
JSContext * JS_NewContext(JSRuntime * rt);

#line 2666 "obj/debug.linux/form1.c"


#line 366 "/usr/local/include/quickjs/quickjs.h"
void JS_FreeContext(JSContext * s);

#line 2672 "obj/debug.linux/form1.c"


#line 367 "/usr/local/include/quickjs/quickjs.h"
JSContext * JS_DupContext(JSContext * ctx);

#line 2678 "obj/debug.linux/form1.c"


#line 368 "/usr/local/include/quickjs/quickjs.h"
void * JS_GetContextOpaque(JSContext * ctx);

#line 2684 "obj/debug.linux/form1.c"


#line 369 "/usr/local/include/quickjs/quickjs.h"
void JS_SetContextOpaque(JSContext * ctx, void * opaque);

#line 2690 "obj/debug.linux/form1.c"


#line 370 "/usr/local/include/quickjs/quickjs.h"
JSRuntime * JS_GetRuntime(JSContext * ctx);

#line 2696 "obj/debug.linux/form1.c"


#line 371 "/usr/local/include/quickjs/quickjs.h"
void JS_SetClassProto(JSContext * ctx, JSClassID class_id, JSValue obj);

#line 2702 "obj/debug.linux/form1.c"


#line 372 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_GetClassProto(JSContext * ctx, JSClassID class_id);

#line 2708 "obj/debug.linux/form1.c"


#line 376 "/usr/local/include/quickjs/quickjs.h"
JSContext * JS_NewContextRaw(JSRuntime * rt);

#line 2714 "obj/debug.linux/form1.c"


#line 377 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicBaseObjects(JSContext * ctx);

#line 2720 "obj/debug.linux/form1.c"


#line 378 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicDate(JSContext * ctx);

#line 2726 "obj/debug.linux/form1.c"


#line 379 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicEval(JSContext * ctx);

#line 2732 "obj/debug.linux/form1.c"


#line 380 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicStringNormalize(JSContext * ctx);

#line 2738 "obj/debug.linux/form1.c"


#line 381 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicRegExpCompiler(JSContext * ctx);

#line 2744 "obj/debug.linux/form1.c"


#line 382 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicRegExp(JSContext * ctx);

#line 2750 "obj/debug.linux/form1.c"


#line 383 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicJSON(JSContext * ctx);

#line 2756 "obj/debug.linux/form1.c"


#line 384 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicProxy(JSContext * ctx);

#line 2762 "obj/debug.linux/form1.c"


#line 385 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicMapSet(JSContext * ctx);

#line 2768 "obj/debug.linux/form1.c"


#line 386 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicTypedArrays(JSContext * ctx);

#line 2774 "obj/debug.linux/form1.c"


#line 387 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicPromise(JSContext * ctx);

#line 2780 "obj/debug.linux/form1.c"


#line 388 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicBigInt(JSContext * ctx);

#line 2786 "obj/debug.linux/form1.c"


#line 389 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicBigFloat(JSContext * ctx);

#line 2792 "obj/debug.linux/form1.c"


#line 390 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicBigDecimal(JSContext * ctx);

#line 2798 "obj/debug.linux/form1.c"


#line 392 "/usr/local/include/quickjs/quickjs.h"
void JS_AddIntrinsicOperators(JSContext * ctx);

#line 2804 "obj/debug.linux/form1.c"


#line 394 "/usr/local/include/quickjs/quickjs.h"
void JS_EnableBignumExt(JSContext * ctx, int enable);

#line 2810 "obj/debug.linux/form1.c"


#line 396 "/usr/local/include/quickjs/quickjs.h"
JSValue js_string_codePointRange(JSContext * ctx, JSValue this_val, int argc, JSValue * argv);

#line 2816 "obj/debug.linux/form1.c"


#line 399 "/usr/local/include/quickjs/quickjs.h"
void * js_malloc_rt(JSRuntime * rt, size_t size);

#line 2822 "obj/debug.linux/form1.c"


#line 400 "/usr/local/include/quickjs/quickjs.h"
void js_free_rt(JSRuntime * rt, void * ptr);

#line 2828 "obj/debug.linux/form1.c"


#line 401 "/usr/local/include/quickjs/quickjs.h"
void * js_realloc_rt(JSRuntime * rt, void * ptr, size_t size);

#line 2834 "obj/debug.linux/form1.c"


#line 402 "/usr/local/include/quickjs/quickjs.h"
size_t js_malloc_usable_size_rt(JSRuntime * rt, const void * ptr);

#line 2840 "obj/debug.linux/form1.c"


#line 403 "/usr/local/include/quickjs/quickjs.h"
void * js_mallocz_rt(JSRuntime * rt, size_t size);

#line 2846 "obj/debug.linux/form1.c"


#line 405 "/usr/local/include/quickjs/quickjs.h"
void * js_malloc(JSContext * ctx, size_t size);

#line 2852 "obj/debug.linux/form1.c"


#line 406 "/usr/local/include/quickjs/quickjs.h"
void js_free(JSContext * ctx, void * ptr);

#line 2858 "obj/debug.linux/form1.c"


#line 407 "/usr/local/include/quickjs/quickjs.h"
void * js_realloc(JSContext * ctx, void * ptr, size_t size);

#line 2864 "obj/debug.linux/form1.c"


#line 408 "/usr/local/include/quickjs/quickjs.h"
size_t js_malloc_usable_size(JSContext * ctx, const void * ptr);

#line 2870 "obj/debug.linux/form1.c"


#line 409 "/usr/local/include/quickjs/quickjs.h"
void * js_realloc2(JSContext * ctx, void * ptr, size_t size, size_t * pslack);

#line 2876 "obj/debug.linux/form1.c"


#line 410 "/usr/local/include/quickjs/quickjs.h"
void * js_mallocz(JSContext * ctx, size_t size);

#line 2882 "obj/debug.linux/form1.c"


#line 411 "/usr/local/include/quickjs/quickjs.h"
char * js_strdup(JSContext * ctx, const char * str);

#line 2888 "obj/debug.linux/form1.c"


#line 412 "/usr/local/include/quickjs/quickjs.h"
char * js_strndup(JSContext * ctx, const char * s, size_t n);

#line 2894 "obj/debug.linux/form1.c"


#line 414 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSMemoryUsage
{

#line 415 "/usr/local/include/quickjs/quickjs.h"
int64_t malloc_size, malloc_limit, memory_used_size;

#line 2904 "obj/debug.linux/form1.c"

#line 416 "/usr/local/include/quickjs/quickjs.h"
int64_t malloc_count;

#line 2909 "obj/debug.linux/form1.c"

#line 417 "/usr/local/include/quickjs/quickjs.h"
int64_t memory_used_count;

#line 2914 "obj/debug.linux/form1.c"

#line 418 "/usr/local/include/quickjs/quickjs.h"
int64_t atom_count, atom_size;

#line 2919 "obj/debug.linux/form1.c"

#line 419 "/usr/local/include/quickjs/quickjs.h"
int64_t str_count, str_size;

#line 2924 "obj/debug.linux/form1.c"

#line 420 "/usr/local/include/quickjs/quickjs.h"
int64_t obj_count, obj_size;

#line 2929 "obj/debug.linux/form1.c"

#line 421 "/usr/local/include/quickjs/quickjs.h"
int64_t prop_count, prop_size;

#line 2934 "obj/debug.linux/form1.c"

#line 422 "/usr/local/include/quickjs/quickjs.h"
int64_t shape_count, shape_size;

#line 2939 "obj/debug.linux/form1.c"

#line 423 "/usr/local/include/quickjs/quickjs.h"
int64_t js_func_count, js_func_size, js_func_code_size;

#line 2944 "obj/debug.linux/form1.c"

#line 424 "/usr/local/include/quickjs/quickjs.h"
int64_t js_func_pc2line_count, js_func_pc2line_size;

#line 2949 "obj/debug.linux/form1.c"

#line 425 "/usr/local/include/quickjs/quickjs.h"
int64_t c_func_count, array_count;

#line 2954 "obj/debug.linux/form1.c"

#line 426 "/usr/local/include/quickjs/quickjs.h"
int64_t fast_array_count, fast_array_elements;

#line 2959 "obj/debug.linux/form1.c"

#line 427 "/usr/local/include/quickjs/quickjs.h"
int64_t binary_object_count, binary_object_size;

#line 2964 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSMemoryUsage;

#line 2967 "obj/debug.linux/form1.c"


#line 430 "/usr/local/include/quickjs/quickjs.h"
void JS_ComputeMemoryUsage(JSRuntime * rt, JSMemoryUsage * s);

#line 2973 "obj/debug.linux/form1.c"


#line 431 "/usr/local/include/quickjs/quickjs.h"
void JS_DumpMemoryUsage(FILE * fp, const JSMemoryUsage * s, JSRuntime * rt);

#line 2979 "obj/debug.linux/form1.c"


#line 436 "/usr/local/include/quickjs/quickjs.h"
JSAtom JS_NewAtomLen(JSContext * ctx, const char * str, size_t len);

#line 2985 "obj/debug.linux/form1.c"


#line 437 "/usr/local/include/quickjs/quickjs.h"
JSAtom JS_NewAtom(JSContext * ctx, const char * str);

#line 2991 "obj/debug.linux/form1.c"


#line 438 "/usr/local/include/quickjs/quickjs.h"
JSAtom JS_NewAtomUInt32(JSContext * ctx, uint32_t n);

#line 2997 "obj/debug.linux/form1.c"


#line 439 "/usr/local/include/quickjs/quickjs.h"
JSAtom JS_DupAtom(JSContext * ctx, JSAtom v);

#line 3003 "obj/debug.linux/form1.c"


#line 440 "/usr/local/include/quickjs/quickjs.h"
void JS_FreeAtom(JSContext * ctx, JSAtom v);

#line 3009 "obj/debug.linux/form1.c"


#line 441 "/usr/local/include/quickjs/quickjs.h"
void JS_FreeAtomRT(JSRuntime * rt, JSAtom v);

#line 3015 "obj/debug.linux/form1.c"


#line 442 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_AtomToValue(JSContext * ctx, JSAtom atom);

#line 3021 "obj/debug.linux/form1.c"


#line 443 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_AtomToString(JSContext * ctx, JSAtom atom);

#line 3027 "obj/debug.linux/form1.c"


#line 444 "/usr/local/include/quickjs/quickjs.h"
const char * JS_AtomToCString(JSContext * ctx, JSAtom atom);

#line 3033 "obj/debug.linux/form1.c"


#line 445 "/usr/local/include/quickjs/quickjs.h"
JSAtom JS_ValueToAtom(JSContext * ctx, JSValue val);

#line 3039 "obj/debug.linux/form1.c"


#line 449 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSPropertyEnum
{

#line 450 "/usr/local/include/quickjs/quickjs.h"
int is_enumerable;

#line 3049 "obj/debug.linux/form1.c"

#line 451 "/usr/local/include/quickjs/quickjs.h"
JSAtom atom;

#line 3054 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSPropertyEnum;

#line 3057 "obj/debug.linux/form1.c"


#line 454 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSPropertyDescriptor
{

#line 455 "/usr/local/include/quickjs/quickjs.h"
int flags;

#line 3067 "obj/debug.linux/form1.c"

#line 456 "/usr/local/include/quickjs/quickjs.h"
JSValue value;

#line 3072 "obj/debug.linux/form1.c"

#line 457 "/usr/local/include/quickjs/quickjs.h"
JSValue getter;

#line 3077 "obj/debug.linux/form1.c"

#line 458 "/usr/local/include/quickjs/quickjs.h"
JSValue setter;

#line 3082 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSPropertyDescriptor;

#line 3085 "obj/debug.linux/form1.c"


#line 461 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSClassExoticMethods
{

#line 466 "/usr/local/include/quickjs/quickjs.h"
int (* get_own_property)(JSContext * ctx, JSPropertyDescriptor * desc, JSValue obj, JSAtom prop);

#line 3095 "obj/debug.linux/form1.c"

#line 472 "/usr/local/include/quickjs/quickjs.h"
int (* get_own_property_names)(JSContext * ctx, JSPropertyEnum ** ptab, uint32_t * plen, JSValue obj);

#line 3100 "obj/debug.linux/form1.c"

#line 474 "/usr/local/include/quickjs/quickjs.h"
int (* delete_property)(JSContext * ctx, JSValue obj, JSAtom prop);

#line 3105 "obj/debug.linux/form1.c"

#line 479 "/usr/local/include/quickjs/quickjs.h"
int (* define_own_property)(JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue val, JSValue getter, JSValue setter, int flags);

#line 3110 "obj/debug.linux/form1.c"

#line 483 "/usr/local/include/quickjs/quickjs.h"
int (* has_property)(JSContext * ctx, JSValue obj, JSAtom atom);

#line 3115 "obj/debug.linux/form1.c"

#line 485 "/usr/local/include/quickjs/quickjs.h"
JSValue (* get_property)(JSContext * ctx, JSValue obj, JSAtom atom, JSValue receiver);

#line 3120 "obj/debug.linux/form1.c"

#line 488 "/usr/local/include/quickjs/quickjs.h"
int (* set_property)(JSContext * ctx, JSValue obj, JSAtom atom, JSValue value, JSValue receiver, int flags);

#line 3125 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSClassExoticMethods;

#line 3128 "obj/debug.linux/form1.c"


#line 491 "/usr/local/include/quickjs/quickjs.h"
typedef void JSClassFinalizer(JSRuntime * rt, JSValue val);

#line 3134 "obj/debug.linux/form1.c"


#line 492 "/usr/local/include/quickjs/quickjs.h"
typedef void JSClassGCMark(JSRuntime * rt, JSValue val, JS_MarkFunc * mark_func);

#line 3140 "obj/debug.linux/form1.c"


#line 495 "/usr/local/include/quickjs/quickjs.h"
typedef JSValue JSClassCall(JSContext * ctx, JSValue func_obj, JSValue this_val, int argc, JSValue * argv, int flags);

#line 3146 "obj/debug.linux/form1.c"


#line 499 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSClassDef
{

#line 500 "/usr/local/include/quickjs/quickjs.h"
const char * class_name;

#line 3156 "obj/debug.linux/form1.c"

#line 501 "/usr/local/include/quickjs/quickjs.h"
JSClassFinalizer * finalizer;

#line 3161 "obj/debug.linux/form1.c"

#line 502 "/usr/local/include/quickjs/quickjs.h"
JSClassGCMark * gc_mark;

#line 3166 "obj/debug.linux/form1.c"

#line 508 "/usr/local/include/quickjs/quickjs.h"
JSClassCall * call;

#line 3171 "obj/debug.linux/form1.c"

#line 511 "/usr/local/include/quickjs/quickjs.h"
JSClassExoticMethods * exotic;

#line 3176 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSClassDef;

#line 3179 "obj/debug.linux/form1.c"


#line 514 "/usr/local/include/quickjs/quickjs.h"
JSClassID JS_NewClassID(JSClassID * pclass_id);

#line 3185 "obj/debug.linux/form1.c"


#line 515 "/usr/local/include/quickjs/quickjs.h"
int JS_NewClass(JSRuntime * rt, JSClassID class_id, const JSClassDef * class_def);

#line 3191 "obj/debug.linux/form1.c"


#line 516 "/usr/local/include/quickjs/quickjs.h"
int JS_IsRegisteredClass(JSRuntime * rt, JSClassID class_id);

#line 3197 "obj/debug.linux/form1.c"

static inline __attribute__((always_inline)) JSValue JS_NewBool(JSContext * ctx, int val)

#line 521 "/usr/local/include/quickjs/quickjs.h"
{

#line 522 "/usr/local/include/quickjs/quickjs.h"
return __extension__ (
#line 522 "/usr/local/include/quickjs/quickjs.h"
{

#line 522 "/usr/local/include/quickjs/quickjs.h"
JSValue v =
{

#line 522 "/usr/local/include/quickjs/quickjs.h"

{

#line 522 "/usr/local/include/quickjs/quickjs.h"
0
}
#line 522 "/usr/local/include/quickjs/quickjs.h"

}
#line 522 "/usr/local/include/quickjs/quickjs.h"
;

#line 3226 "obj/debug.linux/form1.c"


#line 522 "/usr/local/include/quickjs/quickjs.h"
v.u.qjs_int32 = (val != 0);
#line 3231 "obj/debug.linux/form1.c"


#line 522 "/usr/local/include/quickjs/quickjs.h"
v.tag = JS_TAG_BOOL;
#line 3236 "obj/debug.linux/form1.c"


#line 522 "/usr/local/include/quickjs/quickjs.h"
v;
#line 3241 "obj/debug.linux/form1.c"


#line 522 "/usr/local/include/quickjs/quickjs.h"
}
#line 3246 "obj/debug.linux/form1.c"
)
#line 522 "/usr/local/include/quickjs/quickjs.h"
;
#line 3250 "obj/debug.linux/form1.c"


#line 523 "/usr/local/include/quickjs/quickjs.h"
}
#line 3255 "obj/debug.linux/form1.c"


static inline __attribute__((always_inline)) JSValue JS_NewInt32(JSContext * ctx, int32_t val)

#line 526 "/usr/local/include/quickjs/quickjs.h"
{

#line 527 "/usr/local/include/quickjs/quickjs.h"
return __extension__ (
#line 527 "/usr/local/include/quickjs/quickjs.h"
{

#line 527 "/usr/local/include/quickjs/quickjs.h"
JSValue v =
{

#line 527 "/usr/local/include/quickjs/quickjs.h"

{

#line 527 "/usr/local/include/quickjs/quickjs.h"
0
}
#line 527 "/usr/local/include/quickjs/quickjs.h"

}
#line 527 "/usr/local/include/quickjs/quickjs.h"
;

#line 3285 "obj/debug.linux/form1.c"


#line 527 "/usr/local/include/quickjs/quickjs.h"
v.u.qjs_int32 = val;
#line 3290 "obj/debug.linux/form1.c"


#line 527 "/usr/local/include/quickjs/quickjs.h"
v.tag = JS_TAG_INT;
#line 3295 "obj/debug.linux/form1.c"


#line 527 "/usr/local/include/quickjs/quickjs.h"
v;
#line 3300 "obj/debug.linux/form1.c"


#line 527 "/usr/local/include/quickjs/quickjs.h"
}
#line 3305 "obj/debug.linux/form1.c"
)
#line 527 "/usr/local/include/quickjs/quickjs.h"
;
#line 3309 "obj/debug.linux/form1.c"


#line 528 "/usr/local/include/quickjs/quickjs.h"
}
#line 3314 "obj/debug.linux/form1.c"


static inline __attribute__((always_inline)) JSValue JS_NewCatchOffset(JSContext * ctx, int32_t val)

#line 531 "/usr/local/include/quickjs/quickjs.h"
{

#line 532 "/usr/local/include/quickjs/quickjs.h"
return __extension__ (
#line 532 "/usr/local/include/quickjs/quickjs.h"
{

#line 532 "/usr/local/include/quickjs/quickjs.h"
JSValue v =
{

#line 532 "/usr/local/include/quickjs/quickjs.h"

{

#line 532 "/usr/local/include/quickjs/quickjs.h"
0
}
#line 532 "/usr/local/include/quickjs/quickjs.h"

}
#line 532 "/usr/local/include/quickjs/quickjs.h"
;

#line 3344 "obj/debug.linux/form1.c"


#line 532 "/usr/local/include/quickjs/quickjs.h"
v.u.qjs_int32 = val;
#line 3349 "obj/debug.linux/form1.c"


#line 532 "/usr/local/include/quickjs/quickjs.h"
v.tag = JS_TAG_CATCH_OFFSET;
#line 3354 "obj/debug.linux/form1.c"


#line 532 "/usr/local/include/quickjs/quickjs.h"
v;
#line 3359 "obj/debug.linux/form1.c"


#line 532 "/usr/local/include/quickjs/quickjs.h"
}
#line 3364 "obj/debug.linux/form1.c"
)
#line 532 "/usr/local/include/quickjs/quickjs.h"
;
#line 3368 "obj/debug.linux/form1.c"


#line 533 "/usr/local/include/quickjs/quickjs.h"
}
#line 3373 "obj/debug.linux/form1.c"



#line 557 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewBigInt64(JSContext * ctx, int64_t v);

#line 3380 "obj/debug.linux/form1.c"


#line 558 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewBigUint64(JSContext * ctx, uint64_t v);

#line 3386 "obj/debug.linux/form1.c"

static inline int JS_IsNumber(JSValue v)

#line 582 "/usr/local/include/quickjs/quickjs.h"
{

#line 583 "/usr/local/include/quickjs/quickjs.h"
int tag = ((int32_t)(v).tag);

#line 3396 "obj/debug.linux/form1.c"


#line 584 "/usr/local/include/quickjs/quickjs.h"
return tag == JS_TAG_INT || ((unsigned)(tag) == JS_TAG_FLOAT64);
#line 3401 "obj/debug.linux/form1.c"


#line 585 "/usr/local/include/quickjs/quickjs.h"
}
#line 3406 "obj/debug.linux/form1.c"


static inline int JS_IsBigInt(JSContext * ctx, JSValue v)

#line 588 "/usr/local/include/quickjs/quickjs.h"
{

#line 589 "/usr/local/include/quickjs/quickjs.h"
int tag = ((int32_t)(v).tag);

#line 3417 "obj/debug.linux/form1.c"


#line 590 "/usr/local/include/quickjs/quickjs.h"
return tag == JS_TAG_BIG_INT;
#line 3422 "obj/debug.linux/form1.c"


#line 591 "/usr/local/include/quickjs/quickjs.h"
}
#line 3427 "obj/debug.linux/form1.c"


static inline int JS_IsBigFloat(JSValue v)

#line 594 "/usr/local/include/quickjs/quickjs.h"
{

#line 595 "/usr/local/include/quickjs/quickjs.h"
int tag = ((int32_t)(v).tag);

#line 3438 "obj/debug.linux/form1.c"


#line 596 "/usr/local/include/quickjs/quickjs.h"
return tag == JS_TAG_BIG_FLOAT;
#line 3443 "obj/debug.linux/form1.c"


#line 597 "/usr/local/include/quickjs/quickjs.h"
}
#line 3448 "obj/debug.linux/form1.c"


static inline int JS_IsBigDecimal(JSValue v)

#line 600 "/usr/local/include/quickjs/quickjs.h"
{

#line 601 "/usr/local/include/quickjs/quickjs.h"
int tag = ((int32_t)(v).tag);

#line 3459 "obj/debug.linux/form1.c"


#line 602 "/usr/local/include/quickjs/quickjs.h"
return tag == JS_TAG_BIG_DECIMAL;
#line 3464 "obj/debug.linux/form1.c"


#line 603 "/usr/local/include/quickjs/quickjs.h"
}
#line 3469 "obj/debug.linux/form1.c"


static inline int JS_IsBool(JSValue v)

#line 606 "/usr/local/include/quickjs/quickjs.h"
{

#line 607 "/usr/local/include/quickjs/quickjs.h"
return ((int32_t)(v).tag) == JS_TAG_BOOL;
#line 3479 "obj/debug.linux/form1.c"


#line 608 "/usr/local/include/quickjs/quickjs.h"
}
#line 3484 "obj/debug.linux/form1.c"


static inline int JS_IsNull(JSValue v)

#line 611 "/usr/local/include/quickjs/quickjs.h"
{

#line 612 "/usr/local/include/quickjs/quickjs.h"
return ((int32_t)(v).tag) == JS_TAG_NULL;
#line 3494 "obj/debug.linux/form1.c"


#line 613 "/usr/local/include/quickjs/quickjs.h"
}
#line 3499 "obj/debug.linux/form1.c"


static inline int JS_IsUndefined(JSValue v)

#line 616 "/usr/local/include/quickjs/quickjs.h"
{

#line 617 "/usr/local/include/quickjs/quickjs.h"
return ((int32_t)(v).tag) == JS_TAG_UNDEFINED;
#line 3509 "obj/debug.linux/form1.c"


#line 618 "/usr/local/include/quickjs/quickjs.h"
}
#line 3514 "obj/debug.linux/form1.c"


static inline int JS_IsException(JSValue v)

#line 621 "/usr/local/include/quickjs/quickjs.h"
{

#line 622 "/usr/local/include/quickjs/quickjs.h"
return __builtin_expect(! !(((int32_t)(v).tag) == JS_TAG_EXCEPTION), 0);
#line 3524 "obj/debug.linux/form1.c"


#line 623 "/usr/local/include/quickjs/quickjs.h"
}
#line 3529 "obj/debug.linux/form1.c"


static inline int JS_IsUninitialized(JSValue v)

#line 626 "/usr/local/include/quickjs/quickjs.h"
{

#line 627 "/usr/local/include/quickjs/quickjs.h"
return __builtin_expect(! !(((int32_t)(v).tag) == JS_TAG_UNINITIALIZED), 0);
#line 3539 "obj/debug.linux/form1.c"


#line 628 "/usr/local/include/quickjs/quickjs.h"
}
#line 3544 "obj/debug.linux/form1.c"


static inline int JS_IsString(JSValue v)

#line 631 "/usr/local/include/quickjs/quickjs.h"
{

#line 632 "/usr/local/include/quickjs/quickjs.h"
return ((int32_t)(v).tag) == JS_TAG_STRING;
#line 3554 "obj/debug.linux/form1.c"


#line 633 "/usr/local/include/quickjs/quickjs.h"
}
#line 3559 "obj/debug.linux/form1.c"


static inline int JS_IsSymbol(JSValue v)

#line 636 "/usr/local/include/quickjs/quickjs.h"
{

#line 637 "/usr/local/include/quickjs/quickjs.h"
return ((int32_t)(v).tag) == JS_TAG_SYMBOL;
#line 3569 "obj/debug.linux/form1.c"


#line 638 "/usr/local/include/quickjs/quickjs.h"
}
#line 3574 "obj/debug.linux/form1.c"


static inline int JS_IsObject(JSValue v)

#line 641 "/usr/local/include/quickjs/quickjs.h"
{

#line 642 "/usr/local/include/quickjs/quickjs.h"
return ((int32_t)(v).tag) == JS_TAG_OBJECT;
#line 3584 "obj/debug.linux/form1.c"


#line 643 "/usr/local/include/quickjs/quickjs.h"
}
#line 3589 "obj/debug.linux/form1.c"



#line 645 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_Throw(JSContext * ctx, JSValue obj);

#line 3596 "obj/debug.linux/form1.c"


#line 646 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_GetException(JSContext * ctx);

#line 3602 "obj/debug.linux/form1.c"


#line 647 "/usr/local/include/quickjs/quickjs.h"
int JS_IsError(JSContext * ctx, JSValue val);

#line 3608 "obj/debug.linux/form1.c"


#line 648 "/usr/local/include/quickjs/quickjs.h"
void JS_ResetUncatchableError(JSContext * ctx);

#line 3614 "obj/debug.linux/form1.c"


#line 649 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewError(JSContext * ctx);

#line 3620 "obj/debug.linux/form1.c"


#line 650 "/usr/local/include/quickjs/quickjs.h"
JSValue __attribute__((format (printf, 2, 3))) JS_ThrowSyntaxError(JSContext * ctx, const char * fmt, ...);

#line 3626 "obj/debug.linux/form1.c"


#line 651 "/usr/local/include/quickjs/quickjs.h"
JSValue __attribute__((format (printf, 2, 3))) JS_ThrowTypeError(JSContext * ctx, const char * fmt, ...);

#line 3632 "obj/debug.linux/form1.c"


#line 652 "/usr/local/include/quickjs/quickjs.h"
JSValue __attribute__((format (printf, 2, 3))) JS_ThrowReferenceError(JSContext * ctx, const char * fmt, ...);

#line 3638 "obj/debug.linux/form1.c"


#line 653 "/usr/local/include/quickjs/quickjs.h"
JSValue __attribute__((format (printf, 2, 3))) JS_ThrowRangeError(JSContext * ctx, const char * fmt, ...);

#line 3644 "obj/debug.linux/form1.c"


#line 654 "/usr/local/include/quickjs/quickjs.h"
JSValue __attribute__((format (printf, 2, 3))) JS_ThrowInternalError(JSContext * ctx, const char * fmt, ...);

#line 3650 "obj/debug.linux/form1.c"


#line 655 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_ThrowOutOfMemory(JSContext * ctx);

#line 3656 "obj/debug.linux/form1.c"


#line 657 "/usr/local/include/quickjs/quickjs.h"
void __JS_FreeValue(JSContext * ctx, JSValue v);

#line 3662 "obj/debug.linux/form1.c"


#line 667 "/usr/local/include/quickjs/quickjs.h"
void __JS_FreeValueRT(JSRuntime * rt, JSValue v);

#line 3668 "obj/debug.linux/form1.c"

static inline JSValue JS_DupValue(JSContext * ctx, JSValue v)

#line 679 "/usr/local/include/quickjs/quickjs.h"
{

#line 680 "/usr/local/include/quickjs/quickjs.h"
if(((unsigned)((int32_t)(v).tag) >= (unsigned)JS_TAG_FIRST))

#line 680 "/usr/local/include/quickjs/quickjs.h"
{

#line 681 "/usr/local/include/quickjs/quickjs.h"
JSRefCountHeader * p = (JSRefCountHeader *)(v.u.ptr);

#line 3684 "obj/debug.linux/form1.c"


#line 682 "/usr/local/include/quickjs/quickjs.h"
(*p).ref_count++;
#line 3689 "obj/debug.linux/form1.c"


#line 683 "/usr/local/include/quickjs/quickjs.h"
}
#line 3694 "obj/debug.linux/form1.c"

#line 3696 "obj/debug.linux/form1.c"


#line 684 "/usr/local/include/quickjs/quickjs.h"
return (JSValue)v;
#line 3701 "obj/debug.linux/form1.c"


#line 685 "/usr/local/include/quickjs/quickjs.h"
}
#line 3706 "obj/debug.linux/form1.c"


static inline JSValue JS_DupValueRT(JSRuntime * rt, JSValue v)

#line 688 "/usr/local/include/quickjs/quickjs.h"
{

#line 689 "/usr/local/include/quickjs/quickjs.h"
if(((unsigned)((int32_t)(v).tag) >= (unsigned)JS_TAG_FIRST))

#line 689 "/usr/local/include/quickjs/quickjs.h"
{

#line 690 "/usr/local/include/quickjs/quickjs.h"
JSRefCountHeader * p = (JSRefCountHeader *)(v.u.ptr);

#line 3723 "obj/debug.linux/form1.c"


#line 691 "/usr/local/include/quickjs/quickjs.h"
(*p).ref_count++;
#line 3728 "obj/debug.linux/form1.c"


#line 692 "/usr/local/include/quickjs/quickjs.h"
}
#line 3733 "obj/debug.linux/form1.c"

#line 3735 "obj/debug.linux/form1.c"


#line 693 "/usr/local/include/quickjs/quickjs.h"
return (JSValue)v;
#line 3740 "obj/debug.linux/form1.c"


#line 694 "/usr/local/include/quickjs/quickjs.h"
}
#line 3745 "obj/debug.linux/form1.c"



#line 696 "/usr/local/include/quickjs/quickjs.h"
int JS_ToBool(JSContext * ctx, JSValue val);

#line 3752 "obj/debug.linux/form1.c"


#line 697 "/usr/local/include/quickjs/quickjs.h"
int JS_ToInt32(JSContext * ctx, int32_t * pres, JSValue val);

#line 3758 "obj/debug.linux/form1.c"


#line 702 "/usr/local/include/quickjs/quickjs.h"
int JS_ToInt64(JSContext * ctx, int64_t * pres, JSValue val);

#line 3764 "obj/debug.linux/form1.c"


#line 703 "/usr/local/include/quickjs/quickjs.h"
int JS_ToIndex(JSContext * ctx, uint64_t * plen, JSValue val);

#line 3770 "obj/debug.linux/form1.c"


#line 704 "/usr/local/include/quickjs/quickjs.h"
int JS_ToFloat64(JSContext * ctx, double * pres, JSValue val);

#line 3776 "obj/debug.linux/form1.c"


#line 706 "/usr/local/include/quickjs/quickjs.h"
int JS_ToBigInt64(JSContext * ctx, int64_t * pres, JSValue val);

#line 3782 "obj/debug.linux/form1.c"


#line 708 "/usr/local/include/quickjs/quickjs.h"
int JS_ToInt64Ext(JSContext * ctx, int64_t * pres, JSValue val);

#line 3788 "obj/debug.linux/form1.c"


#line 710 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewStringLen(JSContext * ctx, const char * str1, size_t len1);

#line 3794 "obj/debug.linux/form1.c"


#line 711 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewString(JSContext * ctx, const char * str);

#line 3800 "obj/debug.linux/form1.c"


#line 712 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewAtomString(JSContext * ctx, const char * str);

#line 3806 "obj/debug.linux/form1.c"


#line 713 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_ToString(JSContext * ctx, JSValue val);

#line 3812 "obj/debug.linux/form1.c"


#line 714 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_ToPropertyKey(JSContext * ctx, JSValue val);

#line 3818 "obj/debug.linux/form1.c"


#line 715 "/usr/local/include/quickjs/quickjs.h"
const char * JS_ToCStringLen2(JSContext * ctx, size_t * plen, JSValue val1, int cesu8);

#line 3824 "obj/debug.linux/form1.c"


#line 724 "/usr/local/include/quickjs/quickjs.h"
void JS_FreeCString(JSContext * ctx, const char * ptr);

#line 3830 "obj/debug.linux/form1.c"


#line 726 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewObjectProtoClass(JSContext * ctx, JSValue proto, JSClassID class_id);

#line 3836 "obj/debug.linux/form1.c"


#line 727 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewObjectClass(JSContext * ctx, int class_id);

#line 3842 "obj/debug.linux/form1.c"


#line 728 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewObjectProto(JSContext * ctx, JSValue proto);

#line 3848 "obj/debug.linux/form1.c"


#line 729 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewObject(JSContext * ctx);

#line 3854 "obj/debug.linux/form1.c"


#line 731 "/usr/local/include/quickjs/quickjs.h"
int JS_IsFunction(JSContext * ctx, JSValue val);

#line 3860 "obj/debug.linux/form1.c"


#line 732 "/usr/local/include/quickjs/quickjs.h"
int JS_IsConstructor(JSContext * ctx, JSValue val);

#line 3866 "obj/debug.linux/form1.c"


#line 733 "/usr/local/include/quickjs/quickjs.h"
int JS_SetConstructorBit(JSContext * ctx, JSValue func_obj, int val);

#line 3872 "obj/debug.linux/form1.c"


#line 735 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewArray(JSContext * ctx);

#line 3878 "obj/debug.linux/form1.c"


#line 736 "/usr/local/include/quickjs/quickjs.h"
int JS_IsArray(JSContext * ctx, JSValue val);

#line 3884 "obj/debug.linux/form1.c"


#line 738 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_GetPropertyInternal(JSContext * ctx, JSValue obj, JSAtom prop, JSValue receiver, int throw_ref_error);

#line 3890 "obj/debug.linux/form1.c"


#line 746 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_GetPropertyStr(JSContext * ctx, JSValue this_obj, const char * prop);

#line 3896 "obj/debug.linux/form1.c"


#line 748 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_GetPropertyUint32(JSContext * ctx, JSValue this_obj, uint32_t idx);

#line 3902 "obj/debug.linux/form1.c"


#line 751 "/usr/local/include/quickjs/quickjs.h"
int JS_SetPropertyInternal(JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue val, int flags);

#line 3908 "obj/debug.linux/form1.c"


#line 759 "/usr/local/include/quickjs/quickjs.h"
int JS_SetPropertyUint32(JSContext * ctx, JSValue this_obj, uint32_t idx, JSValue val);

#line 3914 "obj/debug.linux/form1.c"


#line 761 "/usr/local/include/quickjs/quickjs.h"
int JS_SetPropertyInt64(JSContext * ctx, JSValue this_obj, int64_t idx, JSValue val);

#line 3920 "obj/debug.linux/form1.c"


#line 763 "/usr/local/include/quickjs/quickjs.h"
int JS_SetPropertyStr(JSContext * ctx, JSValue this_obj, const char * prop, JSValue val);

#line 3926 "obj/debug.linux/form1.c"


#line 765 "/usr/local/include/quickjs/quickjs.h"
int JS_HasProperty(JSContext * ctx, JSValue this_obj, JSAtom prop);

#line 3932 "obj/debug.linux/form1.c"


#line 766 "/usr/local/include/quickjs/quickjs.h"
int JS_IsExtensible(JSContext * ctx, JSValue obj);

#line 3938 "obj/debug.linux/form1.c"


#line 767 "/usr/local/include/quickjs/quickjs.h"
int JS_PreventExtensions(JSContext * ctx, JSValue obj);

#line 3944 "obj/debug.linux/form1.c"


#line 768 "/usr/local/include/quickjs/quickjs.h"
int JS_DeleteProperty(JSContext * ctx, JSValue obj, JSAtom prop, int flags);

#line 3950 "obj/debug.linux/form1.c"


#line 769 "/usr/local/include/quickjs/quickjs.h"
int JS_SetPrototype(JSContext * ctx, JSValue obj, JSValue proto_val);

#line 3956 "obj/debug.linux/form1.c"


#line 770 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_GetPrototype(JSContext * ctx, JSValue val);

#line 3962 "obj/debug.linux/form1.c"


#line 780 "/usr/local/include/quickjs/quickjs.h"
int JS_GetOwnPropertyNames(JSContext * ctx, JSPropertyEnum ** ptab, uint32_t * plen, JSValue obj, int flags);

#line 3968 "obj/debug.linux/form1.c"


#line 782 "/usr/local/include/quickjs/quickjs.h"
int JS_GetOwnProperty(JSContext * ctx, JSPropertyDescriptor * desc, JSValue obj, JSAtom prop);

#line 3974 "obj/debug.linux/form1.c"


#line 785 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_Call(JSContext * ctx, JSValue func_obj, JSValue this_obj, int argc, JSValue * argv);

#line 3980 "obj/debug.linux/form1.c"


#line 787 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_Invoke(JSContext * ctx, JSValue this_val, JSAtom atom, int argc, JSValue * argv);

#line 3986 "obj/debug.linux/form1.c"


#line 789 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_CallConstructor(JSContext * ctx, JSValue func_obj, int argc, JSValue * argv);

#line 3992 "obj/debug.linux/form1.c"


#line 791 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_CallConstructor2(JSContext * ctx, JSValue func_obj, JSValue new_target, int argc, JSValue * argv);

#line 3998 "obj/debug.linux/form1.c"


#line 794 "/usr/local/include/quickjs/quickjs.h"
int JS_DetectModule(const char * input, size_t input_len);

#line 4004 "obj/debug.linux/form1.c"


#line 796 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_Eval(JSContext * ctx, const char * input, size_t input_len, const char * filename, int eval_flags);

#line 4010 "obj/debug.linux/form1.c"


#line 799 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_EvalThis(JSContext * ctx, JSValue this_obj, const char * input, size_t input_len, const char * filename, int eval_flags);

#line 4016 "obj/debug.linux/form1.c"


#line 802 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_GetGlobalObject(JSContext * ctx);

#line 4022 "obj/debug.linux/form1.c"


#line 803 "/usr/local/include/quickjs/quickjs.h"
int JS_IsInstanceOf(JSContext * ctx, JSValue val, JSValue obj);

#line 4028 "obj/debug.linux/form1.c"


#line 804 "/usr/local/include/quickjs/quickjs.h"
int JS_DefineProperty(JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue val, JSValue getter, JSValue setter, int flags);

#line 4034 "obj/debug.linux/form1.c"


#line 807 "/usr/local/include/quickjs/quickjs.h"
int JS_DefinePropertyValue(JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue val, int flags);

#line 4040 "obj/debug.linux/form1.c"


#line 809 "/usr/local/include/quickjs/quickjs.h"
int JS_DefinePropertyValueUint32(JSContext * ctx, JSValue this_obj, uint32_t idx, JSValue val, int flags);

#line 4046 "obj/debug.linux/form1.c"


#line 811 "/usr/local/include/quickjs/quickjs.h"
int JS_DefinePropertyValueStr(JSContext * ctx, JSValue this_obj, const char * prop, JSValue val, int flags);

#line 4052 "obj/debug.linux/form1.c"


#line 813 "/usr/local/include/quickjs/quickjs.h"
int JS_DefinePropertyGetSet(JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue getter, JSValue setter, int flags);

#line 4058 "obj/debug.linux/form1.c"


#line 816 "/usr/local/include/quickjs/quickjs.h"
void JS_SetOpaque(JSValue obj, void * opaque);

#line 4064 "obj/debug.linux/form1.c"


#line 817 "/usr/local/include/quickjs/quickjs.h"
void * JS_GetOpaque(JSValue obj, JSClassID class_id);

#line 4070 "obj/debug.linux/form1.c"


#line 818 "/usr/local/include/quickjs/quickjs.h"
void * JS_GetOpaque2(JSContext * ctx, JSValue obj, JSClassID class_id);

#line 4076 "obj/debug.linux/form1.c"


#line 821 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_ParseJSON(JSContext * ctx, const char * buf, size_t buf_len, const char * filename);

#line 4082 "obj/debug.linux/form1.c"


#line 824 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_ParseJSON2(JSContext * ctx, const char * buf, size_t buf_len, const char * filename, int flags);

#line 4088 "obj/debug.linux/form1.c"


#line 826 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_JSONStringify(JSContext * ctx, JSValue obj, JSValue replacer, JSValue space0);

#line 4094 "obj/debug.linux/form1.c"


#line 829 "/usr/local/include/quickjs/quickjs.h"
typedef void JSFreeArrayBufferDataFunc(JSRuntime * rt, void * opaque, void * ptr);

#line 4100 "obj/debug.linux/form1.c"


#line 830 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewArrayBuffer(JSContext * ctx, uint8_t * buf, size_t len, JSFreeArrayBufferDataFunc * free_func, void * opaque, int is_shared);

#line 4106 "obj/debug.linux/form1.c"


#line 833 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewArrayBufferCopy(JSContext * ctx, const uint8_t * buf, size_t len);

#line 4112 "obj/debug.linux/form1.c"


#line 834 "/usr/local/include/quickjs/quickjs.h"
void JS_DetachArrayBuffer(JSContext * ctx, JSValue obj);

#line 4118 "obj/debug.linux/form1.c"


#line 835 "/usr/local/include/quickjs/quickjs.h"
uint8_t * JS_GetArrayBuffer(JSContext * ctx, size_t * psize, JSValue obj);

#line 4124 "obj/debug.linux/form1.c"


#line 836 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_GetTypedArrayBuffer(JSContext * ctx, JSValue obj, size_t * pbyte_offset, size_t * pbyte_length, size_t * pbytes_per_element);

#line 4130 "obj/debug.linux/form1.c"


#line 840 "/usr/local/include/quickjs/quickjs.h"
typedef struct
{

#line 841 "/usr/local/include/quickjs/quickjs.h"
void * (* sab_alloc)(void * opaque, size_t size);

#line 4140 "obj/debug.linux/form1.c"

#line 842 "/usr/local/include/quickjs/quickjs.h"
void (* sab_free)(void * opaque, void * ptr);

#line 4145 "obj/debug.linux/form1.c"

#line 843 "/usr/local/include/quickjs/quickjs.h"
void (* sab_dup)(void * opaque, void * ptr);

#line 4150 "obj/debug.linux/form1.c"

#line 844 "/usr/local/include/quickjs/quickjs.h"
void * sab_opaque;

#line 4155 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSSharedArrayBufferFunctions;

#line 4158 "obj/debug.linux/form1.c"


#line 846 "/usr/local/include/quickjs/quickjs.h"
void JS_SetSharedArrayBufferFunctions(JSRuntime * rt, const JSSharedArrayBufferFunctions * sf);

#line 4164 "obj/debug.linux/form1.c"


#line 849 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewPromiseCapability(JSContext * ctx, JSValue * resolving_funcs);

#line 4170 "obj/debug.linux/form1.c"


#line 852 "/usr/local/include/quickjs/quickjs.h"
typedef void JSHostPromiseRejectionTracker(JSContext * ctx, JSValue promise, JSValue reason, int is_handled, void * opaque);

#line 4176 "obj/debug.linux/form1.c"


#line 855 "/usr/local/include/quickjs/quickjs.h"
void JS_SetHostPromiseRejectionTracker(JSRuntime * rt, JSHostPromiseRejectionTracker * cb, void * opaque);

#line 4182 "obj/debug.linux/form1.c"


#line 858 "/usr/local/include/quickjs/quickjs.h"
typedef int JSInterruptHandler(JSRuntime * rt, void * opaque);

#line 4188 "obj/debug.linux/form1.c"


#line 859 "/usr/local/include/quickjs/quickjs.h"
void JS_SetInterruptHandler(JSRuntime * rt, JSInterruptHandler * cb, void * opaque);

#line 4194 "obj/debug.linux/form1.c"


#line 861 "/usr/local/include/quickjs/quickjs.h"
void JS_SetCanBlock(JSRuntime * rt, int can_block);

#line 4200 "obj/debug.linux/form1.c"


#line 863 "/usr/local/include/quickjs/quickjs.h"
void JS_SetIsHTMLDDA(JSContext * ctx, JSValue obj);

#line 4206 "obj/debug.linux/form1.c"


#line 865 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSModuleDef JSModuleDef;

#line 4212 "obj/debug.linux/form1.c"


#line 869 "/usr/local/include/quickjs/quickjs.h"
typedef char * JSModuleNormalizeFunc(JSContext * ctx, const char * module_base_name, const char * module_name, void * opaque);

#line 4218 "obj/debug.linux/form1.c"


#line 872 "/usr/local/include/quickjs/quickjs.h"
typedef JSModuleDef * JSModuleLoaderFunc(JSContext * ctx, const char * module_name, void * opaque);

#line 4224 "obj/debug.linux/form1.c"


#line 877 "/usr/local/include/quickjs/quickjs.h"
void JS_SetModuleLoaderFunc(JSRuntime * rt, JSModuleNormalizeFunc * module_normalize, JSModuleLoaderFunc * module_loader, void * opaque);

#line 4230 "obj/debug.linux/form1.c"


#line 881 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_GetImportMeta(JSContext * ctx, JSModuleDef * m);

#line 4236 "obj/debug.linux/form1.c"


#line 882 "/usr/local/include/quickjs/quickjs.h"
JSAtom JS_GetModuleName(JSContext * ctx, JSModuleDef * m);

#line 4242 "obj/debug.linux/form1.c"


#line 886 "/usr/local/include/quickjs/quickjs.h"
typedef JSValue JSJobFunc(JSContext * ctx, int argc, JSValue * argv);

#line 4248 "obj/debug.linux/form1.c"


#line 887 "/usr/local/include/quickjs/quickjs.h"
int JS_EnqueueJob(JSContext * ctx, JSJobFunc * job_func, int argc, JSValue * argv);

#line 4254 "obj/debug.linux/form1.c"


#line 889 "/usr/local/include/quickjs/quickjs.h"
int JS_IsJobPending(JSRuntime * rt);

#line 4260 "obj/debug.linux/form1.c"


#line 890 "/usr/local/include/quickjs/quickjs.h"
int JS_ExecutePendingJob(JSRuntime * rt, JSContext ** pctx);

#line 4266 "obj/debug.linux/form1.c"


#line 899 "/usr/local/include/quickjs/quickjs.h"
uint8_t * JS_WriteObject(JSContext * ctx, size_t * psize, JSValue obj, int flags);

#line 4272 "obj/debug.linux/form1.c"


#line 901 "/usr/local/include/quickjs/quickjs.h"
uint8_t * JS_WriteObject2(JSContext * ctx, size_t * psize, JSValue obj, int flags, uint8_t *** psab_tab, size_t * psab_tab_len);

#line 4278 "obj/debug.linux/form1.c"


#line 908 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_ReadObject(JSContext * ctx, const uint8_t * buf, size_t buf_len, int flags);

#line 4284 "obj/debug.linux/form1.c"


#line 912 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_EvalFunction(JSContext * ctx, JSValue fun_obj);

#line 4290 "obj/debug.linux/form1.c"


#line 915 "/usr/local/include/quickjs/quickjs.h"
int JS_ResolveModule(JSContext * ctx, JSValue obj);

#line 4296 "obj/debug.linux/form1.c"


#line 918 "/usr/local/include/quickjs/quickjs.h"
JSAtom JS_GetScriptOrModuleName(JSContext * ctx, int n_stack_levels);

#line 4302 "obj/debug.linux/form1.c"


#line 920 "/usr/local/include/quickjs/quickjs.h"
JSModuleDef * JS_RunModule(JSContext * ctx, const char * basename, const char * filename);

#line 4308 "obj/debug.linux/form1.c"


#line 924 "/usr/local/include/quickjs/quickjs.h"
typedef enum JSCFunctionEnum
{
JS_CFUNC_generic, JS_CFUNC_generic_magic, JS_CFUNC_constructor, JS_CFUNC_constructor_magic, JS_CFUNC_constructor_or_func, JS_CFUNC_constructor_or_func_magic, JS_CFUNC_f_f, JS_CFUNC_f_f_f, JS_CFUNC_getter, JS_CFUNC_setter, JS_CFUNC_getter_magic, JS_CFUNC_setter_magic, JS_CFUNC_iterator_next
} JSCFunctionEnum;

#line 4317 "obj/debug.linux/form1.c"


#line 940 "/usr/local/include/quickjs/quickjs.h"
typedef union JSCFunctionType
{

#line 941 "/usr/local/include/quickjs/quickjs.h"
JSCFunction * generic;

#line 4327 "obj/debug.linux/form1.c"

#line 942 "/usr/local/include/quickjs/quickjs.h"
JSValue (* generic_magic)(JSContext * ctx, JSValue this_val, int argc, JSValue * argv, int magic);

#line 4332 "obj/debug.linux/form1.c"

#line 943 "/usr/local/include/quickjs/quickjs.h"
JSCFunction * constructor;

#line 4337 "obj/debug.linux/form1.c"

#line 944 "/usr/local/include/quickjs/quickjs.h"
JSValue (* constructor_magic)(JSContext * ctx, JSValue new_target, int argc, JSValue * argv, int magic);

#line 4342 "obj/debug.linux/form1.c"

#line 945 "/usr/local/include/quickjs/quickjs.h"
JSCFunction * constructor_or_func;

#line 4347 "obj/debug.linux/form1.c"

#line 946 "/usr/local/include/quickjs/quickjs.h"
double (* f_f)(double);

#line 4352 "obj/debug.linux/form1.c"

#line 947 "/usr/local/include/quickjs/quickjs.h"
double (* f_f_f)(double, double);

#line 4357 "obj/debug.linux/form1.c"

#line 948 "/usr/local/include/quickjs/quickjs.h"
JSValue (* getter)(JSContext * ctx, JSValue this_val);

#line 4362 "obj/debug.linux/form1.c"

#line 949 "/usr/local/include/quickjs/quickjs.h"
JSValue (* setter)(JSContext * ctx, JSValue this_val, JSValue val);

#line 4367 "obj/debug.linux/form1.c"

#line 950 "/usr/local/include/quickjs/quickjs.h"
JSValue (* getter_magic)(JSContext * ctx, JSValue this_val, int magic);

#line 4372 "obj/debug.linux/form1.c"

#line 951 "/usr/local/include/quickjs/quickjs.h"
JSValue (* setter_magic)(JSContext * ctx, JSValue this_val, JSValue val, int magic);

#line 4377 "obj/debug.linux/form1.c"

#line 953 "/usr/local/include/quickjs/quickjs.h"
JSValue (* iterator_next)(JSContext * ctx, JSValue this_val, int argc, JSValue * argv, int * pdone, int magic);

#line 4382 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSCFunctionType;

#line 4385 "obj/debug.linux/form1.c"


#line 956 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewCFunction2(JSContext * ctx, JSCFunction * func, const char * name, int length, JSCFunctionEnum cproto, int magic);

#line 4391 "obj/debug.linux/form1.c"


#line 959 "/usr/local/include/quickjs/quickjs.h"
JSValue JS_NewCFunctionData(JSContext * ctx, JSCFunctionData * func, int length, int magic, int data_len, JSValue * data);

#line 4397 "obj/debug.linux/form1.c"


#line 975 "/usr/local/include/quickjs/quickjs.h"
void JS_SetConstructor(JSContext * ctx, JSValue func_obj, JSValue proto);

#line 4403 "obj/debug.linux/form1.c"


#line 980 "/usr/local/include/quickjs/quickjs.h"
typedef struct JSCFunctionListEntry
{

#line 981 "/usr/local/include/quickjs/quickjs.h"
const char * name;

#line 4413 "obj/debug.linux/form1.c"

#line 982 "/usr/local/include/quickjs/quickjs.h"
uint8_t prop_flags;

#line 4418 "obj/debug.linux/form1.c"

#line 983 "/usr/local/include/quickjs/quickjs.h"
uint8_t def_type;

#line 4423 "obj/debug.linux/form1.c"

#line 984 "/usr/local/include/quickjs/quickjs.h"
int16_t magic;

#line 4428 "obj/debug.linux/form1.c"

#line 985 "/usr/local/include/quickjs/quickjs.h"
union
{

#line 986 "/usr/local/include/quickjs/quickjs.h"
struct
{

#line 987 "/usr/local/include/quickjs/quickjs.h"
uint8_t length;

#line 4441 "obj/debug.linux/form1.c"

#line 988 "/usr/local/include/quickjs/quickjs.h"
uint8_t cproto;

#line 4446 "obj/debug.linux/form1.c"

#line 989 "/usr/local/include/quickjs/quickjs.h"
JSCFunctionType cfunc;

#line 4451 "obj/debug.linux/form1.c"
} ecere_gcc_struct func;

#line 4454 "obj/debug.linux/form1.c"

#line 991 "/usr/local/include/quickjs/quickjs.h"
struct
{

#line 993 "/usr/local/include/quickjs/quickjs.h"
JSCFunctionType qjs_get, qjs_set;

#line 4463 "obj/debug.linux/form1.c"
} ecere_gcc_struct getset;

#line 4466 "obj/debug.linux/form1.c"

#line 999 "/usr/local/include/quickjs/quickjs.h"
struct
{

#line 1000 "/usr/local/include/quickjs/quickjs.h"
const char * name;

#line 4475 "obj/debug.linux/form1.c"

#line 1001 "/usr/local/include/quickjs/quickjs.h"
int base;

#line 4480 "obj/debug.linux/form1.c"
} ecere_gcc_struct alias;

#line 4483 "obj/debug.linux/form1.c"

#line 1003 "/usr/local/include/quickjs/quickjs.h"
struct
{

#line 1004 "/usr/local/include/quickjs/quickjs.h"
const struct JSCFunctionListEntry * tab;

#line 4492 "obj/debug.linux/form1.c"

#line 1005 "/usr/local/include/quickjs/quickjs.h"
int len;

#line 4497 "obj/debug.linux/form1.c"
} ecere_gcc_struct prop_list;

#line 4500 "obj/debug.linux/form1.c"

#line 1007 "/usr/local/include/quickjs/quickjs.h"
const char * str;

#line 4505 "obj/debug.linux/form1.c"

#line 1008 "/usr/local/include/quickjs/quickjs.h"
int32_t i32;

#line 4510 "obj/debug.linux/form1.c"

#line 1009 "/usr/local/include/quickjs/quickjs.h"
int64_t i64;

#line 4515 "obj/debug.linux/form1.c"

#line 1010 "/usr/local/include/quickjs/quickjs.h"
double f64;

#line 4520 "obj/debug.linux/form1.c"
} ecere_gcc_struct u;

#line 4523 "obj/debug.linux/form1.c"
} ecere_gcc_struct JSCFunctionListEntry;

#line 4526 "obj/debug.linux/form1.c"


#line 1041 "/usr/local/include/quickjs/quickjs.h"
void JS_SetPropertyFunctionList(JSContext * ctx, JSValue obj, const JSCFunctionListEntry * tab, int len);

#line 4532 "obj/debug.linux/form1.c"


#line 1047 "/usr/local/include/quickjs/quickjs.h"
typedef int JSModuleInitFunc(JSContext * ctx, JSModuleDef * m);

#line 4538 "obj/debug.linux/form1.c"


#line 1049 "/usr/local/include/quickjs/quickjs.h"
JSModuleDef * JS_NewCModule(JSContext * ctx, const char * name_str, JSModuleInitFunc * func);

#line 4544 "obj/debug.linux/form1.c"


#line 1052 "/usr/local/include/quickjs/quickjs.h"
int JS_AddModuleExport(JSContext * ctx, JSModuleDef * m, const char * name_str);

#line 4550 "obj/debug.linux/form1.c"


#line 1053 "/usr/local/include/quickjs/quickjs.h"
int JS_AddModuleExportList(JSContext * ctx, JSModuleDef * m, const JSCFunctionListEntry * tab, int len);

#line 4556 "obj/debug.linux/form1.c"


#line 1056 "/usr/local/include/quickjs/quickjs.h"
int JS_SetModuleExport(JSContext * ctx, JSModuleDef * m, const char * export_name, JSValue val);

#line 4562 "obj/debug.linux/form1.c"


#line 1058 "/usr/local/include/quickjs/quickjs.h"
int JS_SetModuleExportList(JSContext * ctx, JSModuleDef * m, const JSCFunctionListEntry * tab, int len);

#line 4568 "obj/debug.linux/form1.c"


#line 8 "form1.ec"
char outputgedamo[10000] = "no output";

#line 4574 "obj/debug.linux/form1.c"


#line 197 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * scene;

#line 4580 "obj/debug.linux/form1.c"


#line 199 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * cubesMap;

#line 4586 "obj/debug.linux/form1.c"


#line 223 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;

#line 4592 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_caption;

#line 4598 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_background;

#line 4604 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;

#line 4610 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize;

#line 4616 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize;

#line 4622 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasClose;

#line 4628 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_size;

#line 4634 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_parent;

#line 4640 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_opacity;

#line 4646 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_position;

#line 4652 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displayDriver;

#line 4658 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_opacity;

#line 4664 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_foreground;

#line 4670 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_font;

#line 4676 "obj/debug.linux/form1.c"


#line 433 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_faceName;

#line 4682 "obj/debug.linux/form1.c"


#line 433 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_size;

#line 4688 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasVertScroll;

#line 4694 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLine;

#line 4700 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_contents;

#line 4706 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_syntaxHighlighting;

#line 4712 "obj/debug.linux/form1.c"


#line 521 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_anchor;

#line 4718 "obj/debug.linux/form1.c"


#line 571 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_labeledWindow;

#line 4724 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp_SyntaxColorScheme_keywordColors;

#line 4730 "obj/debug.linux/form1.c"


#line 529 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__MapIterator_map;

#line 4736 "obj/debug.linux/form1.c"


#line 536 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;

#line 4742 "obj/debug.linux/form1.c"


#line 543 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__Iterator_data;

#line 4748 "obj/debug.linux/form1.c"


#line 553 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material;

#line 4754 "obj/debug.linux/form1.c"


#line 475 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLineContents;

#line 4760 "obj/debug.linux/form1.c"


#line 270 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__ZString_char__PTR_;

#line 4766 "obj/debug.linux/form1.c"


#line 272 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__ZString_string;

#line 4772 "obj/debug.linux/form1.c"


#line 418 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__ZString_String;

#line 4778 "obj/debug.linux/form1.c"


#line 617 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;

#line 4784 "obj/debug.linux/form1.c"


#line 637 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;

#line 4790 "obj/debug.linux/form1.c"


#line 637 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 4796 "obj/debug.linux/form1.c"


#line 700 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;

#line 4802 "obj/debug.linux/form1.c"


#line 721 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Key___ecereNameSpace__ecere__gui__SmartKey;

#line 4808 "obj/debug.linux/form1.c"


#line 723 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;

#line 4814 "obj/debug.linux/form1.c"


#line 733 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh;

#line 4820 "obj/debug.linux/form1.c"


#line 785 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogColor;

#line 4826 "obj/debug.linux/form1.c"


#line 785 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_display;

#line 4832 "obj/debug.linux/form1.c"


#line 786 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;

#line 4838 "obj/debug.linux/form1.c"


#line 792 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_antiAlias;

#line 4844 "obj/debug.linux/form1.c"


#line 797 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_ambient;

#line 4850 "obj/debug.linux/form1.c"


#line 865 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Color___ecereNameSpace__ecere__gfx__ColorRGB;

#line 4856 "obj/debug.linux/form1.c"


#line 192 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D
{

#line 192 "form1.ec"
double x;

#line 4866 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
double y;

#line 4871 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
double z;

#line 4876 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 4879 "obj/debug.linux/form1.c"


#line 192 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion
{

#line 192 "form1.ec"
double w;

#line 4889 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
double x;

#line 4894 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
double y;

#line 4899 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
double z;

#line 4904 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 4907 "obj/debug.linux/form1.c"


#line 192 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df
{

#line 192 "form1.ec"
float x;

#line 4917 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
float y;

#line 4922 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
float z;

#line 4927 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 4930 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 4936 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 194 "form1.ec"
void *  first;

#line 4946 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void *  last;

#line 4951 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int count;

#line 4956 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int offset;

#line 4961 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int circ;

#line 4966 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 4969 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 194 "form1.ec"
union
{

#line 194 "form1.ec"
char c;

#line 4983 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned char uc;

#line 4988 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
short s;

#line 4993 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned short us;

#line 4998 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int i;

#line 5003 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int ui;

#line 5008 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void *  p;

#line 5013 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
float f;

#line 5018 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
double d;

#line 5023 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
long long i64;

#line 5028 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
uint64 ui64;

#line 5033 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 5036 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5039 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 1 "form1.ec"
unsigned char *  _buffer;

#line 5049 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
size_t count;

#line 5054 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
size_t _size;

#line 5059 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
size_t pos;

#line 5064 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5067 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 5073 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 5079 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 5085 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 5091 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 5097 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern char *  strcat(char * , const char * );

#line 5103 "obj/debug.linux/form1.c"


#line 41 "form1.ec"
extern double strtod(const char * , char * * );

#line 5109 "obj/debug.linux/form1.c"


#line 80 "form1.ec"
extern char *  strcpy(char * , const char * );

#line 5115 "obj/debug.linux/form1.c"


#line 162 "form1.ec"
extern size_t strlen(const char * );

#line 5121 "obj/debug.linux/form1.c"


#line 176 "form1.ec"
extern char *  (* __ecereFunction___ecereNameSpace__ecere__sys__CopyString)(const char *  string);

#line 5127 "obj/debug.linux/form1.c"


#line 209 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler
{

#line 209 "form1.ec"
double yaw;

#line 5137 "obj/debug.linux/form1.c"

#line 209 "form1.ec"
double pitch;

#line 5142 "obj/debug.linux/form1.c"

#line 209 "form1.ec"
double roll;

#line 5147 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5150 "obj/debug.linux/form1.c"


#line 215 "form1.ec"
struct __ecereNameSpace__ecere__gfx__DisplaySystem
{

#line 215 "form1.ec"
unsigned char __ecerePrivateData0[24];

#line 5160 "obj/debug.linux/form1.c"

#line 215 "form1.ec"
int pixelFormat;

#line 5165 "obj/debug.linux/form1.c"

#line 215 "form1.ec"
unsigned int flags;

#line 5170 "obj/debug.linux/form1.c"

#line 215 "form1.ec"
char __ecere_padding1[160];

#line 5175 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5178 "obj/debug.linux/form1.c"


#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Cube;

#line 5184 "obj/debug.linux/form1.c"


#line 218 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point
{

#line 218 "form1.ec"
int x;

#line 5194 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
int y;

#line 5199 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5202 "obj/debug.linux/form1.c"


#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB
{

#line 218 "form1.ec"
float r;

#line 5212 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
float g;

#line 5217 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
float b;

#line 5222 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5225 "obj/debug.linux/form1.c"


#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Object;

#line 5231 "obj/debug.linux/form1.c"


#line 230 "form1.ec"
extern __attribute__ ((visibility("default"))) const char *  __ecereNameSpace__ecere__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

#line 5237 "obj/debug.linux/form1.c"


#line 236 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size
{

#line 236 "form1.ec"
int w;

#line 5247 "obj/debug.linux/form1.c"

#line 236 "form1.ec"
int h;

#line 5252 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5255 "obj/debug.linux/form1.c"


#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Array
{

#line 435 "form1.ec"
uint64 *  array;

#line 5265 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int count;

#line 5270 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int minAllocSize;

#line 5275 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5278 "obj/debug.linux/form1.c"


#line 452 "form1.ec"
struct __ecereNameSpace__ecere__gui__controls__EditLine;

#line 5284 "obj/debug.linux/form1.c"


#line 494 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer;

#line 5290 "obj/debug.linux/form1.c"


#line 506 "form1.ec"
extern int atoi(const char * );

#line 5296 "obj/debug.linux/form1.c"


#line 523 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue
{

#line 523 "form1.ec"
int type;

#line 5306 "obj/debug.linux/form1.c"

#line 523 "form1.ec"
union
{

#line 523 "form1.ec"
int distance;

#line 5315 "obj/debug.linux/form1.c"

#line 523 "form1.ec"
float percent;

#line 5320 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 5323 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5326 "obj/debug.linux/form1.c"


#line 523 "form1.ec"
struct __ecereNameSpace__ecere__gui__MiddleAnchorValue
{

#line 523 "form1.ec"
int type;

#line 5336 "obj/debug.linux/form1.c"

#line 523 "form1.ec"
union
{

#line 523 "form1.ec"
int distance;

#line 5345 "obj/debug.linux/form1.c"

#line 523 "form1.ec"
float percent;

#line 5350 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 5353 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5356 "obj/debug.linux/form1.c"


#line 538 "form1.ec"
extern int (* __ecereFunction___ecereNameSpace__ecere__sys__GetRandom)(int lo, int hi);

#line 5362 "obj/debug.linux/form1.c"


#line 266 "form1.ec"
struct __ecereNameSpace__ecere__sys__ZString
{

#line 266 "form1.ec"
char *  _string;

#line 5372 "obj/debug.linux/form1.c"

#line 266 "form1.ec"
int len;

#line 5377 "obj/debug.linux/form1.c"

#line 266 "form1.ec"
int allocType;

#line 5382 "obj/debug.linux/form1.c"

#line 266 "form1.ec"
int size;

#line 5387 "obj/debug.linux/form1.c"

#line 266 "form1.ec"
int minSize;

#line 5392 "obj/debug.linux/form1.c"

#line 266 "form1.ec"
int maxSize;

#line 5397 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5400 "obj/debug.linux/form1.c"


#line 410 "form1.ec"
extern int (* __ecereFunction___ecereNameSpace__ecere__sys__EscapeCString)(char * outString, int bufferLen, const char * s, unsigned int options);

#line 5406 "obj/debug.linux/form1.c"


#line 803 "form1.ec"
struct __ecereNameSpace__ecere__sys__Box
{

#line 803 "form1.ec"
int left;

#line 5416 "obj/debug.linux/form1.c"

#line 803 "form1.ec"
int top;

#line 5421 "obj/debug.linux/form1.c"

#line 803 "form1.ec"
int right;

#line 5426 "obj/debug.linux/form1.c"

#line 803 "form1.ec"
int bottom;

#line 5431 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5434 "obj/debug.linux/form1.c"


#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx__drivers__Shader
{

#line 815 "form1.ec"
unsigned char __ecerePrivateData0[24];

#line 5444 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
uint64 state;

#line 5449 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int modifiedUniforms;

#line 5454 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
char __ecere_padding2[44];

#line 5459 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5462 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction;

#line 5468 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;

#line 5474 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_zMin;

#line 5480 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;

#line 5486 "obj/debug.linux/form1.c"


#line 552 "form1.ec"
extern int __ecereVMethodID_class_OnCopy;

#line 5492 "obj/debug.linux/form1.c"


#line 700 "form1.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians)(double this);

#line 5498 "obj/debug.linux/form1.c"


#line 700 "form1.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians)(double value);

#line 5504 "obj/debug.linux/form1.c"


#line 721 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey)(unsigned int this);

#line 5510 "obj/debug.linux/form1.c"


#line 860 "form1.ec"
extern int __ecereVMethodID_class_OnGetDataFromString;

#line 5516 "obj/debug.linux/form1.c"

static inline __attribute__((always_inline)) JSValue JS_NewFloat64(JSContext * ctx, double d)

#line 561 "/usr/local/include/quickjs/quickjs.h"
{

#line 562 "/usr/local/include/quickjs/quickjs.h"
JSValue v;

#line 5526 "obj/debug.linux/form1.c"

#line 563 "/usr/local/include/quickjs/quickjs.h"
int32_t val;

#line 5531 "obj/debug.linux/form1.c"

#line 564 "/usr/local/include/quickjs/quickjs.h"
union
{

#line 565 "/usr/local/include/quickjs/quickjs.h"
double d;

#line 5540 "obj/debug.linux/form1.c"

#line 566 "/usr/local/include/quickjs/quickjs.h"
uint64_t u;

#line 5545 "obj/debug.linux/form1.c"
} ecere_gcc_struct u, t;

#line 5548 "obj/debug.linux/form1.c"


#line 568 "/usr/local/include/quickjs/quickjs.h"
u.d = d;
#line 5553 "obj/debug.linux/form1.c"


#line 569 "/usr/local/include/quickjs/quickjs.h"
val = (int32_t)d;
#line 5558 "obj/debug.linux/form1.c"


#line 570 "/usr/local/include/quickjs/quickjs.h"
t.d = (double)val;
#line 5563 "obj/debug.linux/form1.c"


#line 573 "/usr/local/include/quickjs/quickjs.h"
if(u.u == t.u)

#line 573 "/usr/local/include/quickjs/quickjs.h"
{

#line 574 "/usr/local/include/quickjs/quickjs.h"
v = __extension__ (
#line 574 "/usr/local/include/quickjs/quickjs.h"
{

#line 574 "/usr/local/include/quickjs/quickjs.h"
JSValue v =
{

#line 574 "/usr/local/include/quickjs/quickjs.h"

{

#line 574 "/usr/local/include/quickjs/quickjs.h"
0
}
#line 574 "/usr/local/include/quickjs/quickjs.h"

}
#line 574 "/usr/local/include/quickjs/quickjs.h"
;

#line 5594 "obj/debug.linux/form1.c"


#line 574 "/usr/local/include/quickjs/quickjs.h"
v.u.qjs_int32 = val;
#line 5599 "obj/debug.linux/form1.c"


#line 574 "/usr/local/include/quickjs/quickjs.h"
v.tag = JS_TAG_INT;
#line 5604 "obj/debug.linux/form1.c"


#line 574 "/usr/local/include/quickjs/quickjs.h"
v;
#line 5609 "obj/debug.linux/form1.c"


#line 574 "/usr/local/include/quickjs/quickjs.h"
}
#line 5614 "obj/debug.linux/form1.c"
)
#line 574 "/usr/local/include/quickjs/quickjs.h"
;
#line 5618 "obj/debug.linux/form1.c"


#line 575 "/usr/local/include/quickjs/quickjs.h"
}
#line 5623 "obj/debug.linux/form1.c"

else

#line 575 "/usr/local/include/quickjs/quickjs.h"
{

#line 576 "/usr/local/include/quickjs/quickjs.h"
v = __JS_NewFloat64(ctx, d);
#line 5632 "obj/debug.linux/form1.c"


#line 577 "/usr/local/include/quickjs/quickjs.h"
}
#line 5637 "obj/debug.linux/form1.c"

#line 5639 "obj/debug.linux/form1.c"


#line 578 "/usr/local/include/quickjs/quickjs.h"
return v;
#line 5644 "obj/debug.linux/form1.c"


#line 579 "/usr/local/include/quickjs/quickjs.h"
}
#line 5649 "obj/debug.linux/form1.c"


static inline __attribute__((always_inline)) JSValue JS_NewInt64(JSContext * ctx, int64_t val)

#line 536 "/usr/local/include/quickjs/quickjs.h"
{

#line 537 "/usr/local/include/quickjs/quickjs.h"
JSValue v;

#line 5660 "obj/debug.linux/form1.c"


#line 538 "/usr/local/include/quickjs/quickjs.h"
if(val == (int32_t)val)

#line 538 "/usr/local/include/quickjs/quickjs.h"
{

#line 539 "/usr/local/include/quickjs/quickjs.h"
v = JS_NewInt32(ctx, (int32_t)val);
#line 5671 "obj/debug.linux/form1.c"


#line 540 "/usr/local/include/quickjs/quickjs.h"
}
#line 5676 "obj/debug.linux/form1.c"

else

#line 540 "/usr/local/include/quickjs/quickjs.h"
{

#line 541 "/usr/local/include/quickjs/quickjs.h"
v = __JS_NewFloat64(ctx, (double)val);
#line 5685 "obj/debug.linux/form1.c"


#line 542 "/usr/local/include/quickjs/quickjs.h"
}
#line 5690 "obj/debug.linux/form1.c"

#line 5692 "obj/debug.linux/form1.c"


#line 543 "/usr/local/include/quickjs/quickjs.h"
return v;
#line 5697 "obj/debug.linux/form1.c"


#line 544 "/usr/local/include/quickjs/quickjs.h"
}
#line 5702 "obj/debug.linux/form1.c"


static inline __attribute__((always_inline)) JSValue JS_NewUint32(JSContext * ctx, uint32_t val)

#line 547 "/usr/local/include/quickjs/quickjs.h"
{

#line 548 "/usr/local/include/quickjs/quickjs.h"
JSValue v;

#line 5713 "obj/debug.linux/form1.c"


#line 549 "/usr/local/include/quickjs/quickjs.h"
if(val <= 0x7fffffff)

#line 549 "/usr/local/include/quickjs/quickjs.h"
{

#line 550 "/usr/local/include/quickjs/quickjs.h"
v = JS_NewInt32(ctx, val);
#line 5724 "obj/debug.linux/form1.c"


#line 551 "/usr/local/include/quickjs/quickjs.h"
}
#line 5729 "obj/debug.linux/form1.c"

else

#line 551 "/usr/local/include/quickjs/quickjs.h"
{

#line 552 "/usr/local/include/quickjs/quickjs.h"
v = __JS_NewFloat64(ctx, (double)val);
#line 5738 "obj/debug.linux/form1.c"


#line 553 "/usr/local/include/quickjs/quickjs.h"
}
#line 5743 "obj/debug.linux/form1.c"

#line 5745 "obj/debug.linux/form1.c"


#line 554 "/usr/local/include/quickjs/quickjs.h"
return v;
#line 5750 "obj/debug.linux/form1.c"


#line 555 "/usr/local/include/quickjs/quickjs.h"
}
#line 5755 "obj/debug.linux/form1.c"


static inline void JS_FreeValue(JSContext * ctx, JSValue v)

#line 659 "/usr/local/include/quickjs/quickjs.h"
{

#line 660 "/usr/local/include/quickjs/quickjs.h"
if(((unsigned)((int32_t)(v).tag) >= (unsigned)JS_TAG_FIRST))

#line 660 "/usr/local/include/quickjs/quickjs.h"
{

#line 661 "/usr/local/include/quickjs/quickjs.h"
JSRefCountHeader * p = (JSRefCountHeader *)(v.u.ptr);

#line 5772 "obj/debug.linux/form1.c"


#line 662 "/usr/local/include/quickjs/quickjs.h"
if(--(*p).ref_count <= 0)

#line 662 "/usr/local/include/quickjs/quickjs.h"
{

#line 663 "/usr/local/include/quickjs/quickjs.h"
__JS_FreeValue(ctx, v);
#line 5783 "obj/debug.linux/form1.c"


#line 664 "/usr/local/include/quickjs/quickjs.h"
}
#line 5788 "obj/debug.linux/form1.c"

#line 5790 "obj/debug.linux/form1.c"


#line 665 "/usr/local/include/quickjs/quickjs.h"
}
#line 5795 "obj/debug.linux/form1.c"

#line 5797 "obj/debug.linux/form1.c"


#line 666 "/usr/local/include/quickjs/quickjs.h"
}
#line 5802 "obj/debug.linux/form1.c"


static inline void JS_FreeValueRT(JSRuntime * rt, JSValue v)

#line 669 "/usr/local/include/quickjs/quickjs.h"
{

#line 670 "/usr/local/include/quickjs/quickjs.h"
if(((unsigned)((int32_t)(v).tag) >= (unsigned)JS_TAG_FIRST))

#line 670 "/usr/local/include/quickjs/quickjs.h"
{

#line 671 "/usr/local/include/quickjs/quickjs.h"
JSRefCountHeader * p = (JSRefCountHeader *)(v.u.ptr);

#line 5819 "obj/debug.linux/form1.c"


#line 672 "/usr/local/include/quickjs/quickjs.h"
if(--(*p).ref_count <= 0)

#line 672 "/usr/local/include/quickjs/quickjs.h"
{

#line 673 "/usr/local/include/quickjs/quickjs.h"
__JS_FreeValueRT(rt, v);
#line 5830 "obj/debug.linux/form1.c"


#line 674 "/usr/local/include/quickjs/quickjs.h"
}
#line 5835 "obj/debug.linux/form1.c"

#line 5837 "obj/debug.linux/form1.c"


#line 675 "/usr/local/include/quickjs/quickjs.h"
}
#line 5842 "obj/debug.linux/form1.c"

#line 5844 "obj/debug.linux/form1.c"


#line 676 "/usr/local/include/quickjs/quickjs.h"
}
#line 5849 "obj/debug.linux/form1.c"


static inline int JS_ToUint32(JSContext * ctx, uint32_t * pres, JSValue val)

#line 699 "/usr/local/include/quickjs/quickjs.h"
{

#line 700 "/usr/local/include/quickjs/quickjs.h"
return JS_ToInt32(ctx, (int32_t *)pres, val);
#line 5859 "obj/debug.linux/form1.c"


#line 701 "/usr/local/include/quickjs/quickjs.h"
}
#line 5864 "obj/debug.linux/form1.c"


static inline const char * JS_ToCStringLen(JSContext * ctx, size_t * plen, JSValue val1)

#line 717 "/usr/local/include/quickjs/quickjs.h"
{

#line 718 "/usr/local/include/quickjs/quickjs.h"
return JS_ToCStringLen2(ctx, plen, val1, 0);
#line 5874 "obj/debug.linux/form1.c"


#line 719 "/usr/local/include/quickjs/quickjs.h"
}
#line 5879 "obj/debug.linux/form1.c"


static inline const char * JS_ToCString(JSContext * ctx, JSValue val1)

#line 721 "/usr/local/include/quickjs/quickjs.h"
{

#line 722 "/usr/local/include/quickjs/quickjs.h"
return JS_ToCStringLen2(ctx, ((void *)0), val1, 0);
#line 5889 "obj/debug.linux/form1.c"


#line 723 "/usr/local/include/quickjs/quickjs.h"
}
#line 5894 "obj/debug.linux/form1.c"


static inline __attribute__((always_inline)) JSValue JS_GetProperty(JSContext * ctx, JSValue this_obj, JSAtom prop)

#line 743 "/usr/local/include/quickjs/quickjs.h"
{

#line 744 "/usr/local/include/quickjs/quickjs.h"
return JS_GetPropertyInternal(ctx, this_obj, prop, this_obj, 0);
#line 5904 "obj/debug.linux/form1.c"


#line 745 "/usr/local/include/quickjs/quickjs.h"
}
#line 5909 "obj/debug.linux/form1.c"


static inline int JS_SetProperty(JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue val)

#line 756 "/usr/local/include/quickjs/quickjs.h"
{

#line 757 "/usr/local/include/quickjs/quickjs.h"
return JS_SetPropertyInternal(ctx, this_obj, prop, val, (1 << 14));
#line 5919 "obj/debug.linux/form1.c"


#line 758 "/usr/local/include/quickjs/quickjs.h"
}
#line 5924 "obj/debug.linux/form1.c"


static inline JSValue JS_NewCFunction(JSContext * ctx, JSCFunction * func, const char * name, int length)

#line 965 "/usr/local/include/quickjs/quickjs.h"
{

#line 966 "/usr/local/include/quickjs/quickjs.h"
return JS_NewCFunction2(ctx, func, name, length, JS_CFUNC_generic, 0);
#line 5934 "obj/debug.linux/form1.c"


#line 967 "/usr/local/include/quickjs/quickjs.h"
}
#line 5939 "obj/debug.linux/form1.c"


static inline JSValue JS_NewCFunctionMagic(JSContext * ctx, JSCFunctionMagic * func, const char * name, int length, JSCFunctionEnum cproto, int magic)

#line 972 "/usr/local/include/quickjs/quickjs.h"
{

#line 973 "/usr/local/include/quickjs/quickjs.h"
return JS_NewCFunction2(ctx, (JSCFunction *)(void *)func, name, length, cproto, magic);
#line 5949 "obj/debug.linux/form1.c"


#line 974 "/usr/local/include/quickjs/quickjs.h"
}
#line 5954 "obj/debug.linux/form1.c"



#line 202 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Camera
{

#line 202 "form1.ec"
unsigned char __ecerePrivateData0[24];

#line 5965 "obj/debug.linux/form1.c"

#line 202 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D position;

#line 5970 "obj/debug.linux/form1.c"

#line 202 "form1.ec"
char __ecere_padding1[1056];

#line 5975 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 5978 "obj/debug.linux/form1.c"


#line 192 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform
{

#line 192 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D position;

#line 5988 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion orientation;

#line 5993 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df scaling;

#line 5998 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6001 "obj/debug.linux/form1.c"


#line 733 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Mesh
{

#line 733 "form1.ec"
unsigned char __ecerePrivateData0[56];

#line 6011 "obj/debug.linux/form1.c"

#line 733 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList groups;

#line 6016 "obj/debug.linux/form1.c"

#line 733 "form1.ec"
char __ecere_padding1[160];

#line 6021 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6024 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * camera;

#line 6030 "obj/debug.linux/form1.c"


#line 637 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion)(struct __ecereNameSpace__ecere__gfx3D__Euler * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 6036 "obj/debug.linux/form1.c"


#line 637 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion)(struct __ecereNameSpace__ecere__gfx3D__Euler * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 6042 "obj/debug.linux/form1.c"


#line 865 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Color_Get___ecereNameSpace__ecere__gfx__ColorRGB)(unsigned int this, struct __ecereNameSpace__ecere__gfx__ColorRGB * value);

#line 6048 "obj/debug.linux/form1.c"


#line 865 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gfx__Color_Set___ecereNameSpace__ecere__gfx__ColorRGB)(struct __ecereNameSpace__ecere__gfx__ColorRGB * value);

#line 6054 "obj/debug.linux/form1.c"


#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Light
{

#line 218 "form1.ec"
unsigned int flags;

#line 6064 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB ambient;

#line 6069 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB diffuse;

#line 6074 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB specular;

#line 6079 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D direction;

#line 6084 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion orientation;

#line 6089 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * lightObject;

#line 6094 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * target;

#line 6099 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
double fallOff;

#line 6104 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
double hotSpot;

#line 6109 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
float Kc;

#line 6114 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
float Kl;

#line 6119 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
float Kq;

#line 6124 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
double start;

#line 6129 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
double end;

#line 6134 "obj/debug.linux/form1.c"

#line 218 "form1.ec"
float multiplier;

#line 6139 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6142 "obj/debug.linux/form1.c"


#line 535 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 6148 "obj/debug.linux/form1.c"


#line 556 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Object * object);

#line 6154 "obj/debug.linux/form1.c"


#line 559 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Object * model);

#line 6160 "obj/debug.linux/form1.c"


#line 560 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 6166 "obj/debug.linux/form1.c"


#line 452 "form1.ec"
struct __ecereNameSpace__ecere__gui__controls__BufferLocation
{

#line 452 "form1.ec"
struct __ecereNameSpace__ecere__gui__controls__EditLine * line;

#line 6176 "obj/debug.linux/form1.c"

#line 452 "form1.ec"
int y;

#line 6181 "obj/debug.linux/form1.c"

#line 452 "form1.ec"
int x;

#line 6186 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6189 "obj/debug.linux/form1.c"


#line 523 "form1.ec"
struct __ecereNameSpace__ecere__gui__Anchor
{

#line 523 "form1.ec"
union
{

#line 523 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue left;

#line 6203 "obj/debug.linux/form1.c"

#line 523 "form1.ec"
struct __ecereNameSpace__ecere__gui__MiddleAnchorValue horz;

#line 6208 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 6211 "obj/debug.linux/form1.c"

#line 523 "form1.ec"
union
{

#line 523 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue top;

#line 6220 "obj/debug.linux/form1.c"

#line 523 "form1.ec"
struct __ecereNameSpace__ecere__gui__MiddleAnchorValue vert;

#line 6225 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon2;

#line 6228 "obj/debug.linux/form1.c"

#line 523 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue right;

#line 6233 "obj/debug.linux/form1.c"

#line 523 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue bottom;

#line 6238 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6241 "obj/debug.linux/form1.c"


#line 803 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Surface
{

#line 803 "form1.ec"
int width;

#line 6251 "obj/debug.linux/form1.c"

#line 803 "form1.ec"
int height;

#line 6256 "obj/debug.linux/form1.c"

#line 803 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point offset;

#line 6261 "obj/debug.linux/form1.c"

#line 803 "form1.ec"
struct __ecereNameSpace__ecere__sys__Box box;

#line 6266 "obj/debug.linux/form1.c"

#line 803 "form1.ec"
struct __ecereNameSpace__ecere__sys__Box unclippedBox;

#line 6271 "obj/debug.linux/form1.c"

#line 803 "form1.ec"
void *  driverData;

#line 6276 "obj/debug.linux/form1.c"

#line 803 "form1.ec"
char __ecere_padding1[72];

#line 6281 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6284 "obj/debug.linux/form1.c"

static JSValue js_result(JSContext * ctx, JSValue this_val, int argc, JSValue * argv)

#line 70 "form1.ec"
{

#line 78 "form1.ec"
int i;

#line 6294 "obj/debug.linux/form1.c"

#line 79 "form1.ec"
char const * s;

#line 6299 "obj/debug.linux/form1.c"


#line 80 "form1.ec"
strcpy(outputgedamo, "");
#line 6304 "obj/debug.linux/form1.c"


#line 81 "form1.ec"
for(
#line 81 "form1.ec"
i = 0;
#line 6311 "obj/debug.linux/form1.c"
 
#line 81 "form1.ec"
i < argc;
#line 6315 "obj/debug.linux/form1.c"
 
#line 92 "form1.ec"
++i)

#line 82 "form1.ec"
{

#line 83 "form1.ec"
puts("here1");
#line 6325 "obj/debug.linux/form1.c"


#line 84 "form1.ec"
s = JS_ToCString(ctx, argv[i]);
#line 6330 "obj/debug.linux/form1.c"


#line 85 "form1.ec"
puts("here2");
#line 6335 "obj/debug.linux/form1.c"


#line 86 "form1.ec"
if(!s)

#line 86 "form1.ec"
return this_val;
#line 6343 "obj/debug.linux/form1.c"

#line 6345 "obj/debug.linux/form1.c"


#line 88 "form1.ec"
puts("here3");
#line 6350 "obj/debug.linux/form1.c"


#line 89 "form1.ec"
strcat(outputgedamo, s);
#line 6355 "obj/debug.linux/form1.c"


#line 90 "form1.ec"
JS_FreeCString(ctx, s);
#line 6360 "obj/debug.linux/form1.c"


#line 91 "form1.ec"
puts("here4");
#line 6365 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
}
#line 6370 "obj/debug.linux/form1.c"

#line 6372 "obj/debug.linux/form1.c"


#line 94 "form1.ec"
return this_val;
#line 6377 "obj/debug.linux/form1.c"


#line 95 "form1.ec"
}
#line 6382 "obj/debug.linux/form1.c"


JSValue jsFprint(JSContext * ctx, JSValue jsThis, int argc, JSValue * argv, FILE * f)

#line 110 "form1.ec"
{

#line 111 "form1.ec"
int i;

#line 6393 "obj/debug.linux/form1.c"


#line 112 "form1.ec"
for(
#line 112 "form1.ec"
i = 0;
#line 6400 "obj/debug.linux/form1.c"
 
#line 112 "form1.ec"
i < argc;
#line 6404 "obj/debug.linux/form1.c"
 
#line 126 "form1.ec"
++i)

#line 112 "form1.ec"
{

#line 113 "form1.ec"
const char * str;

#line 6415 "obj/debug.linux/form1.c"


#line 114 "form1.ec"
if(i != 0)

#line 114 "form1.ec"
{

#line 115 "form1.ec"
fputc(' ', f);
#line 6426 "obj/debug.linux/form1.c"


#line 116 "form1.ec"
}
#line 6431 "obj/debug.linux/form1.c"

#line 6433 "obj/debug.linux/form1.c"


#line 117 "form1.ec"
str = JS_ToCString(ctx, argv[i]);
#line 6438 "obj/debug.linux/form1.c"


#line 118 "form1.ec"
if(!str)

#line 118 "form1.ec"
{

#line 119 "form1.ec"
return __extension__ (
#line 119 "form1.ec"
{

#line 119 "form1.ec"
JSValue v =
{

#line 119 "form1.ec"

{

#line 119 "form1.ec"
0
}
#line 119 "form1.ec"

}
#line 119 "form1.ec"
;

#line 6469 "obj/debug.linux/form1.c"


#line 119 "form1.ec"
v.u.qjs_int32 = 0;
#line 6474 "obj/debug.linux/form1.c"


#line 119 "form1.ec"
v.tag = JS_TAG_EXCEPTION;
#line 6479 "obj/debug.linux/form1.c"


#line 119 "form1.ec"
v;
#line 6484 "obj/debug.linux/form1.c"


#line 119 "form1.ec"
}
#line 6489 "obj/debug.linux/form1.c"
)
#line 119 "form1.ec"
;
#line 6493 "obj/debug.linux/form1.c"


#line 120 "form1.ec"
}
#line 6498 "obj/debug.linux/form1.c"

#line 6500 "obj/debug.linux/form1.c"


#line 121 "form1.ec"
puts("here latest");
#line 6505 "obj/debug.linux/form1.c"


#line 122 "form1.ec"
fputs(str, f);
#line 6510 "obj/debug.linux/form1.c"


#line 123 "form1.ec"
strcat(outputgedamo, str);
#line 6515 "obj/debug.linux/form1.c"


#line 124 "form1.ec"
printf("here7");
#line 6520 "obj/debug.linux/form1.c"


#line 125 "form1.ec"
JS_FreeCString(ctx, str);
#line 6525 "obj/debug.linux/form1.c"


#line 126 "form1.ec"
}
#line 6530 "obj/debug.linux/form1.c"

#line 6532 "obj/debug.linux/form1.c"


#line 127 "form1.ec"
fputc('\n', f);
#line 6537 "obj/debug.linux/form1.c"


#line 128 "form1.ec"
return __extension__ (
#line 128 "form1.ec"
{

#line 128 "form1.ec"
JSValue v =
{

#line 128 "form1.ec"

{

#line 128 "form1.ec"
0
}
#line 128 "form1.ec"

}
#line 128 "form1.ec"
;

#line 6562 "obj/debug.linux/form1.c"


#line 128 "form1.ec"
v.u.qjs_int32 = 0;
#line 6567 "obj/debug.linux/form1.c"


#line 128 "form1.ec"
v.tag = JS_TAG_UNDEFINED;
#line 6572 "obj/debug.linux/form1.c"


#line 128 "form1.ec"
v;
#line 6577 "obj/debug.linux/form1.c"


#line 128 "form1.ec"
}
#line 6582 "obj/debug.linux/form1.c"
)
#line 128 "form1.ec"
;
#line 6586 "obj/debug.linux/form1.c"


#line 129 "form1.ec"
}
#line 6591 "obj/debug.linux/form1.c"



#line 194 "form1.ec"
struct MyCube
{

#line 192 "form1.ec"
unsigned char __ecerePrivateData0[128];

#line 6602 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform transform;

#line 6607 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
char __ecere_padding2[680];

#line 6612 "obj/debug.linux/form1.c"

#line 192 "form1.ec"
char __ecere_padding1[16];

#line 6617 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int extraStuff;

#line 6622 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6625 "obj/debug.linux/form1.c"


#line 536 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Transform * value);

#line 6631 "obj/debug.linux/form1.c"


#line 536 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Transform * value);

#line 6637 "obj/debug.linux/form1.c"


#line 733 "form1.ec"
extern struct __ecereNameSpace__ecere__gfx3D__Mesh * (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 6643 "obj/debug.linux/form1.c"


#line 733 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Mesh * value);

#line 6649 "obj/debug.linux/form1.c"

JSValue jsPrint(JSContext * ctx, JSValue jsThis, int argc, JSValue * argv)

#line 131 "form1.ec"
{

#line 132 "form1.ec"
return jsFprint(ctx, jsThis, argc, argv, stdout);
#line 6658 "obj/debug.linux/form1.c"


#line 133 "form1.ec"
}
#line 6663 "obj/debug.linux/form1.c"


JSValue jsPrintErr(JSContext * ctx, JSValue jsThis, int argc, JSValue * argv)

#line 135 "form1.ec"
{

#line 136 "form1.ec"
return jsFprint(ctx, jsThis, argc, argv, stderr);
#line 6673 "obj/debug.linux/form1.c"


#line 137 "form1.ec"
}
#line 6678 "obj/debug.linux/form1.c"



#line 202 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material;

#line 6685 "obj/debug.linux/form1.c"


#line 214 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * defaultMaterial;

#line 6691 "obj/debug.linux/form1.c"


#line 552 "form1.ec"
extern struct __ecereNameSpace__ecere__gfx3D__Material * (* __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial)(void);

#line 6697 "obj/debug.linux/form1.c"


#line 733 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial)(struct __ecereNameSpace__ecere__gfx3D__Mesh * this, struct __ecereNameSpace__ecere__gfx3D__Material * material);

#line 6703 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 6709 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 194 "form1.ec"
void * *  _vTbl;

#line 6719 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 6724 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int _refCount;

#line 6729 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6732 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 6738 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 6744 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
struct __ecereNameSpace__ecere__com__BuiltInContainer
{

#line 588 "form1.ec"
void * *  _vTbl;

#line 6754 "obj/debug.linux/form1.c"

#line 588 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 6759 "obj/debug.linux/form1.c"

#line 588 "form1.ec"
int _refCount;

#line 6764 "obj/debug.linux/form1.c"

#line 588 "form1.ec"
void *  data;

#line 6769 "obj/debug.linux/form1.c"

#line 588 "form1.ec"
int count;

#line 6774 "obj/debug.linux/form1.c"

#line 588 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * type;

#line 6779 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6782 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eInstance_New(struct __ecereNameSpace__ecere__com__Class * _class);

#line 6788 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 6794 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 6800 "obj/debug.linux/form1.c"


#line 215 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * ds;

#line 6806 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
struct ModelViewer
{

#line 259 "form1.ec"
char * _3dplJSlib;

#line 6816 "obj/debug.linux/form1.c"

#line 261 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Cube * model;

#line 6821 "obj/debug.linux/form1.c"

#line 332 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * btnRun;

#line 6826 "obj/debug.linux/form1.c"

#line 347 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * button1;

#line 6831 "obj/debug.linux/form1.c"

#line 431 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * editBoxDeclarations;

#line 6836 "obj/debug.linux/form1.c"

#line 486 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * lblOutput;

#line 6841 "obj/debug.linux/form1.c"

#line 487 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * btnFind;

#line 6846 "obj/debug.linux/form1.c"

#line 521 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * btnAdd;

#line 6851 "obj/debug.linux/form1.c"

#line 569 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * ebFindKey;

#line 6856 "obj/debug.linux/form1.c"

#line 570 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * ebIndex;

#line 6861 "obj/debug.linux/form1.c"

#line 571 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * lbFinKey;

#line 6866 "obj/debug.linux/form1.c"

#line 572 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * lblIndex;

#line 6871 "obj/debug.linux/form1.c"

#line 573 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * lbMessage;

#line 6876 "obj/debug.linux/form1.c"

#line 575 "form1.ec"
unsigned int moving, lightMoving;

#line 6881 "obj/debug.linux/form1.c"

#line 576 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point startPosition;

#line 6886 "obj/debug.linux/form1.c"

#line 577 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler startOrientation;

#line 6891 "obj/debug.linux/form1.c"

#line 578 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Light light;

#line 6896 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6899 "obj/debug.linux/form1.c"


#line 435 "form1.ec"
struct SyntaxColorScheme
{

#line 435 "form1.ec"
unsigned int commentColor;

#line 6909 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int charLiteralColor;

#line 6914 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int stringLiteralColor;

#line 6919 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int preprocessorColor;

#line 6924 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int numberColor;

#line 6929 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int typeColor;

#line 6934 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int defColor;

#line 6939 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int fnColor;

#line 6944 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * keywordColors;

#line 6949 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6952 "obj/debug.linux/form1.c"


#line 494 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator
{

#line 494 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * container;

#line 6962 "obj/debug.linux/form1.c"

#line 494 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer * pointer;

#line 6967 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6970 "obj/debug.linux/form1.c"


#line 599 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereFunction___ecereNameSpace__ecere__sys__FileOpen)(const char *  fileName, int mode);

#line 6976 "obj/debug.linux/form1.c"


#line 529 "form1.ec"
struct __ecereNameSpace__ecere__com__Iterator
{

#line 529 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * container;

#line 6986 "obj/debug.linux/form1.c"

#line 529 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer * pointer;

#line 6991 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 6994 "obj/debug.linux/form1.c"


#line 223 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7000 "obj/debug.linux/form1.c"


#line 223 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 7006 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7012 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 7018 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7024 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7030 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7036 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7042 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7048 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7054 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7060 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7066 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7072 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7078 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 7084 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 7090 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_parent)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7096 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 7102 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern float (* __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Get_opacity)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7108 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 7114 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Point * value);

#line 7120 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Point * value);

#line 7126 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displayDriver)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7132 "obj/debug.linux/form1.c"


#line 332 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 7138 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern float (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7144 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 7150 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_foreground)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7156 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7162 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_font)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7168 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_font)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 7174 "obj/debug.linux/form1.c"


#line 433 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_faceName)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7180 "obj/debug.linux/form1.c"


#line 433 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 7186 "obj/debug.linux/form1.c"


#line 433 "form1.ec"
extern float (* __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_size)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7192 "obj/debug.linux/form1.c"


#line 433 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 7198 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasVertScroll)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7204 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7210 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLine)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7216 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7222 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7228 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 7234 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_syntaxHighlighting)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7240 "obj/debug.linux/form1.c"


#line 431 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_syntaxHighlighting)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 7246 "obj/debug.linux/form1.c"


#line 521 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_anchor)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gui__Anchor * value);

#line 7252 "obj/debug.linux/form1.c"


#line 521 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gui__Anchor * value);

#line 7258 "obj/debug.linux/form1.c"


#line 571 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Get_labeledWindow)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7264 "obj/debug.linux/form1.c"


#line 571 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 7270 "obj/debug.linux/form1.c"


#line 555 "form1.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Add;

#line 7276 "obj/debug.linux/form1.c"


#line 564 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Update)(struct __ecereNameSpace__ecere__com__Instance * this, const struct __ecereNameSpace__ecere__sys__Box * region);

#line 7282 "obj/debug.linux/form1.c"


#line 475 "form1.ec"
extern char *  (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7288 "obj/debug.linux/form1.c"


#line 593 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 7294 "obj/debug.linux/form1.c"


#line 254 "form1.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Free;

#line 7300 "obj/debug.linux/form1.c"


#line 256 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free)(struct __ecereNameSpace__ecere__gfx3D__Object * this, const struct __ecereNameSpace__ecere__com__Instance * displaySystem);

#line 7306 "obj/debug.linux/form1.c"


#line 270 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_char__PTR_)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7312 "obj/debug.linux/form1.c"


#line 270 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_)(const char *  value);

#line 7318 "obj/debug.linux/form1.c"


#line 270 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__sys__ZString_concat)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * s);

#line 7324 "obj/debug.linux/form1.c"


#line 272 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_string)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7330 "obj/debug.linux/form1.c"


#line 272 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_string)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 7336 "obj/debug.linux/form1.c"


#line 418 "form1.ec"
extern const char * (* __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_String)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7342 "obj/debug.linux/form1.c"


#line 418 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_String)(const char * value);

#line 7348 "obj/debug.linux/form1.c"


#line 602 "form1.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__sys__File_GetSize;

#line 7354 "obj/debug.linux/form1.c"


#line 605 "form1.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__sys__File_Read;

#line 7360 "obj/debug.linux/form1.c"


#line 617 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7366 "obj/debug.linux/form1.c"


#line 620 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7372 "obj/debug.linux/form1.c"


#line 621 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7378 "obj/debug.linux/form1.c"


#line 622 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7384 "obj/debug.linux/form1.c"


#line 627 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)(struct __ecereNameSpace__ecere__com__Instance * this, int width, int height, const struct __ecereNameSpace__ecere__sys__Point * origin);

#line 7390 "obj/debug.linux/form1.c"


#line 637 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 7396 "obj/debug.linux/form1.c"


#line 637 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 7402 "obj/debug.linux/form1.c"


#line 638 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7408 "obj/debug.linux/form1.c"


#line 648 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7414 "obj/debug.linux/form1.c"


#line 714 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)(struct __ecereNameSpace__ecere__com__Instance * this, long long code);

#line 7420 "obj/debug.linux/form1.c"


#line 723 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Vector3D * value);

#line 7426 "obj/debug.linux/form1.c"


#line 723 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Vector3D * value);

#line 7432 "obj/debug.linux/form1.c"


#line 732 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create)(struct __ecereNameSpace__ecere__gfx3D__meshes__Cube * this, const struct __ecereNameSpace__ecere__com__Instance * displaySystem);

#line 7438 "obj/debug.linux/form1.c"


#line 785 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7444 "obj/debug.linux/form1.c"


#line 785 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7450 "obj/debug.linux/form1.c"


#line 786 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 7456 "obj/debug.linux/form1.c"


#line 788 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)(struct __ecereNameSpace__ecere__com__Instance * this, int type);

#line 7462 "obj/debug.linux/form1.c"


#line 790 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7468 "obj/debug.linux/form1.c"


#line 792 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7474 "obj/debug.linux/form1.c"


#line 793 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)(struct __ecereNameSpace__ecere__com__Instance * this, int id, struct __ecereNameSpace__ecere__gfx__Light * light);

#line 7480 "obj/debug.linux/form1.c"


#line 795 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * surface, const struct __ecereNameSpace__ecere__com__Instance * camera);

#line 7486 "obj/debug.linux/form1.c"


#line 797 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 7492 "obj/debug.linux/form1.c"


#line 802 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Object * object);

#line 7498 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern int (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7504 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type)(struct __ecereNameSpace__ecere__com__Instance * this, int value);

#line 7510 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern float (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_zMin)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7516 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 7522 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7528 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov)(struct __ecereNameSpace__ecere__com__Instance * this, double value);

#line 7534 "obj/debug.linux/form1.c"


#line 218 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * modelViewer;

#line 7540 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __ecereProp_SyntaxColorScheme_Get_keywordColors(struct __ecereNameSpace__ecere__com__Instance * this);

#line 7546 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
void __ecereProp_SyntaxColorScheme_Set_keywordColors(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 7552 "obj/debug.linux/form1.c"


#line 529 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__com__MapIterator_Get_map)(struct __ecereNameSpace__ecere__com__MapIterator * this);

#line 7558 "obj/debug.linux/form1.c"


#line 529 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map)(struct __ecereNameSpace__ecere__com__MapIterator * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 7564 "obj/debug.linux/form1.c"


#line 541 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__com__Iterator_Index)(struct __ecereNameSpace__ecere__com__Iterator * this, const uint64 index, unsigned int create);

#line 7570 "obj/debug.linux/form1.c"


#line 543 "form1.ec"
extern uint64 (* __ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data)(struct __ecereNameSpace__ecere__com__Iterator * this);

#line 7576 "obj/debug.linux/form1.c"


#line 543 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data)(struct __ecereNameSpace__ecere__com__Iterator * this, uint64 value);

#line 7582 "obj/debug.linux/form1.c"


#line 243 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__com__Iterator_Next)(struct __ecereNameSpace__ecere__com__Iterator * this);

#line 7588 "obj/debug.linux/form1.c"

unsigned int __ecereConstructor_eModelApp(struct __ecereNameSpace__ecere__com__Instance * this)

#line 223 "form1.ec"
{

#line 223 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver(this, "OpenGL");
#line 7597 "obj/debug.linux/form1.c"


#line 223 "form1.ec"
return 1;
#line 7602 "obj/debug.linux/form1.c"


#line 223 "form1.ec"
}
#line 7607 "obj/debug.linux/form1.c"



#line 202 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 7614 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 7624 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int count;

#line 7629 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 7634 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void (*  FreeKey)(void *  key);

#line 7639 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 7642 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
void ec_3dpl_qb(char const *  cubeName, float x, float y, float z);

#line 7648 "obj/debug.linux/form1.c"

static JSValue js_3dpl_qb(JSContext * ctx, JSValue this_val, int argc, JSValue * argv)

#line 11 "form1.ec"
{

#line 12 "form1.ec"
char const * cubeName;

#line 7658 "obj/debug.linux/form1.c"

#line 13 "form1.ec"
char o2[1000];

#line 7663 "obj/debug.linux/form1.c"


#line 14 "form1.ec"
cubeName = JS_ToCString(ctx, argv[0]);
#line 7668 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
strcat(outputgedamo, cubeName);
#line 7673 "obj/debug.linux/form1.c"


#line 19 "form1.ec"
if(!JS_IsString(argv[0]))

#line 19 "form1.ec"
{

#line 20 "form1.ec"
sprintf(o2, "cueb name must be a \"string\", got:%s", JS_ToCString(ctx, argv[0]));
#line 7684 "obj/debug.linux/form1.c"


#line 21 "form1.ec"
strcat(outputgedamo, o2);
#line 7689 "obj/debug.linux/form1.c"


#line 22 "form1.ec"
return this_val;
#line 7694 "obj/debug.linux/form1.c"


#line 23 "form1.ec"
}
#line 7699 "obj/debug.linux/form1.c"

#line 7701 "obj/debug.linux/form1.c"


#line 24 "form1.ec"
if(!JS_IsNumber(argv[1]))

#line 24 "form1.ec"
{

#line 25 "form1.ec"
sprintf(o2, "x must be float, got x=%s", JS_ToCString(ctx, argv[1]));
#line 7712 "obj/debug.linux/form1.c"


#line 26 "form1.ec"
strcat(outputgedamo, o2);
#line 7717 "obj/debug.linux/form1.c"


#line 27 "form1.ec"
return this_val;
#line 7722 "obj/debug.linux/form1.c"


#line 28 "form1.ec"
}
#line 7727 "obj/debug.linux/form1.c"

#line 7729 "obj/debug.linux/form1.c"


#line 29 "form1.ec"
if(!JS_IsNumber(argv[2]))

#line 29 "form1.ec"
{

#line 30 "form1.ec"
sprintf(o2, "y must be float, got y=%s", JS_ToCString(ctx, argv[2]));
#line 7740 "obj/debug.linux/form1.c"


#line 31 "form1.ec"
strcat(outputgedamo, o2);
#line 7745 "obj/debug.linux/form1.c"


#line 32 "form1.ec"
return this_val;
#line 7750 "obj/debug.linux/form1.c"


#line 33 "form1.ec"
}
#line 7755 "obj/debug.linux/form1.c"

#line 7757 "obj/debug.linux/form1.c"


#line 34 "form1.ec"
if(!JS_IsNumber(argv[3]))

#line 34 "form1.ec"
{

#line 35 "form1.ec"
sprintf(o2, "z must be float, got z=%s", JS_ToCString(ctx, argv[3]));
#line 7768 "obj/debug.linux/form1.c"


#line 36 "form1.ec"
strcat(outputgedamo, o2);
#line 7773 "obj/debug.linux/form1.c"


#line 37 "form1.ec"
return this_val;
#line 7778 "obj/debug.linux/form1.c"


#line 38 "form1.ec"
}
#line 7783 "obj/debug.linux/form1.c"

#line 7785 "obj/debug.linux/form1.c"


#line 40 "form1.ec"
{

#line 41 "form1.ec"
float x = (float)strtod(JS_ToCString(ctx, argv[1]), (((void *)0)));

#line 7794 "obj/debug.linux/form1.c"

#line 42 "form1.ec"
float y = (float)strtod(JS_ToCString(ctx, argv[2]), (((void *)0)));

#line 7799 "obj/debug.linux/form1.c"

#line 43 "form1.ec"
float z = (float)strtod(JS_ToCString(ctx, argv[3]), (((void *)0)));

#line 7804 "obj/debug.linux/form1.c"


#line 45 "form1.ec"
sprintf(o2, " x=%f,y=%f,z=%f", x, y, z);
#line 7809 "obj/debug.linux/form1.c"


#line 46 "form1.ec"
strcat(outputgedamo, o2);
#line 7814 "obj/debug.linux/form1.c"


#line 47 "form1.ec"
ec_3dpl_qb(cubeName, x, y, z);
#line 7819 "obj/debug.linux/form1.c"


#line 48 "form1.ec"
}
#line 7824 "obj/debug.linux/form1.c"


#line 49 "form1.ec"
return this_val;
#line 7829 "obj/debug.linux/form1.c"


#line 50 "form1.ec"
}
#line 7834 "obj/debug.linux/form1.c"



#line 202 "form1.ec"
void ec_3dpl_cl(const char *  cubeName, char const *  color);

#line 7841 "obj/debug.linux/form1.c"

static JSValue js_3dpl_cl(JSContext * ctx, JSValue this_val, int argc, JSValue * argv)

#line 53 "form1.ec"
{

#line 54 "form1.ec"
char const * cubeName;

#line 7851 "obj/debug.linux/form1.c"

#line 55 "form1.ec"
char o2[1000];

#line 7856 "obj/debug.linux/form1.c"


#line 57 "form1.ec"
cubeName = JS_ToCString(ctx, argv[0]);
#line 7861 "obj/debug.linux/form1.c"


#line 58 "form1.ec"
strcat(outputgedamo, cubeName);
#line 7866 "obj/debug.linux/form1.c"


#line 63 "form1.ec"
sprintf(o2, "colored cube");
#line 7871 "obj/debug.linux/form1.c"


#line 64 "form1.ec"
strcat(outputgedamo, o2);
#line 7876 "obj/debug.linux/form1.c"


#line 65 "form1.ec"
ec_3dpl_cl(JS_ToCString(ctx, argv[0]), JS_ToCString(ctx, argv[1]));
#line 7881 "obj/debug.linux/form1.c"


#line 66 "form1.ec"
return this_val;
#line 7886 "obj/debug.linux/form1.c"


#line 67 "form1.ec"
}
#line 7891 "obj/debug.linux/form1.c"


void create_function(JSContext * ctx)

#line 98 "form1.ec"
{

#line 99 "form1.ec"
JSValue global_obj = JS_GetGlobalObject(ctx);

#line 7902 "obj/debug.linux/form1.c"


#line 101 "form1.ec"
JS_SetPropertyStr(ctx, global_obj, "result", JS_NewCFunction(ctx, (void *)(js_result), "result", 1));
#line 7907 "obj/debug.linux/form1.c"


#line 104 "form1.ec"
JS_SetPropertyStr(ctx, global_obj, "qb", JS_NewCFunction(ctx, (void *)(js_3dpl_qb), "qb", 1));
#line 7912 "obj/debug.linux/form1.c"


#line 107 "form1.ec"
JS_SetPropertyStr(ctx, global_obj, "cl", JS_NewCFunction(ctx, (void *)(js_3dpl_cl), "cl", 1));
#line 7917 "obj/debug.linux/form1.c"


#line 109 "form1.ec"
}
#line 7922 "obj/debug.linux/form1.c"


char * evalgedamo(const char * code)

#line 140 "form1.ec"
{

#line 142 "form1.ec"
JSRuntime * rt = JS_NewRuntime();

#line 7933 "obj/debug.linux/form1.c"

#line 143 "form1.ec"
JSContext * ctx = JS_NewContext(rt);

#line 7938 "obj/debug.linux/form1.c"

#line 144 "form1.ec"
JSValue ret;

#line 7943 "obj/debug.linux/form1.c"


#line 146 "form1.ec"
create_function(ctx);
#line 7948 "obj/debug.linux/form1.c"


#line 148 "form1.ec"
outputgedamo[0] = 0;
#line 7953 "obj/debug.linux/form1.c"


#line 162 "form1.ec"
ret = JS_Eval(ctx, code, strlen(code), "example", (0 << 0));
#line 7958 "obj/debug.linux/form1.c"


#line 163 "form1.ec"
if(JS_IsException(ret))

#line 163 "form1.ec"
{

#line 164 "form1.ec"
JSValue e = JS_GetException(ctx);

#line 7970 "obj/debug.linux/form1.c"


#line 165 "form1.ec"
jsPrintErr(ctx, __extension__ (
#line 165 "form1.ec"
{

#line 165 "form1.ec"
JSValue v =
{

#line 165 "form1.ec"

{

#line 165 "form1.ec"
0
}
#line 165 "form1.ec"

}
#line 165 "form1.ec"
;

#line 7995 "obj/debug.linux/form1.c"


#line 165 "form1.ec"
v.u.qjs_int32 = 0;
#line 8000 "obj/debug.linux/form1.c"


#line 165 "form1.ec"
v.tag = JS_TAG_NULL;
#line 8005 "obj/debug.linux/form1.c"


#line 165 "form1.ec"
v;
#line 8010 "obj/debug.linux/form1.c"


#line 165 "form1.ec"
}
#line 8015 "obj/debug.linux/form1.c"
)
#line 165 "form1.ec"
, 1, &e);
#line 8019 "obj/debug.linux/form1.c"


#line 166 "form1.ec"
printf("here5");
#line 8024 "obj/debug.linux/form1.c"


#line 167 "form1.ec"
JS_FreeValue(ctx, e);
#line 8029 "obj/debug.linux/form1.c"


#line 169 "form1.ec"
}
#line 8034 "obj/debug.linux/form1.c"

else 
#line 169 "form1.ec"
if(JS_IsUndefined(ret))

#line 169 "form1.ec"
{

#line 171 "form1.ec"
}
#line 8045 "obj/debug.linux/form1.c"

else

#line 171 "form1.ec"
{

#line 172 "form1.ec"
jsPrint(ctx, __extension__ (
#line 172 "form1.ec"
{

#line 172 "form1.ec"
JSValue v =
{

#line 172 "form1.ec"

{

#line 172 "form1.ec"
0
}
#line 172 "form1.ec"

}
#line 172 "form1.ec"
;

#line 8074 "obj/debug.linux/form1.c"


#line 172 "form1.ec"
v.u.qjs_int32 = 0;
#line 8079 "obj/debug.linux/form1.c"


#line 172 "form1.ec"
v.tag = JS_TAG_NULL;
#line 8084 "obj/debug.linux/form1.c"


#line 172 "form1.ec"
v;
#line 8089 "obj/debug.linux/form1.c"


#line 172 "form1.ec"
}
#line 8094 "obj/debug.linux/form1.c"
)
#line 172 "form1.ec"
, 1, &ret);
#line 8098 "obj/debug.linux/form1.c"


#line 173 "form1.ec"
}
#line 8103 "obj/debug.linux/form1.c"

#line 8105 "obj/debug.linux/form1.c"

#line 8107 "obj/debug.linux/form1.c"


#line 174 "form1.ec"
printf("here6");
#line 8112 "obj/debug.linux/form1.c"


#line 175 "form1.ec"
JS_FreeValue(ctx, ret);
#line 8117 "obj/debug.linux/form1.c"


#line 176 "form1.ec"
return __ecereFunction___ecereNameSpace__ecere__sys__CopyString(outputgedamo);
#line 8122 "obj/debug.linux/form1.c"


#line 177 "form1.ec"
}
#line 8127 "obj/debug.linux/form1.c"



#line 202 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 8134 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 8144 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 8149 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  name;

#line 8154 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int isProperty;

#line 8159 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberAccess;

#line 8164 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int id;

#line 8169 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 8174 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  dataTypeString;

#line 8179 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 8184 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 8189 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int type;

#line 8194 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int offset;

#line 8199 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberID;

#line 8204 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 8209 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 8214 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberOffset;

#line 8219 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
short structAlignment;

#line 8224 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
short pointerAlignment;

#line 8229 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 8232 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__DataMember * __ecereNameSpace__ecere__com__eClass_AddDataMember(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

#line 8238 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 8244 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 1 "form1.ec"
const char *  name;

#line 8254 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 8259 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 8264 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 8269 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int depth;

#line 8274 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int (*  function)();

#line 8279 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int vid;

#line 8284 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int type;

#line 8289 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 8294 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
void *  symbol;

#line 8299 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  dataTypeString;

#line 8304 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 8309 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberAccess;

#line 8314 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 8317 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_AddMethod(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

#line 8323 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 8329 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 194 "form1.ec"
union
{

#line 194 "form1.ec"
struct
{

#line 194 "form1.ec"
const char *  dataTypeString;

#line 8347 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 8352 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 8355 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 8360 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct
{

#line 194 "form1.ec"
const char *  memberString;

#line 8369 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
union
{

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 8378 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 8383 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 8388 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 8391 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon2;

#line 8394 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 8397 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 8400 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 8410 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 8415 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  name;

#line 8420 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int isProperty;

#line 8425 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberAccess;

#line 8430 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int id;

#line 8435 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 8440 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  dataTypeString;

#line 8445 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 8450 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 8455 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
void (*  Set)(void * , int);

#line 8460 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int (*  Get)(void * );

#line 8465 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int (*  IsSet)(void * );

#line 8470 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
void *  data;

#line 8475 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
void *  symbol;

#line 8480 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int vid;

#line 8485 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int conversion;

#line 8490 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int watcherOffset;

#line 8495 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  category;

#line 8500 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int compiled;

#line 8505 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int selfWatchable;

#line 8510 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int isWatchable;

#line 8515 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 8518 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 8524 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 8530 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 8536 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 8542 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
struct SyntaxHighlighting;

#line 8548 "obj/debug.linux/form1.c"


#line 435 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * SHLFromFileName(const char * fileName);

#line 8554 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Bitmap;

#line 8560 "obj/debug.linux/form1.c"


#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Bitmap
{

#line 815 "form1.ec"
int width;

#line 8570 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
int height;

#line 8575 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
int pixelFormat;

#line 8580 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned char *  picture;

#line 8585 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int stride;

#line 8590 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int size;

#line 8595 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int sizeBytes;

#line 8600 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int *  palette;

#line 8605 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int allocatePalette;

#line 8610 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int transparent;

#line 8615 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
int shadeShift;

#line 8620 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned char *  paletteShades;

#line 8625 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int alphaBlend;

#line 8630 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * displaySystem;

#line 8635 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * driver;

#line 8640 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
void *  driverData;

#line 8645 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int keepData;

#line 8650 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int mipMaps;

#line 8655 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int sRGB2Linear;

#line 8660 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
int numMipMaps;

#line 8665 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * *  bitmaps;

#line 8670 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 8673 "obj/debug.linux/form1.c"


#line 214 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material
{

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * prev;

#line 8683 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * next;

#line 8688 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
char *  name;

#line 8693 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
float opacity;

#line 8698 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB diffuse;

#line 8703 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB ambient;

#line 8708 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB specular;

#line 8713 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB emissive;

#line 8718 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
float power;

#line 8723 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * baseMap;

#line 8728 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * bumpMap;

#line 8733 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * specularMap;

#line 8738 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * reflectMap;

#line 8743 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * envMap;

#line 8748 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
float reflectivity;

#line 8753 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
float refractiveIndex;

#line 8758 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
float refractiveIndexContainer;

#line 8763 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
unsigned int flags;

#line 8768 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
float uScale;

#line 8773 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
float vScale;

#line 8778 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * shader;

#line 8783 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 8786 "obj/debug.linux/form1.c"


#line 553 "form1.ec"
extern struct __ecereNameSpace__ecere__gfx3D__Material * (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 8792 "obj/debug.linux/form1.c"


#line 553 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Material * value);

#line 8798 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 8804 "obj/debug.linux/form1.c"


#line 435 "form1.ec"
struct SyntaxHighlighting
{

#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * privateModule;

#line 8814 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * regLen;

#line 8819 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * regKeywords;

#line 8824 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * prepLen;

#line 8829 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * prepKeywords;

#line 8834 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * allKeywords;

#line 8839 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * keyLen;

#line 8844 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * colorScheme;

#line 8849 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
int viewLineState;

#line 8854 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
int currentState;

#line 8859 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
int backedState;

#line 8864 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int cppSingle;

#line 8869 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int cMultiLine;

#line 8874 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int cPrep;

#line 8879 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int hashTagComments;

#line 8884 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int cNumbers;

#line 8889 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int singleQuotes;

#line 8894 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int allowHashInKeyword;

#line 8899 "obj/debug.linux/form1.c"

#line 435 "form1.ec"
unsigned int allowDashInKeyword;

#line 8904 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 8907 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __ecereNameSpace__ecere__com__Instance * module, int declMode);

#line 8913 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

#line 8919 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 8925 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 8931 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 194 "form1.ec"
const char *  name;

#line 8941 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 8946 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 8951 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 8956 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int depth;

#line 8961 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 8966 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 8971 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 8976 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 8981 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 8986 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 8989 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 8999 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 9004 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
const char *  name;

#line 9009 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int offset;

#line 9014 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int structSize;

#line 9019 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void * *  _vTbl;

#line 9024 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int vTblSize;

#line 9029 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int (*  Constructor)(void * );

#line 9034 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void (*  Destructor)(void * );

#line 9039 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int offsetClass;

#line 9044 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int sizeClass;

#line 9049 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 9054 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 9059 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 9064 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 9069 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 9074 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 9079 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 9084 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int memberID;

#line 9089 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int startMemberID;

#line 9094 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int type;

#line 9099 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 9104 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 9109 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
const char *  dataTypeString;

#line 9114 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 9119 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int typeSize;

#line 9124 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int defaultAlignment;

#line 9129 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void (*  Initialize)();

#line 9134 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int memberOffset;

#line 9139 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 9144 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
const char *  designerClass;

#line 9149 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int noExpansion;

#line 9154 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
const char *  defaultProperty;

#line 9159 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int comRedefinition;

#line 9164 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int count;

#line 9169 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int isRemote;

#line 9174 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int internalDecl;

#line 9179 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void *  data;

#line 9184 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int computeSize;

#line 9189 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
short structAlignment;

#line 9194 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
short pointerAlignment;

#line 9199 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int destructionWatchOffset;

#line 9204 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int fixed;

#line 9209 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 9214 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int inheritanceAccess;

#line 9219 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
const char *  fullName;

#line 9224 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void *  symbol;

#line 9229 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 9234 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 9239 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 9244 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 9249 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 9254 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int numParams;

#line 9259 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int isInstanceClass;

#line 9264 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int byValueSystemClass;

#line 9269 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void *  bindingsClass;

#line 9274 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 9277 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 194 "form1.ec"
int argc;

#line 9287 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
const char * *  argv;

#line 9292 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int exitCode;

#line 9297 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
unsigned int isGUIApp;

#line 9302 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 9307 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
char *  parsedCommand;

#line 9312 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 9317 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 9320 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_MyCube;

#line 9326 "obj/debug.linux/form1.c"


#line 223 "form1.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_eModelApp;

#line 9332 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ModelViewer;

#line 9338 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
extern char *  (* __ecereFunction___ecereNameSpace__ecere__com__PrintString)(struct __ecereNameSpace__ecere__com__Class * class, const void * object, ...);

#line 9344 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube;

#line 9350 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__Button;

#line 9356 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__EditBox;

#line 9362 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__Label;

#line 9368 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx__FontResource;

#line 9374 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_SyntaxColorScheme;

#line 9380 "obj/debug.linux/form1.c"


#line 547 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_;

#line 9386 "obj/debug.linux/form1.c"


#line 266 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__ZString;

#line 9392 "obj/debug.linux/form1.c"


#line 197 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Object;

#line 9398 "obj/debug.linux/form1.c"


#line 199 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___;

#line 9404 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;

#line 9410 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_SyntaxHighlighting;

#line 9416 "obj/debug.linux/form1.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx__Color;


#line 552 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Material;

#line 9426 "obj/debug.linux/form1.c"


#line 555 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array;

#line 9432 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_char__PTR_;

#line 9438 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_int;

#line 9444 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_double;

#line 9450 "obj/debug.linux/form1.c"


#line 511 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_uint;

#line 9456 "obj/debug.linux/form1.c"


#line 511 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_String;

#line 9462 "obj/debug.linux/form1.c"


#line 254 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map;

#line 9468 "obj/debug.linux/form1.c"


#line 602 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__File;

#line 9474 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 9480 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 9490 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 9495 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 9500 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 9505 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 9510 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 9515 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 9520 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
const char *  name;

#line 9525 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void *  library;

#line 9530 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
void *  Unload;

#line 9535 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int importType;

#line 9540 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
int origImportType;

#line 9545 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 9550 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 9555 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 9558 "obj/debug.linux/form1.c"

static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000001(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * button, int x, int y, unsigned int mods)

#line 352 "form1.ec"
{

#line 352 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9568 "obj/debug.linux/form1.c"


#line 355 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 9573 "obj/debug.linux/form1.c"


#line 357 "form1.ec"
ec_3dpl_qb("a", 1, 1, 1);
#line 9578 "obj/debug.linux/form1.c"


#line 358 "form1.ec"
ec_3dpl_qb("a", 2, 2, 2);
#line 9583 "obj/debug.linux/form1.c"


#line 359 "form1.ec"
ec_3dpl_cl("a", "red");
#line 9588 "obj/debug.linux/form1.c"


#line 360 "form1.ec"
return 1;
#line 9593 "obj/debug.linux/form1.c"


#line 361 "form1.ec"
}
#line 9598 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyModified__00000002(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * editBox)

#line 438 "form1.ec"
{

#line 438 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9609 "obj/debug.linux/form1.c"


#line 442 "form1.ec"
printf("finished notify modified)");
#line 9614 "obj/debug.linux/form1.c"


#line 443 "form1.ec"
return 1;
#line 9619 "obj/debug.linux/form1.c"


#line 444 "form1.ec"
}
#line 9624 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyKeyDown__00000003(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * editBox, unsigned int key, unsigned int ch)

#line 447 "form1.ec"
{

#line 447 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9635 "obj/debug.linux/form1.c"


#line 450 "form1.ec"
printf("notify key down");
#line 9640 "obj/debug.linux/form1.c"


#line 452 "form1.ec"
return 1;
#line 9645 "obj/debug.linux/form1.c"


#line 453 "form1.ec"
}
#line 9650 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyCharsAdded__00000004(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * editBox, struct __ecereNameSpace__ecere__gui__controls__BufferLocation * before, struct __ecereNameSpace__ecere__gui__controls__BufferLocation * after, unsigned int pasteOperation)

#line 456 "form1.ec"
{

#line 456 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9661 "obj/debug.linux/form1.c"


#line 459 "form1.ec"
printf("notify chars added");
#line 9666 "obj/debug.linux/form1.c"


#line 461 "form1.ec"
return 1;
#line 9671 "obj/debug.linux/form1.c"


#line 462 "form1.ec"
}
#line 9676 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyCharsDeleted__00000005(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * editBox, struct __ecereNameSpace__ecere__gui__controls__BufferLocation * beforeLoc, struct __ecereNameSpace__ecere__gui__controls__BufferLocation * after, unsigned int pasteOperation)

#line 465 "form1.ec"
{

#line 465 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9687 "obj/debug.linux/form1.c"


#line 468 "form1.ec"
printf("notify chars deleted");
#line 9692 "obj/debug.linux/form1.c"


#line 470 "form1.ec"
return 1;
#line 9697 "obj/debug.linux/form1.c"


#line 471 "form1.ec"
}
#line 9702 "obj/debug.linux/form1.c"


char * __ecereMethod_ModelViewer_escapequotes(struct __ecereNameSpace__ecere__com__Instance * this, char * in)

#line 364 "form1.ec"
{

#line 364 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9713 "obj/debug.linux/form1.c"

#line 365 "form1.ec"
int c1, c2 = 0;

#line 9718 "obj/debug.linux/form1.c"

#line 366 "form1.ec"
char out[100000];

#line 9723 "obj/debug.linux/form1.c"


#line 367 "form1.ec"
for(
#line 367 "form1.ec"
c1 = 0;
#line 9730 "obj/debug.linux/form1.c"
 
#line 367 "form1.ec"
c1 < strlen(in);
#line 9734 "obj/debug.linux/form1.c"
 
#line 377 "form1.ec"
c1++)

#line 367 "form1.ec"
{

#line 368 "form1.ec"
if(in[c1] == '\"')

#line 368 "form1.ec"
{

#line 370 "form1.ec"
out[c2] = '\\';
#line 9750 "obj/debug.linux/form1.c"


#line 371 "form1.ec"
c2++;
#line 9755 "obj/debug.linux/form1.c"


#line 372 "form1.ec"
out[c2] = '"';
#line 9760 "obj/debug.linux/form1.c"


#line 373 "form1.ec"
}
#line 9765 "obj/debug.linux/form1.c"

else

#line 373 "form1.ec"
{

#line 374 "form1.ec"
out[c2] = in[c1];
#line 9774 "obj/debug.linux/form1.c"


#line 375 "form1.ec"
}
#line 9779 "obj/debug.linux/form1.c"

#line 9781 "obj/debug.linux/form1.c"


#line 376 "form1.ec"
c2++;
#line 9786 "obj/debug.linux/form1.c"


#line 377 "form1.ec"
}
#line 9791 "obj/debug.linux/form1.c"

#line 9793 "obj/debug.linux/form1.c"


#line 378 "form1.ec"
c2++;
#line 9798 "obj/debug.linux/form1.c"


#line 379 "form1.ec"
out[c2] = '\0';
#line 9803 "obj/debug.linux/form1.c"


#line 380 "form1.ec"
strcpy(in, out);
#line 9808 "obj/debug.linux/form1.c"


#line 381 "form1.ec"
return in;
#line 9813 "obj/debug.linux/form1.c"


#line 382 "form1.ec"
}
#line 9818 "obj/debug.linux/form1.c"


void __ecereMethod_ModelViewer_OnUnloadGraphics(struct __ecereNameSpace__ecere__com__Instance * this)

#line 616 "form1.ec"
{

#line 616 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9829 "obj/debug.linux/form1.c"


#line 617 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free((void *)(__ecerePointer_ModelViewer->model), __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 9834 "obj/debug.linux/form1.c"


#line 620 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 9839 "obj/debug.linux/form1.c"


#line 621 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 9844 "obj/debug.linux/form1.c"


#line 622 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 9849 "obj/debug.linux/form1.c"


#line 623 "form1.ec"
}
#line 9854 "obj/debug.linux/form1.c"


void __ecereMethod_ModelViewer_OnResize(struct __ecereNameSpace__ecere__com__Instance * this, int w, int h)

#line 626 "form1.ec"
{

#line 626 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9865 "obj/debug.linux/form1.c"


#line 627 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup(camera, w, h, (((void *)0)));
#line 9870 "obj/debug.linux/form1.c"


#line 628 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 9875 "obj/debug.linux/form1.c"


#line 629 "form1.ec"
}
#line 9880 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnLeftButtonDown(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 632 "form1.ec"
{

#line 632 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9891 "obj/debug.linux/form1.c"


#line 633 "form1.ec"
if(!__ecerePointer_ModelViewer->moving && !__ecerePointer_ModelViewer->lightMoving)

#line 634 "form1.ec"
{

#line 637 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler __simpleStruct1;

#line 9903 "obj/debug.linux/form1.c"

#line 637 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct0;

#line 9908 "obj/debug.linux/form1.c"


#line 635 "form1.ec"
__ecerePointer_ModelViewer->startPosition.x = x;
#line 9913 "obj/debug.linux/form1.c"


#line 636 "form1.ec"
__ecerePointer_ModelViewer->startPosition.y = y;
#line 9918 "obj/debug.linux/form1.c"


#line 637 "form1.ec"
__ecerePointer_ModelViewer->startOrientation = (__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion(&__simpleStruct1, (__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation(camera, &__simpleStruct0), &__simpleStruct0)), __simpleStruct1);
#line 9923 "obj/debug.linux/form1.c"


#line 638 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture(this);
#line 9928 "obj/debug.linux/form1.c"


#line 639 "form1.ec"
__ecerePointer_ModelViewer->moving = 1;
#line 9933 "obj/debug.linux/form1.c"


#line 640 "form1.ec"
}
#line 9938 "obj/debug.linux/form1.c"

#line 9940 "obj/debug.linux/form1.c"


#line 641 "form1.ec"
return 1;
#line 9945 "obj/debug.linux/form1.c"


#line 642 "form1.ec"
}
#line 9950 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnLeftButtonUp(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 645 "form1.ec"
{

#line 645 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 9961 "obj/debug.linux/form1.c"


#line 646 "form1.ec"
if(__ecerePointer_ModelViewer->moving)

#line 647 "form1.ec"
{

#line 648 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture(this);
#line 9972 "obj/debug.linux/form1.c"


#line 649 "form1.ec"
__ecerePointer_ModelViewer->moving = 0;
#line 9977 "obj/debug.linux/form1.c"


#line 650 "form1.ec"
}
#line 9982 "obj/debug.linux/form1.c"

#line 9984 "obj/debug.linux/form1.c"


#line 651 "form1.ec"
return 1;
#line 9989 "obj/debug.linux/form1.c"


#line 652 "form1.ec"
}
#line 9994 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnRightButtonDown(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 655 "form1.ec"
{

#line 655 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 10005 "obj/debug.linux/form1.c"


#line 656 "form1.ec"
if(!__ecerePointer_ModelViewer->moving && !__ecerePointer_ModelViewer->lightMoving)

#line 657 "form1.ec"
{

#line 660 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler __simpleStruct0;

#line 10017 "obj/debug.linux/form1.c"


#line 658 "form1.ec"
__ecerePointer_ModelViewer->startPosition.x = x;
#line 10022 "obj/debug.linux/form1.c"


#line 659 "form1.ec"
__ecerePointer_ModelViewer->startPosition.y = y;
#line 10027 "obj/debug.linux/form1.c"


#line 660 "form1.ec"
__ecerePointer_ModelViewer->startOrientation = (__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion(&__simpleStruct0, &__ecerePointer_ModelViewer->light.orientation), __simpleStruct0);
#line 10032 "obj/debug.linux/form1.c"


#line 661 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture(this);
#line 10037 "obj/debug.linux/form1.c"


#line 662 "form1.ec"
__ecerePointer_ModelViewer->lightMoving = 1;
#line 10042 "obj/debug.linux/form1.c"


#line 663 "form1.ec"
}
#line 10047 "obj/debug.linux/form1.c"

#line 10049 "obj/debug.linux/form1.c"


#line 664 "form1.ec"
return 1;
#line 10054 "obj/debug.linux/form1.c"


#line 665 "form1.ec"
}
#line 10059 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnRightButtonUp(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 668 "form1.ec"
{

#line 668 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 10070 "obj/debug.linux/form1.c"


#line 669 "form1.ec"
if(__ecerePointer_ModelViewer->lightMoving)

#line 670 "form1.ec"
{

#line 671 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture(this);
#line 10081 "obj/debug.linux/form1.c"


#line 672 "form1.ec"
__ecerePointer_ModelViewer->lightMoving = 0;
#line 10086 "obj/debug.linux/form1.c"


#line 673 "form1.ec"
}
#line 10091 "obj/debug.linux/form1.c"

#line 10093 "obj/debug.linux/form1.c"


#line 674 "form1.ec"
return 1;
#line 10098 "obj/debug.linux/form1.c"


#line 675 "form1.ec"
}
#line 10103 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnMouseMove(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 678 "form1.ec"
{

#line 678 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 10114 "obj/debug.linux/form1.c"


#line 679 "form1.ec"
if(__ecerePointer_ModelViewer->moving)

#line 680 "form1.ec"
{

#line 692 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct1;

#line 10126 "obj/debug.linux/form1.c"

#line 691 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct0;

#line 10131 "obj/debug.linux/form1.c"


#line 691 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_ModelViewer->model), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_ModelViewer->model), &__simpleStruct0), __simpleStruct0.position.x = -((float)x / 100.0f) + 3.5f, &__simpleStruct0));
#line 10136 "obj/debug.linux/form1.c"


#line 692 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_ModelViewer->model), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_ModelViewer->model), &__simpleStruct1), __simpleStruct1.position.y = -((float)y / 100.0f) + 3.5f, &__simpleStruct1));
#line 10141 "obj/debug.linux/form1.c"


#line 694 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 10146 "obj/debug.linux/form1.c"


#line 695 "form1.ec"
}
#line 10151 "obj/debug.linux/form1.c"

else 
#line 696 "form1.ec"
if(__ecerePointer_ModelViewer->lightMoving)

#line 697 "form1.ec"
{

#line 698 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct1;

#line 10163 "obj/debug.linux/form1.c"

#line 698 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler __simpleStruct0;

#line 10168 "obj/debug.linux/form1.c"


#line 698 "form1.ec"
__ecerePointer_ModelViewer->light.orientation = (__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion((__simpleStruct0.yaw = __ecerePointer_ModelViewer->startOrientation.yaw - (__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians(x) - __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians(__ecerePointer_ModelViewer->startPosition.x)), __simpleStruct0.pitch = __ecerePointer_ModelViewer->startOrientation.pitch + (__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians(y) - __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians(__ecerePointer_ModelViewer->startPosition.y)), __simpleStruct0.roll = __ecerePointer_ModelViewer->startOrientation.roll, &__simpleStruct0), &__simpleStruct1), __simpleStruct1);
#line 10173 "obj/debug.linux/form1.c"


#line 705 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 10178 "obj/debug.linux/form1.c"


#line 706 "form1.ec"
}
#line 10183 "obj/debug.linux/form1.c"

#line 10185 "obj/debug.linux/form1.c"

#line 10187 "obj/debug.linux/form1.c"


#line 707 "form1.ec"
return 1;
#line 10192 "obj/debug.linux/form1.c"


#line 708 "form1.ec"
}
#line 10197 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnKeyDown(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int key, unsigned int ch)

#line 711 "form1.ec"
{

#line 711 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 10208 "obj/debug.linux/form1.c"


#line 712 "form1.ec"
switch(key)

#line 713 "form1.ec"
{

#line 714 "form1.ec"
case 0x1LL:

#line 714 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy(this, 0);
#line 10222 "obj/debug.linux/form1.c"

#line 10224 "obj/debug.linux/form1.c"


#line 714 "form1.ec"
return 0;
#line 10229 "obj/debug.linux/form1.c"


#line 715 "form1.ec"
}
#line 10234 "obj/debug.linux/form1.c"

#line 10236 "obj/debug.linux/form1.c"


#line 716 "form1.ec"
return 1;
#line 10241 "obj/debug.linux/form1.c"


#line 717 "form1.ec"
}
#line 10246 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnKeyHit(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int key, unsigned int ch)

#line 720 "form1.ec"
{

#line 724 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct1;

#line 10257 "obj/debug.linux/form1.c"

#line 723 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0;

#line 10262 "obj/debug.linux/form1.c"

#line 720 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 10267 "obj/debug.linux/form1.c"


#line 721 "form1.ec"
switch((unsigned int)__ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey(key))

#line 722 "form1.ec"
{

#line 723 "form1.ec"
case 0x104:

#line 723 "form1.ec"
case 0xC:

#line 723 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position(camera, (__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position(camera, &__simpleStruct0), __simpleStruct0.z *= 1.1111111f, &__simpleStruct0));
#line 10284 "obj/debug.linux/form1.c"

#line 10286 "obj/debug.linux/form1.c"

#line 10288 "obj/debug.linux/form1.c"


#line 723 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 10293 "obj/debug.linux/form1.c"


#line 723 "form1.ec"
break;
#line 10298 "obj/debug.linux/form1.c"


#line 724 "form1.ec"
case 0x103:

#line 724 "form1.ec"
case 0xD:

#line 724 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position(camera, (__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position(camera, &__simpleStruct1), __simpleStruct1.z *= 0.9f, &__simpleStruct1));
#line 10309 "obj/debug.linux/form1.c"

#line 10311 "obj/debug.linux/form1.c"

#line 10313 "obj/debug.linux/form1.c"


#line 724 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 10318 "obj/debug.linux/form1.c"


#line 724 "form1.ec"
break;
#line 10323 "obj/debug.linux/form1.c"


#line 725 "form1.ec"
}
#line 10328 "obj/debug.linux/form1.c"

#line 10330 "obj/debug.linux/form1.c"


#line 726 "form1.ec"
return 1;
#line 10335 "obj/debug.linux/form1.c"


#line 727 "form1.ec"
}
#line 10340 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnLoadGraphics(struct __ecereNameSpace__ecere__com__Instance * this)

#line 730 "form1.ec"
{

#line 730 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 10351 "obj/debug.linux/form1.c"


#line 732 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create(__ecerePointer_ModelViewer->model, __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 10356 "obj/debug.linux/form1.c"


#line 733 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial(__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh((void *)(__ecerePointer_ModelViewer->model)), (((void *)0)));
#line 10361 "obj/debug.linux/form1.c"


#line 773 "form1.ec"
return 1;
#line 10366 "obj/debug.linux/form1.c"


#line 777 "form1.ec"
}
#line 10371 "obj/debug.linux/form1.c"


void __ecereMethod_ModelViewer_OnRedraw(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * surface)

#line 780 "form1.ec"
{

#line 780 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 10382 "obj/debug.linux/form1.c"


#line 785 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0xFFLL);
#line 10387 "obj/debug.linux/form1.c"


#line 786 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0.000001f);
#line 10392 "obj/debug.linux/form1.c"


#line 788 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear(surface, 1);
#line 10397 "obj/debug.linux/form1.c"


#line 790 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update(camera);
#line 10402 "obj/debug.linux/form1.c"


#line 792 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 1);
#line 10407 "obj/debug.linux/form1.c"


#line 793 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0, &__ecerePointer_ModelViewer->light);
#line 10412 "obj/debug.linux/form1.c"


#line 795 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), surface, camera);
#line 10417 "obj/debug.linux/form1.c"


#line 797 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0x333333);
#line 10422 "obj/debug.linux/form1.c"


#line 802 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), scene);
#line 10427 "obj/debug.linux/form1.c"


#line 803 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), surface, (((void *)0)));
#line 10432 "obj/debug.linux/form1.c"


#line 804 "form1.ec"
}
#line 10437 "obj/debug.linux/form1.c"


char * __ecereMethod_ModelViewer_preprocessor(struct __ecereNameSpace__ecere__com__Instance * this, const char * code)

#line 385 "form1.ec"
{

#line 385 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 10448 "obj/debug.linux/form1.c"

#line 392 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * JS = (JS = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__sys__ZString), ((struct __ecereNameSpace__ecere__sys__ZString *)(((char *)JS + __ecereClass___ecereNameSpace__ecere__sys__ZString->offset)))->allocType = 2, JS);

#line 10453 "obj/debug.linux/form1.c"

#line 393 "form1.ec"
char * result;

#line 10458 "obj/debug.linux/form1.c"

#line 394 "form1.ec"
int codeLen = strlen(code);

#line 10463 "obj/debug.linux/form1.c"

#line 395 "form1.ec"
int allocLen = codeLen * 3;

#line 10468 "obj/debug.linux/form1.c"

#line 396 "form1.ec"
char * tmp = __ecereNameSpace__ecere__com__eSystem_New(sizeof(char) * (allocLen + 1));

#line 10473 "obj/debug.linux/form1.c"


#line 398 "form1.ec"
printf("preprocessor() called!");
#line 10478 "obj/debug.linux/form1.c"


#line 399 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat(JS, __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_("let regex = /while\\s*\\((?<CONDITION>[^\\)]+)\\)\\s*\\{*(?<WHILE_BODY>[^\\}]+)*\\}/g;"));
#line 10483 "obj/debug.linux/form1.c"


#line 402 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat(JS, __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_("let replacement = \"loopstarttime = Date.now();  while($<CONDITION>) { now=Date.now(); if(now>=loopstarttime+5){result(\\\"loop timeout\\\");break;}$<WHILE_BODY> }\";"));
#line 10488 "obj/debug.linux/form1.c"


#line 408 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat(JS, __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_("let str = \""));
#line 10493 "obj/debug.linux/form1.c"


#line 410 "form1.ec"
__ecereFunction___ecereNameSpace__ecere__sys__EscapeCString(tmp, allocLen, code, ((((unsigned int)(1)) << 1)));
#line 10498 "obj/debug.linux/form1.c"


#line 411 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat(JS, __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_(tmp));
#line 10503 "obj/debug.linux/form1.c"


#line 412 "form1.ec"
(__ecereNameSpace__ecere__com__eSystem_Delete(tmp), tmp = 0);
#line 10508 "obj/debug.linux/form1.c"


#line 413 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat(JS, __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_("\";"));
#line 10513 "obj/debug.linux/form1.c"


#line 414 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat(JS, __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_("result(str.replaceAll(regex, replacement));"));
#line 10518 "obj/debug.linux/form1.c"


#line 417 "form1.ec"
result = evalgedamo(__ecereProp___ecereNameSpace__ecere__sys__ZString_Get_char__PTR_(JS));
#line 10523 "obj/debug.linux/form1.c"


#line 418 "form1.ec"
printf("\nJS=\n   %s\nR=\n   %s\noutputgedamo\n   %s\n", (char *)__ecereProp___ecereNameSpace__ecere__sys__ZString_Get_String(JS), result, outputgedamo);
#line 10528 "obj/debug.linux/form1.c"


#line 419 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(JS), JS = 0);
#line 10533 "obj/debug.linux/form1.c"


#line 421 "form1.ec"
return result;
#line 10538 "obj/debug.linux/form1.c"


#line 430 "form1.ec"
}
#line 10543 "obj/debug.linux/form1.c"


void __ecereDestroyModuleInstances_form1()

#line 197 "form1.ec"
{

#line 218 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(modelViewer), modelViewer = 0);
#line 10553 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(camera), camera = 0);
#line 10558 "obj/debug.linux/form1.c"


#line 199 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(cubesMap), cubesMap = 0);
#line 10563 "obj/debug.linux/form1.c"


#line 197 "form1.ec"
((scene ? __extension__ (
#line 197 "form1.ec"
{

#line 197 "form1.ec"
void * __ecerePtrToDelete = (scene);

#line 10574 "obj/debug.linux/form1.c"


#line 197 "form1.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 10579 "obj/debug.linux/form1.c"


#line 197 "form1.ec"
}
#line 10584 "obj/debug.linux/form1.c"
) : 0), scene = 0);
#line 10586 "obj/debug.linux/form1.c"


#line 197 "form1.ec"
}
#line 10591 "obj/debug.linux/form1.c"


void __ecereCreateModuleInstances_form1()

#line 197 "form1.ec"
{

#line 202 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct1;

#line 10602 "obj/debug.linux/form1.c"

#line 202 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0 =
{

#line 202 "form1.ec"
0, 0, (double)(double)(-10)
}
#line 202 "form1.ec"
;

#line 10614 "obj/debug.linux/form1.c"


#line 197 "form1.ec"
scene = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Object);
#line 10619 "obj/debug.linux/form1.c"


#line 199 "form1.ec"
cubesMap = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___);
#line 10624 "obj/debug.linux/form1.c"


#line 199 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(cubesMap);
#line 10629 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
(camera = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type(camera, 3), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position(camera, &__simpleStruct0), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation(camera, (__simpleStruct1.w = 1.0000000000000000, __simpleStruct1.x = 0.0000000000000000, __simpleStruct1.y = 0.0000000000000000, __simpleStruct1.z = 0.0000000000000000, &__simpleStruct1)), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin(camera, 0.01f), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov(camera, 0.9250245035569946));
#line 10634 "obj/debug.linux/form1.c"


#line 202 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(camera);
#line 10639 "obj/debug.linux/form1.c"


#line 218 "form1.ec"
modelViewer = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_ModelViewer);
#line 10644 "obj/debug.linux/form1.c"


#line 218 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(modelViewer);
#line 10649 "obj/debug.linux/form1.c"


#line 197 "form1.ec"
}
#line 10654 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000008(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * btnAdd, int x, int y, unsigned int mods)

#line 526 "form1.ec"
{

#line 536 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct1;

#line 10665 "obj/debug.linux/form1.c"

#line 538 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0;

#line 10670 "obj/debug.linux/form1.c"

#line 526 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 10675 "obj/debug.linux/form1.c"

#line 527 "form1.ec"
const char * buf1 = __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents(__ecerePointer_ModelViewer->ebFindKey);

#line 10680 "obj/debug.linux/form1.c"

#line 529 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, cubesMap), it);

#line 10685 "obj/debug.linux/form1.c"

#line 530 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * cubesArray;

#line 10690 "obj/debug.linux/form1.c"

#line 531 "form1.ec"
struct MyCube * currentCube = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_MyCube);

#line 10695 "obj/debug.linux/form1.c"

#line 532 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform t;

#line 10700 "obj/debug.linux/form1.c"

#line 533 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * m = (((void *)0));

#line 10705 "obj/debug.linux/form1.c"


#line 535 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize((void *)(currentCube));
#line 10710 "obj/debug.linux/form1.c"


#line 536 "form1.ec"
t = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(currentCube), &__simpleStruct1), __simpleStruct1);
#line 10715 "obj/debug.linux/form1.c"


#line 538 "form1.ec"
t.position = (__simpleStruct0.x = (double)__ecereFunction___ecereNameSpace__ecere__sys__GetRandom(0, 5), __simpleStruct0.y = (double)__ecereFunction___ecereNameSpace__ecere__sys__GetRandom(0, 5), __simpleStruct0.z = (double)__ecereFunction___ecereNameSpace__ecere__sys__GetRandom(0, 5), __simpleStruct0);
#line 10720 "obj/debug.linux/form1.c"


#line 539 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(currentCube), &t);
#line 10725 "obj/debug.linux/form1.c"


#line 541 "form1.ec"
if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(buf1), 1))

#line 543 "form1.ec"
cubesArray = ((struct __ecereNameSpace__ecere__com__Instance *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&it)));
#line 10733 "obj/debug.linux/form1.c"

else

#line 545 "form1.ec"
{

#line 547 "form1.ec"
cubesArray = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_);
#line 10742 "obj/debug.linux/form1.c"


#line 549 "form1.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data((void *)(&it), (uint64)(uintptr_t)(cubesArray));
#line 10747 "obj/debug.linux/form1.c"


#line 550 "form1.ec"
}
#line 10752 "obj/debug.linux/form1.c"

#line 10754 "obj/debug.linux/form1.c"


#line 552 "form1.ec"
(__extension__ (
#line 552 "form1.ec"
{

#line 552 "form1.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Class * , const void * , const void * newData);

#line 10765 "obj/debug.linux/form1.c"


#line 552 "form1.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Class *, const void *, const void * newData))__ecereClass___ecereNameSpace__ecere__gfx3D__Material->_vTbl[__ecereVMethodID_class_OnCopy]);
#line 10770 "obj/debug.linux/form1.c"


#line 552 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Material, &m, __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial()) : (void)1;
#line 10775 "obj/debug.linux/form1.c"


#line 552 "form1.ec"
}
#line 10780 "obj/debug.linux/form1.c"
)
#line 552 "form1.ec"
);
#line 10784 "obj/debug.linux/form1.c"


#line 553 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material((void *)(currentCube), m);
#line 10789 "obj/debug.linux/form1.c"


#line 555 "form1.ec"
(__extension__ (
#line 555 "form1.ec"
{

#line 555 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer * (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, uint64 value);

#line 10800 "obj/debug.linux/form1.c"


#line 555 "form1.ec"
__internal_VirtualMethod = ((struct __ecereNameSpace__ecere__com__IteratorPointer * (*)(struct __ecereNameSpace__ecere__com__Instance *, uint64 value))__extension__ (
#line 555 "form1.ec"
{

#line 555 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = cubesArray;

#line 10811 "obj/debug.linux/form1.c"


#line 555 "form1.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Array->_vTbl;
#line 10816 "obj/debug.linux/form1.c"


#line 555 "form1.ec"
}
#line 10821 "obj/debug.linux/form1.c"
)
#line 555 "form1.ec"
[__ecereVMethodID___ecereNameSpace__ecere__com__Container_Add]);
#line 10825 "obj/debug.linux/form1.c"


#line 555 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(cubesArray, (uint64)(uintptr_t)(currentCube)) : (struct __ecereNameSpace__ecere__com__IteratorPointer *)1;
#line 10830 "obj/debug.linux/form1.c"


#line 555 "form1.ec"
}
#line 10835 "obj/debug.linux/form1.c"
)
#line 555 "form1.ec"
);
#line 10839 "obj/debug.linux/form1.c"


#line 556 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add(scene, (void *)(currentCube));
#line 10844 "obj/debug.linux/form1.c"


#line 559 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate((void *)(currentCube), (void *)(__ecerePointer_ModelViewer->model));
#line 10849 "obj/debug.linux/form1.c"


#line 560 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform((void *)(currentCube));
#line 10854 "obj/debug.linux/form1.c"


#line 561 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform(scene);
#line 10859 "obj/debug.linux/form1.c"


#line 564 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 10864 "obj/debug.linux/form1.c"


#line 565 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lbMessage, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Added a cube.", (((void *)0))));
#line 10869 "obj/debug.linux/form1.c"


#line 566 "form1.ec"
return 1;
#line 10874 "obj/debug.linux/form1.c"


#line 567 "form1.ec"
}
#line 10879 "obj/debug.linux/form1.c"


void ec_3dpl_qb(char const * cubeName, float x, float y, float z)

#line 808 "form1.ec"
{

#line 831 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct4;

#line 10890 "obj/debug.linux/form1.c"

#line 831 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df __simpleStruct3 =
{

#line 831 "form1.ec"
1, 1, 1
}
#line 831 "form1.ec"
;

#line 10902 "obj/debug.linux/form1.c"

#line 831 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct2 =
{

#line 831 "form1.ec"

{

#line 831 "form1.ec"
0, 0, 0
}
#line 831 "form1.ec"
,
{

#line 831 "form1.ec"
0, 0, 0, 0
}
#line 831 "form1.ec"
,
{

#line 831 "form1.ec"
0, 0, 0
}
#line 831 "form1.ec"

}
#line 831 "form1.ec"
;

#line 10935 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct1;

#line 10940 "obj/debug.linux/form1.c"

#line 815 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct0;

#line 10945 "obj/debug.linux/form1.c"

#line 809 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, cubesMap), it);

#line 10950 "obj/debug.linux/form1.c"

#line 810 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * cubesArray;

#line 10955 "obj/debug.linux/form1.c"

#line 811 "form1.ec"
struct MyCube * currentCube = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_MyCube);

#line 10960 "obj/debug.linux/form1.c"

#line 812 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * m = (((void *)0));

#line 10965 "obj/debug.linux/form1.c"


#line 814 "form1.ec"
(__extension__ (
#line 814 "form1.ec"
{

#line 814 "form1.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Class * , const void * , const void * newData);

#line 10976 "obj/debug.linux/form1.c"


#line 814 "form1.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Class *, const void *, const void * newData))__ecereClass___ecereNameSpace__ecere__gfx3D__Material->_vTbl[__ecereVMethodID_class_OnCopy]);
#line 10981 "obj/debug.linux/form1.c"


#line 814 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Material, &m, __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial()) : (void)1;
#line 10986 "obj/debug.linux/form1.c"


#line 814 "form1.ec"
}
#line 10991 "obj/debug.linux/form1.c"
)
#line 814 "form1.ec"
);
#line 10995 "obj/debug.linux/form1.c"


#line 815 "form1.ec"
m->diffuse = (__simpleStruct0.r = 0.0000000000000000f, __simpleStruct0.g = 1.0000000000000000f, __simpleStruct0.b = 0.0000000000000000f, __simpleStruct0), m->ambient = (__simpleStruct1.r = 0.0000000000000000f, __simpleStruct1.g = 1.0000000000000000f, __simpleStruct1.b = 0.0000000000000000f, __simpleStruct1);
#line 11000 "obj/debug.linux/form1.c"


#line 818 "form1.ec"
if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(cubeName), 1))

#line 820 "form1.ec"
cubesArray = ((struct __ecereNameSpace__ecere__com__Instance *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&it)));
#line 11008 "obj/debug.linux/form1.c"

else

#line 822 "form1.ec"
{

#line 824 "form1.ec"
cubesArray = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_);
#line 11017 "obj/debug.linux/form1.c"


#line 826 "form1.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data((void *)(&it), (uint64)(uintptr_t)(cubesArray));
#line 11022 "obj/debug.linux/form1.c"


#line 827 "form1.ec"
}
#line 11027 "obj/debug.linux/form1.c"

#line 11029 "obj/debug.linux/form1.c"


#line 828 "form1.ec"
(__extension__ (
#line 828 "form1.ec"
{

#line 828 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer * (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, uint64 value);

#line 11040 "obj/debug.linux/form1.c"


#line 828 "form1.ec"
__internal_VirtualMethod = ((struct __ecereNameSpace__ecere__com__IteratorPointer * (*)(struct __ecereNameSpace__ecere__com__Instance *, uint64 value))__extension__ (
#line 828 "form1.ec"
{

#line 828 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = cubesArray;

#line 11051 "obj/debug.linux/form1.c"


#line 828 "form1.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Array->_vTbl;
#line 11056 "obj/debug.linux/form1.c"


#line 828 "form1.ec"
}
#line 11061 "obj/debug.linux/form1.c"
)
#line 828 "form1.ec"
[__ecereVMethodID___ecereNameSpace__ecere__com__Container_Add]);
#line 11065 "obj/debug.linux/form1.c"


#line 828 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(cubesArray, (uint64)(uintptr_t)(currentCube)) : (struct __ecereNameSpace__ecere__com__IteratorPointer *)1;
#line 11070 "obj/debug.linux/form1.c"


#line 828 "form1.ec"
}
#line 11075 "obj/debug.linux/form1.c"
)
#line 828 "form1.ec"
);
#line 11079 "obj/debug.linux/form1.c"


#line 830 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize((void *)(currentCube));
#line 11084 "obj/debug.linux/form1.c"


#line 831 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(currentCube), (__simpleStruct2.scaling = __simpleStruct3, __simpleStruct2.position = (__simpleStruct4.x = x, __simpleStruct4.y = -y, __simpleStruct4.z = z, __simpleStruct4), &__simpleStruct2));
#line 11089 "obj/debug.linux/form1.c"


#line 832 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate((void *)(currentCube), (void *)(((struct ModelViewer *)(((char *)modelViewer + __ecereClass_ModelViewer->offset)))->model));
#line 11094 "obj/debug.linux/form1.c"


#line 833 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material((void *)(currentCube), m);
#line 11099 "obj/debug.linux/form1.c"


#line 834 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform((void *)(currentCube));
#line 11104 "obj/debug.linux/form1.c"


#line 836 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add(scene, (void *)(currentCube));
#line 11109 "obj/debug.linux/form1.c"


#line 837 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform(scene);
#line 11114 "obj/debug.linux/form1.c"


#line 839 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(modelViewer, (((void *)0)));
#line 11119 "obj/debug.linux/form1.c"


#line 840 "form1.ec"
}
#line 11124 "obj/debug.linux/form1.c"


void ec_3dpl_cl(const char * cubeName, char const * color)

#line 843 "form1.ec"
{

#line 845 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, cubesMap), it);

#line 11135 "obj/debug.linux/form1.c"

#line 846 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * cubesArray;

#line 11140 "obj/debug.linux/form1.c"

#line 850 "form1.ec"
unsigned int c;

#line 11145 "obj/debug.linux/form1.c"


#line 855 "form1.ec"
if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(cubeName), 1))

#line 856 "form1.ec"
{

#line 858 "form1.ec"
cubesArray = ((struct __ecereNameSpace__ecere__com__Instance *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&it)));
#line 11156 "obj/debug.linux/form1.c"


#line 859 "form1.ec"
printf("color is %s", color);
#line 11161 "obj/debug.linux/form1.c"


#line 860 "form1.ec"
(__extension__ (
#line 860 "form1.ec"
{

#line 860 "form1.ec"
unsigned int (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Class * , const void * , const char *  string);

#line 11172 "obj/debug.linux/form1.c"


#line 860 "form1.ec"
__internal_VirtualMethod = ((unsigned int (*)(struct __ecereNameSpace__ecere__com__Class *, const void *, const char *  string))__ecereClass___ecereNameSpace__ecere__gfx__Color->_vTbl[__ecereVMethodID_class_OnGetDataFromString]);
#line 11177 "obj/debug.linux/form1.c"


#line 860 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(__ecereClass___ecereNameSpace__ecere__gfx__Color, (void *)&c, color) : (unsigned int)1;
#line 11182 "obj/debug.linux/form1.c"


#line 860 "form1.ec"
}
#line 11187 "obj/debug.linux/form1.c"
)
#line 860 "form1.ec"
);
#line 11191 "obj/debug.linux/form1.c"


#line 861 "form1.ec"
{

#line 861 "form1.ec"
struct MyCube ** currentCube;

#line 11200 "obj/debug.linux/form1.c"

#line 861 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internalArray = (cubesArray);

#line 11205 "obj/debug.linux/form1.c"


#line 861 "form1.ec"
for(
#line 861 "form1.ec"
currentCube = ((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__internalArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array);
#line 11212 "obj/debug.linux/form1.c"
 
#line 861 "form1.ec"
currentCube < ((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__internalArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array) + ((struct __ecereNameSpace__ecere__com__Array *)(((char *)__internalArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->count;
#line 11216 "obj/debug.linux/form1.c"
 
#line 868 "form1.ec"
currentCube++)

#line 862 "form1.ec"
{

#line 866 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct1;

#line 11227 "obj/debug.linux/form1.c"

#line 865 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct0;

#line 11232 "obj/debug.linux/form1.c"

#line 863 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * m = __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material((void *)((*currentCube)));

#line 11237 "obj/debug.linux/form1.c"


#line 865 "form1.ec"
m->diffuse = (__ecereProp___ecereNameSpace__ecere__gfx__Color_Get___ecereNameSpace__ecere__gfx__ColorRGB(c, &__simpleStruct0), __simpleStruct0);
#line 11242 "obj/debug.linux/form1.c"


#line 866 "form1.ec"
m->ambient = (__ecereProp___ecereNameSpace__ecere__gfx__Color_Get___ecereNameSpace__ecere__gfx__ColorRGB(c, &__simpleStruct1), __simpleStruct1);
#line 11247 "obj/debug.linux/form1.c"


#line 868 "form1.ec"
}
#line 11252 "obj/debug.linux/form1.c"

#line 11254 "obj/debug.linux/form1.c"


#line 868 "form1.ec"
}
#line 11259 "obj/debug.linux/form1.c"


#line 871 "form1.ec"
}
#line 11264 "obj/debug.linux/form1.c"

else

#line 873 "form1.ec"
{

#line 875 "form1.ec"
}
#line 11273 "obj/debug.linux/form1.c"

#line 11275 "obj/debug.linux/form1.c"


#line 876 "form1.ec"
}
#line 11280 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000007(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * button, int x, int y, unsigned int mods)

#line 492 "form1.ec"
{

#line 492 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 11291 "obj/debug.linux/form1.c"

#line 493 "form1.ec"
const char * buf1 = __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents(__ecerePointer_ModelViewer->ebFindKey);

#line 11296 "obj/debug.linux/form1.c"

#line 494 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, cubesMap), it);

#line 11301 "obj/debug.linux/form1.c"


#line 497 "form1.ec"
if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(buf1), 0))

#line 498 "form1.ec"
{

#line 508 "form1.ec"
double __internalValue002;

#line 11313 "obj/debug.linux/form1.c"

#line 508 "form1.ec"
double __internalValue001;

#line 11318 "obj/debug.linux/form1.c"

#line 508 "form1.ec"
double __internalValue000;

#line 11323 "obj/debug.linux/form1.c"

#line 508 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct2;

#line 11328 "obj/debug.linux/form1.c"

#line 508 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct1;

#line 11333 "obj/debug.linux/form1.c"

#line 508 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct0;

#line 11338 "obj/debug.linux/form1.c"

#line 499 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * cubesArray = ((struct __ecereNameSpace__ecere__com__Instance *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&it)));

#line 11343 "obj/debug.linux/form1.c"

#line 501 "form1.ec"
char * tmp;

#line 11348 "obj/debug.linux/form1.c"

#line 502 "form1.ec"
char * s;

#line 11353 "obj/debug.linux/form1.c"

#line 503 "form1.ec"
int c = 0;

#line 11358 "obj/debug.linux/form1.c"

#line 504 "form1.ec"
char * index;

#line 11363 "obj/debug.linux/form1.c"


#line 505 "form1.ec"
index = __ecereFunction___ecereNameSpace__ecere__sys__CopyString(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption(__ecerePointer_ModelViewer->lblIndex));
#line 11368 "obj/debug.linux/form1.c"


#line 506 "form1.ec"
c = atoi(index);
#line 11373 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
tmp = __ecereFunction___ecereNameSpace__ecere__com__PrintString(__ecereClass_char__PTR_, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "cube ", (((void *)0))), __ecereClass_int, (void *)&c, __ecereClass_char__PTR_, " x ", __ecereClass_double, __extension__ (
#line 508 "form1.ec"
{

#line 508 "form1.ec"
__internalValue000 = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)((((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)cubesArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[c]), &__simpleStruct0), __simpleStruct0.position.x);
#line 11383 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
(void *)&__internalValue000;
#line 11388 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
}
#line 11393 "obj/debug.linux/form1.c"
)
#line 508 "form1.ec"
, __ecereClass_char__PTR_, " y ", __ecereClass_double, __extension__ (
#line 508 "form1.ec"
{

#line 508 "form1.ec"
__internalValue001 = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)((((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)cubesArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[c]), &__simpleStruct1), __simpleStruct1.position.y);
#line 11402 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
(void *)&__internalValue001;
#line 11407 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
}
#line 11412 "obj/debug.linux/form1.c"
)
#line 508 "form1.ec"
, __ecereClass_char__PTR_, " z ", __ecereClass_double, __extension__ (
#line 508 "form1.ec"
{

#line 508 "form1.ec"
__internalValue002 = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)((((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)cubesArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[c]), &__simpleStruct2), __simpleStruct2.position.z);
#line 11421 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
(void *)&__internalValue002;
#line 11426 "obj/debug.linux/form1.c"


#line 508 "form1.ec"
}
#line 11431 "obj/debug.linux/form1.c"
)
#line 508 "form1.ec"
, (void *)0);
#line 11435 "obj/debug.linux/form1.c"


#line 511 "form1.ec"
s = __ecereFunction___ecereNameSpace__ecere__com__PrintString(__ecereClass_char__PTR_, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Found ", (((void *)0))), __ecereClass_uint, (void *)&((struct __ecereNameSpace__ecere__com__Array *)(((char *)cubesArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->count, __ecereClass_char__PTR_, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", " by that name", (((void *)0))), __ecereClass_String, tmp, (void *)0);
#line 11440 "obj/debug.linux/form1.c"


#line 513 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lbMessage, s);
#line 11445 "obj/debug.linux/form1.c"


#line 514 "form1.ec"
(__ecereNameSpace__ecere__com__eSystem_Delete(s), s = 0);
#line 11450 "obj/debug.linux/form1.c"


#line 515 "form1.ec"
}
#line 11455 "obj/debug.linux/form1.c"

else

#line 517 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lbMessage, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "No cubes found by that name", (((void *)0))));
#line 11461 "obj/debug.linux/form1.c"

#line 11463 "obj/debug.linux/form1.c"


#line 518 "form1.ec"
return 1;
#line 11468 "obj/debug.linux/form1.c"


#line 519 "form1.ec"
}
#line 11473 "obj/debug.linux/form1.c"


void __ecereMethod_ModelViewer_clearThings(struct __ecereNameSpace__ecere__com__Instance * this)

#line 240 "form1.ec"
{

#line 240 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 11484 "obj/debug.linux/form1.c"


#line 243 "form1.ec"
{

#line 243 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator ca = (ca.container = (void *)0, ca.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&ca, (cubesMap)), ca);

#line 11493 "obj/debug.linux/form1.c"


#line 243 "form1.ec"
while(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Next((void *)(&ca)))

#line 244 "form1.ec"
{

#line 245 "form1.ec"
{

#line 245 "form1.ec"
struct MyCube ** c;

#line 11508 "obj/debug.linux/form1.c"

#line 245 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internalArray = ((struct __ecereNameSpace__ecere__com__Instance *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&ca)));

#line 11513 "obj/debug.linux/form1.c"


#line 245 "form1.ec"
for(
#line 245 "form1.ec"
c = ((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__internalArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array);
#line 11520 "obj/debug.linux/form1.c"
 
#line 245 "form1.ec"
c < ((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__internalArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array) + ((struct __ecereNameSpace__ecere__com__Array *)(((char *)__internalArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->count;
#line 11524 "obj/debug.linux/form1.c"
 
#line 251 "form1.ec"
c++)

#line 246 "form1.ec"
{

#line 247 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * m = __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material((void *)((*c)));

#line 11535 "obj/debug.linux/form1.c"


#line 248 "form1.ec"
((m ? __extension__ (
#line 248 "form1.ec"
{

#line 248 "form1.ec"
void * __ecerePtrToDelete = (m);

#line 11546 "obj/debug.linux/form1.c"


#line 248 "form1.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Material->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Material->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 11551 "obj/debug.linux/form1.c"


#line 248 "form1.ec"
}
#line 11556 "obj/debug.linux/form1.c"
) : 0), m = 0);
#line 11558 "obj/debug.linux/form1.c"


#line 249 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material((void *)((*c)), (((void *)0)));
#line 11563 "obj/debug.linux/form1.c"


#line 251 "form1.ec"
}
#line 11568 "obj/debug.linux/form1.c"

#line 11570 "obj/debug.linux/form1.c"


#line 251 "form1.ec"
}
#line 11575 "obj/debug.linux/form1.c"


#line 252 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(((void * )((uintptr_t)(__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&ca)))))), __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data((void *)(&ca), 0));
#line 11580 "obj/debug.linux/form1.c"


#line 253 "form1.ec"
}
#line 11585 "obj/debug.linux/form1.c"

#line 11587 "obj/debug.linux/form1.c"


#line 253 "form1.ec"
}
#line 11592 "obj/debug.linux/form1.c"


#line 254 "form1.ec"
(__extension__ (
#line 254 "form1.ec"
{

#line 254 "form1.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *);

#line 11603 "obj/debug.linux/form1.c"


#line 254 "form1.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Instance *))__extension__ (
#line 254 "form1.ec"
{

#line 254 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = cubesMap;

#line 11614 "obj/debug.linux/form1.c"


#line 254 "form1.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Map->_vTbl;
#line 11619 "obj/debug.linux/form1.c"


#line 254 "form1.ec"
}
#line 11624 "obj/debug.linux/form1.c"
)
#line 254 "form1.ec"
[__ecereVMethodID___ecereNameSpace__ecere__com__Container_Free]);
#line 11628 "obj/debug.linux/form1.c"


#line 254 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(cubesMap) : (void)1;
#line 11633 "obj/debug.linux/form1.c"


#line 254 "form1.ec"
}
#line 11638 "obj/debug.linux/form1.c"
)
#line 254 "form1.ec"
);
#line 11642 "obj/debug.linux/form1.c"


#line 256 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free(scene, (((void *)0)));
#line 11647 "obj/debug.linux/form1.c"


#line 257 "form1.ec"
}
#line 11652 "obj/debug.linux/form1.c"


char * __ecereMethod_ModelViewer_Read3dplLib(struct __ecereNameSpace__ecere__com__Instance * this)

#line 598 "form1.ec"
{

#line 598 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 11663 "obj/debug.linux/form1.c"

#line 599 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * f = __ecereFunction___ecereNameSpace__ecere__sys__FileOpen("3dplJSlib.js", 1);

#line 11668 "obj/debug.linux/form1.c"


#line 600 "form1.ec"
if(f)

#line 601 "form1.ec"
{

#line 602 "form1.ec"
uint64 maxSize = (__extension__ (
#line 602 "form1.ec"
{

#line 602 "form1.ec"
uint64 (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *);

#line 11685 "obj/debug.linux/form1.c"


#line 602 "form1.ec"
__internal_VirtualMethod = ((uint64 (*)(struct __ecereNameSpace__ecere__com__Instance *))__extension__ (
#line 602 "form1.ec"
{

#line 602 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

#line 11696 "obj/debug.linux/form1.c"


#line 602 "form1.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
#line 11701 "obj/debug.linux/form1.c"


#line 602 "form1.ec"
}
#line 11706 "obj/debug.linux/form1.c"
)
#line 602 "form1.ec"
[__ecereVMethodID___ecereNameSpace__ecere__sys__File_GetSize]);
#line 11710 "obj/debug.linux/form1.c"


#line 602 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(f) : (uint64)1;
#line 11715 "obj/debug.linux/form1.c"


#line 602 "form1.ec"
}
#line 11720 "obj/debug.linux/form1.c"
)
#line 602 "form1.ec"
);

#line 11725 "obj/debug.linux/form1.c"

#line 604 "form1.ec"
char * buffer = __ecereNameSpace__ecere__com__eSystem_New(sizeof(unsigned char) * (maxSize + 1));

#line 11730 "obj/debug.linux/form1.c"


#line 605 "form1.ec"
(__extension__ (
#line 605 "form1.ec"
{

#line 605 "form1.ec"
size_t (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, size_t size, size_t count);

#line 11741 "obj/debug.linux/form1.c"


#line 605 "form1.ec"
__internal_VirtualMethod = ((size_t (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, size_t size, size_t count))__extension__ (
#line 605 "form1.ec"
{

#line 605 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = f;

#line 11752 "obj/debug.linux/form1.c"


#line 605 "form1.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__sys__File->_vTbl;
#line 11757 "obj/debug.linux/form1.c"


#line 605 "form1.ec"
}
#line 11762 "obj/debug.linux/form1.c"
)
#line 605 "form1.ec"
[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read]);
#line 11766 "obj/debug.linux/form1.c"


#line 605 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(f, buffer, 1, maxSize) : (size_t)1;
#line 11771 "obj/debug.linux/form1.c"


#line 605 "form1.ec"
}
#line 11776 "obj/debug.linux/form1.c"
)
#line 605 "form1.ec"
);
#line 11780 "obj/debug.linux/form1.c"


#line 606 "form1.ec"
buffer[maxSize] = 0;
#line 11785 "obj/debug.linux/form1.c"


#line 608 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(f), f = 0);
#line 11790 "obj/debug.linux/form1.c"


#line 609 "form1.ec"
return buffer;
#line 11795 "obj/debug.linux/form1.c"


#line 611 "form1.ec"
}
#line 11800 "obj/debug.linux/form1.c"

#line 11802 "obj/debug.linux/form1.c"


#line 612 "form1.ec"
return (((void *)0));
#line 11807 "obj/debug.linux/form1.c"


#line 613 "form1.ec"
}
#line 11812 "obj/debug.linux/form1.c"


void __ecereUnregisterModule_form1(struct __ecereNameSpace__ecere__com__Instance * module)

#line 842 "form1.ec"
{


#line 876 "form1.ec"
}
#line 11823 "obj/debug.linux/form1.c"


void __ecereDestructor_ModelViewer(struct __ecereNameSpace__ecere__com__Instance * this)

#line 779 "form1.ec"
{

#line 779 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 11834 "obj/debug.linux/form1.c"


#line 592 "form1.ec"
{

#line 593 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__extension__ (
#line 593 "form1.ec"
{

#line 593 "form1.ec"
char * __ecTemp1 = (char *)(((struct __ecereNameSpace__ecere__com__Instance *)__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_syntaxHighlighting(__ecerePointer_ModelViewer->editBoxDeclarations)));

#line 11848 "obj/debug.linux/form1.c"


#line 593 "form1.ec"
((struct SyntaxHighlighting *)(__ecTemp1 + __ecereClass_SyntaxHighlighting->offset));
#line 11853 "obj/debug.linux/form1.c"


#line 593 "form1.ec"
}
#line 11858 "obj/debug.linux/form1.c"
)->colorScheme), __extension__ (
#line 593 "form1.ec"
{

#line 593 "form1.ec"
char *  __ecTemp1 = (char * )(((struct __ecereNameSpace__ecere__com__Instance *)__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_syntaxHighlighting(__ecerePointer_ModelViewer->editBoxDeclarations)));

#line 11866 "obj/debug.linux/form1.c"


#line 593 "form1.ec"
((struct SyntaxHighlighting * )(__ecTemp1 + __ecereClass_SyntaxHighlighting->offset));
#line 11871 "obj/debug.linux/form1.c"


#line 593 "form1.ec"
}
#line 11876 "obj/debug.linux/form1.c"
)->colorScheme = 0);
#line 11878 "obj/debug.linux/form1.c"


#line 594 "form1.ec"
__ecereMethod_ModelViewer_clearThings(this);
#line 11883 "obj/debug.linux/form1.c"


#line 595 "form1.ec"
}
#line 11888 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
((__ecerePointer_ModelViewer->model ? __extension__ (
#line 261 "form1.ec"
{

#line 261 "form1.ec"
void * __ecerePtrToDelete = (__ecerePointer_ModelViewer->model);

#line 11899 "obj/debug.linux/form1.c"


#line 261 "form1.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube->Destructor((void *)__ecerePtrToDelete) : 0, __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 11904 "obj/debug.linux/form1.c"


#line 261 "form1.ec"
}
#line 11909 "obj/debug.linux/form1.c"
) : 0), __ecerePointer_ModelViewer->model = 0);
#line 11911 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->btnRun), __ecerePointer_ModelViewer->btnRun = 0);
#line 11916 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->button1), __ecerePointer_ModelViewer->button1 = 0);
#line 11921 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->editBoxDeclarations), __ecerePointer_ModelViewer->editBoxDeclarations = 0);
#line 11926 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->lblOutput), __ecerePointer_ModelViewer->lblOutput = 0);
#line 11931 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->btnFind), __ecerePointer_ModelViewer->btnFind = 0);
#line 11936 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->btnAdd), __ecerePointer_ModelViewer->btnAdd = 0);
#line 11941 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->ebFindKey), __ecerePointer_ModelViewer->ebFindKey = 0);
#line 11946 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->ebIndex), __ecerePointer_ModelViewer->ebIndex = 0);
#line 11951 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->lbFinKey), __ecerePointer_ModelViewer->lbFinKey = 0);
#line 11956 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->lblIndex), __ecerePointer_ModelViewer->lblIndex = 0);
#line 11961 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->lbMessage), __ecerePointer_ModelViewer->lbMessage = 0);
#line 11966 "obj/debug.linux/form1.c"


#line 804 "form1.ec"
}
#line 11971 "obj/debug.linux/form1.c"


char * __ecereMethod_ModelViewer_executeCode(struct __ecereNameSpace__ecere__com__Instance * this, const char * preprocessedCode)

#line 263 "form1.ec"
{

#line 263 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 11982 "obj/debug.linux/form1.c"

#line 266 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * s = (s = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__sys__ZString), ((struct __ecereNameSpace__ecere__sys__ZString *)(((char *)s + __ecereClass___ecereNameSpace__ecere__sys__ZString->offset)))->allocType = 2, s);

#line 11987 "obj/debug.linux/form1.c"

#line 267 "form1.ec"
char * lib = __ecereMethod_ModelViewer_Read3dplLib(this);

#line 11992 "obj/debug.linux/form1.c"

#line 268 "form1.ec"
char * result;

#line 11997 "obj/debug.linux/form1.c"


#line 270 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat(s, __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_(lib));
#line 12002 "obj/debug.linux/form1.c"


#line 271 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat(s, __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_(preprocessedCode));
#line 12007 "obj/debug.linux/form1.c"


#line 272 "form1.ec"
printf("\n*this is s\"%s\"ends", __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_string(s));
#line 12012 "obj/debug.linux/form1.c"


#line 273 "form1.ec"
result = evalgedamo(__ecereProp___ecereNameSpace__ecere__sys__ZString_Get_char__PTR_(s));
#line 12017 "obj/debug.linux/form1.c"


#line 274 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(s), s = 0);
#line 12022 "obj/debug.linux/form1.c"


#line 275 "form1.ec"
return result;
#line 12027 "obj/debug.linux/form1.c"


#line 321 "form1.ec"
}
#line 12032 "obj/debug.linux/form1.c"


char * __ecereMethod_ModelViewer_executeDeclarations(struct __ecereNameSpace__ecere__com__Instance * this, const char * code)

#line 323 "form1.ec"
{

#line 323 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 12043 "obj/debug.linux/form1.c"

#line 324 "form1.ec"
char * preprocessedCode = __ecereMethod_ModelViewer_preprocessor(this, code);

#line 12048 "obj/debug.linux/form1.c"

#line 325 "form1.ec"
char * result;

#line 12053 "obj/debug.linux/form1.c"


#line 326 "form1.ec"
printf("preprocessor finished");
#line 12058 "obj/debug.linux/form1.c"


#line 327 "form1.ec"
result = __ecereMethod_ModelViewer_executeCode(this, preprocessedCode);
#line 12063 "obj/debug.linux/form1.c"


#line 328 "form1.ec"
printf("execute code finished");
#line 12068 "obj/debug.linux/form1.c"


#line 329 "form1.ec"
(__ecereNameSpace__ecere__com__eSystem_Delete(preprocessedCode), preprocessedCode = 0);
#line 12073 "obj/debug.linux/form1.c"


#line 330 "form1.ec"
return result;
#line 12078 "obj/debug.linux/form1.c"


#line 331 "form1.ec"
}
#line 12083 "obj/debug.linux/form1.c"


static void __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyUpdate__00000006(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * editBox)

#line 474 "form1.ec"
{

#line 474 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 12094 "obj/debug.linux/form1.c"

#line 475 "form1.ec"
char * code = __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents(editBox);

#line 12099 "obj/debug.linux/form1.c"


#line 477 "form1.ec"
printf("notify update");
#line 12104 "obj/debug.linux/form1.c"


#line 479 "form1.ec"
__ecereMethod_ModelViewer_clearThings(this);
#line 12109 "obj/debug.linux/form1.c"


#line 480 "form1.ec"
__ecereMethod_ModelViewer_executeDeclarations(this, code);
#line 12114 "obj/debug.linux/form1.c"


#line 481 "form1.ec"
(__ecereNameSpace__ecere__com__eSystem_Delete(code), code = 0);
#line 12119 "obj/debug.linux/form1.c"


#line 482 "form1.ec"
}
#line 12124 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000000(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * button, int x, int y, unsigned int mods)

#line 337 "form1.ec"
{

#line 337 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 12135 "obj/debug.linux/form1.c"

#line 338 "form1.ec"
char * code = __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents(__ecerePointer_ModelViewer->editBoxDeclarations);

#line 12140 "obj/debug.linux/form1.c"

#line 339 "form1.ec"
char * result = __ecereMethod_ModelViewer_executeDeclarations(this, code);

#line 12145 "obj/debug.linux/form1.c"


#line 341 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lblOutput, result);
#line 12150 "obj/debug.linux/form1.c"


#line 342 "form1.ec"
(__ecereNameSpace__ecere__com__eSystem_Delete(code), code = 0);
#line 12155 "obj/debug.linux/form1.c"


#line 343 "form1.ec"
(__ecereNameSpace__ecere__com__eSystem_Delete(result), result = 0);
#line 12160 "obj/debug.linux/form1.c"


#line 344 "form1.ec"
return 1;
#line 12165 "obj/debug.linux/form1.c"


#line 345 "form1.ec"
}
#line 12170 "obj/debug.linux/form1.c"


unsigned int __ecereConstructor_ModelViewer(struct __ecereNameSpace__ecere__com__Instance * this)

#line 779 "form1.ec"
{

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct18;

#line 12181 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct17;

#line 12186 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct16;

#line 12191 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct15 =
{

#line 779 "form1.ec"
32, 176
}
#line 779 "form1.ec"
;

#line 12203 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct14 =
{

#line 779 "form1.ec"
168, 48
}
#line 779 "form1.ec"
;

#line 12215 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct13 =
{

#line 779 "form1.ec"
40, 48
}
#line 779 "form1.ec"
;

#line 12227 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct12 =
{

#line 779 "form1.ec"
152, 8
}
#line 779 "form1.ec"
;

#line 12239 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct11 =
{

#line 779 "form1.ec"
80, 20
}
#line 779 "form1.ec"
;

#line 12251 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct10 =
{

#line 779 "form1.ec"
32, 16
}
#line 779 "form1.ec"
;

#line 12263 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct9 =
{

#line 779 "form1.ec"
80, 20
}
#line 779 "form1.ec"
;

#line 12275 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__gui__Anchor __simpleStruct8 =
{

#line 779 "form1.ec"

.__anon1 = {

#line 779 "form1.ec"

.horz = {

#line 779 "form1.ec"
0,
.__anon1 = {

#line 779 "form1.ec"
.distance = -369
}
#line 779 "form1.ec"

}
#line 779 "form1.ec"

}
#line 779 "form1.ec"
,
.__anon2 = {

#line 779 "form1.ec"

.vert = {

#line 779 "form1.ec"
0,
.__anon1 = {

#line 779 "form1.ec"
.distance = -215
}
#line 779 "form1.ec"

}
#line 779 "form1.ec"

}
#line 779 "form1.ec"
,
{

#line 779 "form1.ec"
0,
.__anon1 = {

#line 779 "form1.ec"
.distance = 0
}
#line 779 "form1.ec"

}
#line 779 "form1.ec"
,
{

#line 779 "form1.ec"
0,
.__anon1 = {

#line 779 "form1.ec"
.distance = 0
}
#line 779 "form1.ec"

}
#line 779 "form1.ec"

}
#line 779 "form1.ec"
;

#line 12357 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct7 =
{

#line 779 "form1.ec"
288, 24
}
#line 779 "form1.ec"
;

#line 12369 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct6 =
{

#line 779 "form1.ec"
32, 88
}
#line 779 "form1.ec"
;

#line 12381 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct5 =
{

#line 779 "form1.ec"
270, 61
}
#line 779 "form1.ec"
;

#line 12393 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct4 =
{

#line 779 "form1.ec"
32, 200
}
#line 779 "form1.ec"
;

#line 12405 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct3 =
{

#line 779 "form1.ec"
500, 500
}
#line 779 "form1.ec"
;

#line 12417 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct2 =
{

#line 779 "form1.ec"
592, 312
}
#line 779 "form1.ec"
;

#line 12429 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct1 =
{

#line 779 "form1.ec"
304, 112
}
#line 779 "form1.ec"
;

#line 12441 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct0 =
{

#line 779 "form1.ec"
1024, 800
}
#line 779 "form1.ec"
;

#line 12453 "obj/debug.linux/form1.c"

#line 779 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 12458 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->model = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube);
#line 12463 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->btnRun = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Button);
#line 12468 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->btnRun);
#line 12473 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->button1 = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Button);
#line 12478 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->button1);
#line 12483 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->editBoxDeclarations = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox);
#line 12488 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->editBoxDeclarations);
#line 12493 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->lblOutput = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Label);
#line 12498 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->lblOutput);
#line 12503 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->btnFind = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Button);
#line 12508 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->btnFind);
#line 12513 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->btnAdd = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Button);
#line 12518 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->btnAdd);
#line 12523 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->ebFindKey = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox);
#line 12528 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->ebFindKey);
#line 12533 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->ebIndex = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox);
#line 12538 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->ebIndex);
#line 12543 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->lbFinKey = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Label);
#line 12548 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->lbFinKey);
#line 12553 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->lblIndex = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Label);
#line 12558 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->lblIndex);
#line 12563 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecerePointer_ModelViewer->lbMessage = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Label);
#line 12568 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->lbMessage);
#line 12573 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(this, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "3dpleC", (((void *)0))));
#line 12578 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_background(this, 0x0LL);
#line 12583 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle(this, 7);
#line 12588 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize(this, 1);
#line 12593 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize(this, 1);
#line 12598 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose(this, 1);
#line 12603 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(this, &__simpleStruct0);
#line 12608 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->btnRun, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->btnRun, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Run", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity(__ecerePointer_ModelViewer->btnRun, 0.3f), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->btnRun, &__simpleStruct1), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver(__ecerePointer_ModelViewer->btnRun, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "OpenGL", (((void *)0)))), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->btnRun, "NotifyClicked", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000000));
#line 12613 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->button1, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->button1, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "debug it", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->button1, &__simpleStruct2), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->button1, "NotifyClicked", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000001));
#line 12618 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->editBoxDeclarations, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->editBoxDeclarations, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Code Editor", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity(__ecerePointer_ModelViewer->editBoxDeclarations, 0.3f), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->editBoxDeclarations, 0x90EE90LL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_font(__ecerePointer_ModelViewer->editBoxDeclarations, __extension__ (
#line 779 "form1.ec"
{

#line 779 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __ecereInstance1 = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx__FontResource);

#line 12629 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName(__ecereInstance1, "DejaVu Sans Mono"), __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size(__ecereInstance1, 20), __ecereInstance1;
#line 12634 "obj/debug.linux/form1.c"


#line 804 "form1.ec"
}
#line 12639 "obj/debug.linux/form1.c"
)
#line 433 "form1.ec"
), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(__ecerePointer_ModelViewer->editBoxDeclarations, &__simpleStruct3), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->editBoxDeclarations, &__simpleStruct4), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll(__ecerePointer_ModelViewer->editBoxDeclarations, 1), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver(__ecerePointer_ModelViewer->editBoxDeclarations, "OpenGL"), __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine(__ecerePointer_ModelViewer->editBoxDeclarations, 1), __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents(__ecerePointer_ModelViewer->editBoxDeclarations, "for(var i=-3;i<3;i++) {\n   qb(\"a\",i,i,i);\n}\ncl(\"a\",Color.red)"), __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_syntaxHighlighting(__ecerePointer_ModelViewer->editBoxDeclarations, SHLFromFileName("3dpl.js")), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->editBoxDeclarations, "NotifyModified", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyModified__00000002), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->editBoxDeclarations, "NotifyKeyDown", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyKeyDown__00000003), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->editBoxDeclarations, "NotifyCharsAdded", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyCharsAdded__00000004), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->editBoxDeclarations, "NotifyCharsDeleted", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyCharsDeleted__00000005), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->editBoxDeclarations, "NotifyUpdate", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__EditBox_NotifyUpdate__00000006));
#line 12643 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->lblOutput, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lblOutput, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "output", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->lblOutput, 0xFFFFFFLL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle(__ecerePointer_ModelViewer->lblOutput, 1), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(__ecerePointer_ModelViewer->lblOutput, &__simpleStruct5), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->lblOutput, &__simpleStruct6));
#line 12648 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->btnFind, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->btnFind, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Find", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->btnFind, &__simpleStruct7), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->btnFind, "NotifyClicked", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000007));
#line 12653 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->btnAdd, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->btnAdd, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Add", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor(__ecerePointer_ModelViewer->btnAdd, &__simpleStruct8), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->btnAdd, "NotifyClicked", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000008));
#line 12658 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->ebFindKey, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->ebFindKey, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Cube Key", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(__ecerePointer_ModelViewer->ebFindKey, &__simpleStruct9), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->ebFindKey, &__simpleStruct10));
#line 12663 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->ebIndex, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->ebIndex, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Cube Index", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(__ecerePointer_ModelViewer->ebIndex, &__simpleStruct11), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->ebIndex, &__simpleStruct12), __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents(__ecerePointer_ModelViewer->ebIndex, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "0", (((void *)0)))));
#line 12668 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->lbFinKey, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->lbFinKey, 0xFFFFFFLL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->lbFinKey, &__simpleStruct13), __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow(__ecerePointer_ModelViewer->lbFinKey, __ecerePointer_ModelViewer->ebFindKey));
#line 12673 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->lblIndex, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lblIndex, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "cube index", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->lblIndex, 0xFFFFFFLL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->lblIndex, &__simpleStruct14));
#line 12678 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->lbMessage, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lbMessage, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Add or find a key", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->lbMessage, 0xADFF2FLL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->lbMessage, &__simpleStruct15));
#line 12683 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
(__ecerePointer_ModelViewer->light.diffuse = (__simpleStruct16.r = 1.0000000000000000f, __simpleStruct16.g = 1.0000000000000000f, __simpleStruct16.b = 1.0000000000000000f, __simpleStruct16), __ecerePointer_ModelViewer->light.specular = (__simpleStruct17.r = 1.0000000000000000f, __simpleStruct17.g = 1.0000000000000000f, __simpleStruct17.b = 1.0000000000000000f, __simpleStruct17), __ecerePointer_ModelViewer->light.orientation = (__simpleStruct18.w = 0.9622501868990583, __simpleStruct18.x = 0.0841859828293692, __simpleStruct18.y = 0.2578341604962995, __simpleStruct18.z = 0.0225575661131498, __simpleStruct18));
#line 12688 "obj/debug.linux/form1.c"


#line 587 "form1.ec"
{

#line 588 "form1.ec"
__extension__ (
#line 588 "form1.ec"
{

#line 588 "form1.ec"
char * __ecTemp2 = (char *)(((struct __ecereNameSpace__ecere__com__Instance *)__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_syntaxHighlighting(__ecerePointer_ModelViewer->editBoxDeclarations)));

#line 12702 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
((struct SyntaxHighlighting *)(__ecTemp2 + __ecereClass_SyntaxHighlighting->offset));
#line 12707 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
}
#line 12712 "obj/debug.linux/form1.c"
)->colorScheme = __extension__ (
#line 588 "form1.ec"
{

#line 588 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __ecereInstance1 = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_SyntaxColorScheme);

#line 12720 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
((struct SyntaxColorScheme *)(((char *)__ecereInstance1 + __ecereClass_SyntaxColorScheme->offset)))->commentColor = ((((unsigned int)(125)) << 16) | (((unsigned int)(125)) << 8) | ((unsigned int)(125))), ((struct SyntaxColorScheme *)(((char *)__ecereInstance1 + __ecereClass_SyntaxColorScheme->offset)))->charLiteralColor = ((((unsigned int)(245)) << 16) | (((unsigned int)(50)) << 8) | ((unsigned int)(245))), ((struct SyntaxColorScheme *)(((char *)__ecereInstance1 + __ecereClass_SyntaxColorScheme->offset)))->stringLiteralColor = ((((unsigned int)(245)) << 16) | (((unsigned int)(50)) << 8) | ((unsigned int)(245))), ((struct SyntaxColorScheme *)(((char *)__ecereInstance1 + __ecereClass_SyntaxColorScheme->offset)))->preprocessorColor = ((((unsigned int)(120)) << 16) | (((unsigned int)(220)) << 8) | ((unsigned int)(140))), ((struct SyntaxColorScheme *)(((char *)__ecereInstance1 + __ecereClass_SyntaxColorScheme->offset)))->numberColor = ((((unsigned int)(0)) << 16) | (((unsigned int)(192)) << 8) | ((unsigned int)(192))), ((struct SyntaxColorScheme *)(((char *)__ecereInstance1 + __ecereClass_SyntaxColorScheme->offset)))->typeColor = ((((unsigned int)(21)) << 16) | (((unsigned int)(206)) << 8) | ((unsigned int)(76))), ((struct SyntaxColorScheme *)(((char *)__ecereInstance1 + __ecereClass_SyntaxColorScheme->offset)))->defColor = ((((unsigned int)(255)) << 16) | (((unsigned int)(206)) << 8) | ((unsigned int)(122))), ((struct SyntaxColorScheme *)(((char *)__ecereInstance1 + __ecereClass_SyntaxColorScheme->offset)))->fnColor = ((((unsigned int)(156)) << 16) | (((unsigned int)(183)) << 8) | ((unsigned int)(255))), __ecereProp_SyntaxColorScheme_Set_keywordColors(__ecereInstance1, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 588 "form1.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (unsigned int [])
{

#line 588 "form1.ec"
0x87CEEBLL, 0x87CEEBLL
}
#line 588 "form1.ec"
, 2, __ecereClass___ecereNameSpace__ecere__gfx__Color
}
#line 588 "form1.ec"
)), __ecereInstance1;
#line 12739 "obj/debug.linux/form1.c"


#line 588 "form1.ec"
}
#line 12744 "obj/debug.linux/form1.c"
)
#line 588 "form1.ec"
;
#line 12748 "obj/debug.linux/form1.c"


#line 589 "form1.ec"
}
#line 12753 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
return 1;
#line 12758 "obj/debug.linux/form1.c"


#line 804 "form1.ec"
}
#line 12763 "obj/debug.linux/form1.c"


void __ecereRegisterModule_form1(struct __ecereNameSpace__ecere__com__Instance * module)

#line 842 "form1.ec"
{

#line 842 "form1.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 12774 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("create_function", "void create_function(struct JSContext * ctx)", create_function, module, 2);
#line 12779 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("jsFprint", "struct JSValue jsFprint(struct JSContext * ctx, struct JSValue jsThis, int argc, struct JSValue * argv, struct _IO_FILE * f)", jsFprint, module, 2);
#line 12784 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("jsPrint", "struct JSValue jsPrint(struct JSContext * ctx, struct JSValue jsThis, int argc, struct JSValue * argv)", jsPrint, module, 2);
#line 12789 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("jsPrintErr", "struct JSValue jsPrintErr(struct JSContext * ctx, struct JSValue jsThis, int argc, struct JSValue * argv)", jsPrintErr, module, 2);
#line 12794 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("evalgedamo", "char * evalgedamo(const char * code)", evalgedamo, module, 2);
#line 12799 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "MyCube", "ecere::gfx3D::meshes::Cube", sizeof(struct MyCube), 0, (void *)0, (void *)0, module, 2, 1);
#line 12804 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 842 "form1.ec"
__ecereClass_MyCube = class;
#line 12812 "obj/debug.linux/form1.c"

#line 12814 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, 4, 2);
#line 12819 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "eModelApp", "ecere::gui::GuiApplication", 0, 0, (void *)__ecereConstructor_eModelApp, (void *)0, module, 2, 1);
#line 12824 "obj/debug.linux/form1.c"


#line 842 "form1.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 842 "form1.ec"
__ecereClass_eModelApp = class;
#line 12832 "obj/debug.linux/form1.c"

#line 12834 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "ModelViewer", "ecere::gui::Window", sizeof(struct ModelViewer), 0, (void *)__ecereConstructor_ModelViewer, (void *)__ecereDestructor_ModelViewer, module, 2, 1);
#line 12839 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 779 "form1.ec"
__ecereClass_ModelViewer = class;
#line 12847 "obj/debug.linux/form1.c"

#line 12849 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnResize", 0, __ecereMethod_ModelViewer_OnResize, 1);
#line 12854 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLoadGraphics", 0, __ecereMethod_ModelViewer_OnLoadGraphics, 1);
#line 12859 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnUnloadGraphics", 0, __ecereMethod_ModelViewer_OnUnloadGraphics, 1);
#line 12864 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnRedraw", 0, __ecereMethod_ModelViewer_OnRedraw, 1);
#line 12869 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnKeyDown", 0, __ecereMethod_ModelViewer_OnKeyDown, 1);
#line 12874 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnKeyHit", 0, __ecereMethod_ModelViewer_OnKeyHit, 1);
#line 12879 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnMouseMove", 0, __ecereMethod_ModelViewer_OnMouseMove, 1);
#line 12884 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLeftButtonDown", 0, __ecereMethod_ModelViewer_OnLeftButtonDown, 1);
#line 12889 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLeftButtonUp", 0, __ecereMethod_ModelViewer_OnLeftButtonUp, 1);
#line 12894 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnRightButtonDown", 0, __ecereMethod_ModelViewer_OnRightButtonDown, 1);
#line 12899 "obj/debug.linux/form1.c"


#line 779 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnRightButtonUp", 0, __ecereMethod_ModelViewer_OnRightButtonUp, 1);
#line 12904 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 8 ? sizeof(void *) : 8, 2);
#line 12909 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("ec_3dpl_qb", "void ec_3dpl_qb(const char * cubeName, float x, float y, float z)", ec_3dpl_qb, module, 2);
#line 12914 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("ec_3dpl_cl", "void ec_3dpl_cl(const String cubeName, const char * color)", ec_3dpl_cl, module, 2);
#line 12919 "obj/debug.linux/form1.c"


#line 876 "form1.ec"
}
#line 12924 "obj/debug.linux/form1.c"


