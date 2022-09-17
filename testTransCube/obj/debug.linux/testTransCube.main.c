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


#line 10 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID_class_OnCopy;

#line 1463 "obj/debug.linux/testTransCube.main.c"


#line 18 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Add;

#line 1469 "obj/debug.linux/testTransCube.main.c"


#line 19 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Free;

#line 1475 "obj/debug.linux/testTransCube.main.c"


#line 20 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__com__Iterator_Index)();

#line 1481 "obj/debug.linux/testTransCube.main.c"


#line 21 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__com__Iterator_Next)();

#line 1487 "obj/debug.linux/testTransCube.main.c"


#line 22 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data;

#line 1493 "obj/debug.linux/testTransCube.main.c"


#line 23 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data;

#line 1499 "obj/debug.linux/testTransCube.main.c"


#line 26 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map;

#line 1505 "obj/debug.linux/testTransCube.main.c"


#line 27 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__com__MapIterator_Get_map;

#line 1511 "obj/debug.linux/testTransCube.main.c"


#line 30 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)();

#line 1517 "obj/debug.linux/testTransCube.main.c"


#line 31 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)();

#line 1523 "obj/debug.linux/testTransCube.main.c"


#line 32 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov;

#line 1529 "obj/debug.linux/testTransCube.main.c"


#line 33 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov;

#line 1535 "obj/debug.linux/testTransCube.main.c"


#line 35 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation;

#line 1541 "obj/debug.linux/testTransCube.main.c"


#line 36 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation;

#line 1547 "obj/debug.linux/testTransCube.main.c"


#line 38 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position;

#line 1553 "obj/debug.linux/testTransCube.main.c"


#line 39 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position;

#line 1559 "obj/debug.linux/testTransCube.main.c"


#line 41 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type;

#line 1565 "obj/debug.linux/testTransCube.main.c"


#line 42 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type;

#line 1571 "obj/debug.linux/testTransCube.main.c"


#line 44 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin;

#line 1577 "obj/debug.linux/testTransCube.main.c"


#line 45 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_zMin;

#line 1583 "obj/debug.linux/testTransCube.main.c"


#line 47 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 1589 "obj/debug.linux/testTransCube.main.c"


#line 48 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 1595 "obj/debug.linux/testTransCube.main.c"


#line 52 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add)();

#line 1601 "obj/debug.linux/testTransCube.main.c"


#line 53 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate)();

#line 1607 "obj/debug.linux/testTransCube.main.c"


#line 54 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free)();

#line 1613 "obj/debug.linux/testTransCube.main.c"


#line 55 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize)();

#line 1619 "obj/debug.linux/testTransCube.main.c"


#line 56 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)();

#line 1625 "obj/debug.linux/testTransCube.main.c"


#line 57 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material;

#line 1631 "obj/debug.linux/testTransCube.main.c"


#line 58 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material;

#line 1637 "obj/debug.linux/testTransCube.main.c"


#line 60 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform;

#line 1643 "obj/debug.linux/testTransCube.main.c"


#line 61 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform;

#line 1649 "obj/debug.linux/testTransCube.main.c"


#line 64 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create)();

#line 1655 "obj/debug.linux/testTransCube.main.c"


#line 65 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Cube_Set_size;

#line 1661 "obj/debug.linux/testTransCube.main.c"


#line 67 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)();

#line 1667 "obj/debug.linux/testTransCube.main.c"


#line 68 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)();

#line 1673 "obj/debug.linux/testTransCube.main.c"


#line 69 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)();

#line 1679 "obj/debug.linux/testTransCube.main.c"


#line 70 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient;

#line 1685 "obj/debug.linux/testTransCube.main.c"


#line 72 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias;

#line 1691 "obj/debug.linux/testTransCube.main.c"


#line 74 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor;

#line 1697 "obj/debug.linux/testTransCube.main.c"


#line 76 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity;

#line 1703 "obj/debug.linux/testTransCube.main.c"


#line 78 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials)();

#line 1709 "obj/debug.linux/testTransCube.main.c"


#line 79 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes)();

#line 1715 "obj/debug.linux/testTransCube.main.c"


#line 80 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures)();

#line 1721 "obj/debug.linux/testTransCube.main.c"


#line 82 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName;

#line 1727 "obj/debug.linux/testTransCube.main.c"


#line 83 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_faceName;

#line 1733 "obj/debug.linux/testTransCube.main.c"


#line 85 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size;

#line 1739 "obj/debug.linux/testTransCube.main.c"


#line 86 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_size;

#line 1745 "obj/debug.linux/testTransCube.main.c"


#line 88 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)();

#line 1751 "obj/debug.linux/testTransCube.main.c"


#line 89 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver;

#line 1757 "obj/debug.linux/testTransCube.main.c"


#line 90 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver;

#line 1763 "obj/debug.linux/testTransCube.main.c"


#line 92 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey;

#line 1769 "obj/debug.linux/testTransCube.main.c"


#line 94 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)();

#line 1775 "obj/debug.linux/testTransCube.main.c"


#line 95 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)();

#line 1781 "obj/debug.linux/testTransCube.main.c"


#line 96 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)();

#line 1787 "obj/debug.linux/testTransCube.main.c"


#line 97 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) int (* __ecereMethod___ecereNameSpace__ecere__gui__Window_Update)();

#line 1793 "obj/debug.linux/testTransCube.main.c"


#line 98 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor;

#line 1799 "obj/debug.linux/testTransCube.main.c"


#line 99 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_anchor;

#line 1805 "obj/debug.linux/testTransCube.main.c"


#line 101 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background;

#line 1811 "obj/debug.linux/testTransCube.main.c"


#line 102 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background;

#line 1817 "obj/debug.linux/testTransCube.main.c"


#line 104 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle;

#line 1823 "obj/debug.linux/testTransCube.main.c"


#line 105 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle;

#line 1829 "obj/debug.linux/testTransCube.main.c"


#line 107 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption;

#line 1835 "obj/debug.linux/testTransCube.main.c"


#line 108 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption;

#line 1841 "obj/debug.linux/testTransCube.main.c"


#line 110 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display;

#line 1847 "obj/debug.linux/testTransCube.main.c"


#line 112 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver;

#line 1853 "obj/debug.linux/testTransCube.main.c"


#line 113 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displayDriver;

#line 1859 "obj/debug.linux/testTransCube.main.c"


#line 115 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem;

#line 1865 "obj/debug.linux/testTransCube.main.c"


#line 117 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_font;

#line 1871 "obj/debug.linux/testTransCube.main.c"


#line 118 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_font;

#line 1877 "obj/debug.linux/testTransCube.main.c"


#line 120 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground;

#line 1883 "obj/debug.linux/testTransCube.main.c"


#line 121 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_foreground;

#line 1889 "obj/debug.linux/testTransCube.main.c"


#line 123 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose;

#line 1895 "obj/debug.linux/testTransCube.main.c"


#line 124 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose;

#line 1901 "obj/debug.linux/testTransCube.main.c"


#line 126 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize;

#line 1907 "obj/debug.linux/testTransCube.main.c"


#line 127 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize;

#line 1913 "obj/debug.linux/testTransCube.main.c"


#line 129 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize;

#line 1919 "obj/debug.linux/testTransCube.main.c"


#line 130 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize;

#line 1925 "obj/debug.linux/testTransCube.main.c"


#line 132 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll;

#line 1931 "obj/debug.linux/testTransCube.main.c"


#line 133 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasVertScroll;

#line 1937 "obj/debug.linux/testTransCube.main.c"


#line 135 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity;

#line 1943 "obj/debug.linux/testTransCube.main.c"


#line 136 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity;

#line 1949 "obj/debug.linux/testTransCube.main.c"


#line 138 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent;

#line 1955 "obj/debug.linux/testTransCube.main.c"


#line 139 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_parent;

#line 1961 "obj/debug.linux/testTransCube.main.c"


#line 141 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position;

