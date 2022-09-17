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


#line 3 "form1.ec"
char * evalgedamo();

#line 1463 "obj/debug.linux/form1.c"


#line 10 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * scene;

#line 1469 "obj/debug.linux/form1.c"


#line 12 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * cubesMap;

#line 1475 "obj/debug.linux/form1.c"


#line 35 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;

#line 1481 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_caption;

#line 1487 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_background;

#line 1493 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;

#line 1499 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize;

#line 1505 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize;

#line 1511 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasClose;

#line 1517 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_size;

#line 1523 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_parent;

#line 1529 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_opacity;

#line 1535 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_position;

#line 1541 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displayDriver;

#line 1547 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_opacity;

#line 1553 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_foreground;

#line 1559 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_font;

#line 1565 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_faceName;

#line 1571 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_size;

#line 1577 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasVertScroll;

#line 1583 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_scrollArea;

#line 1589 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLine;

#line 1595 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_contents;

#line 1601 "obj/debug.linux/form1.c"


#line 105 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_anchor;

#line 1607 "obj/debug.linux/form1.c"


#line 155 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_labeledWindow;

#line 1613 "obj/debug.linux/form1.c"


#line 113 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__MapIterator_map;

#line 1619 "obj/debug.linux/form1.c"


#line 120 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;

#line 1625 "obj/debug.linux/form1.c"


#line 127 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__Iterator_data;

#line 1631 "obj/debug.linux/form1.c"


#line 137 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material;

#line 1637 "obj/debug.linux/form1.c"


#line 59 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLineContents;

#line 1643 "obj/debug.linux/form1.c"


#line 174 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;

#line 1649 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;

#line 1655 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 1661 "obj/debug.linux/form1.c"


#line 257 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;

#line 1667 "obj/debug.linux/form1.c"


#line 278 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Key___ecereNameSpace__ecere__gui__SmartKey;

#line 1673 "obj/debug.linux/form1.c"


#line 280 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;

#line 1679 "obj/debug.linux/form1.c"


#line 341 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogColor;

#line 1685 "obj/debug.linux/form1.c"


#line 341 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_display;

#line 1691 "obj/debug.linux/form1.c"


#line 342 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;

#line 1697 "obj/debug.linux/form1.c"


#line 348 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_antiAlias;

#line 1703 "obj/debug.linux/form1.c"


#line 353 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_ambient;

#line 1709 "obj/debug.linux/form1.c"


