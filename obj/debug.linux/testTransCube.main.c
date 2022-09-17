/* Code generated from eC source file: testTransCube.main.ec */
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

#line 55 "obj/debug.linux/testTransCube.main.c"


#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __u_short;

#line 61 "obj/debug.linux/testTransCube.main.c"


#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int;

#line 67 "obj/debug.linux/testTransCube.main.c"


#line 34 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_long;

#line 73 "obj/debug.linux/testTransCube.main.c"


#line 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed char __int8_t;

#line 79 "obj/debug.linux/testTransCube.main.c"


#line 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __uint8_t;

#line 85 "obj/debug.linux/testTransCube.main.c"


#line 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed short int __int16_t;

#line 91 "obj/debug.linux/testTransCube.main.c"


#line 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __uint16_t;

#line 97 "obj/debug.linux/testTransCube.main.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed int __int32_t;

#line 103 "obj/debug.linux/testTransCube.main.c"


#line 42 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uint32_t;

#line 109 "obj/debug.linux/testTransCube.main.c"


#line 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed long int __int64_t;

#line 115 "obj/debug.linux/testTransCube.main.c"


#line 45 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uint64_t;

#line 121 "obj/debug.linux/testTransCube.main.c"


#line 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int8_t __int_least8_t;

#line 127 "obj/debug.linux/testTransCube.main.c"


#line 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint8_t __uint_least8_t;

#line 133 "obj/debug.linux/testTransCube.main.c"


#line 54 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int16_t __int_least16_t;

#line 139 "obj/debug.linux/testTransCube.main.c"


#line 55 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint16_t __uint_least16_t;

#line 145 "obj/debug.linux/testTransCube.main.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int32_t __int_least32_t;

#line 151 "obj/debug.linux/testTransCube.main.c"


#line 57 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint32_t __uint_least32_t;

#line 157 "obj/debug.linux/testTransCube.main.c"


#line 58 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int64_t __int_least64_t;

#line 163 "obj/debug.linux/testTransCube.main.c"


#line 59 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint64_t __uint_least64_t;

#line 169 "obj/debug.linux/testTransCube.main.c"


#line 63 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __quad_t;

#line 175 "obj/debug.linux/testTransCube.main.c"


#line 64 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_quad_t;

#line 181 "obj/debug.linux/testTransCube.main.c"


#line 72 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intmax_t;

#line 187 "obj/debug.linux/testTransCube.main.c"


#line 73 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uintmax_t;

#line 193 "obj/debug.linux/testTransCube.main.c"


#line 145 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __dev_t;

#line 199 "obj/debug.linux/testTransCube.main.c"


#line 146 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t;

#line 205 "obj/debug.linux/testTransCube.main.c"


#line 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t;

#line 211 "obj/debug.linux/testTransCube.main.c"


#line 148 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino_t;

#line 217 "obj/debug.linux/testTransCube.main.c"


#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino64_t;

#line 223 "obj/debug.linux/testTransCube.main.c"


#line 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t;

#line 229 "obj/debug.linux/testTransCube.main.c"


#line 151 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __nlink_t;

#line 235 "obj/debug.linux/testTransCube.main.c"


#line 152 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off_t;

#line 241 "obj/debug.linux/testTransCube.main.c"


#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off64_t;

#line 247 "obj/debug.linux/testTransCube.main.c"


#line 154 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;

#line 253 "obj/debug.linux/testTransCube.main.c"