#line 1967 "obj/debug.linux/testTransCube.main.c"


#line 142 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position;

#line 1973 "obj/debug.linux/testTransCube.main.c"


#line 144 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_scrollArea;

#line 1979 "obj/debug.linux/testTransCube.main.c"


#line 145 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_scrollArea;

#line 1985 "obj/debug.linux/testTransCube.main.c"


#line 147 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size;

#line 1991 "obj/debug.linux/testTransCube.main.c"


#line 148 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size;

#line 1997 "obj/debug.linux/testTransCube.main.c"


#line 151 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity;

#line 2003 "obj/debug.linux/testTransCube.main.c"


#line 152 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_Get_opacity;

#line 2009 "obj/debug.linux/testTransCube.main.c"


#line 155 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents;

#line 2015 "obj/debug.linux/testTransCube.main.c"


#line 156 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents;

#line 2021 "obj/debug.linux/testTransCube.main.c"


#line 158 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine;

#line 2027 "obj/debug.linux/testTransCube.main.c"


#line 159 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLine;

#line 2033 "obj/debug.linux/testTransCube.main.c"


#line 161 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents;

#line 2039 "obj/debug.linux/testTransCube.main.c"


#line 164 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow;

#line 2045 "obj/debug.linux/testTransCube.main.c"


#line 165 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_Get_labeledWindow;

#line 2051 "obj/debug.linux/testTransCube.main.c"


#line 167 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians;

#line 2057 "obj/debug.linux/testTransCube.main.c"


#line 168 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians;

#line 2063 "obj/debug.linux/testTransCube.main.c"


#line 170 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__com__PrintString;

#line 2069 "obj/debug.linux/testTransCube.main.c"


#line 171 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial;

#line 2075 "obj/debug.linux/testTransCube.main.c"


#line 172 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__CopyString;

#line 2081 "obj/debug.linux/testTransCube.main.c"


#line 173 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) void * __ecereFunction___ecereNameSpace__ecere__sys__GetRandom;

#line 2087 "obj/debug.linux/testTransCube.main.c"


#line 176 "obj/debug.linux/testTransCube.main.ec"
void __ecereCreateModuleInstances_form1();

#line 2093 "obj/debug.linux/testTransCube.main.c"


#line 177 "obj/debug.linux/testTransCube.main.ec"
void __ecereDestroyModuleInstances_form1();

#line 2099 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  first;

#line 2109 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  last;

#line 2114 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int count;

#line 2119 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int offset;

#line 2124 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int circ;

#line 2129 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2132 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 2138 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
union
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
char c;

#line 2152 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned char uc;

#line 2157 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
short s;

#line 2162 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned short us;

#line 2167 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int i;

#line 2172 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int ui;

#line 2177 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  p;

#line 2182 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
float f;

#line 2187 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
double d;

#line 2192 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
long long i64;

#line 2197 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
uint64 ui64;

#line 2202 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon1;

#line 2205 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2208 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned char *  _buffer;

#line 2218 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
size_t count;

#line 2223 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
size_t _size;

#line 2228 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
size_t pos;

#line 2233 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2236 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 2242 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 2248 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 2254 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 2260 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 2266 "obj/debug.linux/testTransCube.main.c"


#line 194 "obj/debug.linux/testTransCube.main.ec"
extern int printf(const char * , ...);

#line 2272 "obj/debug.linux/testTransCube.main.c"


#line 439 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__LoadTranslatedStrings(const char * moduleName, const char *  name);

#line 2278 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__UnloadTranslatedStrings(const char * name);

#line 2284 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 2290 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
void * *  _vTbl;

#line 2300 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2305 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int _refCount;

#line 2310 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2313 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 2319 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 2325 "obj/debug.linux/testTransCube.main.c"


#line 8 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_String;

#line 2331 "obj/debug.linux/testTransCube.main.c"


#line 9 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_char__PTR_;

#line 2337 "obj/debug.linux/testTransCube.main.c"


#line 11 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_double;

#line 2343 "obj/debug.linux/testTransCube.main.c"


#line 12 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_;

#line 2349 "obj/debug.linux/testTransCube.main.c"


#line 13 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___;

#line 2355 "obj/debug.linux/testTransCube.main.c"


#line 14 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 2361 "obj/debug.linux/testTransCube.main.c"


#line 15 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_int;

#line 2367 "obj/debug.linux/testTransCube.main.c"


#line 16 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass_uint;

#line 2373 "obj/debug.linux/testTransCube.main.c"


#line 17 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array;

#line 2379 "obj/debug.linux/testTransCube.main.c"


#line 25 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Map;

#line 2385 "obj/debug.linux/testTransCube.main.c"


#line 29 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;

#line 2391 "obj/debug.linux/testTransCube.main.c"


#line 50 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Material;

#line 2397 "obj/debug.linux/testTransCube.main.c"


#line 51 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__Object;

#line 2403 "obj/debug.linux/testTransCube.main.c"


#line 63 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube;

#line 2409 "obj/debug.linux/testTransCube.main.c"


#line 81 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx__FontResource;

#line 2415 "obj/debug.linux/testTransCube.main.c"


#line 150 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__Button;

#line 2421 "obj/debug.linux/testTransCube.main.c"


#line 154 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__EditBox;

#line 2427 "obj/debug.linux/testTransCube.main.c"


#line 163 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gui__controls__Label;

#line 2433 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 2439 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2445 "obj/debug.linux/testTransCube.main.c"


#line 441 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Evolve(struct __ecereNameSpace__ecere__com__Instance **  instancePtr, struct __ecereNameSpace__ecere__com__Class * _class);

#line 2451 "obj/debug.linux/testTransCube.main.c"


#line 452 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2457 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 2463 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 2473 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 2478 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 2483 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int isProperty;

#line 2488 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int memberAccess;

#line 2493 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int id;

#line 2498 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2503 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 2508 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2513 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2518 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void (*  Set)(void * , int);

#line 2523 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int (*  Get)(void * );

#line 2528 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int (*  IsSet)(void * );

#line 2533 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  data;

#line 2538 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  symbol;

#line 2543 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int vid;

#line 2548 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int conversion;

#line 2553 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int watcherOffset;

#line 2558 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  category;

#line 2563 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int compiled;

#line 2568 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int selfWatchable;

#line 2573 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int isWatchable;

#line 2578 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2581 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2587 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 2593 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 2599 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2605 "obj/debug.linux/testTransCube.main.c"


#line 24 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__Iterator_data;

#line 2611 "obj/debug.linux/testTransCube.main.c"


#line 28 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__MapIterator_map;

#line 2617 "obj/debug.linux/testTransCube.main.c"


#line 34 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;

#line 2623 "obj/debug.linux/testTransCube.main.c"


#line 37 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;

#line 2629 "obj/debug.linux/testTransCube.main.c"


#line 40 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;

#line 2635 "obj/debug.linux/testTransCube.main.c"


#line 43 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;

#line 2641 "obj/debug.linux/testTransCube.main.c"


#line 46 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_zMin;

#line 2647 "obj/debug.linux/testTransCube.main.c"


#line 49 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion;

#line 2653 "obj/debug.linux/testTransCube.main.c"


#line 59 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material;

#line 2659 "obj/debug.linux/testTransCube.main.c"


#line 62 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;

#line 2665 "obj/debug.linux/testTransCube.main.c"


#line 66 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Cube_size;

#line 2671 "obj/debug.linux/testTransCube.main.c"


#line 71 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_ambient;

#line 2677 "obj/debug.linux/testTransCube.main.c"


#line 73 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_antiAlias;

#line 2683 "obj/debug.linux/testTransCube.main.c"


#line 75 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogColor;

#line 2689 "obj/debug.linux/testTransCube.main.c"


#line 77 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;

#line 2695 "obj/debug.linux/testTransCube.main.c"


#line 84 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_faceName;

#line 2701 "obj/debug.linux/testTransCube.main.c"


#line 87 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gfx__FontResource_size;

#line 2707 "obj/debug.linux/testTransCube.main.c"