#line 5 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D
{

#line 5 "form1.ec"
double x;

#line 1719 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
double y;

#line 1724 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
double z;

#line 1729 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1732 "obj/debug.linux/form1.c"


#line 5 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion
{

#line 5 "form1.ec"
double w;

#line 1742 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
double x;

#line 1747 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
double y;

#line 1752 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
double z;

#line 1757 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1760 "obj/debug.linux/form1.c"


#line 5 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df
{

#line 5 "form1.ec"
float x;

#line 1770 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
float y;

#line 1775 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
float z;

#line 1780 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1783 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 1789 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 7 "form1.ec"
void *  first;

#line 1799 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void *  last;

#line 1804 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int count;

#line 1809 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int offset;

#line 1814 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int circ;

#line 1819 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1822 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 7 "form1.ec"
union
{

#line 7 "form1.ec"
char c;

#line 1836 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned char uc;

#line 1841 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
short s;

#line 1846 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned short us;

#line 1851 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int i;

#line 1856 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int ui;

#line 1861 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void *  p;

#line 1866 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
float f;

#line 1871 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
double d;

#line 1876 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
long long i64;

#line 1881 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
uint64 ui64;

#line 1886 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 1889 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1892 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 1 "form1.ec"
unsigned char *  _buffer;

#line 1902 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
size_t count;

#line 1907 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
size_t _size;

#line 1912 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
size_t pos;

#line 1917 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1920 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 1926 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 1932 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 1938 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 1944 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 1950 "obj/debug.linux/form1.c"


#line 22 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler
{

#line 22 "form1.ec"
double yaw;

#line 1960 "obj/debug.linux/form1.c"

#line 22 "form1.ec"
double pitch;

#line 1965 "obj/debug.linux/form1.c"

#line 22 "form1.ec"
double roll;

#line 1970 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 1973 "obj/debug.linux/form1.c"


#line 28 "form1.ec"
struct __ecereNameSpace__ecere__gfx__DisplaySystem
{

#line 28 "form1.ec"
unsigned char __ecerePrivateData0[24];

#line 1983 "obj/debug.linux/form1.c"

#line 28 "form1.ec"
int pixelFormat;

#line 1988 "obj/debug.linux/form1.c"

#line 28 "form1.ec"
unsigned int flags;

#line 1993 "obj/debug.linux/form1.c"

#line 28 "form1.ec"
char __ecere_padding1[160];

#line 1998 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2001 "obj/debug.linux/form1.c"


#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Cube;

#line 2007 "obj/debug.linux/form1.c"


#line 31 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point
{

#line 31 "form1.ec"
int x;

#line 2017 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
int y;

#line 2022 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2025 "obj/debug.linux/form1.c"


#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB
{

#line 31 "form1.ec"
float r;

#line 2035 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
float g;

#line 2040 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
float b;

#line 2045 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2048 "obj/debug.linux/form1.c"


#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Object;

#line 2054 "obj/debug.linux/form1.c"


#line 42 "form1.ec"
extern __attribute__ ((visibility("default"))) const char *  __ecereNameSpace__ecere__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

#line 2060 "obj/debug.linux/form1.c"


#line 48 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size
{

#line 48 "form1.ec"
int w;

#line 2070 "obj/debug.linux/form1.c"

#line 48 "form1.ec"
int h;

#line 2075 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2078 "obj/debug.linux/form1.c"


#line 79 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer;

#line 2084 "obj/debug.linux/form1.c"


#line 84 "form1.ec"
struct __ecereNameSpace__ecere__com__Array
{

#line 84 "form1.ec"
uint64 *  array;

#line 2094 "obj/debug.linux/form1.c"

#line 84 "form1.ec"
unsigned int count;

#line 2099 "obj/debug.linux/form1.c"

#line 84 "form1.ec"
unsigned int minAllocSize;

#line 2104 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2107 "obj/debug.linux/form1.c"


#line 89 "form1.ec"
extern char *  (* __ecereFunction___ecereNameSpace__ecere__sys__CopyString)(const char *  string);

#line 2113 "obj/debug.linux/form1.c"


#line 90 "form1.ec"
extern int atoi(const char * );

#line 2119 "obj/debug.linux/form1.c"


#line 107 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue
{

#line 107 "form1.ec"
int type;

#line 2129 "obj/debug.linux/form1.c"

#line 107 "form1.ec"
union
{

#line 107 "form1.ec"
int distance;

#line 2138 "obj/debug.linux/form1.c"

#line 107 "form1.ec"
float percent;

#line 2143 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 2146 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2149 "obj/debug.linux/form1.c"


#line 107 "form1.ec"
struct __ecereNameSpace__ecere__gui__MiddleAnchorValue
{

#line 107 "form1.ec"
int type;

#line 2159 "obj/debug.linux/form1.c"

#line 107 "form1.ec"
union
{

#line 107 "form1.ec"
int distance;

#line 2168 "obj/debug.linux/form1.c"

#line 107 "form1.ec"
float percent;

#line 2173 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 2176 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2179 "obj/debug.linux/form1.c"


#line 122 "form1.ec"
extern int (* __ecereFunction___ecereNameSpace__ecere__sys__GetRandom)(int lo, int hi);

#line 2185 "obj/debug.linux/form1.c"


#line 359 "form1.ec"
struct __ecereNameSpace__ecere__sys__Box
{

#line 359 "form1.ec"
int left;

#line 2195 "obj/debug.linux/form1.c"

#line 359 "form1.ec"
int top;

#line 2200 "obj/debug.linux/form1.c"

#line 359 "form1.ec"
int right;

#line 2205 "obj/debug.linux/form1.c"

#line 359 "form1.ec"
int bottom;

#line 2210 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2213 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction;

#line 2219 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;

#line 2225 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_zMin;

#line 2231 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;

#line 2237 "obj/debug.linux/form1.c"


#line 29 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Cube_size;

#line 2243 "obj/debug.linux/form1.c"


#line 136 "form1.ec"
extern int __ecereVMethodID_class_OnCopy;

#line 2249 "obj/debug.linux/form1.c"


#line 137 "form1.ec"
struct __ecereNameSpace__ecere__gfx__drivers__Shader
{

#line 137 "form1.ec"
unsigned char __ecerePrivateData0[24];

#line 2259 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
uint64 state;

#line 2264 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int modifiedUniforms;

#line 2269 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
char __ecere_padding2[44];

#line 2274 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2277 "obj/debug.linux/form1.c"


#line 257 "form1.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians)(double this);

#line 2283 "obj/debug.linux/form1.c"


#line 257 "form1.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians)(double value);

#line 2289 "obj/debug.linux/form1.c"


#line 278 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey)(unsigned int this);

#line 2295 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Camera
{

#line 15 "form1.ec"
unsigned char __ecerePrivateData0[24];

#line 2305 "obj/debug.linux/form1.c"

#line 15 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D position;

#line 2310 "obj/debug.linux/form1.c"

#line 15 "form1.ec"
char __ecere_padding1[1056];

#line 2315 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2318 "obj/debug.linux/form1.c"


#line 5 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform
{

#line 5 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D position;

#line 2328 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion orientation;

#line 2333 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df scaling;

#line 2338 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2341 "obj/debug.linux/form1.c"


#line 29 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Cube * cube_model;

#line 2347 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * camera;

#line 2353 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion)(struct __ecereNameSpace__ecere__gfx3D__Euler * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 2359 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion)(struct __ecereNameSpace__ecere__gfx3D__Euler * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 2365 "obj/debug.linux/form1.c"


#line 29 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Cube_Set_size)(struct __ecereNameSpace__ecere__gfx3D__meshes__Cube * this, struct __ecereNameSpace__ecere__gfx3D__Vector3Df * value);

#line 2371 "obj/debug.linux/form1.c"


#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Light
{

#line 31 "form1.ec"
unsigned int flags;

#line 2381 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB ambient;

#line 2386 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB diffuse;

#line 2391 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB specular;

#line 2396 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D direction;

#line 2401 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion orientation;

#line 2406 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * lightObject;

#line 2411 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Object * target;

#line 2416 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
double fallOff;

#line 2421 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
double hotSpot;

#line 2426 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
float Kc;

#line 2431 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
float Kl;

#line 2436 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
float Kq;

#line 2441 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
double start;

#line 2446 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
double end;

#line 2451 "obj/debug.linux/form1.c"

#line 31 "form1.ec"
float multiplier;

#line 2456 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2459 "obj/debug.linux/form1.c"


#line 119 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 2465 "obj/debug.linux/form1.c"


#line 140 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Object * object);

#line 2471 "obj/debug.linux/form1.c"


#line 143 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Object * model);

#line 2477 "obj/debug.linux/form1.c"


#line 144 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 2483 "obj/debug.linux/form1.c"


#line 107 "form1.ec"
struct __ecereNameSpace__ecere__gui__Anchor
{

#line 107 "form1.ec"
union
{

#line 107 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue left;

#line 2497 "obj/debug.linux/form1.c"

#line 107 "form1.ec"
struct __ecereNameSpace__ecere__gui__MiddleAnchorValue horz;

#line 2502 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 2505 "obj/debug.linux/form1.c"

#line 107 "form1.ec"
union
{

#line 107 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue top;

#line 2514 "obj/debug.linux/form1.c"

#line 107 "form1.ec"
struct __ecereNameSpace__ecere__gui__MiddleAnchorValue vert;

#line 2519 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon2;

#line 2522 "obj/debug.linux/form1.c"

#line 107 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue right;

#line 2527 "obj/debug.linux/form1.c"

#line 107 "form1.ec"
struct __ecereNameSpace__ecere__gui__AnchorValue bottom;

#line 2532 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2535 "obj/debug.linux/form1.c"


#line 359 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Surface
{

#line 359 "form1.ec"
int width;

#line 2545 "obj/debug.linux/form1.c"

#line 359 "form1.ec"
int height;

#line 2550 "obj/debug.linux/form1.c"

#line 359 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point offset;

#line 2555 "obj/debug.linux/form1.c"

#line 359 "form1.ec"
struct __ecereNameSpace__ecere__sys__Box box;

#line 2560 "obj/debug.linux/form1.c"

#line 359 "form1.ec"
struct __ecereNameSpace__ecere__sys__Box unclippedBox;

#line 2565 "obj/debug.linux/form1.c"

#line 359 "form1.ec"
void *  driverData;

#line 2570 "obj/debug.linux/form1.c"

#line 359 "form1.ec"
char __ecere_padding1[72];

#line 2575 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2578 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct MyCube
{

#line 5 "form1.ec"
unsigned char __ecerePrivateData0[128];

#line 2588 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform transform;

#line 2593 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
char __ecere_padding2[680];

#line 2598 "obj/debug.linux/form1.c"

#line 5 "form1.ec"
char __ecere_padding1[16];

#line 2603 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int extraStuff;

#line 2608 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2611 "obj/debug.linux/form1.c"


#line 120 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Transform * value);

#line 2617 "obj/debug.linux/form1.c"


#line 120 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Transform * value);

#line 2623 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material;

#line 2629 "obj/debug.linux/form1.c"


#line 27 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * defaultMaterial;

#line 2635 "obj/debug.linux/form1.c"


#line 136 "form1.ec"
extern struct __ecereNameSpace__ecere__gfx3D__Material * (* __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial)(void);

#line 2641 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 2647 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 7 "form1.ec"
void * *  _vTbl;

#line 2657 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2662 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int _refCount;

#line 2667 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2670 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 2676 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 2682 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eInstance_New(struct __ecereNameSpace__ecere__com__Class * _class);

#line 2688 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 2694 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2700 "obj/debug.linux/form1.c"


#line 28 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * ds;

#line 2706 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
struct ModelViewer
{

#line 50 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__meshes__Cube * model;

#line 2716 "obj/debug.linux/form1.c"

#line 52 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * btnRun;

#line 2721 "obj/debug.linux/form1.c"

#line 68 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * editBoxDeclarations;

#line 2726 "obj/debug.linux/form1.c"

#line 71 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * lblOutput;

#line 2731 "obj/debug.linux/form1.c"

#line 72 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * btnFind;

#line 2736 "obj/debug.linux/form1.c"

#line 105 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * btnAdd;

#line 2741 "obj/debug.linux/form1.c"

#line 153 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * ebFindKey;

#line 2746 "obj/debug.linux/form1.c"

#line 154 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * ebIndex;

#line 2751 "obj/debug.linux/form1.c"

#line 155 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * lbFinKey;

#line 2756 "obj/debug.linux/form1.c"

#line 156 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * lblIndex;

#line 2761 "obj/debug.linux/form1.c"

#line 157 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * lbMessage;

#line 2766 "obj/debug.linux/form1.c"

#line 159 "form1.ec"
unsigned int moving, lightMoving;

#line 2771 "obj/debug.linux/form1.c"

#line 160 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point startPosition;

#line 2776 "obj/debug.linux/form1.c"

#line 161 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler startOrientation;

#line 2781 "obj/debug.linux/form1.c"

#line 162 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Light light;

#line 2786 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2789 "obj/debug.linux/form1.c"


#line 79 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator
{

#line 79 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * container;

#line 2799 "obj/debug.linux/form1.c"

#line 79 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer * pointer;

#line 2804 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2807 "obj/debug.linux/form1.c"


#line 113 "form1.ec"
struct __ecereNameSpace__ecere__com__Iterator
{

#line 113 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * container;

#line 2817 "obj/debug.linux/form1.c"

#line 113 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer * pointer;

#line 2822 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 2825 "obj/debug.linux/form1.c"


#line 35 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2831 "obj/debug.linux/form1.c"


#line 35 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 2837 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2843 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 2849 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2855 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2861 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2867 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2873 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2879 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2885 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2891 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2897 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2903 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2909 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 2915 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 2921 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_parent)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2927 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 2933 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern float (* __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Get_opacity)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2939 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 2945 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Point * value);

#line 2951 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Point * value);

#line 2957 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displayDriver)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2963 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 2969 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern float (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2975 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 2981 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_foreground)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2987 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2993 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_font)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2999 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_font)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 3005 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_faceName)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3011 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 3017 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern float (* __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_size)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3023 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 3029 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasVertScroll)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3035 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 3041 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_scrollArea)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 3047 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_scrollArea)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__sys__Size * value);

#line 3053 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLine)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3059 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 3065 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3071 "obj/debug.linux/form1.c"


#line 68 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents)(struct __ecereNameSpace__ecere__com__Instance * this, const char *  value);

#line 3077 "obj/debug.linux/form1.c"


#line 105 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_anchor)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gui__Anchor * value);

#line 3083 "obj/debug.linux/form1.c"


#line 105 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gui__Anchor * value);

#line 3089 "obj/debug.linux/form1.c"


#line 155 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Get_labeledWindow)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3095 "obj/debug.linux/form1.c"


#line 155 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 3101 "obj/debug.linux/form1.c"


#line 139 "form1.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Add;

#line 3107 "obj/debug.linux/form1.c"


#line 148 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Update)(struct __ecereNameSpace__ecere__com__Instance * this, const struct __ecereNameSpace__ecere__sys__Box * region);

#line 3113 "obj/debug.linux/form1.c"


#line 59 "form1.ec"
extern char *  (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3119 "obj/debug.linux/form1.c"


#line 60 "form1.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Free;

#line 3125 "obj/debug.linux/form1.c"


#line 61 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free)(struct __ecereNameSpace__ecere__gfx3D__Object * this, const struct __ecereNameSpace__ecere__com__Instance * displaySystem);

#line 3131 "obj/debug.linux/form1.c"


#line 52 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 3137 "obj/debug.linux/form1.c"


#line 174 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3143 "obj/debug.linux/form1.c"


#line 176 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3149 "obj/debug.linux/form1.c"


#line 177 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3155 "obj/debug.linux/form1.c"


#line 178 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3161 "obj/debug.linux/form1.c"


#line 184 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)(struct __ecereNameSpace__ecere__com__Instance * this, int width, int height, const struct __ecereNameSpace__ecere__sys__Point * origin);

#line 3167 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 3173 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Quaternion * value);

#line 3179 "obj/debug.linux/form1.c"


#line 195 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3185 "obj/debug.linux/form1.c"


#line 205 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3191 "obj/debug.linux/form1.c"


#line 271 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)(struct __ecereNameSpace__ecere__com__Instance * this, long long code);

#line 3197 "obj/debug.linux/form1.c"


#line 280 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Vector3D * value);

#line 3203 "obj/debug.linux/form1.c"


#line 280 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Vector3D * value);

#line 3209 "obj/debug.linux/form1.c"


#line 289 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create)(struct __ecereNameSpace__ecere__gfx3D__meshes__Cube * this, const struct __ecereNameSpace__ecere__com__Instance * displaySystem);

#line 3215 "obj/debug.linux/form1.c"


#line 341 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 3221 "obj/debug.linux/form1.c"


#line 341 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3227 "obj/debug.linux/form1.c"


#line 342 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 3233 "obj/debug.linux/form1.c"


#line 344 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)(struct __ecereNameSpace__ecere__com__Instance * this, int type);

#line 3239 "obj/debug.linux/form1.c"


#line 346 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3245 "obj/debug.linux/form1.c"


#line 348 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 3251 "obj/debug.linux/form1.c"


#line 349 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)(struct __ecereNameSpace__ecere__com__Instance * this, int id, struct __ecereNameSpace__ecere__gfx__Light * light);

#line 3257 "obj/debug.linux/form1.c"


#line 351 "form1.ec"
extern void (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * surface, const struct __ecereNameSpace__ecere__com__Instance * camera);

#line 3263 "obj/debug.linux/form1.c"


#line 353 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 3269 "obj/debug.linux/form1.c"


#line 358 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gfx3D__Object * object);

#line 3275 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern int (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3281 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type)(struct __ecereNameSpace__ecere__com__Instance * this, int value);

#line 3287 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern float (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_zMin)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3293 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin)(struct __ecereNameSpace__ecere__com__Instance * this, float value);

#line 3299 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern double (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 3305 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov)(struct __ecereNameSpace__ecere__com__Instance * this, double value);

#line 3311 "obj/debug.linux/form1.c"


#line 31 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * modelViewer;

#line 3317 "obj/debug.linux/form1.c"


#line 113 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * (* __ecereProp___ecereNameSpace__ecere__com__MapIterator_Get_map)(struct __ecereNameSpace__ecere__com__MapIterator * this);

#line 3323 "obj/debug.linux/form1.c"


#line 113 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map)(struct __ecereNameSpace__ecere__com__MapIterator * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 3329 "obj/debug.linux/form1.c"


#line 125 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__com__Iterator_Index)(struct __ecereNameSpace__ecere__com__Iterator * this, const uint64 index, unsigned int create);

#line 3335 "obj/debug.linux/form1.c"


#line 127 "form1.ec"
extern uint64 (* __ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data)(struct __ecereNameSpace__ecere__com__Iterator * this);

#line 3341 "obj/debug.linux/form1.c"


#line 127 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data)(struct __ecereNameSpace__ecere__com__Iterator * this, uint64 value);

#line 3347 "obj/debug.linux/form1.c"


#line 172 "form1.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__com__Iterator_Next)(struct __ecereNameSpace__ecere__com__Iterator * this);

#line 3353 "obj/debug.linux/form1.c"

unsigned int __ecereConstructor_eModelApp(struct __ecereNameSpace__ecere__com__Instance * this)

#line 35 "form1.ec"
{

#line 35 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver(this, "OpenGL");
#line 3362 "obj/debug.linux/form1.c"


#line 35 "form1.ec"
return 1;
#line 3367 "obj/debug.linux/form1.c"


#line 35 "form1.ec"
}
#line 3372 "obj/debug.linux/form1.c"



#line 15 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 3379 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 3389 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int count;

#line 3394 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 3399 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void (*  FreeKey)(void *  key);

#line 3404 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 3407 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 3413 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 3423 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 3428 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  name;

#line 3433 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int isProperty;

#line 3438 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberAccess;

#line 3443 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int id;

#line 3448 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3453 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  dataTypeString;

#line 3458 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3463 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3468 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int type;

#line 3473 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int offset;

#line 3478 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberID;

#line 3483 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 3488 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 3493 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberOffset;

#line 3498 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
short structAlignment;

#line 3503 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
short pointerAlignment;

#line 3508 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 3511 "obj/debug.linux/form1.c"


#line 363 "form1.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__DataMember * __ecereNameSpace__ecere__com__eClass_AddDataMember(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

#line 3517 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 3523 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 1 "form1.ec"
const char *  name;

#line 3533 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 3538 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 3543 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 3548 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int depth;

#line 3553 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int (*  function)();

#line 3558 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int vid;

#line 3563 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int type;

#line 3568 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3573 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
void *  symbol;

#line 3578 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  dataTypeString;

#line 3583 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3588 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberAccess;

#line 3593 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 3596 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_AddMethod(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

#line 3602 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 3608 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 7 "form1.ec"
union
{

#line 7 "form1.ec"
struct
{

#line 7 "form1.ec"
const char *  dataTypeString;

#line 3626 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3631 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 3634 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 3639 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct
{

#line 7 "form1.ec"
const char *  memberString;

#line 3648 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
union
{

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 3657 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 3662 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 3667 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 3670 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon2;

#line 3673 "obj/debug.linux/form1.c"
} ecere_gcc_struct __anon1;

#line 3676 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 3679 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 3689 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 3694 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  name;

#line 3699 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int isProperty;

#line 3704 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int memberAccess;

#line 3709 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int id;

#line 3714 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3719 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  dataTypeString;

#line 3724 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3729 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3734 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
void (*  Set)(void * , int);

#line 3739 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int (*  Get)(void * );

#line 3744 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int (*  IsSet)(void * );

#line 3749 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
void *  data;

#line 3754 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
void *  symbol;

#line 3759 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
int vid;

#line 3764 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int conversion;

#line 3769 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int watcherOffset;

#line 3774 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
const char *  category;

#line 3779 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int compiled;

#line 3784 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int selfWatchable;

#line 3789 "obj/debug.linux/form1.c"

#line 1 "form1.ec"
unsigned int isWatchable;

#line 3794 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 3797 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 3803 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 3809 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 3815 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 3821 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 3827 "obj/debug.linux/form1.c"


#line 363 "form1.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

#line 3833 "obj/debug.linux/form1.c"


#line 363 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 3839 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __ecereNameSpace__ecere__com__Instance * module, int declMode);

#line 3845 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Bitmap;

#line 3851 "obj/debug.linux/form1.c"


#line 137 "form1.ec"
struct __ecereNameSpace__ecere__gfx__Bitmap
{

#line 137 "form1.ec"
int width;

#line 3861 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
int height;

#line 3866 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
int pixelFormat;

#line 3871 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned char *  picture;

#line 3876 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int stride;

#line 3881 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int size;

#line 3886 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int sizeBytes;

#line 3891 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int *  palette;

#line 3896 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int allocatePalette;

#line 3901 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int transparent;

#line 3906 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
int shadeShift;

#line 3911 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned char *  paletteShades;

#line 3916 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int alphaBlend;

#line 3921 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * displaySystem;

#line 3926 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * driver;

#line 3931 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
void *  driverData;

#line 3936 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int keepData;

#line 3941 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int mipMaps;

#line 3946 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int sRGB2Linear;

#line 3951 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
int numMipMaps;

#line 3956 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * *  bitmaps;

#line 3961 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 3964 "obj/debug.linux/form1.c"


#line 27 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material
{

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * prev;

#line 3974 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * next;

#line 3979 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
char *  name;

#line 3984 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
float opacity;

#line 3989 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB diffuse;

#line 3994 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB ambient;

#line 3999 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB specular;

#line 4004 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB emissive;

#line 4009 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
float power;

#line 4014 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * baseMap;

#line 4019 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * bumpMap;

#line 4024 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * specularMap;

#line 4029 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * reflectMap;

#line 4034 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * envMap;

#line 4039 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
float reflectivity;

#line 4044 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
float refractiveIndex;

#line 4049 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
float refractiveIndexContainer;

#line 4054 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
unsigned int flags;

#line 4059 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
float uScale;

#line 4064 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
float vScale;

#line 4069 "obj/debug.linux/form1.c"

#line 137 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * shader;

#line 4074 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 4077 "obj/debug.linux/form1.c"


#line 137 "form1.ec"
extern struct __ecereNameSpace__ecere__gfx3D__Material * (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material)(struct __ecereNameSpace__ecere__gfx3D__Object * this);

#line 4083 "obj/debug.linux/form1.c"


#line 137 "form1.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material)(struct __ecereNameSpace__ecere__gfx3D__Object * this, struct __ecereNameSpace__ecere__gfx3D__Material * value);

#line 4089 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 4095 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 7 "form1.ec"
const char *  name;

#line 4105 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 4110 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 4115 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 4120 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int depth;

#line 4125 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 4130 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 4135 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 4140 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 4145 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 4150 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 4153 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 4163 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 4168 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
const char *  name;

#line 4173 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int offset;

#line 4178 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int structSize;

#line 4183 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void * *  _vTbl;

#line 4188 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int vTblSize;

#line 4193 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int (*  Constructor)(void * );

#line 4198 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void (*  Destructor)(void * );

#line 4203 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int offsetClass;

#line 4208 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int sizeClass;

#line 4213 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 4218 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 4223 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 4228 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 4233 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 4238 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 4243 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 4248 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int memberID;

#line 4253 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int startMemberID;

#line 4258 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int type;

#line 4263 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 4268 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 4273 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
const char *  dataTypeString;

#line 4278 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 4283 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int typeSize;

#line 4288 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int defaultAlignment;

#line 4293 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void (*  Initialize)();

#line 4298 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int memberOffset;

#line 4303 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 4308 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
const char *  designerClass;

#line 4313 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int noExpansion;

#line 4318 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
const char *  defaultProperty;

#line 4323 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int comRedefinition;

#line 4328 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int count;

#line 4333 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int isRemote;

#line 4338 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int internalDecl;

#line 4343 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void *  data;

#line 4348 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int computeSize;

#line 4353 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
short structAlignment;

#line 4358 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
short pointerAlignment;

#line 4363 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int destructionWatchOffset;

#line 4368 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int fixed;

#line 4373 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 4378 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int inheritanceAccess;

#line 4383 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
const char *  fullName;

#line 4388 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void *  symbol;

#line 4393 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 4398 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 4403 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 4408 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 4413 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 4418 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int numParams;

#line 4423 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int isInstanceClass;

#line 4428 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int byValueSystemClass;

#line 4433 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void *  bindingsClass;

#line 4438 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 4441 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 7 "form1.ec"
int argc;

#line 4451 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
const char * *  argv;

#line 4456 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int exitCode;

#line 4461 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
unsigned int isGUIApp;

#line 4466 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 4471 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
char *  parsedCommand;

#line 4476 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 4481 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 4484 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_MyCube;

#line 4490 "obj/debug.linux/form1.c"


#line 35 "form1.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_eModelApp;

#line 4496 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ModelViewer;

#line 4502 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
extern char *  (* __ecereFunction___ecereNameSpace__ecere__com__PrintString)(struct __ecereNameSpace__ecere__com__Class * class, const void * object, ...);

#line 4508 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube;

#line 4514 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__Button;

#line 4520 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__EditBox;

#line 4526 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__Label;

#line 4532 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx__FontResource;

#line 4538 "obj/debug.linux/form1.c"


#line 117 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Material;

#line 4544 "obj/debug.linux/form1.c"


#line 131 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_;

#line 4550 "obj/debug.linux/form1.c"


#line 10 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Object;

#line 4556 "obj/debug.linux/form1.c"


#line 12 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___;

#line 4562 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;

#line 4568 "obj/debug.linux/form1.c"


#line 139 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array;

#line 4574 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_char__PTR_;

#line 4580 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_int;

#line 4586 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_double;

#line 4592 "obj/debug.linux/form1.c"


#line 95 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_uint;

#line 4598 "obj/debug.linux/form1.c"


#line 95 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_String;

#line 4604 "obj/debug.linux/form1.c"


#line 60 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map;

#line 4610 "obj/debug.linux/form1.c"


#line 363 "form1.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 4616 "obj/debug.linux/form1.c"


#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 4626 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 4631 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 4636 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 4641 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 4646 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 4651 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 4656 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
const char *  name;

#line 4661 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void *  library;

#line 4666 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
void *  Unload;

#line 4671 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int importType;

#line 4676 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
int origImportType;

#line 4681 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 4686 "obj/debug.linux/form1.c"

#line 7 "form1.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 4691 "obj/debug.linux/form1.c"
} ecere_gcc_struct;

#line 4694 "obj/debug.linux/form1.c"

void __ecereMethod_ModelViewer_OnResize(struct __ecereNameSpace__ecere__com__Instance * this, int w, int h)

#line 183 "form1.ec"
{

#line 183 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 4704 "obj/debug.linux/form1.c"


#line 184 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup(camera, w, h, (((void *)0)));
#line 4709 "obj/debug.linux/form1.c"


#line 185 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 4714 "obj/debug.linux/form1.c"


#line 186 "form1.ec"
}
#line 4719 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnLeftButtonDown(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 189 "form1.ec"
{

#line 189 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 4730 "obj/debug.linux/form1.c"


#line 190 "form1.ec"
if(!__ecerePointer_ModelViewer->moving && !__ecerePointer_ModelViewer->lightMoving)

#line 191 "form1.ec"
{

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler __simpleStruct1;

#line 4742 "obj/debug.linux/form1.c"

#line 194 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct0;

#line 4747 "obj/debug.linux/form1.c"


#line 192 "form1.ec"
__ecerePointer_ModelViewer->startPosition.x = x;
#line 4752 "obj/debug.linux/form1.c"


#line 193 "form1.ec"
__ecerePointer_ModelViewer->startPosition.y = y;
#line 4757 "obj/debug.linux/form1.c"


#line 194 "form1.ec"
__ecerePointer_ModelViewer->startOrientation = (__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion(&__simpleStruct1, (__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation(camera, &__simpleStruct0), &__simpleStruct0)), __simpleStruct1);
#line 4762 "obj/debug.linux/form1.c"


#line 195 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture(this);
#line 4767 "obj/debug.linux/form1.c"


#line 196 "form1.ec"
__ecerePointer_ModelViewer->moving = 1;
#line 4772 "obj/debug.linux/form1.c"


#line 197 "form1.ec"
}
#line 4777 "obj/debug.linux/form1.c"

#line 4779 "obj/debug.linux/form1.c"


#line 198 "form1.ec"
return 1;
#line 4784 "obj/debug.linux/form1.c"


#line 199 "form1.ec"
}
#line 4789 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnLeftButtonUp(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 202 "form1.ec"
{

#line 202 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 4800 "obj/debug.linux/form1.c"


#line 203 "form1.ec"
if(__ecerePointer_ModelViewer->moving)

#line 204 "form1.ec"
{

#line 205 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture(this);
#line 4811 "obj/debug.linux/form1.c"


#line 206 "form1.ec"
__ecerePointer_ModelViewer->moving = 0;
#line 4816 "obj/debug.linux/form1.c"


#line 207 "form1.ec"
}
#line 4821 "obj/debug.linux/form1.c"

#line 4823 "obj/debug.linux/form1.c"


#line 208 "form1.ec"
return 1;
#line 4828 "obj/debug.linux/form1.c"


#line 209 "form1.ec"
}
#line 4833 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnRightButtonDown(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 212 "form1.ec"
{

#line 212 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 4844 "obj/debug.linux/form1.c"


#line 213 "form1.ec"
if(!__ecerePointer_ModelViewer->moving && !__ecerePointer_ModelViewer->lightMoving)

#line 214 "form1.ec"
{

#line 217 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler __simpleStruct0;

#line 4856 "obj/debug.linux/form1.c"


#line 215 "form1.ec"
__ecerePointer_ModelViewer->startPosition.x = x;
#line 4861 "obj/debug.linux/form1.c"


#line 216 "form1.ec"
__ecerePointer_ModelViewer->startPosition.y = y;
#line 4866 "obj/debug.linux/form1.c"


#line 217 "form1.ec"
__ecerePointer_ModelViewer->startOrientation = (__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion(&__simpleStruct0, &__ecerePointer_ModelViewer->light.orientation), __simpleStruct0);
#line 4871 "obj/debug.linux/form1.c"


#line 218 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture(this);
#line 4876 "obj/debug.linux/form1.c"


#line 219 "form1.ec"
__ecerePointer_ModelViewer->lightMoving = 1;
#line 4881 "obj/debug.linux/form1.c"


#line 220 "form1.ec"
}
#line 4886 "obj/debug.linux/form1.c"

#line 4888 "obj/debug.linux/form1.c"


#line 221 "form1.ec"
return 1;
#line 4893 "obj/debug.linux/form1.c"


#line 222 "form1.ec"
}
#line 4898 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnRightButtonUp(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 225 "form1.ec"
{

#line 225 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 4909 "obj/debug.linux/form1.c"


#line 226 "form1.ec"
if(__ecerePointer_ModelViewer->lightMoving)

#line 227 "form1.ec"
{

#line 228 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture(this);
#line 4920 "obj/debug.linux/form1.c"


#line 229 "form1.ec"
__ecerePointer_ModelViewer->lightMoving = 0;
#line 4925 "obj/debug.linux/form1.c"


#line 230 "form1.ec"
}
#line 4930 "obj/debug.linux/form1.c"

#line 4932 "obj/debug.linux/form1.c"


#line 231 "form1.ec"
return 1;
#line 4937 "obj/debug.linux/form1.c"


#line 232 "form1.ec"
}
#line 4942 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnMouseMove(struct __ecereNameSpace__ecere__com__Instance * this, int x, int y, unsigned int mods)

#line 235 "form1.ec"
{

#line 235 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 4953 "obj/debug.linux/form1.c"


#line 236 "form1.ec"
if(__ecerePointer_ModelViewer->moving)

#line 237 "form1.ec"
{

#line 249 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct1;

#line 4965 "obj/debug.linux/form1.c"

#line 248 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct0;

#line 4970 "obj/debug.linux/form1.c"


#line 248 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_ModelViewer->model), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_ModelViewer->model), &__simpleStruct0), __simpleStruct0.position.x = -((float)x / 100.0f) + 3.5f, &__simpleStruct0));
#line 4975 "obj/debug.linux/form1.c"


#line 249 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(__ecerePointer_ModelViewer->model), (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(__ecerePointer_ModelViewer->model), &__simpleStruct1), __simpleStruct1.position.y = -((float)y / 100.0f) + 3.5f, &__simpleStruct1));
#line 4980 "obj/debug.linux/form1.c"


#line 251 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 4985 "obj/debug.linux/form1.c"


#line 252 "form1.ec"
}
#line 4990 "obj/debug.linux/form1.c"

else 
#line 253 "form1.ec"
if(__ecerePointer_ModelViewer->lightMoving)

#line 254 "form1.ec"
{

#line 255 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct1;

#line 5002 "obj/debug.linux/form1.c"

#line 255 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Euler __simpleStruct0;

#line 5007 "obj/debug.linux/form1.c"


#line 255 "form1.ec"
__ecerePointer_ModelViewer->light.orientation = (__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion((__simpleStruct0.yaw = __ecerePointer_ModelViewer->startOrientation.yaw - (__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians(x) - __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians(__ecerePointer_ModelViewer->startPosition.x)), __simpleStruct0.pitch = __ecerePointer_ModelViewer->startOrientation.pitch + (__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians(y) - __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians(__ecerePointer_ModelViewer->startPosition.y)), __simpleStruct0.roll = __ecerePointer_ModelViewer->startOrientation.roll, &__simpleStruct0), &__simpleStruct1), __simpleStruct1);
#line 5012 "obj/debug.linux/form1.c"


#line 262 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 5017 "obj/debug.linux/form1.c"


#line 263 "form1.ec"
}
#line 5022 "obj/debug.linux/form1.c"

#line 5024 "obj/debug.linux/form1.c"

#line 5026 "obj/debug.linux/form1.c"


#line 264 "form1.ec"
return 1;
#line 5031 "obj/debug.linux/form1.c"


#line 265 "form1.ec"
}
#line 5036 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnKeyDown(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int key, unsigned int ch)

#line 268 "form1.ec"
{

#line 268 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 5047 "obj/debug.linux/form1.c"


#line 269 "form1.ec"
switch(key)

#line 270 "form1.ec"
{

#line 271 "form1.ec"
case 0x1LL:

#line 271 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy(this, 0);
#line 5061 "obj/debug.linux/form1.c"

#line 5063 "obj/debug.linux/form1.c"


#line 271 "form1.ec"
return 0;
#line 5068 "obj/debug.linux/form1.c"


#line 272 "form1.ec"
}
#line 5073 "obj/debug.linux/form1.c"

#line 5075 "obj/debug.linux/form1.c"


#line 273 "form1.ec"
return 1;
#line 5080 "obj/debug.linux/form1.c"


#line 274 "form1.ec"
}
#line 5085 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnKeyHit(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int key, unsigned int ch)

#line 277 "form1.ec"
{

#line 281 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct1;

#line 5096 "obj/debug.linux/form1.c"

#line 280 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0;

#line 5101 "obj/debug.linux/form1.c"

#line 277 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 5106 "obj/debug.linux/form1.c"


#line 278 "form1.ec"
switch((unsigned int)__ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey(key))

#line 279 "form1.ec"
{

#line 280 "form1.ec"
case 0x104:

#line 280 "form1.ec"
case 0xC:

#line 280 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position(camera, (__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position(camera, &__simpleStruct0), __simpleStruct0.z *= 1.1111111f, &__simpleStruct0));
#line 5123 "obj/debug.linux/form1.c"

#line 5125 "obj/debug.linux/form1.c"

#line 5127 "obj/debug.linux/form1.c"


#line 280 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 5132 "obj/debug.linux/form1.c"


#line 280 "form1.ec"
break;
#line 5137 "obj/debug.linux/form1.c"


#line 281 "form1.ec"
case 0x103:

#line 281 "form1.ec"
case 0xD:

#line 281 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position(camera, (__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position(camera, &__simpleStruct1), __simpleStruct1.z *= 0.9f, &__simpleStruct1));
#line 5148 "obj/debug.linux/form1.c"

#line 5150 "obj/debug.linux/form1.c"

#line 5152 "obj/debug.linux/form1.c"


#line 281 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 5157 "obj/debug.linux/form1.c"


#line 281 "form1.ec"
break;
#line 5162 "obj/debug.linux/form1.c"


#line 282 "form1.ec"
}
#line 5167 "obj/debug.linux/form1.c"

#line 5169 "obj/debug.linux/form1.c"


#line 283 "form1.ec"
return 1;
#line 5174 "obj/debug.linux/form1.c"


#line 284 "form1.ec"
}
#line 5179 "obj/debug.linux/form1.c"


unsigned int __ecereMethod_ModelViewer_OnLoadGraphics(struct __ecereNameSpace__ecere__com__Instance * this)

#line 287 "form1.ec"
{

#line 287 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 5190 "obj/debug.linux/form1.c"

#line 288 "form1.ec"
int c;

#line 5195 "obj/debug.linux/form1.c"


#line 289 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create(__ecerePointer_ModelViewer->model, __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 5200 "obj/debug.linux/form1.c"


#line 329 "form1.ec"
return 1;
#line 5205 "obj/debug.linux/form1.c"


#line 333 "form1.ec"
}
#line 5210 "obj/debug.linux/form1.c"


void __ecereMethod_ModelViewer_OnRedraw(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * surface)

#line 336 "form1.ec"
{

#line 336 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 5221 "obj/debug.linux/form1.c"


#line 341 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0xFFLL);
#line 5226 "obj/debug.linux/form1.c"


#line 342 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0.000001f);
#line 5231 "obj/debug.linux/form1.c"


#line 344 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear(surface, 1);
#line 5236 "obj/debug.linux/form1.c"


#line 346 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update(camera);
#line 5241 "obj/debug.linux/form1.c"


#line 348 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 1);
#line 5246 "obj/debug.linux/form1.c"


#line 349 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0, &__ecerePointer_ModelViewer->light);
#line 5251 "obj/debug.linux/form1.c"


#line 351 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), surface, camera);
#line 5256 "obj/debug.linux/form1.c"


#line 353 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), 0x333333);
#line 5261 "obj/debug.linux/form1.c"


#line 358 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), scene);
#line 5266 "obj/debug.linux/form1.c"


#line 359 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display(this), surface, (((void *)0)));
#line 5271 "obj/debug.linux/form1.c"


#line 360 "form1.ec"
}
#line 5276 "obj/debug.linux/form1.c"


void __ecereDestructor_ModelViewer(struct __ecereNameSpace__ecere__com__Instance * this)

#line 335 "form1.ec"
{

#line 335 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 5287 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
((__ecerePointer_ModelViewer->model ? __extension__ (
#line 50 "form1.ec"
{

#line 50 "form1.ec"
void * __ecerePtrToDelete = (__ecerePointer_ModelViewer->model);

#line 5298 "obj/debug.linux/form1.c"


#line 50 "form1.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube->Destructor((void *)__ecerePtrToDelete) : 0, __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 5303 "obj/debug.linux/form1.c"


#line 50 "form1.ec"
}
#line 5308 "obj/debug.linux/form1.c"
) : 0), __ecerePointer_ModelViewer->model = 0);
#line 5310 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->btnRun), __ecerePointer_ModelViewer->btnRun = 0);
#line 5315 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->editBoxDeclarations), __ecerePointer_ModelViewer->editBoxDeclarations = 0);
#line 5320 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->lblOutput), __ecerePointer_ModelViewer->lblOutput = 0);
#line 5325 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->btnFind), __ecerePointer_ModelViewer->btnFind = 0);
#line 5330 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->btnAdd), __ecerePointer_ModelViewer->btnAdd = 0);
#line 5335 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->ebFindKey), __ecerePointer_ModelViewer->ebFindKey = 0);
#line 5340 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->ebIndex), __ecerePointer_ModelViewer->ebIndex = 0);
#line 5345 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->lbFinKey), __ecerePointer_ModelViewer->lbFinKey = 0);
#line 5350 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->lblIndex), __ecerePointer_ModelViewer->lblIndex = 0);
#line 5355 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_ModelViewer->lbMessage), __ecerePointer_ModelViewer->lbMessage = 0);
#line 5360 "obj/debug.linux/form1.c"


#line 360 "form1.ec"
}
#line 5365 "obj/debug.linux/form1.c"


void __ecereDestroyModuleInstances_form1()

#line 10 "form1.ec"
{

#line 31 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(modelViewer), modelViewer = 0);
#line 5375 "obj/debug.linux/form1.c"


#line 29 "form1.ec"
((cube_model ? __extension__ (
#line 29 "form1.ec"
{

#line 29 "form1.ec"
void * __ecerePtrToDelete = (cube_model);

#line 5386 "obj/debug.linux/form1.c"


#line 29 "form1.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube->Destructor((void *)__ecerePtrToDelete) : 0, __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 5391 "obj/debug.linux/form1.c"


#line 29 "form1.ec"
}
#line 5396 "obj/debug.linux/form1.c"
) : 0), cube_model = 0);
#line 5398 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(camera), camera = 0);
#line 5403 "obj/debug.linux/form1.c"


#line 12 "form1.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(cubesMap), cubesMap = 0);
#line 5408 "obj/debug.linux/form1.c"


#line 10 "form1.ec"
((scene ? __extension__ (
#line 10 "form1.ec"
{

#line 10 "form1.ec"
void * __ecerePtrToDelete = (scene);

#line 5419 "obj/debug.linux/form1.c"


#line 10 "form1.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor ? __ecereClass___ecereNameSpace__ecere__gfx3D__Object->Destructor((void *)__ecerePtrToDelete) : 0, __ecereNameSpace__ecere__com__eSystem_Delete(__ecerePtrToDelete);
#line 5424 "obj/debug.linux/form1.c"


#line 10 "form1.ec"
}
#line 5429 "obj/debug.linux/form1.c"
) : 0), scene = 0);
#line 5431 "obj/debug.linux/form1.c"


#line 10 "form1.ec"
}
#line 5436 "obj/debug.linux/form1.c"


void __ecereCreateModuleInstances_form1()

#line 10 "form1.ec"
{

#line 29 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3Df __simpleStruct2 =
{

#line 29 "form1.ec"
1, 1, 1
}
#line 29 "form1.ec"
;

#line 5454 "obj/debug.linux/form1.c"

#line 15 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct1;

#line 5459 "obj/debug.linux/form1.c"

#line 15 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0 =
{

#line 15 "form1.ec"
0, 0, (double)(double)(-10)
}
#line 15 "form1.ec"
;

#line 5471 "obj/debug.linux/form1.c"


#line 10 "form1.ec"
scene = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Object);
#line 5476 "obj/debug.linux/form1.c"


#line 12 "form1.ec"
cubesMap = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___);
#line 5481 "obj/debug.linux/form1.c"


#line 12 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(cubesMap);
#line 5486 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
(camera = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type(camera, 3), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position(camera, &__simpleStruct0), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation(camera, (__simpleStruct1.w = 1.0000000000000000, __simpleStruct1.x = 0.0000000000000000, __simpleStruct1.y = 0.0000000000000000, __simpleStruct1.z = 0.0000000000000000, &__simpleStruct1)), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin(camera, 0.01f), __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov(camera, 0.9250245035569946));
#line 5491 "obj/debug.linux/form1.c"


#line 15 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(camera);
#line 5496 "obj/debug.linux/form1.c"


#line 29 "form1.ec"
(cube_model = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube), __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Cube_Set_size(cube_model, &__simpleStruct2));
#line 5501 "obj/debug.linux/form1.c"


#line 31 "form1.ec"
modelViewer = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_ModelViewer);
#line 5506 "obj/debug.linux/form1.c"


#line 31 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(modelViewer);
#line 5511 "obj/debug.linux/form1.c"


#line 10 "form1.ec"
}
#line 5516 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000002(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * btnAdd, int x, int y, unsigned int mods)

#line 110 "form1.ec"
{

#line 120 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct1;

#line 5527 "obj/debug.linux/form1.c"

#line 122 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Vector3D __simpleStruct0;

#line 5532 "obj/debug.linux/form1.c"

#line 110 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 5537 "obj/debug.linux/form1.c"

#line 111 "form1.ec"
const char * buf1 = __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents(__ecerePointer_ModelViewer->ebFindKey);

#line 5542 "obj/debug.linux/form1.c"

#line 113 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, cubesMap), it);

#line 5547 "obj/debug.linux/form1.c"

#line 114 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * cubesArray;

#line 5552 "obj/debug.linux/form1.c"

#line 115 "form1.ec"
struct MyCube * currentCube = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_MyCube);

#line 5557 "obj/debug.linux/form1.c"

#line 116 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform t;

#line 5562 "obj/debug.linux/form1.c"

#line 117 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * m = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Material);

#line 5567 "obj/debug.linux/form1.c"


#line 119 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize((void *)(currentCube));
#line 5572 "obj/debug.linux/form1.c"


#line 120 "form1.ec"
t = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(currentCube), &__simpleStruct1), __simpleStruct1);
#line 5577 "obj/debug.linux/form1.c"


#line 122 "form1.ec"
t.position = (__simpleStruct0.x = (double)__ecereFunction___ecereNameSpace__ecere__sys__GetRandom(0, 5), __simpleStruct0.y = (double)__ecereFunction___ecereNameSpace__ecere__sys__GetRandom(0, 5), __simpleStruct0.z = (double)__ecereFunction___ecereNameSpace__ecere__sys__GetRandom(0, 5), __simpleStruct0);
#line 5582 "obj/debug.linux/form1.c"


#line 123 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(currentCube), &t);
#line 5587 "obj/debug.linux/form1.c"


#line 125 "form1.ec"
if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(buf1), 1))

#line 127 "form1.ec"
cubesArray = ((struct __ecereNameSpace__ecere__com__Instance *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&it)));
#line 5595 "obj/debug.linux/form1.c"

else

#line 129 "form1.ec"
{

#line 131 "form1.ec"
cubesArray = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_);
#line 5604 "obj/debug.linux/form1.c"


#line 133 "form1.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data((void *)(&it), (uint64)(uintptr_t)(cubesArray));
#line 5609 "obj/debug.linux/form1.c"


#line 134 "form1.ec"
}
#line 5614 "obj/debug.linux/form1.c"

#line 5616 "obj/debug.linux/form1.c"


#line 136 "form1.ec"
(__extension__ (
#line 136 "form1.ec"
{

#line 136 "form1.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Class * , const void * , const void * newData);

#line 5627 "obj/debug.linux/form1.c"


#line 136 "form1.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Class *, const void *, const void * newData))__ecereClass___ecereNameSpace__ecere__gfx3D__Material->_vTbl[__ecereVMethodID_class_OnCopy]);
#line 5632 "obj/debug.linux/form1.c"


#line 136 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Material, &m, __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial()) : (void)1;
#line 5637 "obj/debug.linux/form1.c"


#line 136 "form1.ec"
}
#line 5642 "obj/debug.linux/form1.c"
)
#line 136 "form1.ec"
);
#line 5646 "obj/debug.linux/form1.c"


#line 137 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material((void *)(currentCube), m);
#line 5651 "obj/debug.linux/form1.c"


#line 139 "form1.ec"
(__extension__ (
#line 139 "form1.ec"
{

#line 139 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer * (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, uint64 value);

#line 5662 "obj/debug.linux/form1.c"


#line 139 "form1.ec"
__internal_VirtualMethod = ((struct __ecereNameSpace__ecere__com__IteratorPointer * (*)(struct __ecereNameSpace__ecere__com__Instance *, uint64 value))__extension__ (
#line 139 "form1.ec"
{

#line 139 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = cubesArray;

#line 5673 "obj/debug.linux/form1.c"


#line 139 "form1.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Array->_vTbl;
#line 5678 "obj/debug.linux/form1.c"


#line 139 "form1.ec"
}
#line 5683 "obj/debug.linux/form1.c"
)
#line 139 "form1.ec"
[__ecereVMethodID___ecereNameSpace__ecere__com__Container_Add]);
#line 5687 "obj/debug.linux/form1.c"


#line 139 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(cubesArray, (uint64)(uintptr_t)(currentCube)) : (struct __ecereNameSpace__ecere__com__IteratorPointer *)1;
#line 5692 "obj/debug.linux/form1.c"


#line 139 "form1.ec"
}
#line 5697 "obj/debug.linux/form1.c"
)
#line 139 "form1.ec"
);
#line 5701 "obj/debug.linux/form1.c"


#line 140 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add(scene, (void *)(currentCube));
#line 5706 "obj/debug.linux/form1.c"


#line 143 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate((void *)(currentCube), (void *)(__ecerePointer_ModelViewer->model));
#line 5711 "obj/debug.linux/form1.c"


#line 144 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform((void *)(currentCube));
#line 5716 "obj/debug.linux/form1.c"


#line 145 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform(scene);
#line 5721 "obj/debug.linux/form1.c"


#line 148 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 5726 "obj/debug.linux/form1.c"


#line 149 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lbMessage, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Added a cube.", (((void *)0))));
#line 5731 "obj/debug.linux/form1.c"


#line 150 "form1.ec"
return 1;
#line 5736 "obj/debug.linux/form1.c"


#line 151 "form1.ec"
}
#line 5741 "obj/debug.linux/form1.c"


void __ecereMethod_ModelViewer_OnUnloadGraphics(struct __ecereNameSpace__ecere__com__Instance * this)

#line 171 "form1.ec"
{

#line 171 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 5752 "obj/debug.linux/form1.c"


#line 172 "form1.ec"
{

#line 172 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator ca = (ca.container = (void *)0, ca.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&ca, (cubesMap)), ca);

#line 5761 "obj/debug.linux/form1.c"


#line 172 "form1.ec"
while(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Next((void *)(&ca)))

#line 173 "form1.ec"
{

#line 173 "form1.ec"
struct MyCube ** c;

#line 5773 "obj/debug.linux/form1.c"

#line 173 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internalArray = ((struct __ecereNameSpace__ecere__com__Instance *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&ca)));

#line 5778 "obj/debug.linux/form1.c"


#line 173 "form1.ec"
for(
#line 173 "form1.ec"
c = ((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__internalArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array);
#line 5785 "obj/debug.linux/form1.c"
 
#line 173 "form1.ec"
c < ((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__internalArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array) + ((struct __ecereNameSpace__ecere__com__Array *)(((char *)__internalArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->count;
#line 5789 "obj/debug.linux/form1.c"
 
#line 174 "form1.ec"
c++)

#line 174 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free((void *)((*c)), __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 5796 "obj/debug.linux/form1.c"

#line 5798 "obj/debug.linux/form1.c"


#line 174 "form1.ec"
}
#line 5803 "obj/debug.linux/form1.c"

#line 5805 "obj/debug.linux/form1.c"


#line 174 "form1.ec"
}
#line 5810 "obj/debug.linux/form1.c"


#line 176 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 5815 "obj/debug.linux/form1.c"


#line 177 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 5820 "obj/debug.linux/form1.c"


#line 178 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem(this));
#line 5825 "obj/debug.linux/form1.c"


#line 179 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize(scene);
#line 5830 "obj/debug.linux/form1.c"


#line 180 "form1.ec"
}
#line 5835 "obj/debug.linux/form1.c"


void ec_3dpl_qb(char const * cubeName, float x, float y, float z)

#line 363 "form1.ec"
{

#line 374 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct0;

#line 5846 "obj/debug.linux/form1.c"

#line 364 "form1.ec"
const char * buf1 = "";

#line 5851 "obj/debug.linux/form1.c"

#line 365 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, cubesMap), it);

#line 5856 "obj/debug.linux/form1.c"

#line 366 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * cubesArray;

#line 5861 "obj/debug.linux/form1.c"

#line 367 "form1.ec"
struct MyCube * currentCube = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass_MyCube);

#line 5866 "obj/debug.linux/form1.c"

#line 368 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform t;

#line 5871 "obj/debug.linux/form1.c"

#line 369 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Material * m = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__Material);

#line 5876 "obj/debug.linux/form1.c"


#line 371 "form1.ec"
buf1 = __ecereFunction___ecereNameSpace__ecere__sys__CopyString(cubeName);
#line 5881 "obj/debug.linux/form1.c"


#line 373 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize((void *)(currentCube));
#line 5886 "obj/debug.linux/form1.c"


#line 374 "form1.ec"
t = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)(currentCube), &__simpleStruct0), __simpleStruct0);
#line 5891 "obj/debug.linux/form1.c"


#line 376 "form1.ec"
t.position.x = x;
#line 5896 "obj/debug.linux/form1.c"


#line 377 "form1.ec"
t.position.y = -y;
#line 5901 "obj/debug.linux/form1.c"


#line 378 "form1.ec"
t.position.z = z;
#line 5906 "obj/debug.linux/form1.c"


#line 379 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform((void *)(currentCube), &t);
#line 5911 "obj/debug.linux/form1.c"


#line 381 "form1.ec"
if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(buf1), 1))

#line 383 "form1.ec"
cubesArray = ((struct __ecereNameSpace__ecere__com__Instance *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&it)));
#line 5919 "obj/debug.linux/form1.c"

else

#line 385 "form1.ec"
{

#line 387 "form1.ec"
cubesArray = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_);
#line 5928 "obj/debug.linux/form1.c"


#line 389 "form1.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data((void *)(&it), (uint64)(uintptr_t)(cubesArray));
#line 5933 "obj/debug.linux/form1.c"


#line 390 "form1.ec"
}
#line 5938 "obj/debug.linux/form1.c"

#line 5940 "obj/debug.linux/form1.c"


#line 392 "form1.ec"
(__extension__ (
#line 392 "form1.ec"
{

#line 392 "form1.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Class * , const void * , const void * newData);

#line 5951 "obj/debug.linux/form1.c"


#line 392 "form1.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Class *, const void *, const void * newData))__ecereClass___ecereNameSpace__ecere__gfx3D__Material->_vTbl[__ecereVMethodID_class_OnCopy]);
#line 5956 "obj/debug.linux/form1.c"


#line 392 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Material, &m, __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial()) : (void)1;
#line 5961 "obj/debug.linux/form1.c"


#line 392 "form1.ec"
}
#line 5966 "obj/debug.linux/form1.c"
)
#line 392 "form1.ec"
);
#line 5970 "obj/debug.linux/form1.c"


#line 393 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material((void *)(currentCube), m);
#line 5975 "obj/debug.linux/form1.c"


#line 395 "form1.ec"
(__extension__ (
#line 395 "form1.ec"
{

#line 395 "form1.ec"
struct __ecereNameSpace__ecere__com__IteratorPointer * (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, uint64 value);

#line 5986 "obj/debug.linux/form1.c"


#line 395 "form1.ec"
__internal_VirtualMethod = ((struct __ecereNameSpace__ecere__com__IteratorPointer * (*)(struct __ecereNameSpace__ecere__com__Instance *, uint64 value))__extension__ (
#line 395 "form1.ec"
{

#line 395 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = cubesArray;

#line 5997 "obj/debug.linux/form1.c"


#line 395 "form1.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Array->_vTbl;
#line 6002 "obj/debug.linux/form1.c"


#line 395 "form1.ec"
}
#line 6007 "obj/debug.linux/form1.c"
)
#line 395 "form1.ec"
[__ecereVMethodID___ecereNameSpace__ecere__com__Container_Add]);
#line 6011 "obj/debug.linux/form1.c"


#line 395 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(cubesArray, (uint64)(uintptr_t)(currentCube)) : (struct __ecereNameSpace__ecere__com__IteratorPointer *)1;
#line 6016 "obj/debug.linux/form1.c"


#line 395 "form1.ec"
}
#line 6021 "obj/debug.linux/form1.c"
)
#line 395 "form1.ec"
);
#line 6025 "obj/debug.linux/form1.c"


#line 396 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add(scene, (void *)(currentCube));
#line 6030 "obj/debug.linux/form1.c"


#line 399 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate((void *)(currentCube), (void *)(((struct ModelViewer *)(((char *)modelViewer + __ecereClass_ModelViewer->offset)))->model));
#line 6035 "obj/debug.linux/form1.c"


#line 400 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform((void *)(currentCube));
#line 6040 "obj/debug.linux/form1.c"


#line 401 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform(scene);
#line 6045 "obj/debug.linux/form1.c"


#line 404 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(modelViewer, (((void *)0)));
#line 6050 "obj/debug.linux/form1.c"


#line 457 "form1.ec"
}
#line 6055 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000001(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * button, int x, int y, unsigned int mods)

#line 77 "form1.ec"
{

#line 77 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 6066 "obj/debug.linux/form1.c"

#line 78 "form1.ec"
const char * buf1 = __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents(__ecerePointer_ModelViewer->ebFindKey);

#line 6071 "obj/debug.linux/form1.c"

#line 79 "form1.ec"
struct __ecereNameSpace__ecere__com__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map(&it, cubesMap), it);

#line 6076 "obj/debug.linux/form1.c"


#line 82 "form1.ec"
if(__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(buf1), 0))

#line 83 "form1.ec"
{

#line 92 "form1.ec"
double __internalValue002;

#line 6088 "obj/debug.linux/form1.c"

#line 92 "form1.ec"
double __internalValue001;

#line 6093 "obj/debug.linux/form1.c"

#line 92 "form1.ec"
double __internalValue000;

#line 6098 "obj/debug.linux/form1.c"

#line 92 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct2;

#line 6103 "obj/debug.linux/form1.c"

#line 92 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct1;

#line 6108 "obj/debug.linux/form1.c"

#line 92 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Transform __simpleStruct0;

#line 6113 "obj/debug.linux/form1.c"

#line 84 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * cubesArray = ((struct __ecereNameSpace__ecere__com__Instance *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data((void *)(&it)));

#line 6118 "obj/debug.linux/form1.c"

#line 85 "form1.ec"
char * result = "test", * tmp;

#line 6123 "obj/debug.linux/form1.c"

#line 86 "form1.ec"
char * s;

#line 6128 "obj/debug.linux/form1.c"

#line 87 "form1.ec"
int c = 0;

#line 6133 "obj/debug.linux/form1.c"

#line 88 "form1.ec"
char * index;

#line 6138 "obj/debug.linux/form1.c"


#line 89 "form1.ec"
index = __ecereFunction___ecereNameSpace__ecere__sys__CopyString(__ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption(__ecerePointer_ModelViewer->lblIndex));
#line 6143 "obj/debug.linux/form1.c"


#line 90 "form1.ec"
c = atoi(index);
#line 6148 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
tmp = __ecereFunction___ecereNameSpace__ecere__com__PrintString(__ecereClass_char__PTR_, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "cube ", (((void *)0))), __ecereClass_int, (void *)&c, __ecereClass_char__PTR_, " x ", __ecereClass_double, __extension__ (
#line 92 "form1.ec"
{

#line 92 "form1.ec"
__internalValue000 = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)((((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)cubesArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[c]), &__simpleStruct0), __simpleStruct0.position.x);
#line 6158 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
(void *)&__internalValue000;
#line 6163 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
}
#line 6168 "obj/debug.linux/form1.c"
)
#line 92 "form1.ec"
, __ecereClass_char__PTR_, " y ", __ecereClass_double, __extension__ (
#line 92 "form1.ec"
{

#line 92 "form1.ec"
__internalValue001 = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)((((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)cubesArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[c]), &__simpleStruct1), __simpleStruct1.position.y);
#line 6177 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
(void *)&__internalValue001;
#line 6182 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
}
#line 6187 "obj/debug.linux/form1.c"
)
#line 92 "form1.ec"
, __ecereClass_char__PTR_, " z ", __ecereClass_double, __extension__ (
#line 92 "form1.ec"
{

#line 92 "form1.ec"
__internalValue002 = (__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform((void *)((((struct MyCube **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)cubesArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[c]), &__simpleStruct2), __simpleStruct2.position.z);
#line 6196 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
(void *)&__internalValue002;
#line 6201 "obj/debug.linux/form1.c"


#line 92 "form1.ec"
}
#line 6206 "obj/debug.linux/form1.c"
)
#line 92 "form1.ec"
, (void *)0);
#line 6210 "obj/debug.linux/form1.c"


#line 95 "form1.ec"
s = __ecereFunction___ecereNameSpace__ecere__com__PrintString(__ecereClass_char__PTR_, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Found ", (((void *)0))), __ecereClass_uint, (void *)&((struct __ecereNameSpace__ecere__com__Array *)(((char *)cubesArray + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->count, __ecereClass_char__PTR_, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", " by that name", (((void *)0))), __ecereClass_String, tmp, (void *)0);
#line 6215 "obj/debug.linux/form1.c"


#line 97 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lbMessage, s);
#line 6220 "obj/debug.linux/form1.c"


#line 98 "form1.ec"
(__ecereNameSpace__ecere__com__eSystem_Delete(s), s = 0);
#line 6225 "obj/debug.linux/form1.c"


#line 99 "form1.ec"
}
#line 6230 "obj/debug.linux/form1.c"

else

#line 101 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lbMessage, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "No cubes found by that name", (((void *)0))));
#line 6236 "obj/debug.linux/form1.c"

#line 6238 "obj/debug.linux/form1.c"


#line 102 "form1.ec"
return 1;
#line 6243 "obj/debug.linux/form1.c"


#line 103 "form1.ec"
}
#line 6248 "obj/debug.linux/form1.c"


static unsigned int __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000000(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * button, int x, int y, unsigned int mods)

#line 57 "form1.ec"
{

#line 57 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 6259 "obj/debug.linux/form1.c"

#line 58 "form1.ec"
char * tmp;

#line 6264 "obj/debug.linux/form1.c"


#line 59 "form1.ec"
tmp = __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents(__ecerePointer_ModelViewer->editBoxDeclarations);
#line 6269 "obj/debug.linux/form1.c"


#line 60 "form1.ec"
(__extension__ (
#line 60 "form1.ec"
{

#line 60 "form1.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *);

#line 6280 "obj/debug.linux/form1.c"


#line 60 "form1.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Instance *))__extension__ (
#line 60 "form1.ec"
{

#line 60 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = cubesMap;

#line 6291 "obj/debug.linux/form1.c"


#line 60 "form1.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Map->_vTbl;
#line 6296 "obj/debug.linux/form1.c"


#line 60 "form1.ec"
}
#line 6301 "obj/debug.linux/form1.c"
)
#line 60 "form1.ec"
[__ecereVMethodID___ecereNameSpace__ecere__com__Container_Free]);
#line 6305 "obj/debug.linux/form1.c"


#line 60 "form1.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(cubesMap) : (void)1;
#line 6310 "obj/debug.linux/form1.c"


#line 60 "form1.ec"
}
#line 6315 "obj/debug.linux/form1.c"
)
#line 60 "form1.ec"
);
#line 6319 "obj/debug.linux/form1.c"


#line 61 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free(scene, (((void *)0)));
#line 6324 "obj/debug.linux/form1.c"


#line 62 "form1.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update(this, (((void *)0)));
#line 6329 "obj/debug.linux/form1.c"


#line 64 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lblOutput, evalgedamo(tmp));
#line 6334 "obj/debug.linux/form1.c"


#line 65 "form1.ec"
return 1;
#line 6339 "obj/debug.linux/form1.c"


#line 66 "form1.ec"
}
#line 6344 "obj/debug.linux/form1.c"


void __ecereUnregisterModule_form1(struct __ecereNameSpace__ecere__com__Instance * module)

#line 363 "form1.ec"
{


#line 457 "form1.ec"
}
#line 6355 "obj/debug.linux/form1.c"


unsigned int __ecereConstructor_ModelViewer(struct __ecereNameSpace__ecere__com__Instance * this)

#line 335 "form1.ec"
{

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__gfx3D__Quaternion __simpleStruct18;

#line 6366 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct17;

#line 6371 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__gfx__ColorRGB __simpleStruct16;

#line 6376 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct15 =
{

#line 335 "form1.ec"
32, 176
}
#line 335 "form1.ec"
;

#line 6388 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct14 =
{

#line 335 "form1.ec"
168, 48
}
#line 335 "form1.ec"
;

#line 6400 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct13 =
{

#line 335 "form1.ec"
40, 48
}
#line 335 "form1.ec"
;

#line 6412 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct12 =
{

#line 335 "form1.ec"
152, 8
}
#line 335 "form1.ec"
;

#line 6424 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct11 =
{

#line 335 "form1.ec"
80, 20
}
#line 335 "form1.ec"
;

#line 6436 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct10 =
{

#line 335 "form1.ec"
32, 16
}
#line 335 "form1.ec"
;

#line 6448 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct9 =
{

#line 335 "form1.ec"
80, 20
}
#line 335 "form1.ec"
;

#line 6460 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__gui__Anchor __simpleStruct8 =
{

#line 335 "form1.ec"

.__anon1 = {

#line 335 "form1.ec"

.horz = {

#line 335 "form1.ec"
0,
.__anon1 = {

#line 335 "form1.ec"
.distance = -369
}
#line 335 "form1.ec"

}
#line 335 "form1.ec"

}
#line 335 "form1.ec"
,
.__anon2 = {

#line 335 "form1.ec"

.vert = {

#line 335 "form1.ec"
0,
.__anon1 = {

#line 335 "form1.ec"
.distance = -215
}
#line 335 "form1.ec"

}
#line 335 "form1.ec"

}
#line 335 "form1.ec"
,
{

#line 335 "form1.ec"
0,
.__anon1 = {

#line 335 "form1.ec"
.distance = 0
}
#line 335 "form1.ec"

}
#line 335 "form1.ec"
,
{

#line 335 "form1.ec"
0,
.__anon1 = {

#line 335 "form1.ec"
.distance = 0
}
#line 335 "form1.ec"

}
#line 335 "form1.ec"

}
#line 335 "form1.ec"
;

#line 6542 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct7 =
{

#line 335 "form1.ec"
288, 24
}
#line 335 "form1.ec"
;

#line 6554 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct6 =
{

#line 335 "form1.ec"
32, 88
}
#line 335 "form1.ec"
;

#line 6566 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct5 =
{

#line 335 "form1.ec"
270, 61
}
#line 335 "form1.ec"
;

#line 6578 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct4 =
{

#line 335 "form1.ec"
296, 128
}
#line 335 "form1.ec"
;

#line 6590 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct3 =
{

#line 335 "form1.ec"
32, 200
}
#line 335 "form1.ec"
;

#line 6602 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct2 =
{

#line 335 "form1.ec"
500, 500
}
#line 335 "form1.ec"
;

#line 6614 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Point __simpleStruct1 =
{

#line 335 "form1.ec"
304, 112
}
#line 335 "form1.ec"
;

#line 6626 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__sys__Size __simpleStruct0 =
{

#line 335 "form1.ec"
1024, 800
}
#line 335 "form1.ec"
;

#line 6638 "obj/debug.linux/form1.c"

#line 335 "form1.ec"
__attribute__((unused)) struct ModelViewer * __ecerePointer_ModelViewer = (struct ModelViewer *)(this ? (((char *)this) + __ecereClass_ModelViewer->offset) : 0);

#line 6643 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->model = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube);
#line 6648 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->btnRun = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Button);
#line 6653 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->btnRun);
#line 6658 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->editBoxDeclarations = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox);
#line 6663 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->editBoxDeclarations);
#line 6668 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->lblOutput = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Label);
#line 6673 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->lblOutput);
#line 6678 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->btnFind = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Button);
#line 6683 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->btnFind);
#line 6688 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->btnAdd = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Button);
#line 6693 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->btnAdd);
#line 6698 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->ebFindKey = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox);
#line 6703 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->ebFindKey);
#line 6708 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->ebIndex = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox);
#line 6713 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->ebIndex);
#line 6718 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->lbFinKey = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Label);
#line 6723 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->lbFinKey);
#line 6728 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->lblIndex = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Label);
#line 6733 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->lblIndex);
#line 6738 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecerePointer_ModelViewer->lbMessage = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gui__controls__Label);
#line 6743 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_ModelViewer->lbMessage);
#line 6748 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(this, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "3dpleC", (((void *)0))));
#line 6753 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_background(this, 0x0LL);
#line 6758 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle(this, 7);
#line 6763 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize(this, 1);
#line 6768 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize(this, 1);
#line 6773 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose(this, 1);
#line 6778 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(this, &__simpleStruct0);
#line 6783 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->btnRun, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->btnRun, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Run", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity(__ecerePointer_ModelViewer->btnRun, 0.3f), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->btnRun, &__simpleStruct1), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver(__ecerePointer_ModelViewer->btnRun, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "OpenGL", (((void *)0)))), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->btnRun, "NotifyClicked", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000000));
#line 6788 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->editBoxDeclarations, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->editBoxDeclarations, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "editBox1", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity(__ecerePointer_ModelViewer->editBoxDeclarations, 0.3f), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->editBoxDeclarations, 0x90EE90LL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_font(__ecerePointer_ModelViewer->editBoxDeclarations, __extension__ (
#line 335 "form1.ec"
{

#line 335 "form1.ec"
struct __ecereNameSpace__ecere__com__Instance * __ecereInstance1 = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__gfx__FontResource);

#line 6799 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName(__ecereInstance1, "Tahoma"), __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size(__ecereInstance1, 20), __ecereInstance1;
#line 6804 "obj/debug.linux/form1.c"


#line 360 "form1.ec"
}
#line 6809 "obj/debug.linux/form1.c"
)
#line 68 "form1.ec"
), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(__ecerePointer_ModelViewer->editBoxDeclarations, &__simpleStruct2), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->editBoxDeclarations, &__simpleStruct3), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll(__ecerePointer_ModelViewer->editBoxDeclarations, 1), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver(__ecerePointer_ModelViewer->editBoxDeclarations, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "OpenGL", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_scrollArea(__ecerePointer_ModelViewer->editBoxDeclarations, &__simpleStruct4), __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine(__ecerePointer_ModelViewer->editBoxDeclarations, 1), __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents(__ecerePointer_ModelViewer->editBoxDeclarations, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "for(var i=-3;i<3;i++) {\n   qb(\"a\",i,i,i);\n}\n", (((void *)0)))));
#line 6813 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->lblOutput, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lblOutput, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "output", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->lblOutput, 0xFFFFFFLL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle(__ecerePointer_ModelViewer->lblOutput, 1), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(__ecerePointer_ModelViewer->lblOutput, &__simpleStruct5), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->lblOutput, &__simpleStruct6));
#line 6818 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->btnFind, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->btnFind, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Find", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->btnFind, &__simpleStruct7), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->btnFind, "NotifyClicked", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000001));
#line 6823 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->btnAdd, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->btnAdd, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Add", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor(__ecerePointer_ModelViewer->btnAdd, &__simpleStruct8), __ecereNameSpace__ecere__com__eInstance_SetMethod(__ecerePointer_ModelViewer->btnAdd, "NotifyClicked", __ecereInstMeth___ecereNameSpace__ecere__gui__controls__Button_NotifyClicked__00000002));
#line 6828 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->ebFindKey, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->ebFindKey, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Cube Key", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(__ecerePointer_ModelViewer->ebFindKey, &__simpleStruct9), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->ebFindKey, &__simpleStruct10));
#line 6833 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->ebIndex, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->ebIndex, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Cube Index", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size(__ecerePointer_ModelViewer->ebIndex, &__simpleStruct11), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->ebIndex, &__simpleStruct12), __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents(__ecerePointer_ModelViewer->ebIndex, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "0", (((void *)0)))));
#line 6838 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->lbFinKey, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->lbFinKey, 0xFFFFFFLL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->lbFinKey, &__simpleStruct13), __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow(__ecerePointer_ModelViewer->lbFinKey, __ecerePointer_ModelViewer->ebFindKey));
#line 6843 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->lblIndex, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lblIndex, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "cube index", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->lblIndex, 0xFFFFFFLL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->lblIndex, &__simpleStruct14));
#line 6848 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent(__ecerePointer_ModelViewer->lbMessage, this), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption(__ecerePointer_ModelViewer->lbMessage, __ecereNameSpace__ecere__GetTranslatedString("testTransCube", "Add or find a key", (((void *)0)))), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground(__ecerePointer_ModelViewer->lbMessage, 0xADFF2FLL), __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position(__ecerePointer_ModelViewer->lbMessage, &__simpleStruct15));
#line 6853 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
(__ecerePointer_ModelViewer->light.diffuse = (__simpleStruct16.r = 1.0000000000000000f, __simpleStruct16.g = 1.0000000000000000f, __simpleStruct16.b = 1.0000000000000000f, __simpleStruct16), __ecerePointer_ModelViewer->light.specular = (__simpleStruct17.r = 1.0000000000000000f, __simpleStruct17.g = 1.0000000000000000f, __simpleStruct17.b = 1.0000000000000000f, __simpleStruct17), __ecerePointer_ModelViewer->light.orientation = (__simpleStruct18.w = 0.9622501868990583, __simpleStruct18.x = 0.0841859828293692, __simpleStruct18.y = 0.2578341604962995, __simpleStruct18.z = 0.0225575661131498, __simpleStruct18));
#line 6858 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
return 1;
#line 6863 "obj/debug.linux/form1.c"


#line 360 "form1.ec"
}
#line 6868 "obj/debug.linux/form1.c"


void __ecereRegisterModule_form1(struct __ecereNameSpace__ecere__com__Instance * module)

#line 363 "form1.ec"
{

#line 363 "form1.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 6879 "obj/debug.linux/form1.c"


#line 363 "form1.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(5, "MyCube", "ecere::gfx3D::meshes::Cube", sizeof(struct MyCube), 0, (void *)0, (void *)0, module, 2, 1);
#line 6884 "obj/debug.linux/form1.c"


#line 363 "form1.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 363 "form1.ec"
__ecereClass_MyCube = class;
#line 6892 "obj/debug.linux/form1.c"

#line 6894 "obj/debug.linux/form1.c"


#line 363 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, 4, 2);
#line 6899 "obj/debug.linux/form1.c"


#line 363 "form1.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "eModelApp", "ecere::gui::GuiApplication", 0, 0, (void *)__ecereConstructor_eModelApp, (void *)0, module, 2, 1);
#line 6904 "obj/debug.linux/form1.c"


#line 363 "form1.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 363 "form1.ec"
__ecereClass_eModelApp = class;
#line 6912 "obj/debug.linux/form1.c"

#line 6914 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "ModelViewer", "ecere::gui::Window", sizeof(struct ModelViewer), 0, (void *)__ecereConstructor_ModelViewer, (void *)__ecereDestructor_ModelViewer, module, 2, 1);
#line 6919 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 335 "form1.ec"
__ecereClass_ModelViewer = class;
#line 6927 "obj/debug.linux/form1.c"

#line 6929 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnResize", 0, __ecereMethod_ModelViewer_OnResize, 1);
#line 6934 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLoadGraphics", 0, __ecereMethod_ModelViewer_OnLoadGraphics, 1);
#line 6939 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnUnloadGraphics", 0, __ecereMethod_ModelViewer_OnUnloadGraphics, 1);
#line 6944 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnRedraw", 0, __ecereMethod_ModelViewer_OnRedraw, 1);
#line 6949 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnKeyDown", 0, __ecereMethod_ModelViewer_OnKeyDown, 1);
#line 6954 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnKeyHit", 0, __ecereMethod_ModelViewer_OnKeyHit, 1);
#line 6959 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnMouseMove", 0, __ecereMethod_ModelViewer_OnMouseMove, 1);
#line 6964 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLeftButtonDown", 0, __ecereMethod_ModelViewer_OnLeftButtonDown, 1);
#line 6969 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnLeftButtonUp", 0, __ecereMethod_ModelViewer_OnLeftButtonUp, 1);
#line 6974 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnRightButtonDown", 0, __ecereMethod_ModelViewer_OnRightButtonDown, 1);
#line 6979 "obj/debug.linux/form1.c"


#line 335 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "OnRightButtonUp", 0, __ecereMethod_ModelViewer_OnRightButtonUp, 1);
#line 6984 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 8 ? sizeof(void *) : 8, 2);
#line 6989 "obj/debug.linux/form1.c"


#line 1 "form1.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("ec_3dpl_qb", "void ec_3dpl_qb(const char * cubeName, float x, float y, float z)", ec_3dpl_qb, module, 2);
#line 6994 "obj/debug.linux/form1.c"


#line 457 "form1.ec"
}
#line 6999 "obj/debug.linux/form1.c"