#line 155 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef struct
{

#line 155 "/usr/include/x86_64-linux-gnu/bits/types.h"
int __val[2];

#line 263 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __fsid_t;

#line 266 "obj/debug.linux/testTransCube.main.c"


#line 156 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __clock_t;

#line 272 "obj/debug.linux/testTransCube.main.c"


#line 157 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim_t;

#line 278 "obj/debug.linux/testTransCube.main.c"


#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim64_t;

#line 284 "obj/debug.linux/testTransCube.main.c"


#line 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __id_t;

#line 290 "obj/debug.linux/testTransCube.main.c"


#line 160 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __time_t;

#line 296 "obj/debug.linux/testTransCube.main.c"


#line 161 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __useconds_t;

#line 302 "obj/debug.linux/testTransCube.main.c"


#line 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __suseconds_t;

#line 308 "obj/debug.linux/testTransCube.main.c"


#line 164 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __daddr_t;

#line 314 "obj/debug.linux/testTransCube.main.c"


#line 165 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __key_t;

#line 320 "obj/debug.linux/testTransCube.main.c"


#line 168 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __clockid_t;

#line 326 "obj/debug.linux/testTransCube.main.c"


#line 171 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef void * __timer_t;

#line 332 "obj/debug.linux/testTransCube.main.c"


#line 174 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blksize_t;

#line 338 "obj/debug.linux/testTransCube.main.c"


#line 179 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt_t;

#line 344 "obj/debug.linux/testTransCube.main.c"


#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt64_t;

#line 350 "obj/debug.linux/testTransCube.main.c"


#line 183 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt_t;

#line 356 "obj/debug.linux/testTransCube.main.c"


#line 184 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt64_t;

#line 362 "obj/debug.linux/testTransCube.main.c"


#line 187 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt_t;

#line 368 "obj/debug.linux/testTransCube.main.c"


#line 188 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt64_t;

#line 374 "obj/debug.linux/testTransCube.main.c"


#line 191 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __fsword_t;

#line 380 "obj/debug.linux/testTransCube.main.c"


#line 193 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __ssize_t;

#line 386 "obj/debug.linux/testTransCube.main.c"


#line 196 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __syscall_slong_t;

#line 392 "obj/debug.linux/testTransCube.main.c"


#line 198 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __syscall_ulong_t;

#line 398 "obj/debug.linux/testTransCube.main.c"


#line 202 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __off64_t __loff_t;

#line 404 "obj/debug.linux/testTransCube.main.c"


#line 203 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef char * __caddr_t;

#line 410 "obj/debug.linux/testTransCube.main.c"


#line 206 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intptr_t;

#line 416 "obj/debug.linux/testTransCube.main.c"


#line 209 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t;

#line 422 "obj/debug.linux/testTransCube.main.c"


#line 214 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __sig_atomic_t;

#line 428 "obj/debug.linux/testTransCube.main.c"


#line 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int8_t int8_t;

#line 434 "obj/debug.linux/testTransCube.main.c"


#line 25 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int16_t int16_t;

#line 440 "obj/debug.linux/testTransCube.main.c"


#line 26 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int32_t int32_t;

#line 446 "obj/debug.linux/testTransCube.main.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int64_t int64_t;

#line 452 "obj/debug.linux/testTransCube.main.c"


#line 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint8_t uint8_t;

#line 458 "obj/debug.linux/testTransCube.main.c"


#line 25 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint16_t uint16_t;

#line 464 "obj/debug.linux/testTransCube.main.c"


#line 26 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint32_t uint32_t;

#line 470 "obj/debug.linux/testTransCube.main.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint64_t uint64_t;

#line 476 "obj/debug.linux/testTransCube.main.c"


#line 43 "/usr/include/stdint.h"
typedef __int_least8_t int_least8_t;

#line 482 "obj/debug.linux/testTransCube.main.c"


#line 44 "/usr/include/stdint.h"
typedef __int_least16_t int_least16_t;

#line 488 "obj/debug.linux/testTransCube.main.c"


#line 45 "/usr/include/stdint.h"
typedef __int_least32_t int_least32_t;

#line 494 "obj/debug.linux/testTransCube.main.c"


#line 46 "/usr/include/stdint.h"
typedef __int_least64_t int_least64_t;

#line 500 "obj/debug.linux/testTransCube.main.c"


#line 49 "/usr/include/stdint.h"
typedef __uint_least8_t uint_least8_t;

#line 506 "obj/debug.linux/testTransCube.main.c"


#line 50 "/usr/include/stdint.h"
typedef __uint_least16_t uint_least16_t;

#line 512 "obj/debug.linux/testTransCube.main.c"


#line 51 "/usr/include/stdint.h"
typedef __uint_least32_t uint_least32_t;

#line 518 "obj/debug.linux/testTransCube.main.c"


#line 52 "/usr/include/stdint.h"
typedef __uint_least64_t uint_least64_t;

#line 524 "obj/debug.linux/testTransCube.main.c"


#line 58 "/usr/include/stdint.h"
typedef signed char int_fast8_t;

#line 530 "obj/debug.linux/testTransCube.main.c"


#line 60 "/usr/include/stdint.h"
typedef long int int_fast16_t;

#line 536 "obj/debug.linux/testTransCube.main.c"


#line 61 "/usr/include/stdint.h"
typedef long int int_fast32_t;

#line 542 "obj/debug.linux/testTransCube.main.c"


#line 62 "/usr/include/stdint.h"
typedef long int int_fast64_t;

#line 548 "obj/debug.linux/testTransCube.main.c"


#line 71 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;

#line 554 "obj/debug.linux/testTransCube.main.c"


#line 73 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t;

#line 560 "obj/debug.linux/testTransCube.main.c"


#line 74 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t;

#line 566 "obj/debug.linux/testTransCube.main.c"


#line 75 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t;

#line 572 "obj/debug.linux/testTransCube.main.c"


#line 87 "/usr/include/stdint.h"
typedef long int intptr_t;

#line 578 "obj/debug.linux/testTransCube.main.c"


#line 90 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t;

#line 584 "obj/debug.linux/testTransCube.main.c"


#line 101 "/usr/include/stdint.h"
typedef __intmax_t intmax_t;

#line 590 "obj/debug.linux/testTransCube.main.c"


#line 102 "/usr/include/stdint.h"
typedef __uintmax_t uintmax_t;

#line 596 "obj/debug.linux/testTransCube.main.c"


#line 33 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_char u_char;

#line 602 "obj/debug.linux/testTransCube.main.c"


#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_short u_short;

#line 608 "obj/debug.linux/testTransCube.main.c"


#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_int u_int;

#line 614 "obj/debug.linux/testTransCube.main.c"


#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_long u_long;

#line 620 "obj/debug.linux/testTransCube.main.c"


#line 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __quad_t quad_t;

#line 626 "obj/debug.linux/testTransCube.main.c"


#line 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_quad_t u_quad_t;

#line 632 "obj/debug.linux/testTransCube.main.c"


#line 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsid_t fsid_t;

#line 638 "obj/debug.linux/testTransCube.main.c"


#line 42 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __loff_t loff_t;

#line 644 "obj/debug.linux/testTransCube.main.c"


#line 47 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ino_t ino_t;

#line 650 "obj/debug.linux/testTransCube.main.c"


#line 59 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __dev_t dev_t;

#line 656 "obj/debug.linux/testTransCube.main.c"


#line 64 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __gid_t gid_t;

#line 662 "obj/debug.linux/testTransCube.main.c"


#line 69 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __mode_t mode_t;

#line 668 "obj/debug.linux/testTransCube.main.c"


#line 74 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __nlink_t nlink_t;

#line 674 "obj/debug.linux/testTransCube.main.c"


#line 79 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uid_t uid_t;

#line 680 "obj/debug.linux/testTransCube.main.c"


#line 85 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __off_t off_t;

#line 686 "obj/debug.linux/testTransCube.main.c"


#line 97 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;

#line 692 "obj/debug.linux/testTransCube.main.c"


#line 103 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __id_t id_t;

#line 698 "obj/debug.linux/testTransCube.main.c"


#line 108 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ssize_t ssize_t;

#line 704 "obj/debug.linux/testTransCube.main.c"


#line 114 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __daddr_t daddr_t;

#line 710 "obj/debug.linux/testTransCube.main.c"


#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __caddr_t caddr_t;

#line 716 "obj/debug.linux/testTransCube.main.c"


#line 121 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __key_t key_t;

#line 722 "obj/debug.linux/testTransCube.main.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h"
typedef __clock_t clock_t;

#line 728 "obj/debug.linux/testTransCube.main.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h"
typedef __clockid_t clockid_t;

#line 734 "obj/debug.linux/testTransCube.main.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h"
typedef __time_t time_t;

#line 740 "obj/debug.linux/testTransCube.main.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h"
typedef __timer_t timer_t;

#line 746 "obj/debug.linux/testTransCube.main.c"


#line 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
typedef long unsigned int size_t;

#line 752 "obj/debug.linux/testTransCube.main.c"


#line 148 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned long int ulong;

#line 758 "obj/debug.linux/testTransCube.main.c"


#line 149 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned short int ushort;

#line 764 "obj/debug.linux/testTransCube.main.c"


#line 150 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint;

#line 770 "obj/debug.linux/testTransCube.main.c"


#line 158 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint8_t u_int8_t;

#line 776 "obj/debug.linux/testTransCube.main.c"


#line 159 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint16_t u_int16_t;

#line 782 "obj/debug.linux/testTransCube.main.c"


#line 160 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint32_t u_int32_t;

#line 788 "obj/debug.linux/testTransCube.main.c"


#line 161 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint64_t u_int64_t;

#line 794 "obj/debug.linux/testTransCube.main.c"


#line 164 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int register_t __attribute__((__mode__ (__word__)));

#line 800 "obj/debug.linux/testTransCube.main.c"

static __inline __uint16_t __bswap_16(__uint16_t __bsx)

#line 35 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 37 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap16(__bsx);
#line 809 "obj/debug.linux/testTransCube.main.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 814 "obj/debug.linux/testTransCube.main.c"


static __inline __uint32_t __bswap_32(__uint32_t __bsx)

#line 50 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 52 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap32(__bsx);
#line 824 "obj/debug.linux/testTransCube.main.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 829 "obj/debug.linux/testTransCube.main.c"


 static __inline __uint64_t __bswap_64(__uint64_t __bsx)

#line 71 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 73 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap64(__bsx);
#line 839 "obj/debug.linux/testTransCube.main.c"


#line 77 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 844 "obj/debug.linux/testTransCube.main.c"


static __inline __uint16_t __uint16_identity(__uint16_t __x)

#line 34 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 35 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 854 "obj/debug.linux/testTransCube.main.c"


#line 36 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 859 "obj/debug.linux/testTransCube.main.c"


static __inline __uint32_t __uint32_identity(__uint32_t __x)

#line 40 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 41 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 869 "obj/debug.linux/testTransCube.main.c"


#line 42 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 874 "obj/debug.linux/testTransCube.main.c"


static __inline __uint64_t __uint64_identity(__uint64_t __x)

#line 46 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 884 "obj/debug.linux/testTransCube.main.c"


#line 48 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 889 "obj/debug.linux/testTransCube.main.c"



#line 5 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
typedef struct
{

#line 7 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
unsigned long int __val[16];

#line 900 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __sigset_t;

#line 903 "obj/debug.linux/testTransCube.main.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h"
typedef __sigset_t sigset_t;

#line 909 "obj/debug.linux/testTransCube.main.c"


#line 8 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
struct timeval
{

#line 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
__time_t tv_sec;

#line 919 "obj/debug.linux/testTransCube.main.c"

#line 11 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
__suseconds_t tv_usec;

#line 924 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 927 "obj/debug.linux/testTransCube.main.c"


#line 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
struct timespec
{

#line 12 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
__time_t tv_sec;

#line 937 "obj/debug.linux/testTransCube.main.c"

#line 16 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
__syscall_slong_t tv_nsec;

#line 942 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 945 "obj/debug.linux/testTransCube.main.c"


#line 43 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef __suseconds_t suseconds_t;

#line 951 "obj/debug.linux/testTransCube.main.c"


#line 49 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask;

#line 957 "obj/debug.linux/testTransCube.main.c"


#line 59 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef struct
{

#line 67 "/usr/include/x86_64-linux-gnu/sys/select.h"
__fd_mask __fds_bits[16];

#line 967 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct fd_set;

#line 970 "obj/debug.linux/testTransCube.main.c"


#line 77 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef __fd_mask fd_mask;

#line 976 "obj/debug.linux/testTransCube.main.c"


#line 101 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval * __restrict __timeout);

#line 982 "obj/debug.linux/testTransCube.main.c"


#line 113 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec * __restrict __timeout, const __sigset_t * __restrict __sigmask);

#line 988 "obj/debug.linux/testTransCube.main.c"


#line 185 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __blksize_t blksize_t;

#line 994 "obj/debug.linux/testTransCube.main.c"


#line 192 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __blkcnt_t blkcnt_t;

#line 1000 "obj/debug.linux/testTransCube.main.c"


#line 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t;

#line 1006 "obj/debug.linux/testTransCube.main.c"


#line 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t;

#line 1012 "obj/debug.linux/testTransCube.main.c"


#line 49 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
typedef struct __pthread_internal_list
{

#line 51 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_list * __prev;

#line 1022 "obj/debug.linux/testTransCube.main.c"

#line 52 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_list * __next;

#line 1027 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __pthread_list_t;

#line 1030 "obj/debug.linux/testTransCube.main.c"


#line 55 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
typedef struct __pthread_internal_slist
{

#line 57 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_slist * __next;

#line 1040 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __pthread_slist_t;

#line 1043 "obj/debug.linux/testTransCube.main.c"


#line 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
struct __pthread_mutex_s
{

#line 24 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __lock;

#line 1053 "obj/debug.linux/testTransCube.main.c"

#line 25 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
unsigned int __count;

#line 1058 "obj/debug.linux/testTransCube.main.c"

#line 26 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __owner;

#line 1063 "obj/debug.linux/testTransCube.main.c"

#line 28 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
unsigned int __nusers;

#line 1068 "obj/debug.linux/testTransCube.main.c"

#line 32 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __kind;

#line 1073 "obj/debug.linux/testTransCube.main.c"

#line 34 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
short __spins;

#line 1078 "obj/debug.linux/testTransCube.main.c"

#line 35 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
short __elision;

#line 1083 "obj/debug.linux/testTransCube.main.c"

#line 36 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
__pthread_list_t __list;

#line 1088 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 1091 "obj/debug.linux/testTransCube.main.c"


#line 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
struct __pthread_rwlock_arch_t
{

#line 25 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __readers;

#line 1101 "obj/debug.linux/testTransCube.main.c"

#line 26 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __writers;

#line 1106 "obj/debug.linux/testTransCube.main.c"

#line 27 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __wrphase_futex;

#line 1111 "obj/debug.linux/testTransCube.main.c"

#line 28 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __writers_futex;

#line 1116 "obj/debug.linux/testTransCube.main.c"

#line 29 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __pad3;

#line 1121 "obj/debug.linux/testTransCube.main.c"

#line 30 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __pad4;

#line 1126 "obj/debug.linux/testTransCube.main.c"

#line 32 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
int __cur_writer;

#line 1131 "obj/debug.linux/testTransCube.main.c"

#line 33 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
int __shared;

#line 1136 "obj/debug.linux/testTransCube.main.c"

#line 34 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
signed char __rwelision;

#line 1141 "obj/debug.linux/testTransCube.main.c"

#line 39 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned char __pad1[7];

#line 1146 "obj/debug.linux/testTransCube.main.c"

#line 42 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned long int __pad2;

#line 1151 "obj/debug.linux/testTransCube.main.c"

#line 45 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __flags;

#line 1156 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 1159 "obj/debug.linux/testTransCube.main.c"


#line 92 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_cond_s
{

#line 94 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 union
{

#line 96 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 unsigned long long int __wseq;

#line 1173 "obj/debug.linux/testTransCube.main.c"

#line 97 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct
{

#line 99 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __low;

#line 1182 "obj/debug.linux/testTransCube.main.c"

#line 100 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __high;

#line 1187 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __wseq32;

#line 1190 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 1193 "obj/debug.linux/testTransCube.main.c"

#line 103 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 union
{

#line 105 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 unsigned long long int __g1_start;

#line 1202 "obj/debug.linux/testTransCube.main.c"

#line 106 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct
{

#line 108 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __low;

#line 1211 "obj/debug.linux/testTransCube.main.c"

#line 109 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __high;

#line 1216 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __g1_start32;

#line 1219 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 1222 "obj/debug.linux/testTransCube.main.c"

#line 112 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_refs[2];

#line 1227 "obj/debug.linux/testTransCube.main.c"

#line 113 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_size[2];

#line 1232 "obj/debug.linux/testTransCube.main.c"

#line 114 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g1_orig_size;

#line 1237 "obj/debug.linux/testTransCube.main.c"

#line 115 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __wrefs;

#line 1242 "obj/debug.linux/testTransCube.main.c"

#line 116 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_signals[2];

#line 1247 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 1250 "obj/debug.linux/testTransCube.main.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;

#line 1256 "obj/debug.linux/testTransCube.main.c"


#line 32 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 34 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1266 "obj/debug.linux/testTransCube.main.c"

#line 35 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1271 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct pthread_mutexattr_t;

#line 1274 "obj/debug.linux/testTransCube.main.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 43 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1284 "obj/debug.linux/testTransCube.main.c"

#line 44 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1289 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct pthread_condattr_t;

#line 1292 "obj/debug.linux/testTransCube.main.c"


#line 49 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;

#line 1298 "obj/debug.linux/testTransCube.main.c"


#line 53 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef int pthread_once_t;

#line 1304 "obj/debug.linux/testTransCube.main.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t
{

#line 58 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[56];

#line 1314 "obj/debug.linux/testTransCube.main.c"

#line 59 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1319 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 1322 "obj/debug.linux/testTransCube.main.c"


#line 62 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;

#line 1328 "obj/debug.linux/testTransCube.main.c"


#line 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_mutex_s __data;

#line 1338 "obj/debug.linux/testTransCube.main.c"

#line 70 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[40];

#line 1343 "obj/debug.linux/testTransCube.main.c"

#line 71 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1348 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct pthread_mutex_t;

#line 1351 "obj/debug.linux/testTransCube.main.c"


#line 75 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_cond_s __data;

#line 1361 "obj/debug.linux/testTransCube.main.c"

#line 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[48];

#line 1366 "obj/debug.linux/testTransCube.main.c"

#line 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
 long long int __align;

#line 1371 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct pthread_cond_t;

#line 1374 "obj/debug.linux/testTransCube.main.c"


#line 86 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 88 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_rwlock_arch_t __data;

#line 1384 "obj/debug.linux/testTransCube.main.c"

#line 89 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[56];

#line 1389 "obj/debug.linux/testTransCube.main.c"

#line 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1394 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct pthread_rwlock_t;

#line 1397 "obj/debug.linux/testTransCube.main.c"


#line 93 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 95 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[8];

#line 1407 "obj/debug.linux/testTransCube.main.c"

#line 96 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1412 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct pthread_rwlockattr_t;

#line 1415 "obj/debug.linux/testTransCube.main.c"


#line 103 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t;

#line 1421 "obj/debug.linux/testTransCube.main.c"


#line 108 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[32];

#line 1431 "obj/debug.linux/testTransCube.main.c"

#line 111 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1436 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct pthread_barrier_t;

#line 1439 "obj/debug.linux/testTransCube.main.c"


#line 114 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 116 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1449 "obj/debug.linux/testTransCube.main.c"

#line 117 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1454 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct pthread_barrierattr_t;

#line 1457 "obj/debug.linux/testTransCube.main.c"


#line 15 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID_class_OnCopy;

#line 1463 "obj/debug.linux/testTransCube.main.c"


#line 16 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID_class_OnGetDataFromString;

#line 1469 "obj/debug.linux/testTransCube.main.c"


#line 30 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Array_Set_size;

#line 1475 "obj/debug.linux/testTransCube.main.c"


#line 31 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Array_Get_size;

#line 1481 "obj/debug.linux/testTransCube.main.c"


#line 35 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Add;

#line 1487 "obj/debug.linux/testTransCube.main.c"


#line 36 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Copy;

#line 1493 "obj/debug.linux/testTransCube.main.c"


#line 37 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Free;

#line 1499 "obj/debug.linux/testTransCube.main.c"


#line 38 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_GetCount;

#line 1505 "obj/debug.linux/testTransCube.main.c"


#line 39 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Container_Set_copySrc;

#line 1511 "obj/debug.linux/testTransCube.main.c"


#line 41 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__com__Iterator_Index)();

#line 1517 "obj/debug.linux/testTransCube.main.c"


#line 42 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__com__Iterator_Next)();

#line 1523 "obj/debug.linux/testTransCube.main.c"


#line 43 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data;

#line 1529 "obj/debug.linux/testTransCube.main.c"


#line 44 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data;

#line 1535 "obj/debug.linux/testTransCube.main.c"


#line 47 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map;

#line 1541 "obj/debug.linux/testTransCube.main.c"


#line 48 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__MapIterator_Get_map;

#line 1547 "obj/debug.linux/testTransCube.main.c"


#line 51 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)();

#line 1553 "obj/debug.linux/testTransCube.main.c"


#line 52 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)();

#line 1559 "obj/debug.linux/testTransCube.main.c"


#line 53 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov;

#line 1565 "obj/debug.linux/testTransCube.main.c"


#line 54 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov;

#line 1571 "obj/debug.linux/testTransCube.main.c"


#line 56 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation;

#line 1577 "obj/debug.linux/testTransCube.main.c"


#line 57 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation;

#line 1583 "obj/debug.linux/testTransCube.main.c"


#line 59 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position;

#line 1589 "obj/debug.linux/testTransCube.main.c"


#line 60 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position;

#line 1595 "obj/debug.linux/testTransCube.main.c"


#line 62 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type;

#line 1601 "obj/debug.linux/testTransCube.main.c"


#line 63 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type;

#line 1607 "obj/debug.linux/testTransCube.main.c"


#line 65 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin;

#line 1613 "obj/debug.linux/testTransCube.main.c"


#line 66 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_zMin;

#line 1619 "obj/debug.linux/testTransCube.main.c"


#line 68 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 1625 "obj/debug.linux/testTransCube.main.c"


#line 69 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 1631 "obj/debug.linux/testTransCube.main.c"


#line 72 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial)();

#line 1637 "obj/debug.linux/testTransCube.main.c"


#line 74 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add)();

#line 1643 "obj/debug.linux/testTransCube.main.c"


#line 75 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate)();

#line 1649 "obj/debug.linux/testTransCube.main.c"


#line 76 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free)();

#line 1655 "obj/debug.linux/testTransCube.main.c"


#line 77 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize)();

#line 1661 "obj/debug.linux/testTransCube.main.c"


#line 78 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)();

#line 1667 "obj/debug.linux/testTransCube.main.c"


#line 79 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material;

#line 1673 "obj/debug.linux/testTransCube.main.c"


#line 80 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material;

#line 1679 "obj/debug.linux/testTransCube.main.c"


#line 82 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh;

#line 1685 "obj/debug.linux/testTransCube.main.c"


#line 83 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh;

#line 1691 "obj/debug.linux/testTransCube.main.c"


#line 85 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform;

#line 1697 "obj/debug.linux/testTransCube.main.c"


#line 86 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform;

#line 1703 "obj/debug.linux/testTransCube.main.c"


#line 89 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create)();

#line 1709 "obj/debug.linux/testTransCube.main.c"


#line 91 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Color_Set___ecereNameSpace__ecere__gfx__ColorRGB;

#line 1715 "obj/debug.linux/testTransCube.main.c"


#line 92 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Color_Get___ecereNameSpace__ecere__gfx__ColorRGB;

#line 1721 "obj/debug.linux/testTransCube.main.c"


#line 94 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)();

#line 1727 "obj/debug.linux/testTransCube.main.c"


#line 95 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)();

#line 1733 "obj/debug.linux/testTransCube.main.c"


#line 96 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)();

#line 1739 "obj/debug.linux/testTransCube.main.c"


#line 97 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient;

#line 1745 "obj/debug.linux/testTransCube.main.c"


#line 99 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias;

#line 1751 "obj/debug.linux/testTransCube.main.c"


#line 101 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor;

#line 1757 "obj/debug.linux/testTransCube.main.c"


#line 103 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity;

#line 1763 "obj/debug.linux/testTransCube.main.c"


#line 105 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials)();

#line 1769 "obj/debug.linux/testTransCube.main.c"


#line 106 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes)();

#line 1775 "obj/debug.linux/testTransCube.main.c"


#line 107 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures)();

#line 1781 "obj/debug.linux/testTransCube.main.c"


#line 109 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName;

#line 1787 "obj/debug.linux/testTransCube.main.c"


#line 110 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_faceName;

#line 1793 "obj/debug.linux/testTransCube.main.c"


#line 112 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size;

#line 1799 "obj/debug.linux/testTransCube.main.c"


#line 113 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_size;

#line 1805 "obj/debug.linux/testTransCube.main.c"


#line 115 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)();

#line 1811 "obj/debug.linux/testTransCube.main.c"


#line 116 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver;

#line 1817 "obj/debug.linux/testTransCube.main.c"


#line 117 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver;

#line 1823 "obj/debug.linux/testTransCube.main.c"


#line 119 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey;

#line 1829 "obj/debug.linux/testTransCube.main.c"


#line 121 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)();

#line 1835 "obj/debug.linux/testTransCube.main.c"


#line 122 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)();

#line 1841 "obj/debug.linux/testTransCube.main.c"


#line 123 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)();

#line 1847 "obj/debug.linux/testTransCube.main.c"


#line 124 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Update)();

#line 1853 "obj/debug.linux/testTransCube.main.c"


#line 125 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor;

#line 1859 "obj/debug.linux/testTransCube.main.c"


#line 126 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_anchor;

#line 1865 "obj/debug.linux/testTransCube.main.c"


#line 128 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background;

#line 1871 "obj/debug.linux/testTransCube.main.c"


#line 129 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background;

#line 1877 "obj/debug.linux/testTransCube.main.c"


#line 131 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle;

#line 1883 "obj/debug.linux/testTransCube.main.c"


#line 132 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle;

#line 1889 "obj/debug.linux/testTransCube.main.c"


#line 134 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption;

#line 1895 "obj/debug.linux/testTransCube.main.c"


#line 135 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption;

#line 1901 "obj/debug.linux/testTransCube.main.c"


#line 137 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display;

#line 1907 "obj/debug.linux/testTransCube.main.c"


#line 139 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver;

#line 1913 "obj/debug.linux/testTransCube.main.c"


#line 140 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displayDriver;

#line 1919 "obj/debug.linux/testTransCube.main.c"


#line 142 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem;

#line 1925 "obj/debug.linux/testTransCube.main.c"


#line 144 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_font;

#line 1931 "obj/debug.linux/testTransCube.main.c"


#line 145 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_font;

#line 1937 "obj/debug.linux/testTransCube.main.c"


#line 147 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground;

#line 1943 "obj/debug.linux/testTransCube.main.c"


#line 148 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_foreground;

#line 1949 "obj/debug.linux/testTransCube.main.c"


#line 150 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose;

#line 1955 "obj/debug.linux/testTransCube.main.c"


#line 151 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose;

#line 1961 "obj/debug.linux/testTransCube.main.c"


#line 153 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize;

#line 1967 "obj/debug.linux/testTransCube.main.c"


#line 154 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize;

#line 1973 "obj/debug.linux/testTransCube.main.c"


#line 156 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize;

#line 1979 "obj/debug.linux/testTransCube.main.c"


#line 157 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize;

#line 1985 "obj/debug.linux/testTransCube.main.c"


#line 159 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll;

#line 1991 "obj/debug.linux/testTransCube.main.c"


#line 160 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasVertScroll;

#line 1997 "obj/debug.linux/testTransCube.main.c"


#line 162 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity;

#line 2003 "obj/debug.linux/testTransCube.main.c"


#line 163 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity;

#line 2009 "obj/debug.linux/testTransCube.main.c"


#line 165 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent;

#line 2015 "obj/debug.linux/testTransCube.main.c"


#line 166 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_parent;

#line 2021 "obj/debug.linux/testTransCube.main.c"


#line 168 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position;

#line 2027 "obj/debug.linux/testTransCube.main.c"


#line 169 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position;

#line 2033 "obj/debug.linux/testTransCube.main.c"


#line 171 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size;

#line 2039 "obj/debug.linux/testTransCube.main.c"


#line 172 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size;

#line 2045 "obj/debug.linux/testTransCube.main.c"


#line 175 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity;

#line 2051 "obj/debug.linux/testTransCube.main.c"


#line 176 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Get_opacity;

#line 2057 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents;

#line 2063 "obj/debug.linux/testTransCube.main.c"


#line 180 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents;

#line 2069 "obj/debug.linux/testTransCube.main.c"


#line 182 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine;

#line 2075 "obj/debug.linux/testTransCube.main.c"


#line 183 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLine;

#line 2081 "obj/debug.linux/testTransCube.main.c"


#line 185 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents;

#line 2087 "obj/debug.linux/testTransCube.main.c"


#line 187 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_syntaxHighlighting;

#line 2093 "obj/debug.linux/testTransCube.main.c"


#line 188 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_syntaxHighlighting;

#line 2099 "obj/debug.linux/testTransCube.main.c"


#line 190 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_count;

#line 2105 "obj/debug.linux/testTransCube.main.c"


#line 192 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_next;

#line 2111 "obj/debug.linux/testTransCube.main.c"


#line 194 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Set_text;

#line 2117 "obj/debug.linux/testTransCube.main.c"


#line 195 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text;

#line 2123 "obj/debug.linux/testTransCube.main.c"


#line 197 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_CanImpactOtherLines;

#line 2129 "obj/debug.linux/testTransCube.main.c"


#line 198 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_GotSpace;

#line 2135 "obj/debug.linux/testTransCube.main.c"


#line 199 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_InitDraw;

#line 2141 "obj/debug.linux/testTransCube.main.c"


#line 200 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_Process;

#line 2147 "obj/debug.linux/testTransCube.main.c"


#line 201 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_ResetState;

#line 2153 "obj/debug.linux/testTransCube.main.c"


#line 203 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow;

#line 2159 "obj/debug.linux/testTransCube.main.c"


#line 204 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Get_labeledWindow;

#line 2165 "obj/debug.linux/testTransCube.main.c"


#line 206 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians;

#line 2171 "obj/debug.linux/testTransCube.main.c"


#line 207 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians;

#line 2177 "obj/debug.linux/testTransCube.main.c"


#line 210 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__sys__File_GetSize;

#line 2183 "obj/debug.linux/testTransCube.main.c"


#line 211 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__sys__File_Read;

#line 2189 "obj/debug.linux/testTransCube.main.c"


#line 213 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__sys__ZString_concat)();

#line 2195 "obj/debug.linux/testTransCube.main.c"


#line 214 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_String;

#line 2201 "obj/debug.linux/testTransCube.main.c"


#line 215 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_String;

#line 2207 "obj/debug.linux/testTransCube.main.c"


#line 217 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_;

#line 2213 "obj/debug.linux/testTransCube.main.c"


#line 218 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_char__PTR_;

#line 2219 "obj/debug.linux/testTransCube.main.c"


#line 220 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Set_string;

#line 2225 "obj/debug.linux/testTransCube.main.c"


#line 221 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__ZString_Get_string;

#line 2231 "obj/debug.linux/testTransCube.main.c"


#line 223 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__com__PrintString;

#line 2237 "obj/debug.linux/testTransCube.main.c"


#line 224 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial;

#line 2243 "obj/debug.linux/testTransCube.main.c"


#line 225 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__CharMatchCategories;

#line 2249 "obj/debug.linux/testTransCube.main.c"


#line 226 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__CopyString;

#line 2255 "obj/debug.linux/testTransCube.main.c"


#line 227 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__EscapeCString;

#line 2261 "obj/debug.linux/testTransCube.main.c"


#line 228 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__FileOpen;

#line 2267 "obj/debug.linux/testTransCube.main.c"


#line 229 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__GetExtension;

#line 2273 "obj/debug.linux/testTransCube.main.c"


#line 230 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__GetLastDirectory;

#line 2279 "obj/debug.linux/testTransCube.main.c"


#line 231 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__GetRandom;

#line 2285 "obj/debug.linux/testTransCube.main.c"


#line 232 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__strchrmax;

#line 2291 "obj/debug.linux/testTransCube.main.c"


#line 235 "obj/debug.linux/testTransCube.main.ec"
void __ecereCreateModuleInstances_form1();

#line 2297 "obj/debug.linux/testTransCube.main.c"


#line 236 "obj/debug.linux/testTransCube.main.ec"
void __ecereDestroyModuleInstances_form1();

#line 2303 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  first;

#line 2313 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  last;

#line 2318 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int count;

#line 2323 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int offset;

#line 2328 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int circ;

#line 2333 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2336 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 2342 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
union
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
char c;

#line 2356 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned char uc;

#line 2361 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
short s;

#line 2366 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned short us;

#line 2371 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int i;

#line 2376 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int ui;

#line 2381 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  p;

#line 2386 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
float f;

#line 2391 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
double d;

#line 2396 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
long long i64;

#line 2401 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
uint64 ui64;

#line 2406 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon1;

#line 2409 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2412 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned char *  _buffer;

#line 2422 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
size_t count;

#line 2427 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
size_t _size;

#line 2432 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
size_t pos;

#line 2437 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2440 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 2446 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 2452 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 2458 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 2464 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 2470 "obj/debug.linux/testTransCube.main.c"


#line 257 "obj/debug.linux/testTransCube.main.ec"
extern int printf(const char * , ...);

#line 2476 "obj/debug.linux/testTransCube.main.c"


#line 602 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__LoadTranslatedStrings(const char * moduleName, const char *  name);

#line 2482 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__UnloadTranslatedStrings(const char * name);

#line 2488 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 2494 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
void * *  _vTbl;

#line 2504 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2509 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int _refCount;

#line 2514 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2517 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 2523 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 2529 "obj/debug.linux/testTransCube.main.c"


#line 10 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_String;

#line 2535 "obj/debug.linux/testTransCube.main.c"


#line 11 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_SyntaxColorScheme;

#line 2541 "obj/debug.linux/testTransCube.main.c"


#line 13 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_SyntaxHighlighting;

#line 2547 "obj/debug.linux/testTransCube.main.c"


#line 14 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_char__PTR_;

#line 2553 "obj/debug.linux/testTransCube.main.c"


#line 17 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_double;

#line 2559 "obj/debug.linux/testTransCube.main.c"


#line 18 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_;

#line 2565 "obj/debug.linux/testTransCube.main.c"


#line 19 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_String_;

#line 2571 "obj/debug.linux/testTransCube.main.c"


#line 20 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_String___;

#line 2577 "obj/debug.linux/testTransCube.main.c"


#line 21 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_int___;

#line 2583 "obj/debug.linux/testTransCube.main.c"


#line 22 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__gfx__Color_;

#line 2589 "obj/debug.linux/testTransCube.main.c"


#line 23 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_int_;

#line 2595 "obj/debug.linux/testTransCube.main.c"


#line 24 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Instance;

#line 2601 "obj/debug.linux/testTransCube.main.c"


#line 25 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___;

#line 2607 "obj/debug.linux/testTransCube.main.c"


#line 26 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 2613 "obj/debug.linux/testTransCube.main.c"


#line 27 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_int;

#line 2619 "obj/debug.linux/testTransCube.main.c"


#line 28 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_uint;

#line 2625 "obj/debug.linux/testTransCube.main.c"


#line 29 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array;

#line 2631 "obj/debug.linux/testTransCube.main.c"


#line 33 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer;

#line 2637 "obj/debug.linux/testTransCube.main.c"


#line 34 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Container;

#line 2643 "obj/debug.linux/testTransCube.main.c"


#line 46 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map;

#line 2649 "obj/debug.linux/testTransCube.main.c"


#line 50 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;

#line 2655 "obj/debug.linux/testTransCube.main.c"


#line 71 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Material;

#line 2661 "obj/debug.linux/testTransCube.main.c"


#line 73 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Object;

#line 2667 "obj/debug.linux/testTransCube.main.c"


#line 88 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube;

#line 2673 "obj/debug.linux/testTransCube.main.c"


#line 90 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx__Color;

#line 2679 "obj/debug.linux/testTransCube.main.c"


#line 108 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx__FontResource;

#line 2685 "obj/debug.linux/testTransCube.main.c"


#line 174 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__Button;

#line 2691 "obj/debug.linux/testTransCube.main.c"


#line 178 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__EditBox;

#line 2697 "obj/debug.linux/testTransCube.main.c"


#line 202 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__Label;

#line 2703 "obj/debug.linux/testTransCube.main.c"


#line 209 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__File;

#line 2709 "obj/debug.linux/testTransCube.main.c"


#line 212 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__ZString;

#line 2715 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 2721 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2727 "obj/debug.linux/testTransCube.main.c"


#line 604 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Evolve(struct __ecereNameSpace__ecere__com__Instance **  instancePtr, struct __ecereNameSpace__ecere__com__Class * _class);

#line 2733 "obj/debug.linux/testTransCube.main.c"


#line 615 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2739 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 2745 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 2755 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 2760 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 2765 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int isProperty;

#line 2770 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int memberAccess;

#line 2775 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int id;

#line 2780 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2785 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 2790 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2795 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2800 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void (*  Set)(void * , int);

#line 2805 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int (*  Get)(void * );

#line 2810 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int (*  IsSet)(void * );

#line 2815 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  data;

#line 2820 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  symbol;

#line 2825 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int vid;

#line 2830 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int conversion;

#line 2835 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int watcherOffset;

#line 2840 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  category;

#line 2845 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int compiled;

#line 2850 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int selfWatchable;

#line 2855 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int isWatchable;

#line 2860 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2863 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2869 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 2875 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 2881 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2887 "obj/debug.linux/testTransCube.main.c"


#line 12 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp_SyntaxColorScheme_keywordColors;

#line 2893 "obj/debug.linux/testTransCube.main.c"


#line 32 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__Array_size;

#line 2899 "obj/debug.linux/testTransCube.main.c"


#line 40 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__Container_copySrc;

#line 2905 "obj/debug.linux/testTransCube.main.c"


#line 45 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__Iterator_data;

#line 2911 "obj/debug.linux/testTransCube.main.c"


#line 49 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__MapIterator_map;

#line 2917 "obj/debug.linux/testTransCube.main.c"


#line 55 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;

#line 2923 "obj/debug.linux/testTransCube.main.c"


#line 58 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;

#line 2929 "obj/debug.linux/testTransCube.main.c"


#line 61 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;

#line 2935 "obj/debug.linux/testTransCube.main.c"


#line 64 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;

#line 2941 "obj/debug.linux/testTransCube.main.c"


#line 67 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_zMin;

#line 2947 "obj/debug.linux/testTransCube.main.c"


#line 70 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 2953 "obj/debug.linux/testTransCube.main.c"


#line 81 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material;

#line 2959 "obj/debug.linux/testTransCube.main.c"


#line 84 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh;

#line 2965 "obj/debug.linux/testTransCube.main.c"


#line 87 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;

#line 2971 "obj/debug.linux/testTransCube.main.c"


#line 93 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Color___ecereNameSpace__ecere__gfx__ColorRGB;

#line 2977 "obj/debug.linux/testTransCube.main.c"


#line 98 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_ambient;

#line 2983 "obj/debug.linux/testTransCube.main.c"


#line 100 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_antiAlias;

#line 2989 "obj/debug.linux/testTransCube.main.c"


#line 102 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogColor;

#line 2995 "obj/debug.linux/testTransCube.main.c"


#line 104 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;

#line 3001 "obj/debug.linux/testTransCube.main.c"


#line 111 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_faceName;

#line 3007 "obj/debug.linux/testTransCube.main.c"


#line 114 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_size;

#line 3013 "obj/debug.linux/testTransCube.main.c"


#line 118 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;

#line 3019 "obj/debug.linux/testTransCube.main.c"


#line 120 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Key___ecereNameSpace__ecere__gui__SmartKey;

#line 3025 "obj/debug.linux/testTransCube.main.c"


#line 127 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_anchor;

#line 3031 "obj/debug.linux/testTransCube.main.c"


#line 130 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_background;

#line 3037 "obj/debug.linux/testTransCube.main.c"


#line 133 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;

#line 3043 "obj/debug.linux/testTransCube.main.c"


#line 136 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_caption;

#line 3049 "obj/debug.linux/testTransCube.main.c"


#line 138 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_display;

#line 3055 "obj/debug.linux/testTransCube.main.c"


#line 141 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displayDriver;

#line 3061 "obj/debug.linux/testTransCube.main.c"


#line 143 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;

#line 3067 "obj/debug.linux/testTransCube.main.c"


#line 146 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_font;

#line 3073 "obj/debug.linux/testTransCube.main.c"


#line 149 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_foreground;

#line 3079 "obj/debug.linux/testTransCube.main.c"


#line 152 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasClose;

#line 3085 "obj/debug.linux/testTransCube.main.c"


#line 155 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize;

#line 3091 "obj/debug.linux/testTransCube.main.c"


#line 158 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize;

#line 3097 "obj/debug.linux/testTransCube.main.c"


#line 161 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasVertScroll;

#line 3103 "obj/debug.linux/testTransCube.main.c"


#line 164 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_opacity;

#line 3109 "obj/debug.linux/testTransCube.main.c"


#line 167 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_parent;

#line 3115 "obj/debug.linux/testTransCube.main.c"


#line 170 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_position;

#line 3121 "obj/debug.linux/testTransCube.main.c"


#line 173 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_size;

#line 3127 "obj/debug.linux/testTransCube.main.c"


#line 177 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_opacity;

#line 3133 "obj/debug.linux/testTransCube.main.c"


#line 181 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_contents;

#line 3139 "obj/debug.linux/testTransCube.main.c"


#line 184 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLine;

#line 3145 "obj/debug.linux/testTransCube.main.c"


#line 186 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLineContents;

#line 3151 "obj/debug.linux/testTransCube.main.c"


#line 189 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_syntaxHighlighting;

#line 3157 "obj/debug.linux/testTransCube.main.c"


#line 191 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_count;

#line 3163 "obj/debug.linux/testTransCube.main.c"


#line 193 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_next;

#line 3169 "obj/debug.linux/testTransCube.main.c"


#line 196 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_text;

#line 3175 "obj/debug.linux/testTransCube.main.c"


#line 205 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_labeledWindow;

#line 3181 "obj/debug.linux/testTransCube.main.c"


#line 208 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;

#line 3187 "obj/debug.linux/testTransCube.main.c"


#line 216 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__ZString_String;

#line 3193 "obj/debug.linux/testTransCube.main.c"


#line 219 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__ZString_char__PTR_;

#line 3199 "obj/debug.linux/testTransCube.main.c"


#line 222 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__ZString_string;

#line 3205 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 3211 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 3221 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int count;

#line 3226 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 3231 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void (*  FreeKey)(void *  key);

#line 3236 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3239 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 3245 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3255 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 3260 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 3265 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 3270 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int depth;

#line 3275 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int (*  function)();

#line 3280 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int vid;

#line 3285 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int type;

#line 3290 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3295 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  symbol;

#line 3300 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 3305 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3310 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int memberAccess;

#line 3315 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3318 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 3324 "obj/debug.linux/testTransCube.main.c"


#line 6 "obj/debug.linux/testTransCube.main.ec"
static struct __ecereNameSpace__ecere__com__Instance * __currentModule;

#line 3330 "obj/debug.linux/testTransCube.main.c"


#line 8 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 3336 "obj/debug.linux/testTransCube.main.c"


#line 233 "obj/debug.linux/testTransCube.main.ec"
void __ecereRegisterModule_form1(struct __ecereNameSpace__ecere__com__Instance * module);

#line 3342 "obj/debug.linux/testTransCube.main.c"


#line 234 "obj/debug.linux/testTransCube.main.ec"
void __ecereUnregisterModule_form1(struct __ecereNameSpace__ecere__com__Instance * module);

#line 3348 "obj/debug.linux/testTransCube.main.c"


#line 237 "obj/debug.linux/testTransCube.main.ec"
void __ecereRegisterModule_SyntaxColorScheme(struct __ecereNameSpace__ecere__com__Instance * module);

#line 3354 "obj/debug.linux/testTransCube.main.c"


#line 238 "obj/debug.linux/testTransCube.main.ec"
void __ecereUnregisterModule_SyntaxColorScheme(struct __ecereNameSpace__ecere__com__Instance * module);

#line 3360 "obj/debug.linux/testTransCube.main.c"


#line 239 "obj/debug.linux/testTransCube.main.ec"
void __ecereRegisterModule_SyntaxHighlighting(struct __ecereNameSpace__ecere__com__Instance * module);

#line 3366 "obj/debug.linux/testTransCube.main.c"


#line 240 "obj/debug.linux/testTransCube.main.ec"
void __ecereUnregisterModule_SyntaxHighlighting(struct __ecereNameSpace__ecere__com__Instance * module);

#line 3372 "obj/debug.linux/testTransCube.main.c"


#line 256 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__com__eModule_Load(struct __ecereNameSpace__ecere__com__Instance * fromModule, const char *  name, int importAccess);

#line 3378 "obj/debug.linux/testTransCube.main.c"


#line 263 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_FindClass(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 3384 "obj/debug.linux/testTransCube.main.c"


#line 266 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Property * __ecereNameSpace__ecere__com__eClass_FindProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, struct __ecereNameSpace__ecere__com__Instance * module);

#line 3390 "obj/debug.linux/testTransCube.main.c"


#line 273 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_FindMethod(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, struct __ecereNameSpace__ecere__com__Instance * module);

#line 3396 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Application;

#line 3402 "obj/debug.linux/testTransCube.main.c"


#line 253 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__com____ecere_COM_Initialize(unsigned int guiApp, int argc, char *  argv[]);

#line 3408 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 3414 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3424 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 3429 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 3434 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 3439 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int depth;

#line 3444 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 3449 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 3454 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 3459 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 3464 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 3469 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3472 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
int argc;

#line 3482 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char * *  argv;

#line 3487 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int exitCode;

#line 3492 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int isGUIApp;

#line 3497 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 3502 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
char *  parsedCommand;

#line 3507 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 3512 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3515 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 3525 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 3530 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 3535 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 3540 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 3545 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 3550 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 3555 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3560 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  library;

#line 3565 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  Unload;

#line 3570 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int importType;

#line 3575 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int origImportType;

#line 3580 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 3585 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 3590 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3593 "obj/debug.linux/testTransCube.main.c"

void __ecereRegisterModule_testTransCube_main(struct __ecereNameSpace__ecere__com__Instance * module)

#line 242 "obj/debug.linux/testTransCube.main.ec"
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 3603 "obj/debug.linux/testTransCube.main.c"


#line 617 "obj/debug.linux/testTransCube.main.ec"
}
#line 3608 "obj/debug.linux/testTransCube.main.c"


void __ecereUnregisterModule_testTransCube_main(struct __ecereNameSpace__ecere__com__Instance * module)

#line 242 "obj/debug.linux/testTransCube.main.ec"
{


#line 617 "obj/debug.linux/testTransCube.main.ec"
}
#line 3619 "obj/debug.linux/testTransCube.main.c"



#line 611 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 3626 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
union
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 3644 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3649 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon1;

#line 3652 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 3657 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  memberString;

#line 3666 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
union
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 3675 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 3680 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 3685 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon1;

#line 3688 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon2;

#line 3691 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon1;

#line 3694 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3697 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 3707 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 3712 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3717 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int isProperty;

#line 3722 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int memberAccess;

#line 3727 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int id;

#line 3732 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3737 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 3742 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3747 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3752 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int type;

#line 3757 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int offset;

#line 3762 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int memberID;

#line 3767 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 3772 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 3777 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int memberOffset;

#line 3782 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
short structAlignment;

#line 3787 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
short pointerAlignment;

#line 3792 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3795 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 3805 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 3810 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3815 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int offset;

#line 3820 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int structSize;

#line 3825 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void * *  _vTbl;

#line 3830 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int vTblSize;

#line 3835 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int (*  Constructor)(void * );

#line 3840 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void (*  Destructor)(void * );

#line 3845 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int offsetClass;

#line 3850 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int sizeClass;

#line 3855 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 3860 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 3865 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 3870 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 3875 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 3880 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 3885 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 3890 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int memberID;

#line 3895 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int startMemberID;

#line 3900 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int type;

#line 3905 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3910 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3915 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 3920 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3925 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int typeSize;

#line 3930 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int defaultAlignment;

#line 3935 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void (*  Initialize)();

#line 3940 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int memberOffset;

#line 3945 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 3950 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  designerClass;

#line 3955 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int noExpansion;

#line 3960 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  defaultProperty;

#line 3965 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int comRedefinition;

#line 3970 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int count;

#line 3975 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int isRemote;

#line 3980 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int internalDecl;

#line 3985 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  data;

#line 3990 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int computeSize;

#line 3995 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
short structAlignment;

#line 4000 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
short pointerAlignment;

#line 4005 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int destructionWatchOffset;

#line 4010 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int fixed;

#line 4015 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 4020 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int inheritanceAccess;

#line 4025 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
const char *  fullName;

#line 4030 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  symbol;

#line 4035 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 4040 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 4045 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 4050 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 4055 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 4060 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
int numParams;

#line 4065 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int isInstanceClass;

#line 4070 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
unsigned int byValueSystemClass;

#line 4075 "obj/debug.linux/testTransCube.main.c"

#line 242 "obj/debug.linux/testTransCube.main.ec"
void *  bindingsClass;

#line 4080 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 4083 "obj/debug.linux/testTransCube.main.c"


#line 608 "obj/debug.linux/testTransCube.main.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Instance;

#line 4089 "obj/debug.linux/testTransCube.main.c"


#line 614 "obj/debug.linux/testTransCube.main.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Application;

#line 4095 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction;

#line 4101 "obj/debug.linux/testTransCube.main.c"


#line 571 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_FindFunction(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 4107 "obj/debug.linux/testTransCube.main.c"


#line 250 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction
{

#line 572 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction * prev;

#line 4117 "obj/debug.linux/testTransCube.main.c"

#line 572 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction * next;

#line 4122 "obj/debug.linux/testTransCube.main.c"

#line 572 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 4127 "obj/debug.linux/testTransCube.main.c"

#line 572 "obj/debug.linux/testTransCube.main.ec"
int (*  function)();

#line 4132 "obj/debug.linux/testTransCube.main.c"

#line 572 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 4137 "obj/debug.linux/testTransCube.main.c"

#line 572 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 4142 "obj/debug.linux/testTransCube.main.c"

#line 572 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 4147 "obj/debug.linux/testTransCube.main.c"

#line 572 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 4152 "obj/debug.linux/testTransCube.main.c"

#line 572 "obj/debug.linux/testTransCube.main.ec"
void *  symbol;

#line 4157 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 4160 "obj/debug.linux/testTransCube.main.c"

int main(int _argc, char * _argv[])

#line 243 "obj/debug.linux/testTransCube.main.ec"
{

#line 244 "obj/debug.linux/testTransCube.main.ec"
int exitCode;

#line 4170 "obj/debug.linux/testTransCube.main.c"

#line 245 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 4175 "obj/debug.linux/testTransCube.main.c"

#line 246 "obj/debug.linux/testTransCube.main.ec"
unsigned int setThingsUp = !__thisModule;

#line 4180 "obj/debug.linux/testTransCube.main.c"

#line 247 "obj/debug.linux/testTransCube.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Class * _class;

#line 4185 "obj/debug.linux/testTransCube.main.c"

#line 248 "obj/debug.linux/testTransCube.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Method * method;

#line 4190 "obj/debug.linux/testTransCube.main.c"

#line 249 "obj/debug.linux/testTransCube.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Property * _property;

#line 4195 "obj/debug.linux/testTransCube.main.c"

#line 250 "obj/debug.linux/testTransCube.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__GlobalFunction * function;

#line 4200 "obj/debug.linux/testTransCube.main.c"


#line 252 "obj/debug.linux/testTransCube.main.ec"
if(setThingsUp)

#line 253 "obj/debug.linux/testTransCube.main.ec"
__thisModule = __ecereNameSpace__ecere__com____ecere_COM_Initialize((unsigned int)1, _argc, (void *)_argv);
#line 4208 "obj/debug.linux/testTransCube.main.c"

#line 4210 "obj/debug.linux/testTransCube.main.c"


#line 255 "obj/debug.linux/testTransCube.main.ec"
__currentModule = module = __thisModule;
#line 4215 "obj/debug.linux/testTransCube.main.c"


#line 256 "obj/debug.linux/testTransCube.main.ec"
if(!__ecereNameSpace__ecere__com__eModule_Load(module, "ecere", 1))

#line 257 "obj/debug.linux/testTransCube.main.ec"
printf("Error loading eC module \"%s\" (shared library -- .so/.dll/.dylib)\nThings might go very wrong.\nCheck installed libraries or PATH (Windows) / (DY)LD_LIBRARY_PATH (Unix / Apple) environment variable.\n", "ecere");
#line 4223 "obj/debug.linux/testTransCube.main.c"

#line 4225 "obj/debug.linux/testTransCube.main.c"


#line 259 "obj/debug.linux/testTransCube.main.ec"
__ecereRegisterModule_form1(module);
#line 4230 "obj/debug.linux/testTransCube.main.c"


#line 260 "obj/debug.linux/testTransCube.main.ec"
__ecereRegisterModule_SyntaxColorScheme(module);
#line 4235 "obj/debug.linux/testTransCube.main.c"


#line 261 "obj/debug.linux/testTransCube.main.ec"
__ecereRegisterModule_SyntaxHighlighting(module);
#line 4240 "obj/debug.linux/testTransCube.main.c"


#line 263 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_String = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "String");
#line 4245 "obj/debug.linux/testTransCube.main.c"


#line 265 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_SyntaxColorScheme = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "SyntaxColorScheme");
#line 4250 "obj/debug.linux/testTransCube.main.c"


#line 266 "obj/debug.linux/testTransCube.main.ec"
__ecereProp_SyntaxColorScheme_keywordColors = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass_SyntaxColorScheme, "keywordColors", module);
#line 4255 "obj/debug.linux/testTransCube.main.c"


#line 268 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_SyntaxHighlighting = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "SyntaxHighlighting");
#line 4260 "obj/debug.linux/testTransCube.main.c"


#line 270 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_char__PTR_ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "char *");
#line 4265 "obj/debug.linux/testTransCube.main.c"


#line 272 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "class");
#line 4270 "obj/debug.linux/testTransCube.main.c"


#line 273 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "OnCopy", module);
#line 4275 "obj/debug.linux/testTransCube.main.c"


#line 274 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 274 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID_class_OnCopy = method->vid;
#line 4283 "obj/debug.linux/testTransCube.main.c"

#line 4285 "obj/debug.linux/testTransCube.main.c"


#line 275 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "OnGetDataFromString", module);
#line 4290 "obj/debug.linux/testTransCube.main.c"


#line 276 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 276 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID_class_OnGetDataFromString = method->vid;
#line 4298 "obj/debug.linux/testTransCube.main.c"

#line 4300 "obj/debug.linux/testTransCube.main.c"


#line 278 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_double = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "double");
#line 4305 "obj/debug.linux/testTransCube.main.c"


#line 280 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Array<MyCube>");
#line 4310 "obj/debug.linux/testTransCube.main.c"


#line 282 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Array_TPL_String_ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Array<const String>");
#line 4315 "obj/debug.linux/testTransCube.main.c"


#line 284 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_String___ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Array<ecere::com::Array<const String> >");
#line 4320 "obj/debug.linux/testTransCube.main.c"


#line 286 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_int___ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Array<ecere::com::Array<int> >");
#line 4325 "obj/debug.linux/testTransCube.main.c"


#line 288 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__gfx__Color_ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Array<ecere::gfx::Color>");
#line 4330 "obj/debug.linux/testTransCube.main.c"


#line 290 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Array_TPL_int_ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Array<int>");
#line 4335 "obj/debug.linux/testTransCube.main.c"


#line 292 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Instance = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Instance");
#line 4340 "obj/debug.linux/testTransCube.main.c"


#line 294 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Map<String, ecere::com::Array<MyCube> >");
#line 4345 "obj/debug.linux/testTransCube.main.c"


#line 296 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Module = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Module");
#line 4350 "obj/debug.linux/testTransCube.main.c"


#line 298 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_int = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "int");
#line 4355 "obj/debug.linux/testTransCube.main.c"


#line 300 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_uint = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "uint");
#line 4360 "obj/debug.linux/testTransCube.main.c"


#line 302 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Array = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Array");
#line 4365 "obj/debug.linux/testTransCube.main.c"


#line 303 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Array_size = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__com__Array, "size", module);
#line 4370 "obj/debug.linux/testTransCube.main.c"


#line 304 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 304 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Array_Set_size = _property->Set;
#line 4378 "obj/debug.linux/testTransCube.main.c"

#line 4380 "obj/debug.linux/testTransCube.main.c"


#line 305 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 305 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Array_Get_size = _property->Get;
#line 4388 "obj/debug.linux/testTransCube.main.c"

#line 4390 "obj/debug.linux/testTransCube.main.c"


#line 307 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::BuiltInContainer");
#line 4395 "obj/debug.linux/testTransCube.main.c"


#line 309 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Container = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Container");
#line 4400 "obj/debug.linux/testTransCube.main.c"


#line 310 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__com__Container, "Add", module);
#line 4405 "obj/debug.linux/testTransCube.main.c"


#line 311 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 311 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__com__Container_Add = method->vid;
#line 4413 "obj/debug.linux/testTransCube.main.c"

#line 4415 "obj/debug.linux/testTransCube.main.c"


#line 312 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__com__Container, "Copy", module);
#line 4420 "obj/debug.linux/testTransCube.main.c"


#line 313 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 313 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__com__Container_Copy = method->vid;
#line 4428 "obj/debug.linux/testTransCube.main.c"

#line 4430 "obj/debug.linux/testTransCube.main.c"


#line 314 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__com__Container, "Free", module);
#line 4435 "obj/debug.linux/testTransCube.main.c"


#line 315 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 315 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__com__Container_Free = method->vid;
#line 4443 "obj/debug.linux/testTransCube.main.c"

#line 4445 "obj/debug.linux/testTransCube.main.c"


#line 316 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__com__Container, "GetCount", module);
#line 4450 "obj/debug.linux/testTransCube.main.c"


#line 317 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 317 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__com__Container_GetCount = method->vid;
#line 4458 "obj/debug.linux/testTransCube.main.c"

#line 4460 "obj/debug.linux/testTransCube.main.c"


#line 318 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Container_copySrc = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__com__Container, "copySrc", module);
#line 4465 "obj/debug.linux/testTransCube.main.c"


#line 319 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 319 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Container_Set_copySrc = _property->Set;
#line 4473 "obj/debug.linux/testTransCube.main.c"

#line 4475 "obj/debug.linux/testTransCube.main.c"


#line 321 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Iterator");
#line 4480 "obj/debug.linux/testTransCube.main.c"


#line 322 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Index", module);
#line 4485 "obj/debug.linux/testTransCube.main.c"


#line 323 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 323 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index = method->function;
#line 4493 "obj/debug.linux/testTransCube.main.c"

#line 4495 "obj/debug.linux/testTransCube.main.c"


#line 324 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Next", module);
#line 4500 "obj/debug.linux/testTransCube.main.c"


#line 325 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 325 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Next = method->function;
#line 4508 "obj/debug.linux/testTransCube.main.c"

#line 4510 "obj/debug.linux/testTransCube.main.c"


#line 326 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_data = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "data", module);
#line 4515 "obj/debug.linux/testTransCube.main.c"


#line 327 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 327 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data = _property->Set;
#line 4523 "obj/debug.linux/testTransCube.main.c"

#line 4525 "obj/debug.linux/testTransCube.main.c"


#line 328 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 328 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data = _property->Get;
#line 4533 "obj/debug.linux/testTransCube.main.c"

#line 4535 "obj/debug.linux/testTransCube.main.c"


#line 330 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Map = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Map");
#line 4540 "obj/debug.linux/testTransCube.main.c"


#line 332 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::MapIterator");
#line 4545 "obj/debug.linux/testTransCube.main.c"


#line 333 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__MapIterator_map = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "map", module);
#line 4550 "obj/debug.linux/testTransCube.main.c"


#line 334 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 334 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map = _property->Set;
#line 4558 "obj/debug.linux/testTransCube.main.c"

#line 4560 "obj/debug.linux/testTransCube.main.c"


#line 335 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 335 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__MapIterator_Get_map = _property->Get;
#line 4568 "obj/debug.linux/testTransCube.main.c"

#line 4570 "obj/debug.linux/testTransCube.main.c"


#line 337 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Camera = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Camera");
#line 4575 "obj/debug.linux/testTransCube.main.c"


#line 338 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Setup", module);
#line 4580 "obj/debug.linux/testTransCube.main.c"


#line 339 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 339 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup = method->function;
#line 4588 "obj/debug.linux/testTransCube.main.c"

#line 4590 "obj/debug.linux/testTransCube.main.c"


#line 340 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Update", module);
#line 4595 "obj/debug.linux/testTransCube.main.c"


#line 341 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 341 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update = method->function;
#line 4603 "obj/debug.linux/testTransCube.main.c"

#line 4605 "obj/debug.linux/testTransCube.main.c"


#line 342 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "fov", module);
#line 4610 "obj/debug.linux/testTransCube.main.c"


#line 343 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 343 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov = _property->Set;
#line 4618 "obj/debug.linux/testTransCube.main.c"

#line 4620 "obj/debug.linux/testTransCube.main.c"


#line 344 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 344 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov = _property->Get;
#line 4628 "obj/debug.linux/testTransCube.main.c"

#line 4630 "obj/debug.linux/testTransCube.main.c"


#line 345 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "orientation", module);
#line 4635 "obj/debug.linux/testTransCube.main.c"


#line 346 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 346 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation = _property->Set;
#line 4643 "obj/debug.linux/testTransCube.main.c"

#line 4645 "obj/debug.linux/testTransCube.main.c"


#line 347 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 347 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation = _property->Get;
#line 4653 "obj/debug.linux/testTransCube.main.c"

#line 4655 "obj/debug.linux/testTransCube.main.c"


#line 348 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "position", module);
#line 4660 "obj/debug.linux/testTransCube.main.c"


#line 349 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 349 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position = _property->Set;
#line 4668 "obj/debug.linux/testTransCube.main.c"

#line 4670 "obj/debug.linux/testTransCube.main.c"


#line 350 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 350 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position = _property->Get;
#line 4678 "obj/debug.linux/testTransCube.main.c"

#line 4680 "obj/debug.linux/testTransCube.main.c"


#line 351 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "type", module);
#line 4685 "obj/debug.linux/testTransCube.main.c"


#line 352 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 352 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type = _property->Set;
#line 4693 "obj/debug.linux/testTransCube.main.c"

#line 4695 "obj/debug.linux/testTransCube.main.c"


#line 353 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 353 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type = _property->Get;
#line 4703 "obj/debug.linux/testTransCube.main.c"

#line 4705 "obj/debug.linux/testTransCube.main.c"


#line 354 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_zMin = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "zMin", module);
#line 4710 "obj/debug.linux/testTransCube.main.c"


#line 355 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 355 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin = _property->Set;
#line 4718 "obj/debug.linux/testTransCube.main.c"

#line 4720 "obj/debug.linux/testTransCube.main.c"


#line 356 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 356 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_zMin = _property->Get;
#line 4728 "obj/debug.linux/testTransCube.main.c"

#line 4730 "obj/debug.linux/testTransCube.main.c"


#line 358 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Euler");
#line 4735 "obj/debug.linux/testTransCube.main.c"


#line 359 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ecere::gfx3D::Quaternion", module);
#line 4740 "obj/debug.linux/testTransCube.main.c"


#line 360 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 360 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion = _property->Set;
#line 4748 "obj/debug.linux/testTransCube.main.c"

#line 4750 "obj/debug.linux/testTransCube.main.c"


#line 361 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 361 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion = _property->Get;
#line 4758 "obj/debug.linux/testTransCube.main.c"

#line 4760 "obj/debug.linux/testTransCube.main.c"


#line 363 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Material = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Material");
#line 4765 "obj/debug.linux/testTransCube.main.c"


#line 365 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Mesh");
#line 4770 "obj/debug.linux/testTransCube.main.c"


#line 366 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ApplyMaterial", module);
#line 4775 "obj/debug.linux/testTransCube.main.c"


#line 367 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 367 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyMaterial = method->function;
#line 4783 "obj/debug.linux/testTransCube.main.c"

#line 4785 "obj/debug.linux/testTransCube.main.c"


#line 369 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Object = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Object");
#line 4790 "obj/debug.linux/testTransCube.main.c"


#line 370 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Add", module);
#line 4795 "obj/debug.linux/testTransCube.main.c"


#line 371 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 371 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add = method->function;
#line 4803 "obj/debug.linux/testTransCube.main.c"

#line 4805 "obj/debug.linux/testTransCube.main.c"


#line 372 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Duplicate", module);
#line 4810 "obj/debug.linux/testTransCube.main.c"


#line 373 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 373 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate = method->function;
#line 4818 "obj/debug.linux/testTransCube.main.c"

#line 4820 "obj/debug.linux/testTransCube.main.c"


#line 374 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Free", module);
#line 4825 "obj/debug.linux/testTransCube.main.c"


#line 375 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 375 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free = method->function;
#line 4833 "obj/debug.linux/testTransCube.main.c"

#line 4835 "obj/debug.linux/testTransCube.main.c"


#line 376 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Initialize", module);
#line 4840 "obj/debug.linux/testTransCube.main.c"


#line 377 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 377 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize = method->function;
#line 4848 "obj/debug.linux/testTransCube.main.c"

#line 4850 "obj/debug.linux/testTransCube.main.c"


#line 378 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "UpdateTransform", module);
#line 4855 "obj/debug.linux/testTransCube.main.c"


#line 379 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 379 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform = method->function;
#line 4863 "obj/debug.linux/testTransCube.main.c"

#line 4865 "obj/debug.linux/testTransCube.main.c"


#line 380 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_material = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "material", module);
#line 4870 "obj/debug.linux/testTransCube.main.c"


#line 381 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 381 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material = _property->Set;
#line 4878 "obj/debug.linux/testTransCube.main.c"

#line 4880 "obj/debug.linux/testTransCube.main.c"


#line 382 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 382 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material = _property->Get;
#line 4888 "obj/debug.linux/testTransCube.main.c"

#line 4890 "obj/debug.linux/testTransCube.main.c"


#line 383 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "mesh", module);
#line 4895 "obj/debug.linux/testTransCube.main.c"


#line 384 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 384 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh = _property->Set;
#line 4903 "obj/debug.linux/testTransCube.main.c"

#line 4905 "obj/debug.linux/testTransCube.main.c"


#line 385 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 385 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh = _property->Get;
#line 4913 "obj/debug.linux/testTransCube.main.c"

#line 4915 "obj/debug.linux/testTransCube.main.c"


#line 386 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "transform", module);
#line 4920 "obj/debug.linux/testTransCube.main.c"


#line 387 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 387 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform = _property->Set;
#line 4928 "obj/debug.linux/testTransCube.main.c"

#line 4930 "obj/debug.linux/testTransCube.main.c"


#line 388 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 388 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform = _property->Get;
#line 4938 "obj/debug.linux/testTransCube.main.c"

#line 4940 "obj/debug.linux/testTransCube.main.c"


#line 390 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::meshes::Cube");
#line 4945 "obj/debug.linux/testTransCube.main.c"


#line 391 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube, "Create", module);
#line 4950 "obj/debug.linux/testTransCube.main.c"


#line 392 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 392 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create = method->function;
#line 4958 "obj/debug.linux/testTransCube.main.c"

#line 4960 "obj/debug.linux/testTransCube.main.c"


#line 394 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx__Color = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::Color");
#line 4965 "obj/debug.linux/testTransCube.main.c"


#line 395 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Color___ecereNameSpace__ecere__gfx__ColorRGB = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__Color, "ecere::gfx::ColorRGB", module);
#line 4970 "obj/debug.linux/testTransCube.main.c"


#line 396 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 396 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Color_Set___ecereNameSpace__ecere__gfx__ColorRGB = _property->Set;
#line 4978 "obj/debug.linux/testTransCube.main.c"

#line 4980 "obj/debug.linux/testTransCube.main.c"


#line 397 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 397 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Color_Get___ecereNameSpace__ecere__gfx__ColorRGB = _property->Get;
#line 4988 "obj/debug.linux/testTransCube.main.c"

#line 4990 "obj/debug.linux/testTransCube.main.c"


#line 399 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::Display");
#line 4995 "obj/debug.linux/testTransCube.main.c"


#line 400 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "DrawObject", module);
#line 5000 "obj/debug.linux/testTransCube.main.c"


#line 401 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 401 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject = method->function;
#line 5008 "obj/debug.linux/testTransCube.main.c"

#line 5010 "obj/debug.linux/testTransCube.main.c"


#line 402 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "SetCamera", module);
#line 5015 "obj/debug.linux/testTransCube.main.c"


#line 403 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 403 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera = method->function;
#line 5023 "obj/debug.linux/testTransCube.main.c"

#line 5025 "obj/debug.linux/testTransCube.main.c"


#line 404 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "SetLight", module);
#line 5030 "obj/debug.linux/testTransCube.main.c"


#line 405 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 405 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight = method->function;
#line 5038 "obj/debug.linux/testTransCube.main.c"

#line 5040 "obj/debug.linux/testTransCube.main.c"


#line 406 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_ambient = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ambient", module);
#line 5045 "obj/debug.linux/testTransCube.main.c"


#line 407 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 407 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient = _property->Set;
#line 5053 "obj/debug.linux/testTransCube.main.c"

#line 5055 "obj/debug.linux/testTransCube.main.c"


#line 408 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_antiAlias = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "antiAlias", module);
#line 5060 "obj/debug.linux/testTransCube.main.c"


#line 409 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 409 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias = _property->Set;
#line 5068 "obj/debug.linux/testTransCube.main.c"

#line 5070 "obj/debug.linux/testTransCube.main.c"


#line 410 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_fogColor = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "fogColor", module);
#line 5075 "obj/debug.linux/testTransCube.main.c"


#line 411 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 411 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor = _property->Set;
#line 5083 "obj/debug.linux/testTransCube.main.c"

#line 5085 "obj/debug.linux/testTransCube.main.c"


#line 412 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "fogDensity", module);
#line 5090 "obj/debug.linux/testTransCube.main.c"


#line 413 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 413 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity = _property->Set;
#line 5098 "obj/debug.linux/testTransCube.main.c"

#line 5100 "obj/debug.linux/testTransCube.main.c"


#line 415 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::DisplaySystem");
#line 5105 "obj/debug.linux/testTransCube.main.c"


#line 416 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ClearMaterials", module);
#line 5110 "obj/debug.linux/testTransCube.main.c"


#line 417 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 417 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials = method->function;
#line 5118 "obj/debug.linux/testTransCube.main.c"

#line 5120 "obj/debug.linux/testTransCube.main.c"


#line 418 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ClearMeshes", module);
#line 5125 "obj/debug.linux/testTransCube.main.c"


#line 419 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 419 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes = method->function;
#line 5133 "obj/debug.linux/testTransCube.main.c"

#line 5135 "obj/debug.linux/testTransCube.main.c"


#line 420 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ClearTextures", module);
#line 5140 "obj/debug.linux/testTransCube.main.c"


#line 421 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 421 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures = method->function;
#line 5148 "obj/debug.linux/testTransCube.main.c"

#line 5150 "obj/debug.linux/testTransCube.main.c"


#line 423 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx__FontResource = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::FontResource");
#line 5155 "obj/debug.linux/testTransCube.main.c"


#line 424 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_faceName = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__FontResource, "faceName", module);
#line 5160 "obj/debug.linux/testTransCube.main.c"


#line 425 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 425 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName = _property->Set;
#line 5168 "obj/debug.linux/testTransCube.main.c"

#line 5170 "obj/debug.linux/testTransCube.main.c"


#line 426 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 426 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_faceName = _property->Get;
#line 5178 "obj/debug.linux/testTransCube.main.c"

#line 5180 "obj/debug.linux/testTransCube.main.c"


#line 427 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_size = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__FontResource, "size", module);
#line 5185 "obj/debug.linux/testTransCube.main.c"


#line 428 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 428 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size = _property->Set;
#line 5193 "obj/debug.linux/testTransCube.main.c"

#line 5195 "obj/debug.linux/testTransCube.main.c"


#line 429 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 429 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_size = _property->Get;
#line 5203 "obj/debug.linux/testTransCube.main.c"

#line 5205 "obj/debug.linux/testTransCube.main.c"


#line 431 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::Surface");
#line 5210 "obj/debug.linux/testTransCube.main.c"


#line 432 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Clear", module);
#line 5215 "obj/debug.linux/testTransCube.main.c"


#line 433 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 433 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear = method->function;
#line 5223 "obj/debug.linux/testTransCube.main.c"

#line 5225 "obj/debug.linux/testTransCube.main.c"


#line 435 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::GuiApplication");
#line 5230 "obj/debug.linux/testTransCube.main.c"


#line 436 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "driver", module);
#line 5235 "obj/debug.linux/testTransCube.main.c"


#line 437 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 437 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver = _property->Set;
#line 5243 "obj/debug.linux/testTransCube.main.c"

#line 5245 "obj/debug.linux/testTransCube.main.c"


#line 438 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 438 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver = _property->Get;
#line 5253 "obj/debug.linux/testTransCube.main.c"

#line 5255 "obj/debug.linux/testTransCube.main.c"


#line 440 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::Key");
#line 5260 "obj/debug.linux/testTransCube.main.c"


#line 441 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Key___ecereNameSpace__ecere__gui__SmartKey = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ecere::gui::SmartKey", module);
#line 5265 "obj/debug.linux/testTransCube.main.c"


#line 442 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 442 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey = _property->Get;
#line 5273 "obj/debug.linux/testTransCube.main.c"

#line 5275 "obj/debug.linux/testTransCube.main.c"


#line 444 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::Window");
#line 5280 "obj/debug.linux/testTransCube.main.c"


#line 445 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Capture", module);
#line 5285 "obj/debug.linux/testTransCube.main.c"


#line 446 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 446 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture = method->function;
#line 5293 "obj/debug.linux/testTransCube.main.c"

#line 5295 "obj/debug.linux/testTransCube.main.c"


#line 447 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Destroy", module);
#line 5300 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 448 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy = method->function;
#line 5308 "obj/debug.linux/testTransCube.main.c"

#line 5310 "obj/debug.linux/testTransCube.main.c"


#line 449 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ReleaseCapture", module);
#line 5315 "obj/debug.linux/testTransCube.main.c"


#line 450 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 450 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture = method->function;
#line 5323 "obj/debug.linux/testTransCube.main.c"

#line 5325 "obj/debug.linux/testTransCube.main.c"


#line 451 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Update", module);
#line 5330 "obj/debug.linux/testTransCube.main.c"


#line 452 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 452 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update = method->function;
#line 5338 "obj/debug.linux/testTransCube.main.c"

#line 5340 "obj/debug.linux/testTransCube.main.c"


#line 453 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_anchor = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "anchor", module);
#line 5345 "obj/debug.linux/testTransCube.main.c"


#line 454 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 454 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor = _property->Set;
#line 5353 "obj/debug.linux/testTransCube.main.c"

#line 5355 "obj/debug.linux/testTransCube.main.c"


#line 455 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 455 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_anchor = _property->Get;
#line 5363 "obj/debug.linux/testTransCube.main.c"

#line 5365 "obj/debug.linux/testTransCube.main.c"


#line 456 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_background = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "background", module);
#line 5370 "obj/debug.linux/testTransCube.main.c"


#line 457 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 457 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_background = _property->Set;
#line 5378 "obj/debug.linux/testTransCube.main.c"

#line 5380 "obj/debug.linux/testTransCube.main.c"


#line 458 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 458 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_background = _property->Get;
#line 5388 "obj/debug.linux/testTransCube.main.c"

#line 5390 "obj/debug.linux/testTransCube.main.c"


#line 459 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "borderStyle", module);
#line 5395 "obj/debug.linux/testTransCube.main.c"


#line 460 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 460 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle = _property->Set;
#line 5403 "obj/debug.linux/testTransCube.main.c"

#line 5405 "obj/debug.linux/testTransCube.main.c"


#line 461 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 461 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle = _property->Get;
#line 5413 "obj/debug.linux/testTransCube.main.c"

#line 5415 "obj/debug.linux/testTransCube.main.c"


#line 462 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_caption = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "caption", module);
#line 5420 "obj/debug.linux/testTransCube.main.c"


#line 463 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 463 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption = _property->Set;
#line 5428 "obj/debug.linux/testTransCube.main.c"

#line 5430 "obj/debug.linux/testTransCube.main.c"


#line 464 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 464 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption = _property->Get;
#line 5438 "obj/debug.linux/testTransCube.main.c"

#line 5440 "obj/debug.linux/testTransCube.main.c"


#line 465 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_display = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "display", module);
#line 5445 "obj/debug.linux/testTransCube.main.c"


#line 466 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 466 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display = _property->Get;
#line 5453 "obj/debug.linux/testTransCube.main.c"

#line 5455 "obj/debug.linux/testTransCube.main.c"


#line 467 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_displayDriver = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "displayDriver", module);
#line 5460 "obj/debug.linux/testTransCube.main.c"


#line 468 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 468 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver = _property->Set;
#line 5468 "obj/debug.linux/testTransCube.main.c"

#line 5470 "obj/debug.linux/testTransCube.main.c"


#line 469 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 469 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displayDriver = _property->Get;
#line 5478 "obj/debug.linux/testTransCube.main.c"

#line 5480 "obj/debug.linux/testTransCube.main.c"


#line 470 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "displaySystem", module);
#line 5485 "obj/debug.linux/testTransCube.main.c"


#line 471 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 471 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem = _property->Get;
#line 5493 "obj/debug.linux/testTransCube.main.c"

#line 5495 "obj/debug.linux/testTransCube.main.c"


#line 472 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_font = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "font", module);
#line 5500 "obj/debug.linux/testTransCube.main.c"


#line 473 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 473 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_font = _property->Set;
#line 5508 "obj/debug.linux/testTransCube.main.c"

#line 5510 "obj/debug.linux/testTransCube.main.c"


#line 474 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 474 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_font = _property->Get;
#line 5518 "obj/debug.linux/testTransCube.main.c"

#line 5520 "obj/debug.linux/testTransCube.main.c"


#line 475 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_foreground = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "foreground", module);
#line 5525 "obj/debug.linux/testTransCube.main.c"


#line 476 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 476 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground = _property->Set;
#line 5533 "obj/debug.linux/testTransCube.main.c"

#line 5535 "obj/debug.linux/testTransCube.main.c"


#line 477 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 477 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_foreground = _property->Get;
#line 5543 "obj/debug.linux/testTransCube.main.c"

#line 5545 "obj/debug.linux/testTransCube.main.c"


#line 478 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasClose = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasClose", module);
#line 5550 "obj/debug.linux/testTransCube.main.c"


#line 479 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 479 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose = _property->Set;
#line 5558 "obj/debug.linux/testTransCube.main.c"

#line 5560 "obj/debug.linux/testTransCube.main.c"


#line 480 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 480 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose = _property->Get;
#line 5568 "obj/debug.linux/testTransCube.main.c"

#line 5570 "obj/debug.linux/testTransCube.main.c"


#line 481 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasMaximize", module);
#line 5575 "obj/debug.linux/testTransCube.main.c"


#line 482 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 482 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize = _property->Set;
#line 5583 "obj/debug.linux/testTransCube.main.c"

#line 5585 "obj/debug.linux/testTransCube.main.c"


#line 483 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 483 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize = _property->Get;
#line 5593 "obj/debug.linux/testTransCube.main.c"

#line 5595 "obj/debug.linux/testTransCube.main.c"


#line 484 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasMinimize", module);
#line 5600 "obj/debug.linux/testTransCube.main.c"


#line 485 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 485 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize = _property->Set;
#line 5608 "obj/debug.linux/testTransCube.main.c"

#line 5610 "obj/debug.linux/testTransCube.main.c"


#line 486 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 486 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize = _property->Get;
#line 5618 "obj/debug.linux/testTransCube.main.c"

#line 5620 "obj/debug.linux/testTransCube.main.c"


#line 487 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasVertScroll = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasVertScroll", module);
#line 5625 "obj/debug.linux/testTransCube.main.c"


#line 488 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 488 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll = _property->Set;
#line 5633 "obj/debug.linux/testTransCube.main.c"

#line 5635 "obj/debug.linux/testTransCube.main.c"


#line 489 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 489 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasVertScroll = _property->Get;
#line 5643 "obj/debug.linux/testTransCube.main.c"

#line 5645 "obj/debug.linux/testTransCube.main.c"


#line 490 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_opacity = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "opacity", module);
#line 5650 "obj/debug.linux/testTransCube.main.c"


#line 491 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 491 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity = _property->Set;
#line 5658 "obj/debug.linux/testTransCube.main.c"

#line 5660 "obj/debug.linux/testTransCube.main.c"


#line 492 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 492 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity = _property->Get;
#line 5668 "obj/debug.linux/testTransCube.main.c"

#line 5670 "obj/debug.linux/testTransCube.main.c"


#line 493 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_parent = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "parent", module);
#line 5675 "obj/debug.linux/testTransCube.main.c"


#line 494 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 494 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent = _property->Set;
#line 5683 "obj/debug.linux/testTransCube.main.c"

#line 5685 "obj/debug.linux/testTransCube.main.c"


#line 495 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 495 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_parent = _property->Get;
#line 5693 "obj/debug.linux/testTransCube.main.c"

#line 5695 "obj/debug.linux/testTransCube.main.c"


#line 496 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_position = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "position", module);
#line 5700 "obj/debug.linux/testTransCube.main.c"


#line 497 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 497 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_position = _property->Set;
#line 5708 "obj/debug.linux/testTransCube.main.c"

#line 5710 "obj/debug.linux/testTransCube.main.c"


#line 498 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 498 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_position = _property->Get;
#line 5718 "obj/debug.linux/testTransCube.main.c"

#line 5720 "obj/debug.linux/testTransCube.main.c"


#line 499 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_size = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "size", module);
#line 5725 "obj/debug.linux/testTransCube.main.c"


#line 500 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 500 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_size = _property->Set;
#line 5733 "obj/debug.linux/testTransCube.main.c"

#line 5735 "obj/debug.linux/testTransCube.main.c"


#line 501 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 501 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size = _property->Get;
#line 5743 "obj/debug.linux/testTransCube.main.c"

#line 5745 "obj/debug.linux/testTransCube.main.c"


#line 503 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gui__controls__Button = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::controls::Button");
#line 5750 "obj/debug.linux/testTransCube.main.c"


#line 504 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Button_opacity = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__Button, "opacity", module);
#line 5755 "obj/debug.linux/testTransCube.main.c"


#line 505 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 505 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity = _property->Set;
#line 5763 "obj/debug.linux/testTransCube.main.c"

#line 5765 "obj/debug.linux/testTransCube.main.c"


#line 506 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 506 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Button_Get_opacity = _property->Get;
#line 5773 "obj/debug.linux/testTransCube.main.c"

#line 5775 "obj/debug.linux/testTransCube.main.c"


#line 508 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::controls::EditBox");
#line 5780 "obj/debug.linux/testTransCube.main.c"


#line 509 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_contents = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "contents", module);
#line 5785 "obj/debug.linux/testTransCube.main.c"


#line 510 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 510 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents = _property->Set;
#line 5793 "obj/debug.linux/testTransCube.main.c"

#line 5795 "obj/debug.linux/testTransCube.main.c"


#line 511 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 511 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents = _property->Get;
#line 5803 "obj/debug.linux/testTransCube.main.c"

#line 5805 "obj/debug.linux/testTransCube.main.c"


#line 512 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLine = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "multiLine", module);
#line 5810 "obj/debug.linux/testTransCube.main.c"


#line 513 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 513 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine = _property->Set;
#line 5818 "obj/debug.linux/testTransCube.main.c"

#line 5820 "obj/debug.linux/testTransCube.main.c"


#line 514 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 514 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLine = _property->Get;
#line 5828 "obj/debug.linux/testTransCube.main.c"

#line 5830 "obj/debug.linux/testTransCube.main.c"


#line 515 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLineContents = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "multiLineContents", module);
#line 5835 "obj/debug.linux/testTransCube.main.c"


#line 516 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 516 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents = _property->Get;
#line 5843 "obj/debug.linux/testTransCube.main.c"

#line 5845 "obj/debug.linux/testTransCube.main.c"


#line 517 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_syntaxHighlighting = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "syntaxHighlighting", module);
#line 5850 "obj/debug.linux/testTransCube.main.c"


#line 518 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 518 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_syntaxHighlighting = _property->Set;
#line 5858 "obj/debug.linux/testTransCube.main.c"

#line 5860 "obj/debug.linux/testTransCube.main.c"


#line 519 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 519 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_syntaxHighlighting = _property->Get;
#line 5868 "obj/debug.linux/testTransCube.main.c"

#line 5870 "obj/debug.linux/testTransCube.main.c"


#line 521 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::controls::EditLine");
#line 5875 "obj/debug.linux/testTransCube.main.c"


#line 522 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_count = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "count", module);
#line 5880 "obj/debug.linux/testTransCube.main.c"


#line 523 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 523 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_count = _property->Get;
#line 5888 "obj/debug.linux/testTransCube.main.c"

#line 5890 "obj/debug.linux/testTransCube.main.c"


#line 524 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_next = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "next", module);
#line 5895 "obj/debug.linux/testTransCube.main.c"


#line 525 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 525 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_next = _property->Get;
#line 5903 "obj/debug.linux/testTransCube.main.c"

#line 5905 "obj/debug.linux/testTransCube.main.c"


#line 526 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_text = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "text", module);
#line 5910 "obj/debug.linux/testTransCube.main.c"


#line 527 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 527 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Set_text = _property->Set;
#line 5918 "obj/debug.linux/testTransCube.main.c"

#line 5920 "obj/debug.linux/testTransCube.main.c"


#line 528 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 528 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text = _property->Get;
#line 5928 "obj/debug.linux/testTransCube.main.c"

#line 5930 "obj/debug.linux/testTransCube.main.c"


#line 530 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::controls::EditSyntaxHL");
#line 5935 "obj/debug.linux/testTransCube.main.c"


#line 531 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "CanImpactOtherLines", module);
#line 5940 "obj/debug.linux/testTransCube.main.c"


#line 532 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 532 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_CanImpactOtherLines = method->vid;
#line 5948 "obj/debug.linux/testTransCube.main.c"

#line 5950 "obj/debug.linux/testTransCube.main.c"


#line 533 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "GotSpace", module);
#line 5955 "obj/debug.linux/testTransCube.main.c"


#line 534 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 534 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_GotSpace = method->vid;
#line 5963 "obj/debug.linux/testTransCube.main.c"

#line 5965 "obj/debug.linux/testTransCube.main.c"


#line 535 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "InitDraw", module);
#line 5970 "obj/debug.linux/testTransCube.main.c"


#line 536 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 536 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_InitDraw = method->vid;
#line 5978 "obj/debug.linux/testTransCube.main.c"

#line 5980 "obj/debug.linux/testTransCube.main.c"


#line 537 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Process", module);
#line 5985 "obj/debug.linux/testTransCube.main.c"


#line 538 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 538 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_Process = method->vid;
#line 5993 "obj/debug.linux/testTransCube.main.c"

#line 5995 "obj/debug.linux/testTransCube.main.c"


#line 539 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ResetState", module);
#line 6000 "obj/debug.linux/testTransCube.main.c"


#line 540 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 540 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_ResetState = method->vid;
#line 6008 "obj/debug.linux/testTransCube.main.c"

#line 6010 "obj/debug.linux/testTransCube.main.c"


#line 542 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gui__controls__Label = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::controls::Label");
#line 6015 "obj/debug.linux/testTransCube.main.c"


#line 543 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Label_labeledWindow = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__Label, "labeledWindow", module);
#line 6020 "obj/debug.linux/testTransCube.main.c"


#line 544 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 544 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow = _property->Set;
#line 6028 "obj/debug.linux/testTransCube.main.c"

#line 6030 "obj/debug.linux/testTransCube.main.c"


#line 545 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 545 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Label_Get_labeledWindow = _property->Get;
#line 6038 "obj/debug.linux/testTransCube.main.c"

#line 6040 "obj/debug.linux/testTransCube.main.c"


#line 547 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::sys::Degrees");
#line 6045 "obj/debug.linux/testTransCube.main.c"


#line 548 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ecere::sys::Radians", module);
#line 6050 "obj/debug.linux/testTransCube.main.c"


#line 549 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 549 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians = _property->Set;
#line 6058 "obj/debug.linux/testTransCube.main.c"

#line 6060 "obj/debug.linux/testTransCube.main.c"


#line 550 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 550 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians = _property->Get;
#line 6068 "obj/debug.linux/testTransCube.main.c"

#line 6070 "obj/debug.linux/testTransCube.main.c"


#line 552 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__sys__File = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::sys::File");
#line 6075 "obj/debug.linux/testTransCube.main.c"


#line 553 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__sys__File, "GetSize", module);
#line 6080 "obj/debug.linux/testTransCube.main.c"


#line 554 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 554 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__sys__File_GetSize = method->vid;
#line 6088 "obj/debug.linux/testTransCube.main.c"

#line 6090 "obj/debug.linux/testTransCube.main.c"


#line 555 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__sys__File, "Read", module);
#line 6095 "obj/debug.linux/testTransCube.main.c"


#line 556 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 556 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read = method->vid;
#line 6103 "obj/debug.linux/testTransCube.main.c"

#line 6105 "obj/debug.linux/testTransCube.main.c"


#line 558 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__sys__ZString = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::sys::ZString");
#line 6110 "obj/debug.linux/testTransCube.main.c"


#line 559 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__sys__ZString, "concat", module);
#line 6115 "obj/debug.linux/testTransCube.main.c"


#line 560 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 560 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__sys__ZString_concat = method->function;
#line 6123 "obj/debug.linux/testTransCube.main.c"

#line 6125 "obj/debug.linux/testTransCube.main.c"


#line 561 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__ZString_String = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__sys__ZString, "String", module);
#line 6130 "obj/debug.linux/testTransCube.main.c"


#line 562 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 562 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__ZString_Set_String = _property->Set;
#line 6138 "obj/debug.linux/testTransCube.main.c"

#line 6140 "obj/debug.linux/testTransCube.main.c"


#line 563 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 563 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__ZString_Get_String = _property->Get;
#line 6148 "obj/debug.linux/testTransCube.main.c"

#line 6150 "obj/debug.linux/testTransCube.main.c"


#line 564 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__ZString_char__PTR_ = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__sys__ZString, "char *", module);
#line 6155 "obj/debug.linux/testTransCube.main.c"


#line 565 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 565 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__ZString_Set_char__PTR_ = _property->Set;
#line 6163 "obj/debug.linux/testTransCube.main.c"

#line 6165 "obj/debug.linux/testTransCube.main.c"


#line 566 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 566 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__ZString_Get_char__PTR_ = _property->Get;
#line 6173 "obj/debug.linux/testTransCube.main.c"

#line 6175 "obj/debug.linux/testTransCube.main.c"


#line 567 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__ZString_string = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__sys__ZString, "string", module);
#line 6180 "obj/debug.linux/testTransCube.main.c"


#line 568 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 568 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__ZString_Set_string = _property->Set;
#line 6188 "obj/debug.linux/testTransCube.main.c"

#line 6190 "obj/debug.linux/testTransCube.main.c"


#line 569 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 569 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__ZString_Get_string = _property->Get;
#line 6198 "obj/debug.linux/testTransCube.main.c"

#line 6200 "obj/debug.linux/testTransCube.main.c"


#line 571 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::com::PrintString");
#line 6205 "obj/debug.linux/testTransCube.main.c"


#line 572 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 572 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__com__PrintString = function->function;
#line 6213 "obj/debug.linux/testTransCube.main.c"

#line 6215 "obj/debug.linux/testTransCube.main.c"


#line 574 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::gfx::GetDefaultMaterial");
#line 6220 "obj/debug.linux/testTransCube.main.c"


#line 575 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 575 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial = function->function;
#line 6228 "obj/debug.linux/testTransCube.main.c"

#line 6230 "obj/debug.linux/testTransCube.main.c"


#line 577 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::CharMatchCategories");
#line 6235 "obj/debug.linux/testTransCube.main.c"


#line 578 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 578 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__CharMatchCategories = function->function;
#line 6243 "obj/debug.linux/testTransCube.main.c"

#line 6245 "obj/debug.linux/testTransCube.main.c"


#line 580 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::CopyString");
#line 6250 "obj/debug.linux/testTransCube.main.c"


#line 581 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 581 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__CopyString = function->function;
#line 6258 "obj/debug.linux/testTransCube.main.c"

#line 6260 "obj/debug.linux/testTransCube.main.c"


#line 583 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::EscapeCString");
#line 6265 "obj/debug.linux/testTransCube.main.c"


#line 584 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 584 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__EscapeCString = function->function;
#line 6273 "obj/debug.linux/testTransCube.main.c"

#line 6275 "obj/debug.linux/testTransCube.main.c"


#line 586 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::FileOpen");
#line 6280 "obj/debug.linux/testTransCube.main.c"


#line 587 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 587 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__FileOpen = function->function;
#line 6288 "obj/debug.linux/testTransCube.main.c"

#line 6290 "obj/debug.linux/testTransCube.main.c"


#line 589 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::GetExtension");
#line 6295 "obj/debug.linux/testTransCube.main.c"


#line 590 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 590 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__GetExtension = function->function;
#line 6303 "obj/debug.linux/testTransCube.main.c"

#line 6305 "obj/debug.linux/testTransCube.main.c"


#line 592 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::GetLastDirectory");
#line 6310 "obj/debug.linux/testTransCube.main.c"


#line 593 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 593 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__GetLastDirectory = function->function;
#line 6318 "obj/debug.linux/testTransCube.main.c"

#line 6320 "obj/debug.linux/testTransCube.main.c"


#line 595 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::GetRandom");
#line 6325 "obj/debug.linux/testTransCube.main.c"


#line 596 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 596 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__GetRandom = function->function;
#line 6333 "obj/debug.linux/testTransCube.main.c"

#line 6335 "obj/debug.linux/testTransCube.main.c"


#line 598 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::strchrmax");
#line 6340 "obj/debug.linux/testTransCube.main.c"


#line 599 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 599 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__strchrmax = function->function;
#line 6348 "obj/debug.linux/testTransCube.main.c"

#line 6350 "obj/debug.linux/testTransCube.main.c"


#line 602 "obj/debug.linux/testTransCube.main.ec"
__ecereNameSpace__ecere__LoadTranslatedStrings((((void *)0)), "testTransCube");
#line 6355 "obj/debug.linux/testTransCube.main.c"


#line 603 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(__currentModule, "eModelApp");
#line 6360 "obj/debug.linux/testTransCube.main.c"


#line 604 "obj/debug.linux/testTransCube.main.ec"
if(setThingsUp)

#line 604 "obj/debug.linux/testTransCube.main.ec"
__ecereNameSpace__ecere__com__eInstance_Evolve((struct __ecereNameSpace__ecere__com__Instance **)&__currentModule, _class);
#line 6368 "obj/debug.linux/testTransCube.main.c"

#line 6370 "obj/debug.linux/testTransCube.main.c"


#line 605 "obj/debug.linux/testTransCube.main.ec"
__thisModule = __currentModule;
#line 6375 "obj/debug.linux/testTransCube.main.c"


#line 606 "obj/debug.linux/testTransCube.main.ec"
__ecereCreateModuleInstances_form1();
#line 6380 "obj/debug.linux/testTransCube.main.c"


#line 608 "obj/debug.linux/testTransCube.main.ec"
((void (*)(void *))(void *)((struct __ecereNameSpace__ecere__com__Instance *)(char *)__currentModule)->_vTbl[12])(__currentModule);
#line 6385 "obj/debug.linux/testTransCube.main.c"


#line 609 "obj/debug.linux/testTransCube.main.ec"
__ecereDestroyModuleInstances_form1();
#line 6390 "obj/debug.linux/testTransCube.main.c"


#line 611 "obj/debug.linux/testTransCube.main.ec"
__ecereNameSpace__ecere__UnloadTranslatedStrings("testTransCube");
#line 6395 "obj/debug.linux/testTransCube.main.c"


#line 613 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(__currentModule, "ecere::com::Application");
#line 6400 "obj/debug.linux/testTransCube.main.c"


#line 614 "obj/debug.linux/testTransCube.main.ec"
exitCode = ((struct __ecereNameSpace__ecere__com__Application *)(((char *)((struct __ecereNameSpace__ecere__com__Instance *)__currentModule) + sizeof(struct __ecereNameSpace__ecere__com__Module) + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->exitCode;
#line 6405 "obj/debug.linux/testTransCube.main.c"


#line 615 "obj/debug.linux/testTransCube.main.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__currentModule), __currentModule = 0);
#line 6410 "obj/debug.linux/testTransCube.main.c"


#line 616 "obj/debug.linux/testTransCube.main.ec"
return exitCode;
#line 6415 "obj/debug.linux/testTransCube.main.c"


#line 617 "obj/debug.linux/testTransCube.main.ec"
}
#line 6420 "obj/debug.linux/testTransCube.main.c"