#line 91 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;

#line 2713 "obj/debug.linux/testTransCube.main.c"


#line 93 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Key___ecereNameSpace__ecere__gui__SmartKey;

#line 2719 "obj/debug.linux/testTransCube.main.c"


#line 100 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_anchor;

#line 2725 "obj/debug.linux/testTransCube.main.c"


#line 103 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_background;

#line 2731 "obj/debug.linux/testTransCube.main.c"


#line 106 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;

#line 2737 "obj/debug.linux/testTransCube.main.c"


#line 109 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_caption;

#line 2743 "obj/debug.linux/testTransCube.main.c"


#line 111 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_display;

#line 2749 "obj/debug.linux/testTransCube.main.c"


#line 114 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displayDriver;

#line 2755 "obj/debug.linux/testTransCube.main.c"


#line 116 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;

#line 2761 "obj/debug.linux/testTransCube.main.c"


#line 119 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_font;

#line 2767 "obj/debug.linux/testTransCube.main.c"


#line 122 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_foreground;

#line 2773 "obj/debug.linux/testTransCube.main.c"


#line 125 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasClose;

#line 2779 "obj/debug.linux/testTransCube.main.c"


#line 128 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize;

#line 2785 "obj/debug.linux/testTransCube.main.c"


#line 131 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize;

#line 2791 "obj/debug.linux/testTransCube.main.c"


#line 134 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_hasVertScroll;

#line 2797 "obj/debug.linux/testTransCube.main.c"


#line 137 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_opacity;

#line 2803 "obj/debug.linux/testTransCube.main.c"


#line 140 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_parent;

#line 2809 "obj/debug.linux/testTransCube.main.c"


#line 143 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_position;

#line 2815 "obj/debug.linux/testTransCube.main.c"


#line 146 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_scrollArea;

#line 2821 "obj/debug.linux/testTransCube.main.c"


#line 149 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__Window_size;

#line 2827 "obj/debug.linux/testTransCube.main.c"


#line 153 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__Button_opacity;

#line 2833 "obj/debug.linux/testTransCube.main.c"


#line 157 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_contents;

#line 2839 "obj/debug.linux/testTransCube.main.c"


#line 160 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLine;

#line 2845 "obj/debug.linux/testTransCube.main.c"


#line 162 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLineContents;

#line 2851 "obj/debug.linux/testTransCube.main.c"


#line 166 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__Label_labeledWindow;

#line 2857 "obj/debug.linux/testTransCube.main.c"


#line 169 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;

#line 2863 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 2869 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 2879 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int count;

#line 2884 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 2889 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void (*  FreeKey)(void *  key);

#line 2894 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2897 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 2903 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 2913 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 2918 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 2923 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 2928 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int depth;

#line 2933 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int (*  function)();

#line 2938 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int vid;

#line 2943 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int type;

#line 2948 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2953 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  symbol;

#line 2958 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 2963 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2968 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int memberAccess;

#line 2973 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 2976 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 2982 "obj/debug.linux/testTransCube.main.c"


#line 4 "obj/debug.linux/testTransCube.main.ec"
static struct __ecereNameSpace__ecere__com__Instance * __currentModule;

#line 2988 "obj/debug.linux/testTransCube.main.c"


#line 6 "obj/debug.linux/testTransCube.main.ec"
__attribute__((__common__)) struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 2994 "obj/debug.linux/testTransCube.main.c"


#line 174 "obj/debug.linux/testTransCube.main.ec"
void __ecereRegisterModule_form1(struct __ecereNameSpace__ecere__com__Instance * module);

#line 3000 "obj/debug.linux/testTransCube.main.c"


#line 175 "obj/debug.linux/testTransCube.main.ec"
void __ecereUnregisterModule_form1(struct __ecereNameSpace__ecere__com__Instance * module);

#line 3006 "obj/debug.linux/testTransCube.main.c"


#line 193 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__com__eModule_Load(struct __ecereNameSpace__ecere__com__Instance * fromModule, const char *  name, int importAccess);

#line 3012 "obj/debug.linux/testTransCube.main.c"


#line 198 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_FindClass(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 3018 "obj/debug.linux/testTransCube.main.c"


#line 203 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_FindMethod(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, struct __ecereNameSpace__ecere__com__Instance * module);

#line 3024 "obj/debug.linux/testTransCube.main.c"


#line 231 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Property * __ecereNameSpace__ecere__com__eClass_FindProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, struct __ecereNameSpace__ecere__com__Instance * module);

#line 3030 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Application;

#line 3036 "obj/debug.linux/testTransCube.main.c"


#line 190 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Instance * __ecereNameSpace__ecere__com____ecere_COM_Initialize(unsigned int guiApp, int argc, char *  argv[]);

#line 3042 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 3048 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3058 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 3063 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 3068 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 3073 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int depth;

#line 3078 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 3083 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 3088 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 3093 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 3098 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 3103 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3106 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
int argc;

#line 3116 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char * *  argv;

#line 3121 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int exitCode;

#line 3126 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int isGUIApp;

#line 3131 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 3136 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
char *  parsedCommand;

#line 3141 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 3146 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3149 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 3159 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 3164 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 3169 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 3174 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 3179 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 3184 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 3189 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3194 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  library;

#line 3199 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  Unload;

#line 3204 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int importType;

#line 3209 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int origImportType;

#line 3214 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 3219 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 3224 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3227 "obj/debug.linux/testTransCube.main.c"

void __ecereRegisterModule_testTransCube_main(struct __ecereNameSpace__ecere__com__Instance * module)

#line 179 "obj/debug.linux/testTransCube.main.ec"
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 3237 "obj/debug.linux/testTransCube.main.c"


#line 454 "obj/debug.linux/testTransCube.main.ec"
}
#line 3242 "obj/debug.linux/testTransCube.main.c"


void __ecereUnregisterModule_testTransCube_main(struct __ecereNameSpace__ecere__com__Instance * module)

#line 179 "obj/debug.linux/testTransCube.main.ec"
{


#line 454 "obj/debug.linux/testTransCube.main.ec"
}
#line 3253 "obj/debug.linux/testTransCube.main.c"



#line 448 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 3260 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
union
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 3278 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3283 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon1;

#line 3286 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 3291 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  memberString;

#line 3300 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
union
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 3309 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 3314 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 3319 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon1;

#line 3322 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon2;

#line 3325 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct __anon1;

#line 3328 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3331 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 3341 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 3346 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3351 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int isProperty;

#line 3356 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int memberAccess;

#line 3361 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int id;

#line 3366 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 3371 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 3376 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 3381 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3386 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int type;

#line 3391 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int offset;

#line 3396 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int memberID;

#line 3401 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 3406 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 3411 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int memberOffset;

#line 3416 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
short structAlignment;

#line 3421 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
short pointerAlignment;

#line 3426 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3429 "obj/debug.linux/testTransCube.main.c"


#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 3439 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 3444 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3449 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int offset;

#line 3454 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int structSize;

#line 3459 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void * *  _vTbl;

#line 3464 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int vTblSize;

#line 3469 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int (*  Constructor)(void * );

#line 3474 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void (*  Destructor)(void * );

#line 3479 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int offsetClass;

#line 3484 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int sizeClass;

#line 3489 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 3494 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 3499 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 3504 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 3509 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 3514 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 3519 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 3524 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int memberID;

#line 3529 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int startMemberID;

#line 3534 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int type;

#line 3539 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3544 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3549 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 3554 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3559 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int typeSize;

#line 3564 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int defaultAlignment;

#line 3569 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void (*  Initialize)();

#line 3574 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int memberOffset;

#line 3579 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 3584 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  designerClass;

#line 3589 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int noExpansion;

#line 3594 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  defaultProperty;

#line 3599 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int comRedefinition;

#line 3604 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int count;

#line 3609 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int isRemote;

#line 3614 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int internalDecl;

#line 3619 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  data;

#line 3624 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int computeSize;

#line 3629 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
short structAlignment;

#line 3634 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
short pointerAlignment;

#line 3639 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int destructionWatchOffset;

#line 3644 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int fixed;

#line 3649 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 3654 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int inheritanceAccess;

#line 3659 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
const char *  fullName;

#line 3664 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  symbol;

#line 3669 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 3674 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 3679 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 3684 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 3689 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 3694 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
int numParams;

#line 3699 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int isInstanceClass;

#line 3704 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
unsigned int byValueSystemClass;

#line 3709 "obj/debug.linux/testTransCube.main.c"

#line 179 "obj/debug.linux/testTransCube.main.ec"
void *  bindingsClass;

#line 3714 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3717 "obj/debug.linux/testTransCube.main.c"


#line 445 "obj/debug.linux/testTransCube.main.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Instance;

#line 3723 "obj/debug.linux/testTransCube.main.c"


#line 451 "obj/debug.linux/testTransCube.main.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Application;

#line 3729 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction;

#line 3735 "obj/debug.linux/testTransCube.main.c"


#line 426 "obj/debug.linux/testTransCube.main.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_FindFunction(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 3741 "obj/debug.linux/testTransCube.main.c"


#line 187 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction
{

#line 427 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction * prev;

#line 3751 "obj/debug.linux/testTransCube.main.c"

#line 427 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction * next;

#line 3756 "obj/debug.linux/testTransCube.main.c"

#line 427 "obj/debug.linux/testTransCube.main.ec"
const char *  name;

#line 3761 "obj/debug.linux/testTransCube.main.c"

#line 427 "obj/debug.linux/testTransCube.main.ec"
int (*  function)();

#line 3766 "obj/debug.linux/testTransCube.main.c"

#line 427 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3771 "obj/debug.linux/testTransCube.main.c"

#line 427 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3776 "obj/debug.linux/testTransCube.main.c"

#line 427 "obj/debug.linux/testTransCube.main.ec"
const char *  dataTypeString;

#line 3781 "obj/debug.linux/testTransCube.main.c"

#line 427 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3786 "obj/debug.linux/testTransCube.main.c"

#line 427 "obj/debug.linux/testTransCube.main.ec"
void *  symbol;

#line 3791 "obj/debug.linux/testTransCube.main.c"
} ecere_gcc_struct;

#line 3794 "obj/debug.linux/testTransCube.main.c"

int main(int _argc, char * _argv[])

#line 180 "obj/debug.linux/testTransCube.main.ec"
{

#line 181 "obj/debug.linux/testTransCube.main.ec"
int exitCode;

#line 3804 "obj/debug.linux/testTransCube.main.c"

#line 182 "obj/debug.linux/testTransCube.main.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3809 "obj/debug.linux/testTransCube.main.c"

#line 183 "obj/debug.linux/testTransCube.main.ec"
unsigned int setThingsUp = !__thisModule;

#line 3814 "obj/debug.linux/testTransCube.main.c"

#line 184 "obj/debug.linux/testTransCube.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Class * _class;

#line 3819 "obj/debug.linux/testTransCube.main.c"

#line 185 "obj/debug.linux/testTransCube.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Method * method;

#line 3824 "obj/debug.linux/testTransCube.main.c"

#line 186 "obj/debug.linux/testTransCube.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__Property * _property;

#line 3829 "obj/debug.linux/testTransCube.main.c"

#line 187 "obj/debug.linux/testTransCube.main.ec"
__attribute__((unused)) struct __ecereNameSpace__ecere__com__GlobalFunction * function;

#line 3834 "obj/debug.linux/testTransCube.main.c"


#line 189 "obj/debug.linux/testTransCube.main.ec"
if(setThingsUp)

#line 190 "obj/debug.linux/testTransCube.main.ec"
__thisModule = __ecereNameSpace__ecere__com____ecere_COM_Initialize((unsigned int)1, _argc, (void *)_argv);
#line 3842 "obj/debug.linux/testTransCube.main.c"

#line 3844 "obj/debug.linux/testTransCube.main.c"


#line 192 "obj/debug.linux/testTransCube.main.ec"
__currentModule = module = __thisModule;
#line 3849 "obj/debug.linux/testTransCube.main.c"


#line 193 "obj/debug.linux/testTransCube.main.ec"
if(!__ecereNameSpace__ecere__com__eModule_Load(module, "ecere", 2))

#line 194 "obj/debug.linux/testTransCube.main.ec"
printf("Error loading eC module \"%s\" (shared library -- .so/.dll/.dylib)\nThings might go very wrong.\nCheck installed libraries or PATH (Windows) / (DY)LD_LIBRARY_PATH (Unix / Apple) environment variable.\n", "ecere");
#line 3857 "obj/debug.linux/testTransCube.main.c"

#line 3859 "obj/debug.linux/testTransCube.main.c"


#line 196 "obj/debug.linux/testTransCube.main.ec"
__ecereRegisterModule_form1(module);
#line 3864 "obj/debug.linux/testTransCube.main.c"


#line 198 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_String = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "String");
#line 3869 "obj/debug.linux/testTransCube.main.c"


#line 200 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_char__PTR_ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "char *");
#line 3874 "obj/debug.linux/testTransCube.main.c"


#line 202 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "class");
#line 3879 "obj/debug.linux/testTransCube.main.c"


#line 203 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "OnCopy", module);
#line 3884 "obj/debug.linux/testTransCube.main.c"


#line 204 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 204 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID_class_OnCopy = method->vid;
#line 3892 "obj/debug.linux/testTransCube.main.c"

#line 3894 "obj/debug.linux/testTransCube.main.c"


#line 206 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_double = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "double");
#line 3899 "obj/debug.linux/testTransCube.main.c"


#line 208 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Array_TPL_MyCube_ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Array<MyCube>");
#line 3904 "obj/debug.linux/testTransCube.main.c"


#line 210 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Map_TPL_String__ecere__com__Array_TPL_MyCube___ = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Map<String, ecere::com::Array<MyCube> >");
#line 3909 "obj/debug.linux/testTransCube.main.c"


#line 212 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Module = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Module");
#line 3914 "obj/debug.linux/testTransCube.main.c"


#line 214 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_int = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "int");
#line 3919 "obj/debug.linux/testTransCube.main.c"


#line 216 "obj/debug.linux/testTransCube.main.ec"
__ecereClass_uint = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "uint");
#line 3924 "obj/debug.linux/testTransCube.main.c"


#line 218 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Array = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Array");
#line 3929 "obj/debug.linux/testTransCube.main.c"


#line 220 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Container");
#line 3934 "obj/debug.linux/testTransCube.main.c"


#line 221 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Add", module);
#line 3939 "obj/debug.linux/testTransCube.main.c"


#line 222 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 222 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__com__Container_Add = method->vid;
#line 3947 "obj/debug.linux/testTransCube.main.c"

#line 3949 "obj/debug.linux/testTransCube.main.c"


#line 223 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Free", module);
#line 3954 "obj/debug.linux/testTransCube.main.c"


#line 224 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 224 "obj/debug.linux/testTransCube.main.ec"
__ecereVMethodID___ecereNameSpace__ecere__com__Container_Free = method->vid;
#line 3962 "obj/debug.linux/testTransCube.main.c"

#line 3964 "obj/debug.linux/testTransCube.main.c"


#line 226 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Iterator");
#line 3969 "obj/debug.linux/testTransCube.main.c"


#line 227 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Index", module);
#line 3974 "obj/debug.linux/testTransCube.main.c"


#line 228 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 228 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index = method->function;
#line 3982 "obj/debug.linux/testTransCube.main.c"

#line 3984 "obj/debug.linux/testTransCube.main.c"


#line 229 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Next", module);
#line 3989 "obj/debug.linux/testTransCube.main.c"


#line 230 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 230 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Next = method->function;
#line 3997 "obj/debug.linux/testTransCube.main.c"

#line 3999 "obj/debug.linux/testTransCube.main.c"


#line 231 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_data = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "data", module);
#line 4004 "obj/debug.linux/testTransCube.main.c"


#line 232 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 232 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data = _property->Set;
#line 4012 "obj/debug.linux/testTransCube.main.c"

#line 4014 "obj/debug.linux/testTransCube.main.c"


#line 233 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 233 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data = _property->Get;
#line 4022 "obj/debug.linux/testTransCube.main.c"

#line 4024 "obj/debug.linux/testTransCube.main.c"


#line 235 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__com__Map = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::Map");
#line 4029 "obj/debug.linux/testTransCube.main.c"


#line 237 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::com::MapIterator");
#line 4034 "obj/debug.linux/testTransCube.main.c"


#line 238 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__MapIterator_map = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "map", module);
#line 4039 "obj/debug.linux/testTransCube.main.c"


#line 239 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 239 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__MapIterator_Set_map = _property->Set;
#line 4047 "obj/debug.linux/testTransCube.main.c"

#line 4049 "obj/debug.linux/testTransCube.main.c"


#line 240 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 240 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__com__MapIterator_Get_map = _property->Get;
#line 4057 "obj/debug.linux/testTransCube.main.c"

#line 4059 "obj/debug.linux/testTransCube.main.c"


#line 242 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Camera = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Camera");
#line 4064 "obj/debug.linux/testTransCube.main.c"


#line 243 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Setup", module);
#line 4069 "obj/debug.linux/testTransCube.main.c"


#line 244 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 244 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup = method->function;
#line 4077 "obj/debug.linux/testTransCube.main.c"

#line 4079 "obj/debug.linux/testTransCube.main.c"


#line 245 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Update", module);
#line 4084 "obj/debug.linux/testTransCube.main.c"


#line 246 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 246 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update = method->function;
#line 4092 "obj/debug.linux/testTransCube.main.c"

#line 4094 "obj/debug.linux/testTransCube.main.c"


#line 247 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "fov", module);
#line 4099 "obj/debug.linux/testTransCube.main.c"


#line 248 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 248 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov = _property->Set;
#line 4107 "obj/debug.linux/testTransCube.main.c"

#line 4109 "obj/debug.linux/testTransCube.main.c"


#line 249 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 249 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov = _property->Get;
#line 4117 "obj/debug.linux/testTransCube.main.c"

#line 4119 "obj/debug.linux/testTransCube.main.c"


#line 250 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "orientation", module);
#line 4124 "obj/debug.linux/testTransCube.main.c"


#line 251 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 251 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation = _property->Set;
#line 4132 "obj/debug.linux/testTransCube.main.c"

#line 4134 "obj/debug.linux/testTransCube.main.c"


#line 252 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 252 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation = _property->Get;
#line 4142 "obj/debug.linux/testTransCube.main.c"

#line 4144 "obj/debug.linux/testTransCube.main.c"


#line 253 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "position", module);
#line 4149 "obj/debug.linux/testTransCube.main.c"


#line 254 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 254 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position = _property->Set;
#line 4157 "obj/debug.linux/testTransCube.main.c"

#line 4159 "obj/debug.linux/testTransCube.main.c"


#line 255 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 255 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position = _property->Get;
#line 4167 "obj/debug.linux/testTransCube.main.c"

#line 4169 "obj/debug.linux/testTransCube.main.c"


#line 256 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "type", module);
#line 4174 "obj/debug.linux/testTransCube.main.c"


#line 257 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 257 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type = _property->Set;
#line 4182 "obj/debug.linux/testTransCube.main.c"

#line 4184 "obj/debug.linux/testTransCube.main.c"


#line 258 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 258 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type = _property->Get;
#line 4192 "obj/debug.linux/testTransCube.main.c"

#line 4194 "obj/debug.linux/testTransCube.main.c"


#line 259 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_zMin = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "zMin", module);
#line 4199 "obj/debug.linux/testTransCube.main.c"


#line 260 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 260 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_zMin = _property->Set;
#line 4207 "obj/debug.linux/testTransCube.main.c"

#line 4209 "obj/debug.linux/testTransCube.main.c"


#line 261 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 261 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_zMin = _property->Get;
#line 4217 "obj/debug.linux/testTransCube.main.c"

#line 4219 "obj/debug.linux/testTransCube.main.c"


#line 263 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Euler");
#line 4224 "obj/debug.linux/testTransCube.main.c"


#line 264 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ecere::gfx3D::Quaternion", module);
#line 4229 "obj/debug.linux/testTransCube.main.c"


#line 265 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 265 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion = _property->Set;
#line 4237 "obj/debug.linux/testTransCube.main.c"

#line 4239 "obj/debug.linux/testTransCube.main.c"


#line 266 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 266 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion = _property->Get;
#line 4247 "obj/debug.linux/testTransCube.main.c"

#line 4249 "obj/debug.linux/testTransCube.main.c"


#line 268 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Material = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Material");
#line 4254 "obj/debug.linux/testTransCube.main.c"


#line 270 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__Object = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::Object");
#line 4259 "obj/debug.linux/testTransCube.main.c"


#line 271 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Add", module);
#line 4264 "obj/debug.linux/testTransCube.main.c"


#line 272 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 272 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Add = method->function;
#line 4272 "obj/debug.linux/testTransCube.main.c"

#line 4274 "obj/debug.linux/testTransCube.main.c"


#line 273 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Duplicate", module);
#line 4279 "obj/debug.linux/testTransCube.main.c"


#line 274 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 274 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate = method->function;
#line 4287 "obj/debug.linux/testTransCube.main.c"

#line 4289 "obj/debug.linux/testTransCube.main.c"


#line 275 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Free", module);
#line 4294 "obj/debug.linux/testTransCube.main.c"


#line 276 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 276 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Free = method->function;
#line 4302 "obj/debug.linux/testTransCube.main.c"

#line 4304 "obj/debug.linux/testTransCube.main.c"


#line 277 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Initialize", module);
#line 4309 "obj/debug.linux/testTransCube.main.c"


#line 278 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 278 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Initialize = method->function;
#line 4317 "obj/debug.linux/testTransCube.main.c"

#line 4319 "obj/debug.linux/testTransCube.main.c"


#line 279 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "UpdateTransform", module);
#line 4324 "obj/debug.linux/testTransCube.main.c"


#line 280 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 280 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform = method->function;
#line 4332 "obj/debug.linux/testTransCube.main.c"

#line 4334 "obj/debug.linux/testTransCube.main.c"


#line 281 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_material = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "material", module);
#line 4339 "obj/debug.linux/testTransCube.main.c"


#line 282 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 282 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material = _property->Set;
#line 4347 "obj/debug.linux/testTransCube.main.c"

#line 4349 "obj/debug.linux/testTransCube.main.c"


#line 283 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 283 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material = _property->Get;
#line 4357 "obj/debug.linux/testTransCube.main.c"

#line 4359 "obj/debug.linux/testTransCube.main.c"


#line 284 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "transform", module);
#line 4364 "obj/debug.linux/testTransCube.main.c"


#line 285 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 285 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform = _property->Set;
#line 4372 "obj/debug.linux/testTransCube.main.c"

#line 4374 "obj/debug.linux/testTransCube.main.c"


#line 286 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 286 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform = _property->Get;
#line 4382 "obj/debug.linux/testTransCube.main.c"

#line 4384 "obj/debug.linux/testTransCube.main.c"


#line 288 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx3D::meshes::Cube");
#line 4389 "obj/debug.linux/testTransCube.main.c"


#line 289 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube, "Create", module);
#line 4394 "obj/debug.linux/testTransCube.main.c"


#line 290 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 290 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Cube_Create = method->function;
#line 4402 "obj/debug.linux/testTransCube.main.c"

#line 4404 "obj/debug.linux/testTransCube.main.c"


#line 291 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Cube_size = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Cube, "size", module);
#line 4409 "obj/debug.linux/testTransCube.main.c"


#line 292 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 292 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Cube_Set_size = _property->Set;
#line 4417 "obj/debug.linux/testTransCube.main.c"

#line 4419 "obj/debug.linux/testTransCube.main.c"


#line 294 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::Display");
#line 4424 "obj/debug.linux/testTransCube.main.c"


#line 295 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "DrawObject", module);
#line 4429 "obj/debug.linux/testTransCube.main.c"


#line 296 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 296 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject = method->function;
#line 4437 "obj/debug.linux/testTransCube.main.c"

#line 4439 "obj/debug.linux/testTransCube.main.c"


#line 297 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "SetCamera", module);
#line 4444 "obj/debug.linux/testTransCube.main.c"


#line 298 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 298 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera = method->function;
#line 4452 "obj/debug.linux/testTransCube.main.c"

#line 4454 "obj/debug.linux/testTransCube.main.c"


#line 299 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "SetLight", module);
#line 4459 "obj/debug.linux/testTransCube.main.c"


#line 300 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 300 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight = method->function;
#line 4467 "obj/debug.linux/testTransCube.main.c"

#line 4469 "obj/debug.linux/testTransCube.main.c"


#line 301 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_ambient = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ambient", module);
#line 4474 "obj/debug.linux/testTransCube.main.c"


#line 302 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 302 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_ambient = _property->Set;
#line 4482 "obj/debug.linux/testTransCube.main.c"

#line 4484 "obj/debug.linux/testTransCube.main.c"


#line 303 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_antiAlias = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "antiAlias", module);
#line 4489 "obj/debug.linux/testTransCube.main.c"


#line 304 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 304 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_antiAlias = _property->Set;
#line 4497 "obj/debug.linux/testTransCube.main.c"

#line 4499 "obj/debug.linux/testTransCube.main.c"


#line 305 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_fogColor = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "fogColor", module);
#line 4504 "obj/debug.linux/testTransCube.main.c"


#line 306 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 306 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogColor = _property->Set;
#line 4512 "obj/debug.linux/testTransCube.main.c"

#line 4514 "obj/debug.linux/testTransCube.main.c"


#line 307 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "fogDensity", module);
#line 4519 "obj/debug.linux/testTransCube.main.c"


#line 308 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 308 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity = _property->Set;
#line 4527 "obj/debug.linux/testTransCube.main.c"

#line 4529 "obj/debug.linux/testTransCube.main.c"


#line 310 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::DisplaySystem");
#line 4534 "obj/debug.linux/testTransCube.main.c"


#line 311 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ClearMaterials", module);
#line 4539 "obj/debug.linux/testTransCube.main.c"


#line 312 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 312 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMaterials = method->function;
#line 4547 "obj/debug.linux/testTransCube.main.c"

#line 4549 "obj/debug.linux/testTransCube.main.c"


#line 313 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ClearMeshes", module);
#line 4554 "obj/debug.linux/testTransCube.main.c"


#line 314 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 314 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearMeshes = method->function;
#line 4562 "obj/debug.linux/testTransCube.main.c"

#line 4564 "obj/debug.linux/testTransCube.main.c"


#line 315 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ClearTextures", module);
#line 4569 "obj/debug.linux/testTransCube.main.c"


#line 316 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 316 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_ClearTextures = method->function;
#line 4577 "obj/debug.linux/testTransCube.main.c"

#line 4579 "obj/debug.linux/testTransCube.main.c"


#line 318 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gfx__FontResource = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::FontResource");
#line 4584 "obj/debug.linux/testTransCube.main.c"


#line 319 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_faceName = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__FontResource, "faceName", module);
#line 4589 "obj/debug.linux/testTransCube.main.c"


#line 320 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 320 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_faceName = _property->Set;
#line 4597 "obj/debug.linux/testTransCube.main.c"

#line 4599 "obj/debug.linux/testTransCube.main.c"


#line 321 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 321 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_faceName = _property->Get;
#line 4607 "obj/debug.linux/testTransCube.main.c"

#line 4609 "obj/debug.linux/testTransCube.main.c"


#line 322 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_size = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx__FontResource, "size", module);
#line 4614 "obj/debug.linux/testTransCube.main.c"


#line 323 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 323 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Set_size = _property->Set;
#line 4622 "obj/debug.linux/testTransCube.main.c"

#line 4624 "obj/debug.linux/testTransCube.main.c"


#line 324 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 324 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gfx__FontResource_Get_size = _property->Get;
#line 4632 "obj/debug.linux/testTransCube.main.c"

#line 4634 "obj/debug.linux/testTransCube.main.c"


#line 326 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gfx::Surface");
#line 4639 "obj/debug.linux/testTransCube.main.c"


#line 327 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Clear", module);
#line 4644 "obj/debug.linux/testTransCube.main.c"


#line 328 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 328 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear = method->function;
#line 4652 "obj/debug.linux/testTransCube.main.c"

#line 4654 "obj/debug.linux/testTransCube.main.c"


#line 330 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::GuiApplication");
#line 4659 "obj/debug.linux/testTransCube.main.c"


#line 331 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "driver", module);
#line 4664 "obj/debug.linux/testTransCube.main.c"


#line 332 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 332 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver = _property->Set;
#line 4672 "obj/debug.linux/testTransCube.main.c"

#line 4674 "obj/debug.linux/testTransCube.main.c"


#line 333 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 333 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver = _property->Get;
#line 4682 "obj/debug.linux/testTransCube.main.c"

#line 4684 "obj/debug.linux/testTransCube.main.c"


#line 335 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::Key");
#line 4689 "obj/debug.linux/testTransCube.main.c"


#line 336 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Key___ecereNameSpace__ecere__gui__SmartKey = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ecere::gui::SmartKey", module);
#line 4694 "obj/debug.linux/testTransCube.main.c"


#line 337 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 337 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Key_Get___ecereNameSpace__ecere__gui__SmartKey = _property->Get;
#line 4702 "obj/debug.linux/testTransCube.main.c"

#line 4704 "obj/debug.linux/testTransCube.main.c"


#line 339 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::Window");
#line 4709 "obj/debug.linux/testTransCube.main.c"


#line 340 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Capture", module);
#line 4714 "obj/debug.linux/testTransCube.main.c"


#line 341 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 341 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture = method->function;
#line 4722 "obj/debug.linux/testTransCube.main.c"

#line 4724 "obj/debug.linux/testTransCube.main.c"


#line 342 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Destroy", module);
#line 4729 "obj/debug.linux/testTransCube.main.c"


#line 343 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 343 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy = method->function;
#line 4737 "obj/debug.linux/testTransCube.main.c"

#line 4739 "obj/debug.linux/testTransCube.main.c"


#line 344 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "ReleaseCapture", module);
#line 4744 "obj/debug.linux/testTransCube.main.c"


#line 345 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 345 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture = method->function;
#line 4752 "obj/debug.linux/testTransCube.main.c"

#line 4754 "obj/debug.linux/testTransCube.main.c"


#line 346 "obj/debug.linux/testTransCube.main.ec"
method = __ecereNameSpace__ecere__com__eClass_FindMethod(_class, "Update", module);
#line 4759 "obj/debug.linux/testTransCube.main.c"


#line 347 "obj/debug.linux/testTransCube.main.ec"
if(method)

#line 347 "obj/debug.linux/testTransCube.main.ec"
__ecereMethod___ecereNameSpace__ecere__gui__Window_Update = method->function;
#line 4767 "obj/debug.linux/testTransCube.main.c"

#line 4769 "obj/debug.linux/testTransCube.main.c"


#line 348 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_anchor = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "anchor", module);
#line 4774 "obj/debug.linux/testTransCube.main.c"


#line 349 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 349 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_anchor = _property->Set;
#line 4782 "obj/debug.linux/testTransCube.main.c"

#line 4784 "obj/debug.linux/testTransCube.main.c"


#line 350 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 350 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_anchor = _property->Get;
#line 4792 "obj/debug.linux/testTransCube.main.c"

#line 4794 "obj/debug.linux/testTransCube.main.c"


#line 351 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_background = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "background", module);
#line 4799 "obj/debug.linux/testTransCube.main.c"


#line 352 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 352 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_background = _property->Set;
#line 4807 "obj/debug.linux/testTransCube.main.c"

#line 4809 "obj/debug.linux/testTransCube.main.c"


#line 353 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 353 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_background = _property->Get;
#line 4817 "obj/debug.linux/testTransCube.main.c"

#line 4819 "obj/debug.linux/testTransCube.main.c"


#line 354 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "borderStyle", module);
#line 4824 "obj/debug.linux/testTransCube.main.c"


#line 355 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 355 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle = _property->Set;
#line 4832 "obj/debug.linux/testTransCube.main.c"

#line 4834 "obj/debug.linux/testTransCube.main.c"


#line 356 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 356 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle = _property->Get;
#line 4842 "obj/debug.linux/testTransCube.main.c"

#line 4844 "obj/debug.linux/testTransCube.main.c"


#line 357 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_caption = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "caption", module);
#line 4849 "obj/debug.linux/testTransCube.main.c"


#line 358 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 358 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_caption = _property->Set;
#line 4857 "obj/debug.linux/testTransCube.main.c"

#line 4859 "obj/debug.linux/testTransCube.main.c"


#line 359 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 359 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_caption = _property->Get;
#line 4867 "obj/debug.linux/testTransCube.main.c"

#line 4869 "obj/debug.linux/testTransCube.main.c"


#line 360 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_display = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "display", module);
#line 4874 "obj/debug.linux/testTransCube.main.c"


#line 361 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 361 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_display = _property->Get;
#line 4882 "obj/debug.linux/testTransCube.main.c"

#line 4884 "obj/debug.linux/testTransCube.main.c"


#line 362 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_displayDriver = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "displayDriver", module);
#line 4889 "obj/debug.linux/testTransCube.main.c"


#line 363 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 363 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_displayDriver = _property->Set;
#line 4897 "obj/debug.linux/testTransCube.main.c"

#line 4899 "obj/debug.linux/testTransCube.main.c"


#line 364 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 364 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displayDriver = _property->Get;
#line 4907 "obj/debug.linux/testTransCube.main.c"

#line 4909 "obj/debug.linux/testTransCube.main.c"


#line 365 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "displaySystem", module);
#line 4914 "obj/debug.linux/testTransCube.main.c"


#line 366 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 366 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem = _property->Get;
#line 4922 "obj/debug.linux/testTransCube.main.c"

#line 4924 "obj/debug.linux/testTransCube.main.c"


#line 367 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_font = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "font", module);
#line 4929 "obj/debug.linux/testTransCube.main.c"


#line 368 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 368 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_font = _property->Set;
#line 4937 "obj/debug.linux/testTransCube.main.c"

#line 4939 "obj/debug.linux/testTransCube.main.c"


#line 369 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 369 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_font = _property->Get;
#line 4947 "obj/debug.linux/testTransCube.main.c"

#line 4949 "obj/debug.linux/testTransCube.main.c"


#line 370 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_foreground = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "foreground", module);
#line 4954 "obj/debug.linux/testTransCube.main.c"


#line 371 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 371 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_foreground = _property->Set;
#line 4962 "obj/debug.linux/testTransCube.main.c"

#line 4964 "obj/debug.linux/testTransCube.main.c"


#line 372 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 372 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_foreground = _property->Get;
#line 4972 "obj/debug.linux/testTransCube.main.c"

#line 4974 "obj/debug.linux/testTransCube.main.c"


#line 373 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasClose = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasClose", module);
#line 4979 "obj/debug.linux/testTransCube.main.c"


#line 374 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 374 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasClose = _property->Set;
#line 4987 "obj/debug.linux/testTransCube.main.c"

#line 4989 "obj/debug.linux/testTransCube.main.c"


#line 375 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 375 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasClose = _property->Get;
#line 4997 "obj/debug.linux/testTransCube.main.c"

#line 4999 "obj/debug.linux/testTransCube.main.c"


#line 376 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasMaximize = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasMaximize", module);
#line 5004 "obj/debug.linux/testTransCube.main.c"


#line 377 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 377 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMaximize = _property->Set;
#line 5012 "obj/debug.linux/testTransCube.main.c"

#line 5014 "obj/debug.linux/testTransCube.main.c"


#line 378 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 378 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMaximize = _property->Get;
#line 5022 "obj/debug.linux/testTransCube.main.c"

#line 5024 "obj/debug.linux/testTransCube.main.c"


#line 379 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasMinimize = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasMinimize", module);
#line 5029 "obj/debug.linux/testTransCube.main.c"


#line 380 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 380 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasMinimize = _property->Set;
#line 5037 "obj/debug.linux/testTransCube.main.c"

#line 5039 "obj/debug.linux/testTransCube.main.c"


#line 381 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 381 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasMinimize = _property->Get;
#line 5047 "obj/debug.linux/testTransCube.main.c"

#line 5049 "obj/debug.linux/testTransCube.main.c"


#line 382 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_hasVertScroll = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "hasVertScroll", module);
#line 5054 "obj/debug.linux/testTransCube.main.c"


#line 383 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 383 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_hasVertScroll = _property->Set;
#line 5062 "obj/debug.linux/testTransCube.main.c"

#line 5064 "obj/debug.linux/testTransCube.main.c"


#line 384 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 384 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_hasVertScroll = _property->Get;
#line 5072 "obj/debug.linux/testTransCube.main.c"

#line 5074 "obj/debug.linux/testTransCube.main.c"


#line 385 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_opacity = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "opacity", module);
#line 5079 "obj/debug.linux/testTransCube.main.c"


#line 386 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 386 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity = _property->Set;
#line 5087 "obj/debug.linux/testTransCube.main.c"

#line 5089 "obj/debug.linux/testTransCube.main.c"


#line 387 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 387 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity = _property->Get;
#line 5097 "obj/debug.linux/testTransCube.main.c"

#line 5099 "obj/debug.linux/testTransCube.main.c"


#line 388 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_parent = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "parent", module);
#line 5104 "obj/debug.linux/testTransCube.main.c"


#line 389 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 389 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_parent = _property->Set;
#line 5112 "obj/debug.linux/testTransCube.main.c"

#line 5114 "obj/debug.linux/testTransCube.main.c"


#line 390 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 390 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_parent = _property->Get;
#line 5122 "obj/debug.linux/testTransCube.main.c"

#line 5124 "obj/debug.linux/testTransCube.main.c"


#line 391 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_position = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "position", module);
#line 5129 "obj/debug.linux/testTransCube.main.c"


#line 392 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 392 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_position = _property->Set;
#line 5137 "obj/debug.linux/testTransCube.main.c"

#line 5139 "obj/debug.linux/testTransCube.main.c"


#line 393 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 393 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_position = _property->Get;
#line 5147 "obj/debug.linux/testTransCube.main.c"

#line 5149 "obj/debug.linux/testTransCube.main.c"


#line 394 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_scrollArea = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "scrollArea", module);
#line 5154 "obj/debug.linux/testTransCube.main.c"


#line 395 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 395 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_scrollArea = _property->Set;
#line 5162 "obj/debug.linux/testTransCube.main.c"

#line 5164 "obj/debug.linux/testTransCube.main.c"


#line 396 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 396 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_scrollArea = _property->Get;
#line 5172 "obj/debug.linux/testTransCube.main.c"

#line 5174 "obj/debug.linux/testTransCube.main.c"


#line 397 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_size = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "size", module);
#line 5179 "obj/debug.linux/testTransCube.main.c"


#line 398 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 398 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Set_size = _property->Set;
#line 5187 "obj/debug.linux/testTransCube.main.c"

#line 5189 "obj/debug.linux/testTransCube.main.c"


#line 399 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 399 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__Window_Get_size = _property->Get;
#line 5197 "obj/debug.linux/testTransCube.main.c"

#line 5199 "obj/debug.linux/testTransCube.main.c"


#line 401 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gui__controls__Button = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::controls::Button");
#line 5204 "obj/debug.linux/testTransCube.main.c"


#line 402 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Button_opacity = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__Button, "opacity", module);
#line 5209 "obj/debug.linux/testTransCube.main.c"


#line 403 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 403 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Button_Set_opacity = _property->Set;
#line 5217 "obj/debug.linux/testTransCube.main.c"

#line 5219 "obj/debug.linux/testTransCube.main.c"


#line 404 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 404 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Button_Get_opacity = _property->Get;
#line 5227 "obj/debug.linux/testTransCube.main.c"

#line 5229 "obj/debug.linux/testTransCube.main.c"


#line 406 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::controls::EditBox");
#line 5234 "obj/debug.linux/testTransCube.main.c"


#line 407 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_contents = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "contents", module);
#line 5239 "obj/debug.linux/testTransCube.main.c"


#line 408 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 408 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_contents = _property->Set;
#line 5247 "obj/debug.linux/testTransCube.main.c"

#line 5249 "obj/debug.linux/testTransCube.main.c"


#line 409 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 409 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_contents = _property->Get;
#line 5257 "obj/debug.linux/testTransCube.main.c"

#line 5259 "obj/debug.linux/testTransCube.main.c"


#line 410 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLine = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "multiLine", module);
#line 5264 "obj/debug.linux/testTransCube.main.c"


#line 411 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 411 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Set_multiLine = _property->Set;
#line 5272 "obj/debug.linux/testTransCube.main.c"

#line 5274 "obj/debug.linux/testTransCube.main.c"


#line 412 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 412 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLine = _property->Get;
#line 5282 "obj/debug.linux/testTransCube.main.c"

#line 5284 "obj/debug.linux/testTransCube.main.c"


#line 413 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_multiLineContents = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__EditBox, "multiLineContents", module);
#line 5289 "obj/debug.linux/testTransCube.main.c"


#line 414 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 414 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__EditBox_Get_multiLineContents = _property->Get;
#line 5297 "obj/debug.linux/testTransCube.main.c"

#line 5299 "obj/debug.linux/testTransCube.main.c"


#line 416 "obj/debug.linux/testTransCube.main.ec"
__ecereClass___ecereNameSpace__ecere__gui__controls__Label = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::gui::controls::Label");
#line 5304 "obj/debug.linux/testTransCube.main.c"


#line 417 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Label_labeledWindow = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gui__controls__Label, "labeledWindow", module);
#line 5309 "obj/debug.linux/testTransCube.main.c"


#line 418 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 418 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Label_Set_labeledWindow = _property->Set;
#line 5317 "obj/debug.linux/testTransCube.main.c"

#line 5319 "obj/debug.linux/testTransCube.main.c"


#line 419 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 419 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__gui__controls__Label_Get_labeledWindow = _property->Get;
#line 5327 "obj/debug.linux/testTransCube.main.c"

#line 5329 "obj/debug.linux/testTransCube.main.c"


#line 421 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ecere::sys::Degrees");
#line 5334 "obj/debug.linux/testTransCube.main.c"


#line 422 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians = _property = __ecereNameSpace__ecere__com__eClass_FindProperty(_class, "ecere::sys::Radians", module);
#line 5339 "obj/debug.linux/testTransCube.main.c"


#line 423 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 423 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians = _property->Set;
#line 5347 "obj/debug.linux/testTransCube.main.c"

#line 5349 "obj/debug.linux/testTransCube.main.c"


#line 424 "obj/debug.linux/testTransCube.main.ec"
if(_property)

#line 424 "obj/debug.linux/testTransCube.main.ec"
__ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians = _property->Get;
#line 5357 "obj/debug.linux/testTransCube.main.c"

#line 5359 "obj/debug.linux/testTransCube.main.c"


#line 426 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::com::PrintString");
#line 5364 "obj/debug.linux/testTransCube.main.c"


#line 427 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 427 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__com__PrintString = function->function;
#line 5372 "obj/debug.linux/testTransCube.main.c"

#line 5374 "obj/debug.linux/testTransCube.main.c"


#line 429 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::gfx::GetDefaultMaterial");
#line 5379 "obj/debug.linux/testTransCube.main.c"


#line 430 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 430 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__gfx__GetDefaultMaterial = function->function;
#line 5387 "obj/debug.linux/testTransCube.main.c"

#line 5389 "obj/debug.linux/testTransCube.main.c"


#line 432 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::CopyString");
#line 5394 "obj/debug.linux/testTransCube.main.c"


#line 433 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 433 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__CopyString = function->function;
#line 5402 "obj/debug.linux/testTransCube.main.c"

#line 5404 "obj/debug.linux/testTransCube.main.c"


#line 435 "obj/debug.linux/testTransCube.main.ec"
function = __ecereNameSpace__ecere__com__eSystem_FindFunction(module, "ecere::sys::GetRandom");
#line 5409 "obj/debug.linux/testTransCube.main.c"


#line 436 "obj/debug.linux/testTransCube.main.ec"
if(function)

#line 436 "obj/debug.linux/testTransCube.main.ec"
__ecereFunction___ecereNameSpace__ecere__sys__GetRandom = function->function;
#line 5417 "obj/debug.linux/testTransCube.main.c"

#line 5419 "obj/debug.linux/testTransCube.main.c"


#line 439 "obj/debug.linux/testTransCube.main.ec"
__ecereNameSpace__ecere__LoadTranslatedStrings((((void *)0)), "testTransCube");
#line 5424 "obj/debug.linux/testTransCube.main.c"


#line 440 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(__currentModule, "eModelApp");
#line 5429 "obj/debug.linux/testTransCube.main.c"


#line 441 "obj/debug.linux/testTransCube.main.ec"
if(setThingsUp)

#line 441 "obj/debug.linux/testTransCube.main.ec"
__ecereNameSpace__ecere__com__eInstance_Evolve((struct __ecereNameSpace__ecere__com__Instance **)&__currentModule, _class);
#line 5437 "obj/debug.linux/testTransCube.main.c"

#line 5439 "obj/debug.linux/testTransCube.main.c"


#line 442 "obj/debug.linux/testTransCube.main.ec"
__thisModule = __currentModule;
#line 5444 "obj/debug.linux/testTransCube.main.c"


#line 443 "obj/debug.linux/testTransCube.main.ec"
__ecereCreateModuleInstances_form1();
#line 5449 "obj/debug.linux/testTransCube.main.c"


#line 445 "obj/debug.linux/testTransCube.main.ec"
((void (*)(void *))(void *)((struct __ecereNameSpace__ecere__com__Instance *)(char *)__currentModule)->_vTbl[12])(__currentModule);
#line 5454 "obj/debug.linux/testTransCube.main.c"


#line 446 "obj/debug.linux/testTransCube.main.ec"
__ecereDestroyModuleInstances_form1();
#line 5459 "obj/debug.linux/testTransCube.main.c"


#line 448 "obj/debug.linux/testTransCube.main.ec"
__ecereNameSpace__ecere__UnloadTranslatedStrings("testTransCube");
#line 5464 "obj/debug.linux/testTransCube.main.c"


#line 450 "obj/debug.linux/testTransCube.main.ec"
_class = __ecereNameSpace__ecere__com__eSystem_FindClass(__currentModule, "ecere::com::Application");
#line 5469 "obj/debug.linux/testTransCube.main.c"


#line 451 "obj/debug.linux/testTransCube.main.ec"
exitCode = ((struct __ecereNameSpace__ecere__com__Application *)(((char *)((struct __ecereNameSpace__ecere__com__Instance *)__currentModule) + sizeof(struct __ecereNameSpace__ecere__com__Module) + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->exitCode;
#line 5474 "obj/debug.linux/testTransCube.main.c"


#line 452 "obj/debug.linux/testTransCube.main.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__currentModule), __currentModule = 0);
#line 5479 "obj/debug.linux/testTransCube.main.c"


#line 453 "obj/debug.linux/testTransCube.main.ec"
return exitCode;
#line 5484 "obj/debug.linux/testTransCube.main.c"


#line 454 "obj/debug.linux/testTransCube.main.ec"
}
#line 5489 "obj/debug.linux/testTransCube.main.c"


