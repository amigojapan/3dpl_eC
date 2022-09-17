/* Code generated from eC source file: SyntaxHighlighting.ec */
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

#line 55 "obj/debug.linux/SyntaxHighlighting.c"


#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __u_short;

#line 61 "obj/debug.linux/SyntaxHighlighting.c"


#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int;

#line 67 "obj/debug.linux/SyntaxHighlighting.c"


#line 34 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_long;

#line 73 "obj/debug.linux/SyntaxHighlighting.c"


#line 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed char __int8_t;

#line 79 "obj/debug.linux/SyntaxHighlighting.c"


#line 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __uint8_t;

#line 85 "obj/debug.linux/SyntaxHighlighting.c"


#line 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed short int __int16_t;

#line 91 "obj/debug.linux/SyntaxHighlighting.c"


#line 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __uint16_t;

#line 97 "obj/debug.linux/SyntaxHighlighting.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed int __int32_t;

#line 103 "obj/debug.linux/SyntaxHighlighting.c"


#line 42 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uint32_t;

#line 109 "obj/debug.linux/SyntaxHighlighting.c"


#line 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed long int __int64_t;

#line 115 "obj/debug.linux/SyntaxHighlighting.c"


#line 45 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uint64_t;

#line 121 "obj/debug.linux/SyntaxHighlighting.c"


#line 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int8_t __int_least8_t;

#line 127 "obj/debug.linux/SyntaxHighlighting.c"


#line 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint8_t __uint_least8_t;

#line 133 "obj/debug.linux/SyntaxHighlighting.c"


#line 54 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int16_t __int_least16_t;

#line 139 "obj/debug.linux/SyntaxHighlighting.c"


#line 55 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint16_t __uint_least16_t;

#line 145 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int32_t __int_least32_t;

#line 151 "obj/debug.linux/SyntaxHighlighting.c"


#line 57 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint32_t __uint_least32_t;

#line 157 "obj/debug.linux/SyntaxHighlighting.c"


#line 58 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int64_t __int_least64_t;

#line 163 "obj/debug.linux/SyntaxHighlighting.c"


#line 59 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint64_t __uint_least64_t;

#line 169 "obj/debug.linux/SyntaxHighlighting.c"


#line 63 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __quad_t;

#line 175 "obj/debug.linux/SyntaxHighlighting.c"


#line 64 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_quad_t;

#line 181 "obj/debug.linux/SyntaxHighlighting.c"


#line 72 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intmax_t;

#line 187 "obj/debug.linux/SyntaxHighlighting.c"


#line 73 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uintmax_t;

#line 193 "obj/debug.linux/SyntaxHighlighting.c"


#line 145 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __dev_t;

#line 199 "obj/debug.linux/SyntaxHighlighting.c"


#line 146 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t;

#line 205 "obj/debug.linux/SyntaxHighlighting.c"


#line 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t;

#line 211 "obj/debug.linux/SyntaxHighlighting.c"


#line 148 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino_t;

#line 217 "obj/debug.linux/SyntaxHighlighting.c"


#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino64_t;

#line 223 "obj/debug.linux/SyntaxHighlighting.c"


#line 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t;

#line 229 "obj/debug.linux/SyntaxHighlighting.c"


#line 151 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __nlink_t;

#line 235 "obj/debug.linux/SyntaxHighlighting.c"


#line 152 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off_t;

#line 241 "obj/debug.linux/SyntaxHighlighting.c"


#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off64_t;

#line 247 "obj/debug.linux/SyntaxHighlighting.c"


#line 154 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;

#line 253 "obj/debug.linux/SyntaxHighlighting.c"


#line 155 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef struct
{

#line 155 "/usr/include/x86_64-linux-gnu/bits/types.h"
int __val[2];

#line 263 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __fsid_t;

#line 266 "obj/debug.linux/SyntaxHighlighting.c"


#line 156 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __clock_t;

#line 272 "obj/debug.linux/SyntaxHighlighting.c"


#line 157 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim_t;

#line 278 "obj/debug.linux/SyntaxHighlighting.c"


#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim64_t;

#line 284 "obj/debug.linux/SyntaxHighlighting.c"


#line 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __id_t;

#line 290 "obj/debug.linux/SyntaxHighlighting.c"


#line 160 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __time_t;

#line 296 "obj/debug.linux/SyntaxHighlighting.c"


#line 161 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __useconds_t;

#line 302 "obj/debug.linux/SyntaxHighlighting.c"


#line 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __suseconds_t;

#line 308 "obj/debug.linux/SyntaxHighlighting.c"


#line 164 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __daddr_t;

#line 314 "obj/debug.linux/SyntaxHighlighting.c"


#line 165 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __key_t;

#line 320 "obj/debug.linux/SyntaxHighlighting.c"


#line 168 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __clockid_t;

#line 326 "obj/debug.linux/SyntaxHighlighting.c"


#line 171 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef void * __timer_t;

#line 332 "obj/debug.linux/SyntaxHighlighting.c"


#line 174 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blksize_t;

#line 338 "obj/debug.linux/SyntaxHighlighting.c"


#line 179 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt_t;

#line 344 "obj/debug.linux/SyntaxHighlighting.c"


#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt64_t;

#line 350 "obj/debug.linux/SyntaxHighlighting.c"


#line 183 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt_t;

#line 356 "obj/debug.linux/SyntaxHighlighting.c"


#line 184 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt64_t;

#line 362 "obj/debug.linux/SyntaxHighlighting.c"


#line 187 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt_t;

#line 368 "obj/debug.linux/SyntaxHighlighting.c"


#line 188 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt64_t;

#line 374 "obj/debug.linux/SyntaxHighlighting.c"


#line 191 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __fsword_t;

#line 380 "obj/debug.linux/SyntaxHighlighting.c"


#line 193 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __ssize_t;

#line 386 "obj/debug.linux/SyntaxHighlighting.c"


#line 196 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __syscall_slong_t;

#line 392 "obj/debug.linux/SyntaxHighlighting.c"


#line 198 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __syscall_ulong_t;

#line 398 "obj/debug.linux/SyntaxHighlighting.c"


#line 202 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __off64_t __loff_t;

#line 404 "obj/debug.linux/SyntaxHighlighting.c"


#line 203 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef char * __caddr_t;

#line 410 "obj/debug.linux/SyntaxHighlighting.c"


#line 206 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intptr_t;

#line 416 "obj/debug.linux/SyntaxHighlighting.c"


#line 209 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t;

#line 422 "obj/debug.linux/SyntaxHighlighting.c"


#line 214 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __sig_atomic_t;

#line 428 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int8_t int8_t;

#line 434 "obj/debug.linux/SyntaxHighlighting.c"


#line 25 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int16_t int16_t;

#line 440 "obj/debug.linux/SyntaxHighlighting.c"


#line 26 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int32_t int32_t;

#line 446 "obj/debug.linux/SyntaxHighlighting.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int64_t int64_t;

#line 452 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint8_t uint8_t;

#line 458 "obj/debug.linux/SyntaxHighlighting.c"


#line 25 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint16_t uint16_t;

#line 464 "obj/debug.linux/SyntaxHighlighting.c"


#line 26 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint32_t uint32_t;

#line 470 "obj/debug.linux/SyntaxHighlighting.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint64_t uint64_t;

#line 476 "obj/debug.linux/SyntaxHighlighting.c"


#line 43 "/usr/include/stdint.h"
typedef __int_least8_t int_least8_t;

#line 482 "obj/debug.linux/SyntaxHighlighting.c"


#line 44 "/usr/include/stdint.h"
typedef __int_least16_t int_least16_t;

#line 488 "obj/debug.linux/SyntaxHighlighting.c"


#line 45 "/usr/include/stdint.h"
typedef __int_least32_t int_least32_t;

#line 494 "obj/debug.linux/SyntaxHighlighting.c"


#line 46 "/usr/include/stdint.h"
typedef __int_least64_t int_least64_t;

#line 500 "obj/debug.linux/SyntaxHighlighting.c"


#line 49 "/usr/include/stdint.h"
typedef __uint_least8_t uint_least8_t;

#line 506 "obj/debug.linux/SyntaxHighlighting.c"


#line 50 "/usr/include/stdint.h"
typedef __uint_least16_t uint_least16_t;

#line 512 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/usr/include/stdint.h"
typedef __uint_least32_t uint_least32_t;

#line 518 "obj/debug.linux/SyntaxHighlighting.c"


#line 52 "/usr/include/stdint.h"
typedef __uint_least64_t uint_least64_t;

#line 524 "obj/debug.linux/SyntaxHighlighting.c"


#line 58 "/usr/include/stdint.h"
typedef signed char int_fast8_t;

#line 530 "obj/debug.linux/SyntaxHighlighting.c"


#line 60 "/usr/include/stdint.h"
typedef long int int_fast16_t;

#line 536 "obj/debug.linux/SyntaxHighlighting.c"


#line 61 "/usr/include/stdint.h"
typedef long int int_fast32_t;

#line 542 "obj/debug.linux/SyntaxHighlighting.c"


#line 62 "/usr/include/stdint.h"
typedef long int int_fast64_t;

#line 548 "obj/debug.linux/SyntaxHighlighting.c"


#line 71 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;

#line 554 "obj/debug.linux/SyntaxHighlighting.c"


#line 73 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t;

#line 560 "obj/debug.linux/SyntaxHighlighting.c"


#line 74 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t;

#line 566 "obj/debug.linux/SyntaxHighlighting.c"


#line 75 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t;

#line 572 "obj/debug.linux/SyntaxHighlighting.c"


#line 87 "/usr/include/stdint.h"
typedef long int intptr_t;

#line 578 "obj/debug.linux/SyntaxHighlighting.c"


#line 90 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t;

#line 584 "obj/debug.linux/SyntaxHighlighting.c"


#line 101 "/usr/include/stdint.h"
typedef __intmax_t intmax_t;

#line 590 "obj/debug.linux/SyntaxHighlighting.c"


#line 102 "/usr/include/stdint.h"
typedef __uintmax_t uintmax_t;

#line 596 "obj/debug.linux/SyntaxHighlighting.c"


#line 33 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_char u_char;

#line 602 "obj/debug.linux/SyntaxHighlighting.c"


#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_short u_short;

#line 608 "obj/debug.linux/SyntaxHighlighting.c"


#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_int u_int;

#line 614 "obj/debug.linux/SyntaxHighlighting.c"


#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_long u_long;

#line 620 "obj/debug.linux/SyntaxHighlighting.c"


#line 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __quad_t quad_t;

#line 626 "obj/debug.linux/SyntaxHighlighting.c"


#line 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_quad_t u_quad_t;

#line 632 "obj/debug.linux/SyntaxHighlighting.c"


#line 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsid_t fsid_t;

#line 638 "obj/debug.linux/SyntaxHighlighting.c"


#line 42 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __loff_t loff_t;

#line 644 "obj/debug.linux/SyntaxHighlighting.c"


#line 47 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ino_t ino_t;

#line 650 "obj/debug.linux/SyntaxHighlighting.c"


#line 59 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __dev_t dev_t;

#line 656 "obj/debug.linux/SyntaxHighlighting.c"


#line 64 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __gid_t gid_t;

#line 662 "obj/debug.linux/SyntaxHighlighting.c"


#line 69 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __mode_t mode_t;

#line 668 "obj/debug.linux/SyntaxHighlighting.c"


#line 74 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __nlink_t nlink_t;

#line 674 "obj/debug.linux/SyntaxHighlighting.c"


#line 79 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uid_t uid_t;

#line 680 "obj/debug.linux/SyntaxHighlighting.c"


#line 85 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __off_t off_t;

#line 686 "obj/debug.linux/SyntaxHighlighting.c"


#line 97 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;

#line 692 "obj/debug.linux/SyntaxHighlighting.c"


#line 103 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __id_t id_t;

#line 698 "obj/debug.linux/SyntaxHighlighting.c"


#line 108 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ssize_t ssize_t;

#line 704 "obj/debug.linux/SyntaxHighlighting.c"


#line 114 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __daddr_t daddr_t;

#line 710 "obj/debug.linux/SyntaxHighlighting.c"


#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __caddr_t caddr_t;

#line 716 "obj/debug.linux/SyntaxHighlighting.c"


#line 121 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __key_t key_t;

#line 722 "obj/debug.linux/SyntaxHighlighting.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h"
typedef __clock_t clock_t;

#line 728 "obj/debug.linux/SyntaxHighlighting.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h"
typedef __clockid_t clockid_t;

#line 734 "obj/debug.linux/SyntaxHighlighting.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h"
typedef __time_t time_t;

#line 740 "obj/debug.linux/SyntaxHighlighting.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h"
typedef __timer_t timer_t;

#line 746 "obj/debug.linux/SyntaxHighlighting.c"


#line 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
typedef long unsigned int size_t;

#line 752 "obj/debug.linux/SyntaxHighlighting.c"


#line 148 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned long int ulong;

#line 758 "obj/debug.linux/SyntaxHighlighting.c"


#line 149 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned short int ushort;

#line 764 "obj/debug.linux/SyntaxHighlighting.c"


#line 150 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint;

#line 770 "obj/debug.linux/SyntaxHighlighting.c"


#line 158 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint8_t u_int8_t;

#line 776 "obj/debug.linux/SyntaxHighlighting.c"


#line 159 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint16_t u_int16_t;

#line 782 "obj/debug.linux/SyntaxHighlighting.c"


#line 160 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint32_t u_int32_t;

#line 788 "obj/debug.linux/SyntaxHighlighting.c"


#line 161 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint64_t u_int64_t;

#line 794 "obj/debug.linux/SyntaxHighlighting.c"


#line 164 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int register_t __attribute__((__mode__ (__word__)));

#line 800 "obj/debug.linux/SyntaxHighlighting.c"

static __inline __uint16_t __bswap_16(__uint16_t __bsx)

#line 35 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 37 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap16(__bsx);
#line 809 "obj/debug.linux/SyntaxHighlighting.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 814 "obj/debug.linux/SyntaxHighlighting.c"


static __inline __uint32_t __bswap_32(__uint32_t __bsx)

#line 50 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 52 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap32(__bsx);
#line 824 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 829 "obj/debug.linux/SyntaxHighlighting.c"


 static __inline __uint64_t __bswap_64(__uint64_t __bsx)

#line 71 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 73 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap64(__bsx);
#line 839 "obj/debug.linux/SyntaxHighlighting.c"


#line 77 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 844 "obj/debug.linux/SyntaxHighlighting.c"


static __inline __uint16_t __uint16_identity(__uint16_t __x)

#line 34 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 35 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 854 "obj/debug.linux/SyntaxHighlighting.c"


#line 36 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 859 "obj/debug.linux/SyntaxHighlighting.c"


static __inline __uint32_t __uint32_identity(__uint32_t __x)

#line 40 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 41 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 869 "obj/debug.linux/SyntaxHighlighting.c"


#line 42 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 874 "obj/debug.linux/SyntaxHighlighting.c"


static __inline __uint64_t __uint64_identity(__uint64_t __x)

#line 46 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 884 "obj/debug.linux/SyntaxHighlighting.c"


#line 48 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 889 "obj/debug.linux/SyntaxHighlighting.c"



#line 5 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
typedef struct
{

#line 7 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
unsigned long int __val[16];

#line 900 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __sigset_t;

#line 903 "obj/debug.linux/SyntaxHighlighting.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h"
typedef __sigset_t sigset_t;

#line 909 "obj/debug.linux/SyntaxHighlighting.c"


#line 8 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
struct timeval
{

#line 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
__time_t tv_sec;

#line 919 "obj/debug.linux/SyntaxHighlighting.c"

#line 11 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
__suseconds_t tv_usec;

#line 924 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 927 "obj/debug.linux/SyntaxHighlighting.c"


#line 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
struct timespec
{

#line 12 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
__time_t tv_sec;

#line 937 "obj/debug.linux/SyntaxHighlighting.c"

#line 16 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
__syscall_slong_t tv_nsec;

#line 942 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 945 "obj/debug.linux/SyntaxHighlighting.c"


#line 43 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef __suseconds_t suseconds_t;

#line 951 "obj/debug.linux/SyntaxHighlighting.c"


#line 49 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask;

#line 957 "obj/debug.linux/SyntaxHighlighting.c"


#line 59 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef struct
{

#line 67 "/usr/include/x86_64-linux-gnu/sys/select.h"
__fd_mask __fds_bits[16];

#line 967 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct fd_set;

#line 970 "obj/debug.linux/SyntaxHighlighting.c"


#line 77 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef __fd_mask fd_mask;

#line 976 "obj/debug.linux/SyntaxHighlighting.c"


#line 101 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval * __restrict __timeout);

#line 982 "obj/debug.linux/SyntaxHighlighting.c"


#line 113 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec * __restrict __timeout, const __sigset_t * __restrict __sigmask);

#line 988 "obj/debug.linux/SyntaxHighlighting.c"


#line 185 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __blksize_t blksize_t;

#line 994 "obj/debug.linux/SyntaxHighlighting.c"


#line 192 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __blkcnt_t blkcnt_t;

#line 1000 "obj/debug.linux/SyntaxHighlighting.c"


#line 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t;

#line 1006 "obj/debug.linux/SyntaxHighlighting.c"


#line 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t;

#line 1012 "obj/debug.linux/SyntaxHighlighting.c"


#line 49 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
typedef struct __pthread_internal_list
{

#line 51 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_list * __prev;

#line 1022 "obj/debug.linux/SyntaxHighlighting.c"

#line 52 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_list * __next;

#line 1027 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __pthread_list_t;

#line 1030 "obj/debug.linux/SyntaxHighlighting.c"


#line 55 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
typedef struct __pthread_internal_slist
{

#line 57 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_slist * __next;

#line 1040 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __pthread_slist_t;

#line 1043 "obj/debug.linux/SyntaxHighlighting.c"


#line 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
struct __pthread_mutex_s
{

#line 24 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __lock;

#line 1053 "obj/debug.linux/SyntaxHighlighting.c"

#line 25 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
unsigned int __count;

#line 1058 "obj/debug.linux/SyntaxHighlighting.c"

#line 26 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __owner;

#line 1063 "obj/debug.linux/SyntaxHighlighting.c"

#line 28 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
unsigned int __nusers;

#line 1068 "obj/debug.linux/SyntaxHighlighting.c"

#line 32 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __kind;

#line 1073 "obj/debug.linux/SyntaxHighlighting.c"

#line 34 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
short __spins;

#line 1078 "obj/debug.linux/SyntaxHighlighting.c"

#line 35 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
short __elision;

#line 1083 "obj/debug.linux/SyntaxHighlighting.c"

#line 36 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
__pthread_list_t __list;

#line 1088 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1091 "obj/debug.linux/SyntaxHighlighting.c"


#line 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
struct __pthread_rwlock_arch_t
{

#line 25 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __readers;

#line 1101 "obj/debug.linux/SyntaxHighlighting.c"

#line 26 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __writers;

#line 1106 "obj/debug.linux/SyntaxHighlighting.c"

#line 27 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __wrphase_futex;

#line 1111 "obj/debug.linux/SyntaxHighlighting.c"

#line 28 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __writers_futex;

#line 1116 "obj/debug.linux/SyntaxHighlighting.c"

#line 29 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __pad3;

#line 1121 "obj/debug.linux/SyntaxHighlighting.c"

#line 30 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __pad4;

#line 1126 "obj/debug.linux/SyntaxHighlighting.c"

#line 32 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
int __cur_writer;

#line 1131 "obj/debug.linux/SyntaxHighlighting.c"

#line 33 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
int __shared;

#line 1136 "obj/debug.linux/SyntaxHighlighting.c"

#line 34 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
signed char __rwelision;

#line 1141 "obj/debug.linux/SyntaxHighlighting.c"

#line 39 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned char __pad1[7];

#line 1146 "obj/debug.linux/SyntaxHighlighting.c"

#line 42 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned long int __pad2;

#line 1151 "obj/debug.linux/SyntaxHighlighting.c"

#line 45 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __flags;

#line 1156 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1159 "obj/debug.linux/SyntaxHighlighting.c"


#line 92 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_cond_s
{

#line 94 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 union
{

#line 96 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 unsigned long long int __wseq;

#line 1173 "obj/debug.linux/SyntaxHighlighting.c"

#line 97 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct
{

#line 99 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __low;

#line 1182 "obj/debug.linux/SyntaxHighlighting.c"

#line 100 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __high;

#line 1187 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __wseq32;

#line 1190 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1193 "obj/debug.linux/SyntaxHighlighting.c"

#line 103 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 union
{

#line 105 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 unsigned long long int __g1_start;

#line 1202 "obj/debug.linux/SyntaxHighlighting.c"

#line 106 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct
{

#line 108 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __low;

#line 1211 "obj/debug.linux/SyntaxHighlighting.c"

#line 109 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __high;

#line 1216 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __g1_start32;

#line 1219 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1222 "obj/debug.linux/SyntaxHighlighting.c"

#line 112 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_refs[2];

#line 1227 "obj/debug.linux/SyntaxHighlighting.c"

#line 113 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_size[2];

#line 1232 "obj/debug.linux/SyntaxHighlighting.c"

#line 114 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g1_orig_size;

#line 1237 "obj/debug.linux/SyntaxHighlighting.c"

#line 115 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __wrefs;

#line 1242 "obj/debug.linux/SyntaxHighlighting.c"

#line 116 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_signals[2];

#line 1247 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1250 "obj/debug.linux/SyntaxHighlighting.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;

#line 1256 "obj/debug.linux/SyntaxHighlighting.c"


#line 32 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 34 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1266 "obj/debug.linux/SyntaxHighlighting.c"

#line 35 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1271 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct pthread_mutexattr_t;

#line 1274 "obj/debug.linux/SyntaxHighlighting.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 43 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1284 "obj/debug.linux/SyntaxHighlighting.c"

#line 44 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1289 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct pthread_condattr_t;

#line 1292 "obj/debug.linux/SyntaxHighlighting.c"


#line 49 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;

#line 1298 "obj/debug.linux/SyntaxHighlighting.c"


#line 53 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef int pthread_once_t;

#line 1304 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t
{

#line 58 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[56];

#line 1314 "obj/debug.linux/SyntaxHighlighting.c"

#line 59 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1319 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1322 "obj/debug.linux/SyntaxHighlighting.c"


#line 62 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;

#line 1328 "obj/debug.linux/SyntaxHighlighting.c"


#line 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_mutex_s __data;

#line 1338 "obj/debug.linux/SyntaxHighlighting.c"

#line 70 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[40];

#line 1343 "obj/debug.linux/SyntaxHighlighting.c"

#line 71 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1348 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct pthread_mutex_t;

#line 1351 "obj/debug.linux/SyntaxHighlighting.c"


#line 75 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_cond_s __data;

#line 1361 "obj/debug.linux/SyntaxHighlighting.c"

#line 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[48];

#line 1366 "obj/debug.linux/SyntaxHighlighting.c"

#line 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
 long long int __align;

#line 1371 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct pthread_cond_t;

#line 1374 "obj/debug.linux/SyntaxHighlighting.c"


#line 86 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 88 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_rwlock_arch_t __data;

#line 1384 "obj/debug.linux/SyntaxHighlighting.c"

#line 89 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[56];

#line 1389 "obj/debug.linux/SyntaxHighlighting.c"

#line 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1394 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct pthread_rwlock_t;

#line 1397 "obj/debug.linux/SyntaxHighlighting.c"


#line 93 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 95 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[8];

#line 1407 "obj/debug.linux/SyntaxHighlighting.c"

#line 96 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1412 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct pthread_rwlockattr_t;

#line 1415 "obj/debug.linux/SyntaxHighlighting.c"


#line 103 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t;

#line 1421 "obj/debug.linux/SyntaxHighlighting.c"


#line 108 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[32];

#line 1431 "obj/debug.linux/SyntaxHighlighting.c"

#line 111 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1436 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct pthread_barrier_t;

#line 1439 "obj/debug.linux/SyntaxHighlighting.c"


#line 114 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 116 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1449 "obj/debug.linux/SyntaxHighlighting.c"

#line 117 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1454 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct pthread_barrierattr_t;

#line 1457 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereClassData_SyntaxHighlighting
{

#line 29 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char ** extensions;

#line 1467 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1470 "obj/debug.linux/SyntaxHighlighting.c"


#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__Container_copySrc;

#line 1476 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__Array_size;

#line 1482 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__com__Iterator_data;

#line 1488 "obj/debug.linux/SyntaxHighlighting.c"


#line 104 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_text;

#line 1494 "obj/debug.linux/SyntaxHighlighting.c"


#line 110 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_count;

#line 1500 "obj/debug.linux/SyntaxHighlighting.c"


#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp_SyntaxColorScheme_keywordColors;

#line 1506 "obj/debug.linux/SyntaxHighlighting.c"


#line 403 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Property * __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_next;

#line 1512 "obj/debug.linux/SyntaxHighlighting.c"


#line 509 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * makeExtensions[] =
{

#line 509 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"Makefile", "mk", "cf", (((void *)0))
}
#line 509 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1525 "obj/debug.linux/SyntaxHighlighting.c"


#line 549 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * cExtensions[] =
{

#line 549 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"c", "h", (((void *)0))
}
#line 549 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1538 "obj/debug.linux/SyntaxHighlighting.c"


#line 586 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * cxxExtensions[] =
{

#line 586 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"cxx", "hxx", "cpp", "hpp", "cc", "hh", (((void *)0))
}
#line 586 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1551 "obj/debug.linux/SyntaxHighlighting.c"


#line 604 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * eCExtensions[] =
{

#line 604 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"ec", "eh", (((void *)0))
}
#line 604 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1564 "obj/debug.linux/SyntaxHighlighting.c"


#line 667 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * objCExtensions[] =
{

#line 667 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"m", "mm", (((void *)0))
}
#line 667 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1577 "obj/debug.linux/SyntaxHighlighting.c"


#line 674 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * javaExtensions[] =
{

#line 674 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"java", (((void *)0))
}
#line 674 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1590 "obj/debug.linux/SyntaxHighlighting.c"


#line 691 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * csExtensions[] =
{

#line 691 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"cs", (((void *)0))
}
#line 691 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1603 "obj/debug.linux/SyntaxHighlighting.c"


#line 713 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * pyExtensions[] =
{

#line 713 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"py", (((void *)0))
}
#line 713 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1616 "obj/debug.linux/SyntaxHighlighting.c"


#line 753 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * swiftExtensions[] =
{

#line 753 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"swift", (((void *)0))
}
#line 753 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1629 "obj/debug.linux/SyntaxHighlighting.c"


#line 782 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * rsExtensions[] =
{

#line 782 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"rs", (((void *)0))
}
#line 782 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1642 "obj/debug.linux/SyntaxHighlighting.c"


#line 799 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * goExtensions[] =
{

#line 799 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"go", (((void *)0))
}
#line 799 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1655 "obj/debug.linux/SyntaxHighlighting.c"


#line 814 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * phpExtensions[] =
{

#line 814 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"php", (((void *)0))
}
#line 814 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1668 "obj/debug.linux/SyntaxHighlighting.c"


#line 844 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * jsExtensions[] =
{

#line 844 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"js", (((void *)0))
}
#line 844 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1681 "obj/debug.linux/SyntaxHighlighting.c"


#line 871 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * glslExtensions[] =
{

#line 871 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"frag", "glsl", "vert", (((void *)0))
}
#line 871 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1694 "obj/debug.linux/SyntaxHighlighting.c"


#line 939 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * cssExtensions[] =
{

#line 939 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"css", (((void *)0))
}
#line 939 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1707 "obj/debug.linux/SyntaxHighlighting.c"


#line 948 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * bisonExtensions[] =
{

#line 948 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"y", "l", (((void *)0))
}
#line 948 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1720 "obj/debug.linux/SyntaxHighlighting.c"


#line 958 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * shExtensions[] =
{

#line 958 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"sh", (((void *)0))
}
#line 958 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1733 "obj/debug.linux/SyntaxHighlighting.c"


#line 976 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * batExtensions[] =
{

#line 976 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"bat", (((void *)0))
}
#line 976 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1746 "obj/debug.linux/SyntaxHighlighting.c"


#line 996 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * xmlExtensions[] =
{

#line 996 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"xml", "xsd", "html", "htm", "xhtml", "gml", "sld", "kml", "dae", "svg", (((void *)0))
}
#line 996 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1759 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct XMLSHL
{

#line 1001 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int xmlState, xmlStateBak, xmlViewState;

#line 1769 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1772 "obj/debug.linux/SyntaxHighlighting.c"


#line 1214 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * econExtensions[] =
{

#line 1214 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"econ", "json", "geoecon", "geojson", "topojson", "epj", "ews", "cmss", (((void *)0))
}
#line 1214 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1785 "obj/debug.linux/SyntaxHighlighting.c"


#line 1231 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * diffExtensions[] =
{

#line 1231 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"diff", "patch", (((void *)0))
}
#line 1231 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1798 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct DiffSHL
{

#line 1237 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int diffColors[6];

#line 1808 "obj/debug.linux/SyntaxHighlighting.c"

#line 1247 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int lineMode;

#line 1813 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1816 "obj/debug.linux/SyntaxHighlighting.c"


#line 1294 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static const char * sqlExtensions[] =
{

#line 1294 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"sql", (((void *)0))
}
#line 1294 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 1829 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 1835 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  first;

#line 1845 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  last;

#line 1850 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int count;

#line 1855 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int offset;

#line 1860 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int circ;

#line 1865 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1868 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
union
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char c;

#line 1882 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned char uc;

#line 1887 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
short s;

#line 1892 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned short us;

#line 1897 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int i;

#line 1902 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int ui;

#line 1907 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  p;

#line 1912 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
float f;

#line 1917 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
double d;

#line 1922 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
long long i64;

#line 1927 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
uint64 ui64;

#line 1932 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __anon1;

#line 1935 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1938 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned char *  _buffer;

#line 1948 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
size_t count;

#line 1953 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
size_t _size;

#line 1958 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
size_t pos;

#line 1963 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 1966 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 1972 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 1978 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 1984 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 1990 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 1996 "obj/debug.linux/SyntaxHighlighting.c"


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Array
{

#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
uint64 *  array;

#line 2006 "obj/debug.linux/SyntaxHighlighting.c"

#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int count;

#line 2011 "obj/debug.linux/SyntaxHighlighting.c"

#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int minAllocSize;

#line 2016 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2019 "obj/debug.linux/SyntaxHighlighting.c"


#line 57 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern size_t strlen(const char * );

#line 2025 "obj/debug.linux/SyntaxHighlighting.c"


#line 105 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern char *  strstr(const char * , const char * );

#line 2031 "obj/debug.linux/SyntaxHighlighting.c"


#line 122 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__gui__controls__EditLine;

#line 2037 "obj/debug.linux/SyntaxHighlighting.c"


#line 216 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern unsigned int isdigit(int);

#line 2043 "obj/debug.linux/SyntaxHighlighting.c"


#line 218 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int isspace(int c);

#line 2049 "obj/debug.linux/SyntaxHighlighting.c"


#line 231 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern char *  (* __ecereFunction___ecereNameSpace__ecere__sys__strchrmax)(const char *  s, int c, int max);

#line 2055 "obj/debug.linux/SyntaxHighlighting.c"


#line 242 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern double strtod(const char * , char * * );

#line 2061 "obj/debug.linux/SyntaxHighlighting.c"


#line 244 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int strtol(const char * , char * * , int base);

#line 2067 "obj/debug.linux/SyntaxHighlighting.c"


#line 253 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int isalnum(int c);

#line 2073 "obj/debug.linux/SyntaxHighlighting.c"


#line 324 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int strncmp(const char * , const char * , size_t n);

#line 2079 "obj/debug.linux/SyntaxHighlighting.c"


#line 378 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern unsigned int (* __ecereFunction___ecereNameSpace__ecere__sys__CharMatchCategories)(unsigned int ch, unsigned int categories);

#line 2085 "obj/debug.linux/SyntaxHighlighting.c"


#line 635 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int isalpha(int c);

#line 2091 "obj/debug.linux/SyntaxHighlighting.c"


#line 656 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__DefinedExpression;

#line 2097 "obj/debug.linux/SyntaxHighlighting.c"


#line 658 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__GlobalFunction;

#line 2103 "obj/debug.linux/SyntaxHighlighting.c"


#line 1336 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int strcmp(const char * , const char * );

#line 2109 "obj/debug.linux/SyntaxHighlighting.c"


#line 1351 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern char *  (* __ecereFunction___ecereNameSpace__ecere__sys__GetLastDirectory)(const char *  string, char *  output);

#line 2115 "obj/debug.linux/SyntaxHighlighting.c"


#line 1352 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern char *  (* __ecereFunction___ecereNameSpace__ecere__sys__GetExtension)(const char *  string, char *  output);

#line 2121 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__BitMember;

#line 2127 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__ClassProperty;

#line 2133 "obj/debug.linux/SyntaxHighlighting.c"

struct __ecereNameSpace__ecere__com__IteratorPointer;


#line 104 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern const char *  (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text)(struct __ecereNameSpace__ecere__gui__controls__EditLine * this);

#line 2141 "obj/debug.linux/SyntaxHighlighting.c"


#line 104 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Set_text)(struct __ecereNameSpace__ecere__gui__controls__EditLine * this, const char *  value);

#line 2147 "obj/debug.linux/SyntaxHighlighting.c"


#line 110 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_count)(struct __ecereNameSpace__ecere__gui__controls__EditLine * this);

#line 2153 "obj/debug.linux/SyntaxHighlighting.c"


#line 403 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__gui__controls__EditLine * (* __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_next)(struct __ecereNameSpace__ecere__gui__controls__EditLine * this);

#line 2159 "obj/debug.linux/SyntaxHighlighting.c"


#line 1289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 2165 "obj/debug.linux/SyntaxHighlighting.c"


#line 45 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static __attribute__((unused)) struct __ecereNameSpace__ecere__com__Property * __ecereProp_SyntaxHighlighting_keywords, * __ecerePropM_SyntaxHighlighting_keywords;

#line 2171 "obj/debug.linux/SyntaxHighlighting.c"


#line 62 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static __attribute__((unused)) struct __ecereNameSpace__ecere__com__Property * __ecereProp_SyntaxHighlighting_kwPrep, * __ecerePropM_SyntaxHighlighting_kwPrep;

#line 2177 "obj/debug.linux/SyntaxHighlighting.c"


#line 81 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static __attribute__((unused)) struct __ecereNameSpace__ecere__com__Property * __ecereProp_SyntaxHighlighting_syntaxColorScheme, * __ecerePropM_SyntaxHighlighting_syntaxColorScheme;

#line 2183 "obj/debug.linux/SyntaxHighlighting.c"


#line 1289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 2189 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void * *  _vTbl;

#line 2199 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2204 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int _refCount;

#line 2209 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2212 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 2218 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 2224 "obj/debug.linux/SyntaxHighlighting.c"


#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__BuiltInContainer
{

#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void * *  _vTbl;

#line 2234 "obj/debug.linux/SyntaxHighlighting.c"

#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2239 "obj/debug.linux/SyntaxHighlighting.c"

#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int _refCount;

#line 2244 "obj/debug.linux/SyntaxHighlighting.c"

#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  data;

#line 2249 "obj/debug.linux/SyntaxHighlighting.c"

#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int count;

#line 2254 "obj/debug.linux/SyntaxHighlighting.c"

#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * type;

#line 2259 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2262 "obj/debug.linux/SyntaxHighlighting.c"


#line 1359 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eInstance_New(struct __ecereNameSpace__ecere__com__Class * _class);

#line 2268 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__BitMember * __ecereNameSpace__ecere__com__eClass_AddBitMember(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, int bitSize, int bitPos, int declMode);

#line 2274 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Property * __ecereNameSpace__ecere__com__eClass_AddProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

#line 2280 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__ClassProperty * __ecereNameSpace__ecere__com__eClass_AddClassProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt);

#line 2286 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eEnum_AddFixedValue(struct __ecereNameSpace__ecere__com__Class * _class, const char *  string, long long value);

#line 2292 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 2302 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 2307 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  name;

#line 2312 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int isProperty;

#line 2317 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int memberAccess;

#line 2322 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int id;

#line 2327 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2332 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  dataTypeString;

#line 2337 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2342 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2347 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void (*  Set)(void * , int);

#line 2352 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int (*  Get)(void * );

#line 2357 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int (*  IsSet)(void * );

#line 2362 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  data;

#line 2367 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  symbol;

#line 2372 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int vid;

#line 2377 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int conversion;

#line 2382 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int watcherOffset;

#line 2387 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  category;

#line 2392 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int compiled;

#line 2397 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int selfWatchable;

#line 2402 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int isWatchable;

#line 2407 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2410 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2416 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 2422 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2428 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 2434 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 2440 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 2446 "obj/debug.linux/SyntaxHighlighting.c"


#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct SyntaxColorScheme
{

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int commentColor;

#line 2456 "obj/debug.linux/SyntaxHighlighting.c"

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int charLiteralColor;

#line 2461 "obj/debug.linux/SyntaxHighlighting.c"

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int stringLiteralColor;

#line 2466 "obj/debug.linux/SyntaxHighlighting.c"

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int preprocessorColor;

#line 2471 "obj/debug.linux/SyntaxHighlighting.c"

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int numberColor;

#line 2476 "obj/debug.linux/SyntaxHighlighting.c"

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int typeColor;

#line 2481 "obj/debug.linux/SyntaxHighlighting.c"

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int defColor;

#line 2486 "obj/debug.linux/SyntaxHighlighting.c"

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int fnColor;

#line 2491 "obj/debug.linux/SyntaxHighlighting.c"

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * keywordColors;

#line 2496 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2499 "obj/debug.linux/SyntaxHighlighting.c"


#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__com__Container_Set_copySrc)(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 2505 "obj/debug.linux/SyntaxHighlighting.c"


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 2511 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern unsigned int (* __ecereProp___ecereNameSpace__ecere__com__Array_Get_size)(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2517 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__com__Array_Set_size)(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int value);

#line 2523 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__com__Container_GetCount;

#line 2529 "obj/debug.linux/SyntaxHighlighting.c"

struct __ecereNameSpace__ecere__com__Iterator
{
struct __ecereNameSpace__ecere__com__Instance * container;
struct __ecereNameSpace__ecere__com__IteratorPointer * pointer;
} ecere_gcc_struct;


#line 631 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_Process;

#line 2541 "obj/debug.linux/SyntaxHighlighting.c"


#line 1005 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_InitDraw;

#line 2547 "obj/debug.linux/SyntaxHighlighting.c"


#line 1198 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_CanImpactOtherLines;

#line 2553 "obj/debug.linux/SyntaxHighlighting.c"


#line 1203 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_GotSpace;

#line 2559 "obj/debug.linux/SyntaxHighlighting.c"


#line 1209 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_ResetState;

#line 2565 "obj/debug.linux/SyntaxHighlighting.c"


#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * __ecereProp_SyntaxColorScheme_Get_keywordColors(struct __ecereNameSpace__ecere__com__Instance * this);

#line 2571 "obj/debug.linux/SyntaxHighlighting.c"


#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void __ecereProp_SyntaxColorScheme_Set_keywordColors(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

#line 2577 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern unsigned int (* __ecereMethod___ecereNameSpace__ecere__com__Iterator_Index)(struct __ecereNameSpace__ecere__com__Iterator * this, const uint64 index, unsigned int create);

#line 2583 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern uint64 (* __ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data)(struct __ecereNameSpace__ecere__com__Iterator * this);

#line 2589 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern void (* __ecereProp___ecereNameSpace__ecere__com__Iterator_Set_data)(struct __ecereNameSpace__ecere__com__Iterator * this, uint64 value);

#line 2595 "obj/debug.linux/SyntaxHighlighting.c"


#line 1289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldLink;

#line 2601 "obj/debug.linux/SyntaxHighlighting.c"


#line 1326 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldLink
{

#line 1327 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldLink * prev;

#line 2611 "obj/debug.linux/SyntaxHighlighting.c"

#line 1327 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldLink * next;

#line 2616 "obj/debug.linux/SyntaxHighlighting.c"

#line 1327 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  data;

#line 2621 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2624 "obj/debug.linux/SyntaxHighlighting.c"


#line 1289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 2630 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 2640 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int count;

#line 2645 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 2650 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void (*  FreeKey)(void *  key);

#line 2655 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2658 "obj/debug.linux/SyntaxHighlighting.c"


#line 1289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 2664 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 2674 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 2679 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  name;

#line 2684 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int isProperty;

#line 2689 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int memberAccess;

#line 2694 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int id;

#line 2699 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2704 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  dataTypeString;

#line 2709 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2714 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2719 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int type;

#line 2724 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int offset;

#line 2729 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int memberID;

#line 2734 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 2739 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 2744 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int memberOffset;

#line 2749 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
short structAlignment;

#line 2754 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
short pointerAlignment;

#line 2759 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2762 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__DataMember * __ecereNameSpace__ecere__com__eClass_AddDataMember(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

#line 2768 "obj/debug.linux/SyntaxHighlighting.c"


#line 1289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 2774 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
union
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  dataTypeString;

#line 2792 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2797 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __anon1;

#line 2800 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 2805 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  memberString;

#line 2814 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
union
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 2823 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 2828 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 2833 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __anon1;

#line 2836 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __anon2;

#line 2839 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct __anon1;

#line 2842 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2845 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  name;

#line 2855 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 2860 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 2865 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 2870 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int depth;

#line 2875 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int (*  function)();

#line 2880 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int vid;

#line 2885 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int type;

#line 2890 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2895 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  symbol;

#line 2900 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  dataTypeString;

#line 2905 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2910 "obj/debug.linux/SyntaxHighlighting.c"

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int memberAccess;

#line 2915 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 2918 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Method * __ecereNameSpace__ecere__com__eClass_AddMethod(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

#line 2924 "obj/debug.linux/SyntaxHighlighting.c"


#line 1289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 2930 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct SyntaxHighlighting
{

#line 36 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * privateModule;

#line 2940 "obj/debug.linux/SyntaxHighlighting.c"

#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * regLen;

#line 2945 "obj/debug.linux/SyntaxHighlighting.c"

#line 38 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * regKeywords;

#line 2950 "obj/debug.linux/SyntaxHighlighting.c"

#line 40 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * prepLen;

#line 2955 "obj/debug.linux/SyntaxHighlighting.c"

#line 41 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * prepKeywords;

#line 2960 "obj/debug.linux/SyntaxHighlighting.c"

#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * allKeywords;

#line 2965 "obj/debug.linux/SyntaxHighlighting.c"

#line 44 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * keyLen;

#line 2970 "obj/debug.linux/SyntaxHighlighting.c"

#line 80 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * colorScheme;

#line 2975 "obj/debug.linux/SyntaxHighlighting.c"

#line 83 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int viewLineState;

#line 2980 "obj/debug.linux/SyntaxHighlighting.c"

#line 84 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int currentState;

#line 2985 "obj/debug.linux/SyntaxHighlighting.c"

#line 85 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int backedState;

#line 2990 "obj/debug.linux/SyntaxHighlighting.c"

#line 87 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int cppSingle, cMultiLine, cPrep, hashTagComments, cNumbers, singleQuotes;

#line 2995 "obj/debug.linux/SyntaxHighlighting.c"

#line 89 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int allowHashInKeyword;

#line 3000 "obj/debug.linux/SyntaxHighlighting.c"

#line 90 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int allowDashInKeyword;

#line 3005 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 3008 "obj/debug.linux/SyntaxHighlighting.c"


#line 654 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_FindClass(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 3014 "obj/debug.linux/SyntaxHighlighting.c"


#line 656 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__DefinedExpression * __ecereNameSpace__ecere__com__eSystem_FindDefine(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 3020 "obj/debug.linux/SyntaxHighlighting.c"


#line 658 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_FindFunction(struct __ecereNameSpace__ecere__com__Instance * module, const char *  name);

#line 3026 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

#line 3032 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 3038 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __ecereNameSpace__ecere__com__Instance * module, int declMode);

#line 3044 "obj/debug.linux/SyntaxHighlighting.c"

void __ecereProp_SyntaxHighlighting_Set_keywords(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

void __ecereProp_SyntaxHighlighting_Set_kwPrep(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);

void __ecereProp_SyntaxHighlighting_Set_syntaxColorScheme(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);


#line 1289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 3056 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  name;

#line 3066 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 3071 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 3076 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 3081 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int depth;

#line 3086 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 3091 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 3096 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 3101 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 3106 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 3111 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 3114 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 3124 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 3129 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  name;

#line 3134 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int offset;

#line 3139 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int structSize;

#line 3144 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void * *  _vTbl;

#line 3149 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int vTblSize;

#line 3154 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int (*  Constructor)(void * );

#line 3159 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void (*  Destructor)(void * );

#line 3164 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int offsetClass;

#line 3169 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int sizeClass;

#line 3174 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 3179 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 3184 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 3189 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 3194 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 3199 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 3204 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 3209 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int memberID;

#line 3214 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int startMemberID;

#line 3219 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int type;

#line 3224 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 3229 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 3234 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  dataTypeString;

#line 3239 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 3244 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int typeSize;

#line 3249 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int defaultAlignment;

#line 3254 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void (*  Initialize)();

#line 3259 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int memberOffset;

#line 3264 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 3269 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  designerClass;

#line 3274 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int noExpansion;

#line 3279 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  defaultProperty;

#line 3284 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int comRedefinition;

#line 3289 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int count;

#line 3294 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int isRemote;

#line 3299 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int internalDecl;

#line 3304 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  data;

#line 3309 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int computeSize;

#line 3314 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
short structAlignment;

#line 3319 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
short pointerAlignment;

#line 3324 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int destructionWatchOffset;

#line 3329 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int fixed;

#line 3334 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 3339 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int inheritanceAccess;

#line 3344 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  fullName;

#line 3349 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  symbol;

#line 3354 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 3359 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 3364 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 3369 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 3374 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 3379 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int numParams;

#line 3384 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int isInstanceClass;

#line 3389 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int byValueSystemClass;

#line 3394 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  bindingsClass;

#line 3399 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 3402 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int argc;

#line 3412 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char * *  argv;

#line 3417 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int exitCode;

#line 3422 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int isGUIApp;

#line 3427 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 3432 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char *  parsedCommand;

#line 3437 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 3442 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 3445 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_SyntaxState;

#line 3451 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_SyntaxHighlighting;

#line 3457 "obj/debug.linux/SyntaxHighlighting.c"


#line 546 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_MakeSHL;

#line 3463 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_CSHL;

#line 3469 "obj/debug.linux/SyntaxHighlighting.c"


#line 590 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_CXXSHL;

#line 3475 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_eCSHL;

#line 3481 "obj/debug.linux/SyntaxHighlighting.c"


#line 671 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ObjCSHL;

#line 3487 "obj/debug.linux/SyntaxHighlighting.c"


#line 678 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_JavaSHL;

#line 3493 "obj/debug.linux/SyntaxHighlighting.c"


#line 695 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_CSharpSHL;

#line 3499 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_PythonSHL;

#line 3505 "obj/debug.linux/SyntaxHighlighting.c"


#line 757 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_SwiftSHL;

#line 3511 "obj/debug.linux/SyntaxHighlighting.c"


#line 796 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_RustSHL;

#line 3517 "obj/debug.linux/SyntaxHighlighting.c"


#line 811 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_GoSHL;

#line 3523 "obj/debug.linux/SyntaxHighlighting.c"


#line 841 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_PHPSHL;

#line 3529 "obj/debug.linux/SyntaxHighlighting.c"


#line 868 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_JavaScriptSHL;

#line 3535 "obj/debug.linux/SyntaxHighlighting.c"


#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_GLSLSHL;

#line 3541 "obj/debug.linux/SyntaxHighlighting.c"


#line 945 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_CSSSHL;

#line 3547 "obj/debug.linux/SyntaxHighlighting.c"


#line 952 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_BisonFlexSHL;

#line 3553 "obj/debug.linux/SyntaxHighlighting.c"


#line 973 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_BashSHL;

#line 3559 "obj/debug.linux/SyntaxHighlighting.c"


#line 980 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_BatchSHL;

#line 3565 "obj/debug.linux/SyntaxHighlighting.c"


#line 993 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_SyntaxXMLState;

#line 3571 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_XMLSHL;

#line 3577 "obj/debug.linux/SyntaxHighlighting.c"


#line 1222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ECONSHL;

#line 3583 "obj/debug.linux/SyntaxHighlighting.c"


#line 1227 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_ConfigSHL;

#line 3589 "obj/debug.linux/SyntaxHighlighting.c"


#line 1230 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DiffSHLLineMode;

#line 3595 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_DiffSHL;

#line 3601 "obj/debug.linux/SyntaxHighlighting.c"


#line 1318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_SQLSHL;

#line 3607 "obj/debug.linux/SyntaxHighlighting.c"

static struct __ecereNameSpace__ecere__com__Class * FindHL(struct __ecereNameSpace__ecere__com__Class * c, const char * ext)

#line 1322 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1323 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * hl = (((void *)0));

#line 3617 "obj/debug.linux/SyntaxHighlighting.c"


#line 1324 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ext)

#line 1325 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1326 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldLink * link;

#line 3629 "obj/debug.linux/SyntaxHighlighting.c"


#line 1327 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 1327 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
link = c->derivatives.first;
#line 3636 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1327 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
link;
#line 3640 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1341 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
link = link->next)

#line 1328 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1329 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char ** extensions;

#line 3651 "obj/debug.linux/SyntaxHighlighting.c"


#line 1330 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
hl = link->data;
#line 3656 "obj/debug.linux/SyntaxHighlighting.c"


#line 1331 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extensions = (const char * * )(uintptr_t)__ecereNameSpace__ecere__com__eClass_GetProperty(hl, "extensions");
#line 3661 "obj/debug.linux/SyntaxHighlighting.c"


#line 1332 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(extensions)

#line 1333 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1334 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int c;

#line 3673 "obj/debug.linux/SyntaxHighlighting.c"


#line 1335 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 1335 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c = 0;
#line 3680 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1335 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extensions[c] && extensions[c][0];
#line 3684 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1337 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c++)

#line 1336 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!strcmp(extensions[c], ext))

#line 1337 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return hl;
#line 3694 "obj/debug.linux/SyntaxHighlighting.c"

#line 3696 "obj/debug.linux/SyntaxHighlighting.c"

#line 3698 "obj/debug.linux/SyntaxHighlighting.c"


#line 1338 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 3703 "obj/debug.linux/SyntaxHighlighting.c"

#line 3705 "obj/debug.linux/SyntaxHighlighting.c"


#line 1339 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
hl = FindHL(hl, ext);
#line 3710 "obj/debug.linux/SyntaxHighlighting.c"


#line 1340 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(hl)

#line 1340 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return hl;
#line 3718 "obj/debug.linux/SyntaxHighlighting.c"

#line 3720 "obj/debug.linux/SyntaxHighlighting.c"


#line 1341 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 3725 "obj/debug.linux/SyntaxHighlighting.c"

#line 3727 "obj/debug.linux/SyntaxHighlighting.c"


#line 1342 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 3732 "obj/debug.linux/SyntaxHighlighting.c"

#line 3734 "obj/debug.linux/SyntaxHighlighting.c"


#line 1343 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return hl;
#line 3739 "obj/debug.linux/SyntaxHighlighting.c"


#line 1344 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 3744 "obj/debug.linux/SyntaxHighlighting.c"



#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_int_;

#line 3751 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_String_;

#line 3757 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_String___;

#line 3763 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_int___;

#line 3769 "obj/debug.linux/SyntaxHighlighting.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer;


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Container;

#line 3777 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array;

#line 3783 "obj/debug.linux/SyntaxHighlighting.c"


#line 152 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_SyntaxColorScheme;

#line 3789 "obj/debug.linux/SyntaxHighlighting.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_String;


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 3797 "obj/debug.linux/SyntaxHighlighting.c"


#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 3807 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 3812 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 3817 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 3822 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 3827 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 3832 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 3837 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char *  name;

#line 3842 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  library;

#line 3847 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void *  Unload;

#line 3852 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int importType;

#line 3857 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int origImportType;

#line 3862 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 3867 "obj/debug.linux/SyntaxHighlighting.c"

#line 24 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 3872 "obj/debug.linux/SyntaxHighlighting.c"
} ecere_gcc_struct;

#line 3875 "obj/debug.linux/SyntaxHighlighting.c"

void __ecereDestructor_SyntaxHighlighting(struct __ecereNameSpace__ecere__com__Instance * this)

#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 3885 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_SyntaxHighlighting->regLen), __ecerePointer_SyntaxHighlighting->regLen = 0);
#line 3890 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_SyntaxHighlighting->regKeywords), __ecerePointer_SyntaxHighlighting->regKeywords = 0);
#line 3895 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_SyntaxHighlighting->prepLen), __ecerePointer_SyntaxHighlighting->prepLen = 0);
#line 3900 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_SyntaxHighlighting->prepKeywords), __ecerePointer_SyntaxHighlighting->prepKeywords = 0);
#line 3905 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_SyntaxHighlighting->allKeywords), __ecerePointer_SyntaxHighlighting->allKeywords = 0);
#line 3910 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_SyntaxHighlighting->keyLen), __ecerePointer_SyntaxHighlighting->keyLen = 0);
#line 3915 "obj/debug.linux/SyntaxHighlighting.c"


#line 506 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 3920 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereProp_SyntaxHighlighting_Set_syntaxColorScheme(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value)

#line 81 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 81 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 3931 "obj/debug.linux/SyntaxHighlighting.c"


#line 81 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_SyntaxHighlighting->colorScheme), __ecerePointer_SyntaxHighlighting->colorScheme = 0);
#line 3936 "obj/debug.linux/SyntaxHighlighting.c"


#line 81 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->colorScheme = value;
#line 3941 "obj/debug.linux/SyntaxHighlighting.c"


#line 81 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->colorScheme->_refCount++;
#line 3946 "obj/debug.linux/SyntaxHighlighting.c"

__ecereProp_SyntaxHighlighting_syntaxColorScheme && __ecereProp_SyntaxHighlighting_syntaxColorScheme->selfWatchable ? __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(this, __ecereProp_SyntaxHighlighting_syntaxColorScheme) : (void)0, __ecerePropM_SyntaxHighlighting_syntaxColorScheme && __ecerePropM_SyntaxHighlighting_syntaxColorScheme->selfWatchable ? __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(this, __ecerePropM_SyntaxHighlighting_syntaxColorScheme) : (void)0;

#line 81 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 3952 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_SyntaxHighlighting_InitDraw(struct __ecereNameSpace__ecere__com__Instance * this)

#line 93 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 93 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 3963 "obj/debug.linux/SyntaxHighlighting.c"


#line 94 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = __ecerePointer_SyntaxHighlighting->viewLineState;
#line 3968 "obj/debug.linux/SyntaxHighlighting.c"


#line 97 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x80) | (((int)(0)) << 7);
#line 3973 "obj/debug.linux/SyntaxHighlighting.c"


#line 98 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x100) | (((int)(0)) << 8);
#line 3978 "obj/debug.linux/SyntaxHighlighting.c"


#line 99 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x200) | (((int)(0)) << 9);
#line 3983 "obj/debug.linux/SyntaxHighlighting.c"


#line 100 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 3988 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereMethod_SyntaxHighlighting_CanImpactOtherLines(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gui__controls__EditLine * line)

#line 103 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 103 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 3999 "obj/debug.linux/SyntaxHighlighting.c"

#line 104 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char * text = __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text(line);

#line 4004 "obj/debug.linux/SyntaxHighlighting.c"

#line 105 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int canImpact = __ecerePointer_SyntaxHighlighting->cMultiLine && (strstr(text, "/*") || strstr(text, "*/"));

#line 4009 "obj/debug.linux/SyntaxHighlighting.c"

#line 106 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int c;

#line 4014 "obj/debug.linux/SyntaxHighlighting.c"


#line 108 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!canImpact)

#line 109 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 110 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 110 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c = __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_count(line) - 1;
#line 4027 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 110 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c >= 0;
#line 4031 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 120 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c--)

#line 111 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 112 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char ch = text[c];

#line 4042 "obj/debug.linux/SyntaxHighlighting.c"


#line 113 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '\\')

#line 114 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 115 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
canImpact = 1;
#line 4053 "obj/debug.linux/SyntaxHighlighting.c"


#line 116 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 4058 "obj/debug.linux/SyntaxHighlighting.c"


#line 117 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4063 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 119 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 4069 "obj/debug.linux/SyntaxHighlighting.c"

#line 4071 "obj/debug.linux/SyntaxHighlighting.c"


#line 120 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4076 "obj/debug.linux/SyntaxHighlighting.c"

#line 4078 "obj/debug.linux/SyntaxHighlighting.c"


#line 121 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4083 "obj/debug.linux/SyntaxHighlighting.c"

#line 4085 "obj/debug.linux/SyntaxHighlighting.c"


#line 122 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return canImpact;
#line 4090 "obj/debug.linux/SyntaxHighlighting.c"


#line 123 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4095 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_SyntaxHighlighting_GotSpace(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int beforeEnd)

#line 126 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 126 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 4106 "obj/debug.linux/SyntaxHighlighting.c"


#line 127 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(beforeEnd)

#line 128 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x4) | (((int)(0)) << 2);
#line 4114 "obj/debug.linux/SyntaxHighlighting.c"

#line 4116 "obj/debug.linux/SyntaxHighlighting.c"


#line 129 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x400) | (((int)(0)) << 10);
#line 4121 "obj/debug.linux/SyntaxHighlighting.c"


#line 130 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4126 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_SyntaxHighlighting_ResetState(struct __ecereNameSpace__ecere__com__Instance * this)

#line 133 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 133 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 4137 "obj/debug.linux/SyntaxHighlighting.c"


#line 134 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = __ecerePointer_SyntaxHighlighting->backedState;
#line 4142 "obj/debug.linux/SyntaxHighlighting.c"


#line 135 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4147 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_SyntaxHighlighting_StartLine(struct __ecereNameSpace__ecere__com__Instance * this)

#line 341 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 341 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 4158 "obj/debug.linux/SyntaxHighlighting.c"


#line 342 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x400) | (((int)(0)) << 10);
#line 4163 "obj/debug.linux/SyntaxHighlighting.c"


#line 343 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x800) | (((int)(1)) << 11);
#line 4168 "obj/debug.linux/SyntaxHighlighting.c"


#line 344 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x4) >> 2)))

#line 344 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x2) | (((int)(0)) << 1);
#line 4176 "obj/debug.linux/SyntaxHighlighting.c"

#line 4178 "obj/debug.linux/SyntaxHighlighting.c"


#line 345 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x200) | (((int)(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x8) >> 3)))) << 9);
#line 4183 "obj/debug.linux/SyntaxHighlighting.c"


#line 346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x4) | (((int)(0)) << 2);
#line 4188 "obj/debug.linux/SyntaxHighlighting.c"


#line 347 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x80) | (((int)(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x20) >> 5)))) << 7);
#line 4193 "obj/debug.linux/SyntaxHighlighting.c"


#line 348 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x100) | (((int)(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x40) >> 6)))) << 8);
#line 4198 "obj/debug.linux/SyntaxHighlighting.c"


#line 349 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4203 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_SyntaxHighlighting_NextLine(struct __ecereNameSpace__ecere__com__Instance * this, char * buffer, int count)

#line 352 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 352 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 4214 "obj/debug.linux/SyntaxHighlighting.c"


#line 353 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(count && buffer[count - 1] == '\\')

#line 354 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 355 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x8) | (((int)(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x200) >> 9)))) << 3);
#line 4225 "obj/debug.linux/SyntaxHighlighting.c"


#line 356 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x20) | (((int)(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x80) >> 7)))) << 5);
#line 4230 "obj/debug.linux/SyntaxHighlighting.c"


#line 357 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x40) | (((int)(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x100) >> 8)))) << 6);
#line 4235 "obj/debug.linux/SyntaxHighlighting.c"


#line 358 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4240 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 360 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 361 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x8) | (((int)(0)) << 3);
#line 4249 "obj/debug.linux/SyntaxHighlighting.c"


#line 362 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x20) | (((int)(0)) << 5);
#line 4254 "obj/debug.linux/SyntaxHighlighting.c"


#line 363 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x40) | (((int)(0)) << 6);
#line 4259 "obj/debug.linux/SyntaxHighlighting.c"


#line 364 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4264 "obj/debug.linux/SyntaxHighlighting.c"

#line 4266 "obj/debug.linux/SyntaxHighlighting.c"


#line 365 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4271 "obj/debug.linux/SyntaxHighlighting.c"


int __ecereMethod_SyntaxHighlighting_ParseWord(struct __ecereNameSpace__ecere__com__Instance * this, char * buffer, int count, int wordLen)

#line 368 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 368 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 4282 "obj/debug.linux/SyntaxHighlighting.c"

#line 369 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int c;

#line 4287 "obj/debug.linux/SyntaxHighlighting.c"


#line 370 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 370 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c = 0;
#line 4294 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 370 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c < count;
#line 4298 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 383 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c++)

#line 371 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 372 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int ch = buffer[c];

#line 4309 "obj/debug.linux/SyntaxHighlighting.c"

#line 373 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int bf = (wordLen == 1) ? buffer[c - 1] : 0;

#line 4314 "obj/debug.linux/SyntaxHighlighting.c"

#line 374 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int chHash = ch == '#' && __ecerePointer_SyntaxHighlighting->allowHashInKeyword;

#line 4319 "obj/debug.linux/SyntaxHighlighting.c"

#line 375 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int bfHash = bf == '#' && __ecerePointer_SyntaxHighlighting->allowHashInKeyword;

#line 4324 "obj/debug.linux/SyntaxHighlighting.c"

#line 376 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int chDash = ch == '-' && __ecerePointer_SyntaxHighlighting->allowDashInKeyword;

#line 4329 "obj/debug.linux/SyntaxHighlighting.c"

#line 377 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int bfDash = bf == '-' && __ecerePointer_SyntaxHighlighting->allowDashInKeyword;

#line 4334 "obj/debug.linux/SyntaxHighlighting.c"


#line 378 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecereFunction___ecereNameSpace__ecere__sys__CharMatchCategories(ch, 0x380LL) || ch == '\t' || (wordLen && !__ecereFunction___ecereNameSpace__ecere__sys__CharMatchCategories(ch, 0x70LL | 1015808 | 14 | 1048576) && !chHash && !chDash) || (bf && !__ecereFunction___ecereNameSpace__ecere__sys__CharMatchCategories(bf, 0x70LL | 1015808 | 896 | 14 | 1048576) && !bfHash && !bfDash && bf != '\t'))

#line 381 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 4342 "obj/debug.linux/SyntaxHighlighting.c"

#line 4344 "obj/debug.linux/SyntaxHighlighting.c"


#line 382 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
wordLen++;
#line 4349 "obj/debug.linux/SyntaxHighlighting.c"


#line 383 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4354 "obj/debug.linux/SyntaxHighlighting.c"

#line 4356 "obj/debug.linux/SyntaxHighlighting.c"


#line 384 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return c;
#line 4361 "obj/debug.linux/SyntaxHighlighting.c"


#line 385 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4366 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_SyntaxHighlighting_FigureStartSyntaxStates(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gui__controls__EditLine * firstLine, unsigned int reset, struct __ecereNameSpace__ecere__gui__controls__EditLine * viewLine)

#line 388 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 388 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 4377 "obj/debug.linux/SyntaxHighlighting.c"

#line 389 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int inMultiLineComment = reset ? 0 : ((unsigned int)((__ecerePointer_SyntaxHighlighting->viewLineState & 0x1) >> 0));

#line 4382 "obj/debug.linux/SyntaxHighlighting.c"

#line 390 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int wasInMultiLine = reset ? 0 : ((unsigned int)((__ecerePointer_SyntaxHighlighting->viewLineState & 0x10) >> 4));

#line 4387 "obj/debug.linux/SyntaxHighlighting.c"

#line 391 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int inString = 0;

#line 4392 "obj/debug.linux/SyntaxHighlighting.c"

#line 392 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int inQuotes = 0;

#line 4397 "obj/debug.linux/SyntaxHighlighting.c"

#line 393 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int inPrep = reset ? 0 : ((unsigned int)((__ecerePointer_SyntaxHighlighting->viewLineState & 0x2) >> 1));

#line 4402 "obj/debug.linux/SyntaxHighlighting.c"

#line 394 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int inSingleLineComment = 0;

#line 4407 "obj/debug.linux/SyntaxHighlighting.c"

#line 395 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int escaped = reset ? 0 : ((unsigned int)((__ecerePointer_SyntaxHighlighting->viewLineState & 0x4) >> 2));

#line 4412 "obj/debug.linux/SyntaxHighlighting.c"

#line 396 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int continuedSingleLineComment = reset ? 0 : ((unsigned int)((__ecerePointer_SyntaxHighlighting->viewLineState & 0x8) >> 3));

#line 4417 "obj/debug.linux/SyntaxHighlighting.c"

#line 397 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int continuedString = reset ? 0 : ((unsigned int)((__ecerePointer_SyntaxHighlighting->viewLineState & 0x20) >> 5));

#line 4422 "obj/debug.linux/SyntaxHighlighting.c"

#line 398 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int continuedQuotes = reset ? 0 : ((unsigned int)((__ecerePointer_SyntaxHighlighting->viewLineState & 0x40) >> 6));

#line 4427 "obj/debug.linux/SyntaxHighlighting.c"

#line 399 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__gui__controls__EditLine * line = firstLine;

#line 4432 "obj/debug.linux/SyntaxHighlighting.c"


#line 403 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 403 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;
#line 4439 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 403 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
line != viewLine;
#line 4443 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 497 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
line = __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_next(line))

#line 404 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 405 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char * text = __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text(line);

#line 4454 "obj/debug.linux/SyntaxHighlighting.c"

#line 406 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int c;

#line 4459 "obj/debug.linux/SyntaxHighlighting.c"

#line 407 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char ch;

#line 4464 "obj/debug.linux/SyntaxHighlighting.c"

#line 408 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int lastWasStar = 0;

#line 4469 "obj/debug.linux/SyntaxHighlighting.c"

#line 409 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int firstWord = 1;

#line 4474 "obj/debug.linux/SyntaxHighlighting.c"


#line 410 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!escaped)

#line 410 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inPrep = 0;
#line 4482 "obj/debug.linux/SyntaxHighlighting.c"

#line 4484 "obj/debug.linux/SyntaxHighlighting.c"


#line 411 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inSingleLineComment = continuedSingleLineComment;
#line 4489 "obj/debug.linux/SyntaxHighlighting.c"


#line 412 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
escaped = 0;
#line 4494 "obj/debug.linux/SyntaxHighlighting.c"


#line 413 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inString = continuedString;
#line 4499 "obj/debug.linux/SyntaxHighlighting.c"


#line 414 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inQuotes = continuedQuotes;
#line 4504 "obj/debug.linux/SyntaxHighlighting.c"


#line 416 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 416 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c = 0;
#line 4511 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 416 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(ch = text[c]);
#line 4515 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 484 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c++)

#line 417 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 418 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int wasEscaped = escaped;

#line 4526 "obj/debug.linux/SyntaxHighlighting.c"

#line 420 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int backLastWasStar = lastWasStar;

#line 4531 "obj/debug.linux/SyntaxHighlighting.c"

#line 421 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int backWasInMultiLine = wasInMultiLine;

#line 4536 "obj/debug.linux/SyntaxHighlighting.c"


#line 422 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
escaped = 0;
#line 4541 "obj/debug.linux/SyntaxHighlighting.c"


#line 423 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
lastWasStar = 0;
#line 4546 "obj/debug.linux/SyntaxHighlighting.c"


#line 424 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
wasInMultiLine = inMultiLineComment;
#line 4551 "obj/debug.linux/SyntaxHighlighting.c"


#line 425 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '/')

#line 426 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 427 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!inSingleLineComment && !inMultiLineComment && !inQuotes && !inString)

#line 428 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 429 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecerePointer_SyntaxHighlighting->cppSingle && text[c + 1] == '/')

#line 430 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 431 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inSingleLineComment = 1;
#line 4574 "obj/debug.linux/SyntaxHighlighting.c"


#line 432 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4579 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 433 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecerePointer_SyntaxHighlighting->cMultiLine && text[c + 1] == '*')

#line 434 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 435 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inMultiLineComment = 1;
#line 4590 "obj/debug.linux/SyntaxHighlighting.c"


#line 436 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4595 "obj/debug.linux/SyntaxHighlighting.c"

#line 4597 "obj/debug.linux/SyntaxHighlighting.c"

#line 4599 "obj/debug.linux/SyntaxHighlighting.c"


#line 437 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4604 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 438 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(backLastWasStar)

#line 439 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inMultiLineComment = 0;
#line 4612 "obj/debug.linux/SyntaxHighlighting.c"

#line 4614 "obj/debug.linux/SyntaxHighlighting.c"

#line 4616 "obj/debug.linux/SyntaxHighlighting.c"


#line 440 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4621 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 441 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '*')

#line 442 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 443 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(backWasInMultiLine)

#line 443 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
lastWasStar = 1;
#line 4635 "obj/debug.linux/SyntaxHighlighting.c"

#line 4637 "obj/debug.linux/SyntaxHighlighting.c"


#line 444 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4642 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 445 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '\"' && !inSingleLineComment && !inMultiLineComment && !inQuotes)

#line 446 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 447 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(inString && !wasEscaped)

#line 448 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 449 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inString = 0;
#line 4659 "obj/debug.linux/SyntaxHighlighting.c"


#line 450 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4664 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 452 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 453 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inString = 1;
#line 4673 "obj/debug.linux/SyntaxHighlighting.c"


#line 454 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4678 "obj/debug.linux/SyntaxHighlighting.c"

#line 4680 "obj/debug.linux/SyntaxHighlighting.c"


#line 455 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4685 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 456 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '\'' && __ecerePointer_SyntaxHighlighting->singleQuotes && !inSingleLineComment && !inMultiLineComment && !inString)

#line 457 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 458 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(inQuotes && !wasEscaped)

#line 459 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inQuotes = 0;
#line 4699 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 461 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 462 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inQuotes = 1;
#line 4708 "obj/debug.linux/SyntaxHighlighting.c"


#line 463 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4713 "obj/debug.linux/SyntaxHighlighting.c"

#line 4715 "obj/debug.linux/SyntaxHighlighting.c"


#line 464 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4720 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 465 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '\\')

#line 466 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 467 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!wasEscaped)

#line 468 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
escaped = 1;
#line 4734 "obj/debug.linux/SyntaxHighlighting.c"

#line 4736 "obj/debug.linux/SyntaxHighlighting.c"


#line 469 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4741 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 470 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '#' && !inQuotes && !inString && !inMultiLineComment && !inSingleLineComment)

#line 471 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 472 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecerePointer_SyntaxHighlighting->cPrep)

#line 473 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 474 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(firstWord)

#line 475 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 476 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inPrep = 1;
#line 4764 "obj/debug.linux/SyntaxHighlighting.c"


#line 477 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4769 "obj/debug.linux/SyntaxHighlighting.c"

#line 4771 "obj/debug.linux/SyntaxHighlighting.c"


#line 478 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4776 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 479 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecerePointer_SyntaxHighlighting->hashTagComments)

#line 480 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inSingleLineComment = 1;
#line 4784 "obj/debug.linux/SyntaxHighlighting.c"

#line 4786 "obj/debug.linux/SyntaxHighlighting.c"

#line 4788 "obj/debug.linux/SyntaxHighlighting.c"


#line 481 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4793 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 482 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch != ' ' && ch != '\t')

#line 483 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
firstWord = 0;
#line 4801 "obj/debug.linux/SyntaxHighlighting.c"

#line 4803 "obj/debug.linux/SyntaxHighlighting.c"

#line 4805 "obj/debug.linux/SyntaxHighlighting.c"

#line 4807 "obj/debug.linux/SyntaxHighlighting.c"

#line 4809 "obj/debug.linux/SyntaxHighlighting.c"

#line 4811 "obj/debug.linux/SyntaxHighlighting.c"

#line 4813 "obj/debug.linux/SyntaxHighlighting.c"

#line 4815 "obj/debug.linux/SyntaxHighlighting.c"


#line 484 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4820 "obj/debug.linux/SyntaxHighlighting.c"

#line 4822 "obj/debug.linux/SyntaxHighlighting.c"


#line 485 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_count(line) && __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text(line)[__ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_count(line) - 1] == '\\')

#line 486 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 487 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
continuedSingleLineComment = inSingleLineComment;
#line 4833 "obj/debug.linux/SyntaxHighlighting.c"


#line 488 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
continuedString = inString;
#line 4838 "obj/debug.linux/SyntaxHighlighting.c"


#line 489 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
continuedQuotes = inQuotes;
#line 4843 "obj/debug.linux/SyntaxHighlighting.c"


#line 490 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4848 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 492 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 493 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
continuedSingleLineComment = 0;
#line 4857 "obj/debug.linux/SyntaxHighlighting.c"


#line 494 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
continuedString = 0;
#line 4862 "obj/debug.linux/SyntaxHighlighting.c"


#line 495 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
continuedQuotes = 0;
#line 4867 "obj/debug.linux/SyntaxHighlighting.c"


#line 496 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4872 "obj/debug.linux/SyntaxHighlighting.c"

#line 4874 "obj/debug.linux/SyntaxHighlighting.c"


#line 497 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4879 "obj/debug.linux/SyntaxHighlighting.c"

#line 4881 "obj/debug.linux/SyntaxHighlighting.c"


#line 499 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->viewLineState = (__ecerePointer_SyntaxHighlighting->viewLineState & ~0x8) | (((int)(continuedSingleLineComment)) << 3);
#line 4886 "obj/debug.linux/SyntaxHighlighting.c"


#line 500 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->viewLineState = (__ecerePointer_SyntaxHighlighting->viewLineState & ~0x20) | (((int)(continuedString)) << 5);
#line 4891 "obj/debug.linux/SyntaxHighlighting.c"


#line 501 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->viewLineState = (__ecerePointer_SyntaxHighlighting->viewLineState & ~0x40) | (((int)(continuedQuotes)) << 6);
#line 4896 "obj/debug.linux/SyntaxHighlighting.c"


#line 502 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->viewLineState = (__ecerePointer_SyntaxHighlighting->viewLineState & ~0x1) | (((int)(inMultiLineComment)) << 0);
#line 4901 "obj/debug.linux/SyntaxHighlighting.c"


#line 503 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->viewLineState = (__ecerePointer_SyntaxHighlighting->viewLineState & ~0x10) | (((int)(wasInMultiLine)) << 4);
#line 4906 "obj/debug.linux/SyntaxHighlighting.c"


#line 504 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->viewLineState = (__ecerePointer_SyntaxHighlighting->viewLineState & ~0x2) | (((int)(inPrep)) << 1);
#line 4911 "obj/debug.linux/SyntaxHighlighting.c"


#line 505 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->viewLineState = (__ecerePointer_SyntaxHighlighting->viewLineState & ~0x4) | (((int)(escaped)) << 2);
#line 4916 "obj/debug.linux/SyntaxHighlighting.c"


#line 506 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4921 "obj/debug.linux/SyntaxHighlighting.c"


uint64 __ecereClassProp_SyntaxHighlighting_Get_extensions(struct __ecereNameSpace__ecere__com__Class * class)

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return (uint64)(uintptr_t)((*((struct __ecereClassData_SyntaxHighlighting *)((char *)class->data + __ecereClass_SyntaxHighlighting->offsetClass))).extensions);
#line 4931 "obj/debug.linux/SyntaxHighlighting.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4936 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereClassProp_SyntaxHighlighting_Set_extensions(struct __ecereNameSpace__ecere__com__Class * class, uint64 _value)

#line 34 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 31 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char * *  value = (const char * * )(uintptr_t)_value;

#line 4947 "obj/debug.linux/SyntaxHighlighting.c"


#line 34 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(*((struct __ecereClassData_SyntaxHighlighting *)((char *)class->data + __ecereClass_SyntaxHighlighting->offsetClass))).extensions = value;
#line 4952 "obj/debug.linux/SyntaxHighlighting.c"


#line 34 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4957 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_CSSSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 945 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 945 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine = 1;
#line 4967 "obj/debug.linux/SyntaxHighlighting.c"


#line 945 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle = 1;
#line 4972 "obj/debug.linux/SyntaxHighlighting.c"


#line 945 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 4977 "obj/debug.linux/SyntaxHighlighting.c"


#line 945 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 4982 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_ConfigSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 1227 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1227 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->hashTagComments = 1;
#line 4992 "obj/debug.linux/SyntaxHighlighting.c"


#line 1227 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 4997 "obj/debug.linux/SyntaxHighlighting.c"


#line 1227 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5002 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_XMLSHL_InitDraw(struct __ecereNameSpace__ecere__com__Instance * this)

#line 1004 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1004 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct XMLSHL * __ecerePointer_XMLSHL = (struct XMLSHL *)(this ? (((char *)this) + __ecereClass_XMLSHL->offset) : 0);

#line 5013 "obj/debug.linux/SyntaxHighlighting.c"


#line 1005 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__extension__ (
#line 1005 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1005 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *);

#line 5024 "obj/debug.linux/SyntaxHighlighting.c"


#line 1005 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Instance *))__ecereClass_SyntaxHighlighting->_vTbl[__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_InitDraw]);
#line 5029 "obj/debug.linux/SyntaxHighlighting.c"


#line 1005 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
#line 5034 "obj/debug.linux/SyntaxHighlighting.c"


#line 1005 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5039 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 1005 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
);
#line 5043 "obj/debug.linux/SyntaxHighlighting.c"


#line 1006 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = __ecerePointer_XMLSHL->xmlViewState;
#line 5048 "obj/debug.linux/SyntaxHighlighting.c"


#line 1007 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5053 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_XMLSHL_FigureStartSyntaxStates(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gui__controls__EditLine * firstLine, unsigned int reset, struct __ecereNameSpace__ecere__gui__controls__EditLine * viewLine)

#line 1081 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1081 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct XMLSHL * __ecerePointer_XMLSHL = (struct XMLSHL *)(this ? (((char *)this) + __ecereClass_XMLSHL->offset) : 0);

#line 5064 "obj/debug.linux/SyntaxHighlighting.c"

#line 1082 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int wasInMultiLine = reset ? 0 : ((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & 0x10) >> 4));

#line 5069 "obj/debug.linux/SyntaxHighlighting.c"

#line 1083 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int inMultiLineComment = reset ? 0 : ((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & 0x1) >> 0));

#line 5074 "obj/debug.linux/SyntaxHighlighting.c"

#line 1084 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int inString = 0;

#line 5079 "obj/debug.linux/SyntaxHighlighting.c"

#line 1085 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int inQuotes = 0;

#line 5084 "obj/debug.linux/SyntaxHighlighting.c"

#line 1086 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int inSingleLineComment = 0;

#line 5089 "obj/debug.linux/SyntaxHighlighting.c"

#line 1087 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int escaped = reset ? 0 : ((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & 0x4) >> 2));

#line 5094 "obj/debug.linux/SyntaxHighlighting.c"

#line 1088 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int continuedSingleLineComment = reset ? 0 : ((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & 0x8) >> 3));

#line 5099 "obj/debug.linux/SyntaxHighlighting.c"

#line 1089 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int continuedString = reset ? 0 : ((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & 0x20) >> 5));

#line 5104 "obj/debug.linux/SyntaxHighlighting.c"

#line 1090 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int continuedQuotes = reset ? 0 : ((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & 0x40) >> 6));

#line 5109 "obj/debug.linux/SyntaxHighlighting.c"

#line 1091 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int xmlComment = reset ? 0 : ((unsigned int)((__ecerePointer_XMLSHL->xmlViewState & 0x4) >> 2));

#line 5114 "obj/debug.linux/SyntaxHighlighting.c"

#line 1092 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__gui__controls__EditLine * line = firstLine;

#line 5119 "obj/debug.linux/SyntaxHighlighting.c"


#line 1094 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 1094 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;
#line 5126 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1094 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
line != viewLine;
#line 5130 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1183 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
line = __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_next(line))

#line 1095 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1096 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char * text = __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text(line);

#line 5141 "obj/debug.linux/SyntaxHighlighting.c"

#line 1097 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int c;

#line 5146 "obj/debug.linux/SyntaxHighlighting.c"

#line 1098 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char ch;

#line 5151 "obj/debug.linux/SyntaxHighlighting.c"

#line 1099 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int lastWasStar = 0;

#line 5156 "obj/debug.linux/SyntaxHighlighting.c"


#line 1101 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inSingleLineComment = continuedSingleLineComment;
#line 5161 "obj/debug.linux/SyntaxHighlighting.c"


#line 1102 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
escaped = 0;
#line 5166 "obj/debug.linux/SyntaxHighlighting.c"


#line 1103 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inString = continuedString;
#line 5171 "obj/debug.linux/SyntaxHighlighting.c"


#line 1104 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inQuotes = continuedQuotes;
#line 5176 "obj/debug.linux/SyntaxHighlighting.c"


#line 1106 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 1106 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c = 0;
#line 5183 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1106 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(ch = text[c]);
#line 5187 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1182 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c++)

#line 1107 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1108 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int backLastWasStar = lastWasStar;

#line 5198 "obj/debug.linux/SyntaxHighlighting.c"

#line 1109 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int backWasInMultiLine = wasInMultiLine;

#line 5203 "obj/debug.linux/SyntaxHighlighting.c"

#line 1110 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int wasEscaped = escaped;

#line 5208 "obj/debug.linux/SyntaxHighlighting.c"


#line 1111 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
escaped = 0;
#line 5213 "obj/debug.linux/SyntaxHighlighting.c"


#line 1113 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
lastWasStar = 0;
#line 5218 "obj/debug.linux/SyntaxHighlighting.c"


#line 1114 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
wasInMultiLine = inMultiLineComment;
#line 5223 "obj/debug.linux/SyntaxHighlighting.c"


#line 1115 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '/')

#line 1116 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1117 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!inSingleLineComment && !inMultiLineComment && !xmlComment && !inQuotes && !inString)

#line 1118 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1119 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle && text[c + 1] == '/')

#line 1120 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1121 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inSingleLineComment = 1;
#line 5246 "obj/debug.linux/SyntaxHighlighting.c"


#line 1122 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5251 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1123 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine && text[c + 1] == '*')

#line 1124 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1125 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inMultiLineComment = 1;
#line 5262 "obj/debug.linux/SyntaxHighlighting.c"


#line 1126 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5267 "obj/debug.linux/SyntaxHighlighting.c"

#line 5269 "obj/debug.linux/SyntaxHighlighting.c"

#line 5271 "obj/debug.linux/SyntaxHighlighting.c"


#line 1127 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5276 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1128 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(backLastWasStar)

#line 1129 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inMultiLineComment = 0;
#line 5284 "obj/debug.linux/SyntaxHighlighting.c"

#line 5286 "obj/debug.linux/SyntaxHighlighting.c"

#line 5288 "obj/debug.linux/SyntaxHighlighting.c"


#line 1130 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5293 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1131 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '*')

#line 1132 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1133 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(backWasInMultiLine)

#line 1133 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
lastWasStar = 1;
#line 5307 "obj/debug.linux/SyntaxHighlighting.c"

#line 5309 "obj/debug.linux/SyntaxHighlighting.c"


#line 1134 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5314 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1135 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '\"' && !inSingleLineComment && !inMultiLineComment && !inQuotes)

#line 1136 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1137 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(inString && !wasEscaped)

#line 1138 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1139 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inString = 0;
#line 5331 "obj/debug.linux/SyntaxHighlighting.c"


#line 1140 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5336 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 1142 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1143 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inString = 1;
#line 5345 "obj/debug.linux/SyntaxHighlighting.c"


#line 1144 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5350 "obj/debug.linux/SyntaxHighlighting.c"

#line 5352 "obj/debug.linux/SyntaxHighlighting.c"


#line 1145 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5357 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1146 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '\'' && ((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->singleQuotes && !inSingleLineComment && !inMultiLineComment && !inString)

#line 1147 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1148 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(inQuotes && !wasEscaped)

#line 1149 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inQuotes = 0;
#line 5371 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 1151 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1152 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inQuotes = 1;
#line 5380 "obj/debug.linux/SyntaxHighlighting.c"


#line 1153 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5385 "obj/debug.linux/SyntaxHighlighting.c"

#line 5387 "obj/debug.linux/SyntaxHighlighting.c"


#line 1154 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5392 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1155 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '\\')

#line 1156 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1157 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!wasEscaped)

#line 1158 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
escaped = 1;
#line 5406 "obj/debug.linux/SyntaxHighlighting.c"

#line 5408 "obj/debug.linux/SyntaxHighlighting.c"


#line 1159 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5413 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1160 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '#' && !inQuotes && !inString && !inMultiLineComment && !inSingleLineComment)

#line 1161 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1162 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->hashTagComments)

#line 1163 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
inSingleLineComment = 1;
#line 5427 "obj/debug.linux/SyntaxHighlighting.c"

#line 5429 "obj/debug.linux/SyntaxHighlighting.c"


#line 1164 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5434 "obj/debug.linux/SyntaxHighlighting.c"

#line 5436 "obj/debug.linux/SyntaxHighlighting.c"

#line 5438 "obj/debug.linux/SyntaxHighlighting.c"

#line 5440 "obj/debug.linux/SyntaxHighlighting.c"

#line 5442 "obj/debug.linux/SyntaxHighlighting.c"

#line 5444 "obj/debug.linux/SyntaxHighlighting.c"

#line 5446 "obj/debug.linux/SyntaxHighlighting.c"


#line 1166 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!inSingleLineComment && !inMultiLineComment && !xmlComment && !inQuotes && !inString)

#line 1167 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1168 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '<' && text[c + 1] == '!' && text[c + 2] == '-' && text[c + 3] == '-')

#line 1169 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1170 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
xmlComment = 1;
#line 5463 "obj/debug.linux/SyntaxHighlighting.c"


#line 1171 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c += 3;
#line 5468 "obj/debug.linux/SyntaxHighlighting.c"


#line 1172 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5473 "obj/debug.linux/SyntaxHighlighting.c"

#line 5475 "obj/debug.linux/SyntaxHighlighting.c"


#line 1173 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5480 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1174 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(xmlComment)

#line 1175 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1176 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '-' && text[c + 1] == '-' && text[c + 2] == '>')

#line 1177 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1178 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
xmlComment = 0;
#line 5497 "obj/debug.linux/SyntaxHighlighting.c"


#line 1179 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
c += 2;
#line 5502 "obj/debug.linux/SyntaxHighlighting.c"


#line 1180 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5507 "obj/debug.linux/SyntaxHighlighting.c"

#line 5509 "obj/debug.linux/SyntaxHighlighting.c"


#line 1181 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5514 "obj/debug.linux/SyntaxHighlighting.c"

#line 5516 "obj/debug.linux/SyntaxHighlighting.c"

#line 5518 "obj/debug.linux/SyntaxHighlighting.c"


#line 1182 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5523 "obj/debug.linux/SyntaxHighlighting.c"

#line 5525 "obj/debug.linux/SyntaxHighlighting.c"


#line 1183 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5530 "obj/debug.linux/SyntaxHighlighting.c"

#line 5532 "obj/debug.linux/SyntaxHighlighting.c"


#line 1185 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState = (((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & ~0x8) | (((int)(continuedSingleLineComment)) << 3);
#line 5537 "obj/debug.linux/SyntaxHighlighting.c"


#line 1186 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState = (((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & ~0x20) | (((int)(continuedString)) << 5);
#line 5542 "obj/debug.linux/SyntaxHighlighting.c"


#line 1187 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState = (((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & ~0x40) | (((int)(continuedQuotes)) << 6);
#line 5547 "obj/debug.linux/SyntaxHighlighting.c"


#line 1188 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState = (((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & ~0x1) | (((int)(inMultiLineComment)) << 0);
#line 5552 "obj/debug.linux/SyntaxHighlighting.c"


#line 1189 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState = (((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->viewLineState & ~0x4) | (((int)(escaped)) << 2);
#line 5557 "obj/debug.linux/SyntaxHighlighting.c"


#line 1191 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlViewState = (__ecerePointer_XMLSHL->xmlViewState & ~0x4) | (((int)(xmlComment)) << 2);
#line 5562 "obj/debug.linux/SyntaxHighlighting.c"


#line 1192 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5567 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereMethod_XMLSHL_CanImpactOtherLines(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__gui__controls__EditLine * line)

#line 1195 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1195 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct XMLSHL * __ecerePointer_XMLSHL = (struct XMLSHL *)(this ? (((char *)this) + __ecereClass_XMLSHL->offset) : 0);

#line 5578 "obj/debug.linux/SyntaxHighlighting.c"

#line 1196 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
const char * text = __ecereProp___ecereNameSpace__ecere__gui__controls__EditLine_Get_text(line);

#line 5583 "obj/debug.linux/SyntaxHighlighting.c"

#line 1197 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int canImpact = strstr(text, "<!--") || strstr(text, "-->");

#line 5588 "obj/debug.linux/SyntaxHighlighting.c"


#line 1198 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return canImpact || (__extension__ (
#line 1198 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1198 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, struct __ecereNameSpace__ecere__gui__controls__EditLine * line);

#line 5599 "obj/debug.linux/SyntaxHighlighting.c"


#line 1198 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod = ((unsigned int (*)(struct __ecereNameSpace__ecere__com__Instance *, struct __ecereNameSpace__ecere__gui__controls__EditLine * line))__ecereClass_SyntaxHighlighting->_vTbl[__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_CanImpactOtherLines]);
#line 5604 "obj/debug.linux/SyntaxHighlighting.c"


#line 1198 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(this, line) : (unsigned int)1;
#line 5609 "obj/debug.linux/SyntaxHighlighting.c"


#line 1198 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5614 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 1198 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
);
#line 5618 "obj/debug.linux/SyntaxHighlighting.c"


#line 1199 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5623 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_XMLSHL_GotSpace(struct __ecereNameSpace__ecere__com__Instance * this, unsigned int beforeEnd)

#line 1202 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1202 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct XMLSHL * __ecerePointer_XMLSHL = (struct XMLSHL *)(this ? (((char *)this) + __ecereClass_XMLSHL->offset) : 0);

#line 5634 "obj/debug.linux/SyntaxHighlighting.c"


#line 1203 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__extension__ (
#line 1203 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1203 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, unsigned int beforeEnd);

#line 5645 "obj/debug.linux/SyntaxHighlighting.c"


#line 1203 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Instance *, unsigned int beforeEnd))__ecereClass_SyntaxHighlighting->_vTbl[__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_GotSpace]);
#line 5650 "obj/debug.linux/SyntaxHighlighting.c"


#line 1203 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(this, beforeEnd) : (void)1;
#line 5655 "obj/debug.linux/SyntaxHighlighting.c"


#line 1203 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5660 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 1203 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
);
#line 5664 "obj/debug.linux/SyntaxHighlighting.c"


#line 1204 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = (__ecerePointer_XMLSHL->xmlState & ~0x2) | (((int)(0)) << 1);
#line 5669 "obj/debug.linux/SyntaxHighlighting.c"


#line 1205 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5674 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_XMLSHL_ResetState(struct __ecereNameSpace__ecere__com__Instance * this)

#line 1208 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1208 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct XMLSHL * __ecerePointer_XMLSHL = (struct XMLSHL *)(this ? (((char *)this) + __ecereClass_XMLSHL->offset) : 0);

#line 5685 "obj/debug.linux/SyntaxHighlighting.c"


#line 1209 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__extension__ (
#line 1209 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1209 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *);

#line 5696 "obj/debug.linux/SyntaxHighlighting.c"


#line 1209 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Instance *))__ecereClass_SyntaxHighlighting->_vTbl[__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_ResetState]);
#line 5701 "obj/debug.linux/SyntaxHighlighting.c"


#line 1209 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
#line 5706 "obj/debug.linux/SyntaxHighlighting.c"


#line 1209 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5711 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 1209 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
);
#line 5715 "obj/debug.linux/SyntaxHighlighting.c"


#line 1210 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = __ecerePointer_XMLSHL->xmlStateBak;
#line 5720 "obj/debug.linux/SyntaxHighlighting.c"


#line 1211 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5725 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereMethod_DiffSHL_StartLine(struct __ecereNameSpace__ecere__com__Instance * this)

#line 1250 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1250 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct DiffSHL * __ecerePointer_DiffSHL = (struct DiffSHL *)(this ? (((char *)this) + __ecereClass_DiffSHL->offset) : 0);

#line 5736 "obj/debug.linux/SyntaxHighlighting.c"


#line 1251 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState = (((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & ~0x800) | (((int)(1)) << 11);
#line 5741 "obj/debug.linux/SyntaxHighlighting.c"


#line 1252 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_DiffSHL->lineMode = 0;
#line 5746 "obj/debug.linux/SyntaxHighlighting.c"


#line 1253 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5751 "obj/debug.linux/SyntaxHighlighting.c"


struct __ecereNameSpace__ecere__com__Instance * SHLFromFileName(const char * fileName)

#line 1347 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1348 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * hlClass = (((void *)0));

#line 5762 "obj/debug.linux/SyntaxHighlighting.c"

#line 1349 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char name[274];

#line 5767 "obj/debug.linux/SyntaxHighlighting.c"

#line 1350 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char ext[17];

#line 5772 "obj/debug.linux/SyntaxHighlighting.c"


#line 1351 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereFunction___ecereNameSpace__ecere__sys__GetLastDirectory(fileName, name);
#line 5777 "obj/debug.linux/SyntaxHighlighting.c"


#line 1352 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereFunction___ecereNameSpace__ecere__sys__GetExtension(name, ext);
#line 5782 "obj/debug.linux/SyntaxHighlighting.c"


#line 1353 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ext[0])

#line 1354 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
hlClass = FindHL(__ecereClass_SyntaxHighlighting, ext);
#line 5790 "obj/debug.linux/SyntaxHighlighting.c"

#line 5792 "obj/debug.linux/SyntaxHighlighting.c"


#line 1355 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!hlClass && strstr(name, "Makefile") == name)

#line 1356 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
hlClass = __ecereClass_MakeSHL;
#line 5800 "obj/debug.linux/SyntaxHighlighting.c"

#line 5802 "obj/debug.linux/SyntaxHighlighting.c"


#line 1357 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!hlClass)

#line 1358 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
hlClass = __ecereClass_ConfigSHL;
#line 5810 "obj/debug.linux/SyntaxHighlighting.c"

#line 5812 "obj/debug.linux/SyntaxHighlighting.c"


#line 1359 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return __ecereNameSpace__ecere__com__eInstance_New(hlClass);
#line 5817 "obj/debug.linux/SyntaxHighlighting.c"


#line 1360 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5822 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_SyntaxHighlighting(struct __ecereNameSpace__ecere__com__Instance * this)

#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 5833 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->regLen = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_int_);
#line 5838 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_SyntaxHighlighting->regLen);
#line 5843 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->regKeywords = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_String_);
#line 5848 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_SyntaxHighlighting->regKeywords);
#line 5853 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->prepLen = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_int_);
#line 5858 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_SyntaxHighlighting->prepLen);
#line 5863 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->prepKeywords = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_String_);
#line 5868 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_SyntaxHighlighting->prepKeywords);
#line 5873 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->allKeywords = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_String___);
#line 5878 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_SyntaxHighlighting->allKeywords);
#line 5883 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->keyLen = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__com__Array_TPL_int___);
#line 5888 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_SyntaxHighlighting->keyLen);
#line 5893 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__ecereProp___ecereNameSpace__ecere__com__Container_Set_copySrc(__ecerePointer_SyntaxHighlighting->allKeywords, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (struct __ecereNameSpace__ecere__com__Instance * [])
{

#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->regKeywords, __ecerePointer_SyntaxHighlighting->prepKeywords
}
#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 2, __ecereClass___ecereNameSpace__ecere__com__Array_TPL_String_
}
#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
)));
#line 5912 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(__ecereProp___ecereNameSpace__ecere__com__Container_Set_copySrc(__ecerePointer_SyntaxHighlighting->keyLen, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 44 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (struct __ecereNameSpace__ecere__com__Instance * [])
{

#line 44 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->regLen, __ecerePointer_SyntaxHighlighting->prepLen
}
#line 44 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 2, __ecereClass___ecereNameSpace__ecere__com__Array_TPL_int_
}
#line 44 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
)));
#line 5931 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 5936 "obj/debug.linux/SyntaxHighlighting.c"


#line 506 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5941 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereProp_SyntaxHighlighting_Set_keywords(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value)

#line 48 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 48 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 5952 "obj/debug.linux/SyntaxHighlighting.c"


#line 49 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(value)

#line 50 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int start = __ecereProp___ecereNameSpace__ecere__com__Array_Get_size(__ecerePointer_SyntaxHighlighting->regKeywords), i, count = (__extension__ (
#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *);

#line 5969 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod = ((int (*)(struct __ecereNameSpace__ecere__com__Instance *))__extension__ (
#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = value;

#line 5980 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Container->_vTbl;
#line 5985 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 5990 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
[__ecereVMethodID___ecereNameSpace__ecere__com__Container_GetCount]);
#line 5994 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(value) : (int)1;
#line 5999 "obj/debug.linux/SyntaxHighlighting.c"


#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6004 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 51 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
);

#line 6009 "obj/debug.linux/SyntaxHighlighting.c"


#line 52 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp___ecereNameSpace__ecere__com__Array_Set_size(__ecerePointer_SyntaxHighlighting->regKeywords, __ecereProp___ecereNameSpace__ecere__com__Array_Get_size(__ecerePointer_SyntaxHighlighting->regKeywords) + count);
#line 6014 "obj/debug.linux/SyntaxHighlighting.c"


#line 53 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp___ecereNameSpace__ecere__com__Array_Set_size(__ecerePointer_SyntaxHighlighting->regLen, __ecereProp___ecereNameSpace__ecere__com__Array_Get_size(__ecerePointer_SyntaxHighlighting->regLen) + count);
#line 6019 "obj/debug.linux/SyntaxHighlighting.c"


#line 54 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 54 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i = 0;
#line 6026 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 54 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i < count;
#line 6030 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 58 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i++)

#line 55 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(((const char **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__ecerePointer_SyntaxHighlighting->regKeywords + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[start + i] = (((const char *)((uintptr_t)(__extension__ (
#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Iterator __internalIterator =
{

#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
value, 0
}
#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 6053 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, ((uint64)(i)), 0);
#line 6058 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((char *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
#line 6063 "obj/debug.linux/SyntaxHighlighting.c"


#line 56 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6068 "obj/debug.linux/SyntaxHighlighting.c"
)))));
#line 6070 "obj/debug.linux/SyntaxHighlighting.c"


#line 57 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(((int *)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__ecerePointer_SyntaxHighlighting->regLen + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[start + i] = strlen((((const char *)((uintptr_t)(__extension__ (
#line 57 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 57 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Iterator __internalIterator =
{

#line 57 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
value, 0
}
#line 57 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 6088 "obj/debug.linux/SyntaxHighlighting.c"


#line 57 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, ((uint64)(i)), 0);
#line 6093 "obj/debug.linux/SyntaxHighlighting.c"


#line 57 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((char *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
#line 6098 "obj/debug.linux/SyntaxHighlighting.c"


#line 57 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6103 "obj/debug.linux/SyntaxHighlighting.c"
))))));
#line 6105 "obj/debug.linux/SyntaxHighlighting.c"


#line 58 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6110 "obj/debug.linux/SyntaxHighlighting.c"

#line 6112 "obj/debug.linux/SyntaxHighlighting.c"


#line 59 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6117 "obj/debug.linux/SyntaxHighlighting.c"

#line 6119 "obj/debug.linux/SyntaxHighlighting.c"

__ecereProp_SyntaxHighlighting_keywords && __ecereProp_SyntaxHighlighting_keywords->selfWatchable ? __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(this, __ecereProp_SyntaxHighlighting_keywords) : (void)0, __ecerePropM_SyntaxHighlighting_keywords && __ecerePropM_SyntaxHighlighting_keywords->selfWatchable ? __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(this, __ecerePropM_SyntaxHighlighting_keywords) : (void)0;

#line 60 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6125 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereProp_SyntaxHighlighting_Set_kwPrep(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value)

#line 65 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 65 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 6136 "obj/debug.linux/SyntaxHighlighting.c"


#line 66 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(value)

#line 67 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int start = __ecereProp___ecereNameSpace__ecere__com__Array_Get_size(__ecerePointer_SyntaxHighlighting->prepKeywords), i, count = (__extension__ (
#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *);

#line 6153 "obj/debug.linux/SyntaxHighlighting.c"


#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod = ((int (*)(struct __ecereNameSpace__ecere__com__Instance *))__extension__ (
#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = value;

#line 6164 "obj/debug.linux/SyntaxHighlighting.c"


#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Container->_vTbl;
#line 6169 "obj/debug.linux/SyntaxHighlighting.c"


#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6174 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
[__ecereVMethodID___ecereNameSpace__ecere__com__Container_GetCount]);
#line 6178 "obj/debug.linux/SyntaxHighlighting.c"


#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(value) : (int)1;
#line 6183 "obj/debug.linux/SyntaxHighlighting.c"


#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6188 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 68 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
);

#line 6193 "obj/debug.linux/SyntaxHighlighting.c"


#line 69 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp___ecereNameSpace__ecere__com__Array_Set_size(__ecerePointer_SyntaxHighlighting->prepKeywords, __ecereProp___ecereNameSpace__ecere__com__Array_Get_size(__ecerePointer_SyntaxHighlighting->prepKeywords) + count);
#line 6198 "obj/debug.linux/SyntaxHighlighting.c"


#line 70 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp___ecereNameSpace__ecere__com__Array_Set_size(__ecerePointer_SyntaxHighlighting->prepLen, __ecereProp___ecereNameSpace__ecere__com__Array_Get_size(__ecerePointer_SyntaxHighlighting->prepLen) + count);
#line 6203 "obj/debug.linux/SyntaxHighlighting.c"


#line 71 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 71 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i = 0;
#line 6210 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 71 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i < count;
#line 6214 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 75 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i++)

#line 72 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 73 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(((const char **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__ecerePointer_SyntaxHighlighting->prepKeywords + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[start + i] = (((const char *)((uintptr_t)(__extension__ (
#line 73 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 73 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Iterator __internalIterator =
{

#line 73 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
value, 0
}
#line 73 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 6237 "obj/debug.linux/SyntaxHighlighting.c"


#line 73 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, ((uint64)(i)), 0);
#line 6242 "obj/debug.linux/SyntaxHighlighting.c"


#line 73 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((char *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
#line 6247 "obj/debug.linux/SyntaxHighlighting.c"


#line 73 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6252 "obj/debug.linux/SyntaxHighlighting.c"
)))));
#line 6254 "obj/debug.linux/SyntaxHighlighting.c"


#line 74 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(((int *)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__ecerePointer_SyntaxHighlighting->prepLen + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[start + i] = strlen((((const char *)((uintptr_t)(__extension__ (
#line 74 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 74 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Iterator __internalIterator =
{

#line 74 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
value, 0
}
#line 74 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 6272 "obj/debug.linux/SyntaxHighlighting.c"


#line 74 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, ((uint64)(i)), 0);
#line 6277 "obj/debug.linux/SyntaxHighlighting.c"


#line 74 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((char *)(uintptr_t)__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
#line 6282 "obj/debug.linux/SyntaxHighlighting.c"


#line 74 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6287 "obj/debug.linux/SyntaxHighlighting.c"
))))));
#line 6289 "obj/debug.linux/SyntaxHighlighting.c"


#line 75 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6294 "obj/debug.linux/SyntaxHighlighting.c"

#line 6296 "obj/debug.linux/SyntaxHighlighting.c"


#line 76 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6301 "obj/debug.linux/SyntaxHighlighting.c"

#line 6303 "obj/debug.linux/SyntaxHighlighting.c"

__ecereProp_SyntaxHighlighting_kwPrep && __ecereProp_SyntaxHighlighting_kwPrep->selfWatchable ? __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(this, __ecereProp_SyntaxHighlighting_kwPrep) : (void)0, __ecerePropM_SyntaxHighlighting_kwPrep && __ecerePropM_SyntaxHighlighting_kwPrep->selfWatchable ? __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(this, __ecerePropM_SyntaxHighlighting_kwPrep) : (void)0;

#line 77 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6309 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereMethod_DiffSHL_Process(struct __ecereNameSpace__ecere__com__Instance * this, char * word, int * wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char * buffer, int * c)

#line 1256 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1256 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct DiffSHL * __ecerePointer_DiffSHL = (struct DiffSHL *)(this ? (((char *)this) + __ecereClass_DiffSHL->offset) : 0);

#line 6320 "obj/debug.linux/SyntaxHighlighting.c"

#line 1257 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int newTextColor;

#line 6325 "obj/debug.linux/SyntaxHighlighting.c"


#line 1259 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x800) >> 11)))

#line 1260 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1261 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(word[0] == '+')

#line 1262 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_DiffSHL->lineMode = word[1] == '+' && word[2] == '+' ? 1 : 4;
#line 6339 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1263 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(word[0] == '-')

#line 1264 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_DiffSHL->lineMode = word[1] == '-' && word[2] == '-' ? 2 : 5;
#line 6347 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1265 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(word[0] == '@')

#line 1266 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_DiffSHL->lineMode = 3;
#line 6355 "obj/debug.linux/SyntaxHighlighting.c"

#line 6357 "obj/debug.linux/SyntaxHighlighting.c"

#line 6359 "obj/debug.linux/SyntaxHighlighting.c"

#line 6361 "obj/debug.linux/SyntaxHighlighting.c"


#line 1267 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6366 "obj/debug.linux/SyntaxHighlighting.c"

#line 6368 "obj/debug.linux/SyntaxHighlighting.c"


#line 1268 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = __ecerePointer_DiffSHL->lineMode ? __ecerePointer_DiffSHL->diffColors[__ecerePointer_DiffSHL->lineMode] : defaultTextColor;
#line 6373 "obj/debug.linux/SyntaxHighlighting.c"


#line 1270 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(beforeEndOfLine)

#line 1271 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1272 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int wordStart = *c - *wordLen;

#line 6385 "obj/debug.linux/SyntaxHighlighting.c"

#line 1273 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int kwType = 0;

#line 6390 "obj/debug.linux/SyntaxHighlighting.c"

#line 1275 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * keys = (((struct __ecereNameSpace__ecere__com__Instance **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->allKeywords + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[kwType];

#line 6395 "obj/debug.linux/SyntaxHighlighting.c"

#line 1276 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * len = (((struct __ecereNameSpace__ecere__com__Instance **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->keyLen + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[kwType];

#line 6400 "obj/debug.linux/SyntaxHighlighting.c"

#line 1277 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int k;

#line 6405 "obj/debug.linux/SyntaxHighlighting.c"


#line 1278 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 1278 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
k = 0;
#line 6412 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1278 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
k < ((struct __ecereNameSpace__ecere__com__Array *)(((char *)keys + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->count;
#line 6416 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 1287 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
k++)

#line 1279 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1280 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((((int *)((struct __ecereNameSpace__ecere__com__Array *)(((char *)len + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k] == *wordLen && !strncmp((((const char **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)keys + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k], word, *wordLen)) || ((((const char **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)keys + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k][0] == '.' && wordStart > 0 && *(word - 1) == '.' && (((int *)((struct __ecereNameSpace__ecere__com__Array *)(((char *)len + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k] == *wordLen + 1 && !strncmp((((const char **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)keys + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k] + 1, word, *wordLen)))

#line 1283 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1284 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = (((unsigned int)(__extension__ (
#line 1284 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1284 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Iterator __internalIterator =
{

#line 1284 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxColorScheme_Get_keywordColors(((struct SyntaxHighlighting * )(((char * )this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme), 0
}
#line 1284 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 6445 "obj/debug.linux/SyntaxHighlighting.c"


#line 1284 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, ((uint64)(kwType)), 0);
#line 6450 "obj/debug.linux/SyntaxHighlighting.c"


#line 1284 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(unsigned int)(__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
#line 6455 "obj/debug.linux/SyntaxHighlighting.c"


#line 1284 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6460 "obj/debug.linux/SyntaxHighlighting.c"
))));
#line 6462 "obj/debug.linux/SyntaxHighlighting.c"


#line 1285 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 6467 "obj/debug.linux/SyntaxHighlighting.c"


#line 1286 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6472 "obj/debug.linux/SyntaxHighlighting.c"

#line 6474 "obj/debug.linux/SyntaxHighlighting.c"


#line 1287 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6479 "obj/debug.linux/SyntaxHighlighting.c"

#line 6481 "obj/debug.linux/SyntaxHighlighting.c"


#line 1288 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6486 "obj/debug.linux/SyntaxHighlighting.c"

#line 6488 "obj/debug.linux/SyntaxHighlighting.c"


#line 1289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState = (((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & ~0x800) | (((int)(0)) << 11);
#line 6493 "obj/debug.linux/SyntaxHighlighting.c"


#line 1290 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return newTextColor;
#line 6498 "obj/debug.linux/SyntaxHighlighting.c"


#line 1291 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6503 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereMethod_SyntaxHighlighting_Process(struct __ecereNameSpace__ecere__com__Instance * this, char * word, int * wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char * buffer, int * c)

#line 138 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 138 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct SyntaxHighlighting * __ecerePointer_SyntaxHighlighting = (struct SyntaxHighlighting *)(this ? (((char *)this) + __ecereClass_SyntaxHighlighting->offset) : 0);

#line 6514 "obj/debug.linux/SyntaxHighlighting.c"

#line 139 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int newTextColor;

#line 6519 "obj/debug.linux/SyntaxHighlighting.c"

#line 140 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int wasEscaped = ((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x4) >> 2));

#line 6524 "obj/debug.linux/SyntaxHighlighting.c"


#line 142 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->backedState = __ecerePointer_SyntaxHighlighting->currentState;
#line 6529 "obj/debug.linux/SyntaxHighlighting.c"


#line 144 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x4) | (((int)(0)) << 2);
#line 6534 "obj/debug.linux/SyntaxHighlighting.c"


#line 145 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x400) | (((int)(0)) << 10);
#line 6539 "obj/debug.linux/SyntaxHighlighting.c"


#line 148 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = defaultTextColor;
#line 6544 "obj/debug.linux/SyntaxHighlighting.c"


#line 150 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x200) >> 9)) || ((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x1) >> 0)))

#line 151 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 152 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->commentColor;
#line 6555 "obj/debug.linux/SyntaxHighlighting.c"


#line 153 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6560 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 154 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x100) >> 8)))

#line 155 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 156 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->charLiteralColor;
#line 6571 "obj/debug.linux/SyntaxHighlighting.c"


#line 157 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6576 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 158 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x80) >> 7)))

#line 159 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 160 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->stringLiteralColor;
#line 6587 "obj/debug.linux/SyntaxHighlighting.c"


#line 161 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6592 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 162 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x2) >> 1)))

#line 163 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 164 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->preprocessorColor;
#line 6603 "obj/debug.linux/SyntaxHighlighting.c"


#line 165 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6608 "obj/debug.linux/SyntaxHighlighting.c"

#line 6610 "obj/debug.linux/SyntaxHighlighting.c"

#line 6612 "obj/debug.linux/SyntaxHighlighting.c"

#line 6614 "obj/debug.linux/SyntaxHighlighting.c"

#line 6616 "obj/debug.linux/SyntaxHighlighting.c"


#line 166 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(*wordLen == 1 && word[0] == '/')

#line 167 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 168 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x200) >> 9)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x1) >> 0)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x100) >> 8)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x80) >> 7)))

#line 169 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 170 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecerePointer_SyntaxHighlighting->cppSingle && word[1] == '/')

#line 171 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 172 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x200) | (((int)(1)) << 9);
#line 6639 "obj/debug.linux/SyntaxHighlighting.c"


#line 173 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->commentColor;
#line 6644 "obj/debug.linux/SyntaxHighlighting.c"


#line 174 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6649 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 175 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecerePointer_SyntaxHighlighting->cMultiLine && word[1] == '*')

#line 176 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 177 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x1) | (((int)(1)) << 0);
#line 6660 "obj/debug.linux/SyntaxHighlighting.c"


#line 178 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->commentColor;
#line 6665 "obj/debug.linux/SyntaxHighlighting.c"


#line 179 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6670 "obj/debug.linux/SyntaxHighlighting.c"

#line 6672 "obj/debug.linux/SyntaxHighlighting.c"

#line 6674 "obj/debug.linux/SyntaxHighlighting.c"


#line 180 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6679 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 181 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_SyntaxHighlighting->backedState & 0x400) >> 10)))

#line 182 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x1) | (((int)(0)) << 0);
#line 6687 "obj/debug.linux/SyntaxHighlighting.c"

#line 6689 "obj/debug.linux/SyntaxHighlighting.c"

#line 6691 "obj/debug.linux/SyntaxHighlighting.c"


#line 183 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6696 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 184 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecerePointer_SyntaxHighlighting->cMultiLine && *wordLen == 1 && word[0] == '*')

#line 185 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 186 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_SyntaxHighlighting->backedState & 0x1) >> 0)))

#line 187 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x400) | (((int)(1)) << 10);
#line 6710 "obj/debug.linux/SyntaxHighlighting.c"

#line 6712 "obj/debug.linux/SyntaxHighlighting.c"


#line 188 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6717 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 189 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x200) >> 9)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x1) >> 0)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x100) >> 8)) && *wordLen == 1 && word[0] == '\"')

#line 190 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 191 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x80) >> 7)) && !wasEscaped)

#line 192 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 193 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x80) | (((int)(0)) << 7);
#line 6734 "obj/debug.linux/SyntaxHighlighting.c"


#line 194 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6739 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 196 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 197 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x80) | (((int)(1)) << 7);
#line 6748 "obj/debug.linux/SyntaxHighlighting.c"


#line 198 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->stringLiteralColor;
#line 6753 "obj/debug.linux/SyntaxHighlighting.c"


#line 199 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6758 "obj/debug.linux/SyntaxHighlighting.c"

#line 6760 "obj/debug.linux/SyntaxHighlighting.c"


#line 200 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6765 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 201 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x200) >> 9)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x1) >> 0)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x80) >> 7)) && __ecerePointer_SyntaxHighlighting->singleQuotes && *wordLen == 1 && word[0] == '\'')

#line 202 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 203 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x100) >> 8)) && !wasEscaped)

#line 204 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x100) | (((int)(0)) << 8);
#line 6779 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 206 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x100) | (((int)(1)) << 8);
#line 6788 "obj/debug.linux/SyntaxHighlighting.c"


#line 208 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->charLiteralColor;
#line 6793 "obj/debug.linux/SyntaxHighlighting.c"


#line 209 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6798 "obj/debug.linux/SyntaxHighlighting.c"

#line 6800 "obj/debug.linux/SyntaxHighlighting.c"


#line 210 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6805 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 211 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(*wordLen == 1 && word[0] == '\\')

#line 212 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 213 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!wasEscaped)

#line 214 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x4) | (((int)(1)) << 2);
#line 6819 "obj/debug.linux/SyntaxHighlighting.c"

#line 6821 "obj/debug.linux/SyntaxHighlighting.c"


#line 215 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6826 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 216 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(beforeEndOfLine && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x100) >> 8)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x80) >> 7)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x1) >> 0)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x200) >> 9)) && (isdigit(word[0]) || (word[0] == '.' && isdigit(word[1]))))

#line 217 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 218 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char * dot = word[*wordLen] == '.' ? word + *wordLen : (word[0] == '.' && (word == buffer || word[-1] == '-' || isspace(word[-1])) ? word : (((void *)0)));

#line 6838 "obj/debug.linux/SyntaxHighlighting.c"

#line 219 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int isReal = dot != (((void *)0));

#line 6843 "obj/debug.linux/SyntaxHighlighting.c"

#line 220 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int base = __ecerePointer_SyntaxHighlighting->cNumbers ? 0 : 10;

#line 6848 "obj/debug.linux/SyntaxHighlighting.c"

#line 221 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char * s = (((void *)0));

#line 6853 "obj/debug.linux/SyntaxHighlighting.c"


#line 222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(dot)

#line 223 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
isReal = 1;
#line 6861 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 225 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 226 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char * exponent;

#line 6871 "obj/debug.linux/SyntaxHighlighting.c"

#line 227 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int isHex = (word[0] == '0' && (word[1] == 'x' || word[1] == 'X'));

#line 6876 "obj/debug.linux/SyntaxHighlighting.c"


#line 228 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(isHex)

#line 229 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 230 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
base = 16;
#line 6887 "obj/debug.linux/SyntaxHighlighting.c"


#line 231 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
exponent = __ecereFunction___ecereNameSpace__ecere__sys__strchrmax(word, 'p', *wordLen);
#line 6892 "obj/debug.linux/SyntaxHighlighting.c"


#line 232 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!exponent)

#line 232 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
exponent = __ecereFunction___ecereNameSpace__ecere__sys__strchrmax(word, 'P', *wordLen);
#line 6900 "obj/debug.linux/SyntaxHighlighting.c"

#line 6902 "obj/debug.linux/SyntaxHighlighting.c"


#line 233 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6907 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 235 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 236 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
exponent = __ecereFunction___ecereNameSpace__ecere__sys__strchrmax(word, 'e', *wordLen);
#line 6916 "obj/debug.linux/SyntaxHighlighting.c"


#line 237 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!exponent)

#line 237 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
exponent = __ecereFunction___ecereNameSpace__ecere__sys__strchrmax(word, 'E', *wordLen);
#line 6924 "obj/debug.linux/SyntaxHighlighting.c"

#line 6926 "obj/debug.linux/SyntaxHighlighting.c"


#line 238 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6931 "obj/debug.linux/SyntaxHighlighting.c"

#line 6933 "obj/debug.linux/SyntaxHighlighting.c"


#line 239 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
isReal = exponent != (((void *)0));
#line 6938 "obj/debug.linux/SyntaxHighlighting.c"


#line 240 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 6943 "obj/debug.linux/SyntaxHighlighting.c"

#line 6945 "obj/debug.linux/SyntaxHighlighting.c"


#line 241 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(isReal)

#line 242 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
strtod(word, &s);
#line 6953 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 244 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
strtol(word, &s, base);
#line 6959 "obj/debug.linux/SyntaxHighlighting.c"

#line 6961 "obj/debug.linux/SyntaxHighlighting.c"


#line 245 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(s && s != word)

#line 246 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 248 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char ch;

#line 6973 "obj/debug.linux/SyntaxHighlighting.c"

#line 249 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int i;

#line 6978 "obj/debug.linux/SyntaxHighlighting.c"

#line 250 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int gotF = 0, gotL = 0, gotU = 0, gotI = 0;

#line 6983 "obj/debug.linux/SyntaxHighlighting.c"

#line 251 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int valid = 1;

#line 6988 "obj/debug.linux/SyntaxHighlighting.c"


#line 253 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 253 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i = 0;
#line 6995 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 253 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
valid && i < 5 && (ch = s[i]) && (isalnum(ch) || ch == '_');
#line 6999 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 267 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i++)

#line 254 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
switch(ch)

#line 256 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 257 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'f':

#line 257 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'F':

#line 257 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
gotF++;
#line 7021 "obj/debug.linux/SyntaxHighlighting.c"

#line 7023 "obj/debug.linux/SyntaxHighlighting.c"

#line 7025 "obj/debug.linux/SyntaxHighlighting.c"


#line 257 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(gotF > 1 || !isReal)

#line 257 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
valid = 0;
#line 7033 "obj/debug.linux/SyntaxHighlighting.c"

#line 7035 "obj/debug.linux/SyntaxHighlighting.c"


#line 257 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 7040 "obj/debug.linux/SyntaxHighlighting.c"


#line 258 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'l':

#line 258 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'L':

#line 259 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
gotL++;
#line 7051 "obj/debug.linux/SyntaxHighlighting.c"

#line 7053 "obj/debug.linux/SyntaxHighlighting.c"

#line 7055 "obj/debug.linux/SyntaxHighlighting.c"


#line 260 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(gotL > 2 || (isReal && (gotL == 2 || gotF)) || (gotL == 2 && (s[i - 1] != ch)))

#line 261 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
valid = 0;
#line 7063 "obj/debug.linux/SyntaxHighlighting.c"

#line 7065 "obj/debug.linux/SyntaxHighlighting.c"


#line 262 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 7070 "obj/debug.linux/SyntaxHighlighting.c"


#line 263 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'u':

#line 263 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'U':

#line 263 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
gotU++;
#line 7081 "obj/debug.linux/SyntaxHighlighting.c"

#line 7083 "obj/debug.linux/SyntaxHighlighting.c"

#line 7085 "obj/debug.linux/SyntaxHighlighting.c"


#line 263 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(gotU > 1 || isReal)

#line 263 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
valid = 0;
#line 7093 "obj/debug.linux/SyntaxHighlighting.c"

#line 7095 "obj/debug.linux/SyntaxHighlighting.c"


#line 263 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 7100 "obj/debug.linux/SyntaxHighlighting.c"


#line 264 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'i':

#line 264 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'I':

#line 264 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'j':

#line 264 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
case 'J':

#line 264 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
gotI++;
#line 7117 "obj/debug.linux/SyntaxHighlighting.c"

#line 7119 "obj/debug.linux/SyntaxHighlighting.c"

#line 7121 "obj/debug.linux/SyntaxHighlighting.c"

#line 7123 "obj/debug.linux/SyntaxHighlighting.c"

#line 7125 "obj/debug.linux/SyntaxHighlighting.c"


#line 264 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(gotI > 1)

#line 264 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
valid = 0;
#line 7133 "obj/debug.linux/SyntaxHighlighting.c"

#line 7135 "obj/debug.linux/SyntaxHighlighting.c"


#line 264 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 7140 "obj/debug.linux/SyntaxHighlighting.c"


#line 265 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
default:

#line 265 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
valid = 0;
#line 7148 "obj/debug.linux/SyntaxHighlighting.c"

#line 7150 "obj/debug.linux/SyntaxHighlighting.c"


#line 266 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7155 "obj/debug.linux/SyntaxHighlighting.c"

#line 7157 "obj/debug.linux/SyntaxHighlighting.c"


#line 267 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7162 "obj/debug.linux/SyntaxHighlighting.c"

#line 7164 "obj/debug.linux/SyntaxHighlighting.c"


#line 270 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(s[0] == '.' && isdigit(s[1]))

#line 271 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 272 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int newWordLen;

#line 7176 "obj/debug.linux/SyntaxHighlighting.c"


#line 273 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
while(s[0] == '.' && isdigit(s[1]))

#line 274 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 275 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int newWordLen = s - word;

#line 7188 "obj/debug.linux/SyntaxHighlighting.c"


#line 276 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*c += newWordLen - *wordLen;
#line 7193 "obj/debug.linux/SyntaxHighlighting.c"


#line 277 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*wordLen = newWordLen;
#line 7198 "obj/debug.linux/SyntaxHighlighting.c"


#line 278 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
strtod(s, &s);
#line 7203 "obj/debug.linux/SyntaxHighlighting.c"


#line 279 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7208 "obj/debug.linux/SyntaxHighlighting.c"

#line 7210 "obj/debug.linux/SyntaxHighlighting.c"


#line 280 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newWordLen = s - word;
#line 7215 "obj/debug.linux/SyntaxHighlighting.c"


#line 281 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*c += newWordLen - *wordLen;
#line 7220 "obj/debug.linux/SyntaxHighlighting.c"


#line 282 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*wordLen = newWordLen;
#line 7225 "obj/debug.linux/SyntaxHighlighting.c"


#line 283 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7230 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 284 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(valid)

#line 285 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 286 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int newWordLen = s + i - word;

#line 7242 "obj/debug.linux/SyntaxHighlighting.c"


#line 287 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->numberColor;
#line 7247 "obj/debug.linux/SyntaxHighlighting.c"


#line 288 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*c += newWordLen - *wordLen;
#line 7252 "obj/debug.linux/SyntaxHighlighting.c"


#line 289 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*wordLen = newWordLen;
#line 7257 "obj/debug.linux/SyntaxHighlighting.c"


#line 290 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7262 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 291 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(dot && dot > word && dot < s)

#line 292 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->numberColor;
#line 7270 "obj/debug.linux/SyntaxHighlighting.c"

#line 7272 "obj/debug.linux/SyntaxHighlighting.c"

#line 7274 "obj/debug.linux/SyntaxHighlighting.c"

#line 7276 "obj/debug.linux/SyntaxHighlighting.c"


#line 293 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7281 "obj/debug.linux/SyntaxHighlighting.c"

#line 7283 "obj/debug.linux/SyntaxHighlighting.c"


#line 294 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7288 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 296 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x100) >> 8)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x80) >> 7)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x1) >> 0)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x200) >> 9)) && word[0] == '#')

#line 298 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 299 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecerePointer_SyntaxHighlighting->cPrep)

#line 300 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 301 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x800) >> 11)))

#line 302 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 303 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x2) | (((int)(1)) << 1);
#line 7315 "obj/debug.linux/SyntaxHighlighting.c"


#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = *wordLen == 1 ? (((unsigned int)(__extension__ (
#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Iterator __internalIterator =
{

#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxColorScheme_Get_keywordColors(__ecerePointer_SyntaxHighlighting->colorScheme), 0
}
#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 7333 "obj/debug.linux/SyntaxHighlighting.c"


#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, ((uint64)(1)), 0);
#line 7338 "obj/debug.linux/SyntaxHighlighting.c"


#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(unsigned int)(__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
#line 7343 "obj/debug.linux/SyntaxHighlighting.c"


#line 304 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7348 "obj/debug.linux/SyntaxHighlighting.c"
)))) : ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->preprocessorColor;
#line 7350 "obj/debug.linux/SyntaxHighlighting.c"


#line 305 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7355 "obj/debug.linux/SyntaxHighlighting.c"

#line 7357 "obj/debug.linux/SyntaxHighlighting.c"


#line 306 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7362 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 307 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecerePointer_SyntaxHighlighting->hashTagComments)

#line 308 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 309 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x200) | (((int)(1)) << 9);
#line 7373 "obj/debug.linux/SyntaxHighlighting.c"


#line 310 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)__ecerePointer_SyntaxHighlighting->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->commentColor;
#line 7378 "obj/debug.linux/SyntaxHighlighting.c"


#line 311 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7383 "obj/debug.linux/SyntaxHighlighting.c"

#line 7385 "obj/debug.linux/SyntaxHighlighting.c"

#line 7387 "obj/debug.linux/SyntaxHighlighting.c"


#line 312 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7392 "obj/debug.linux/SyntaxHighlighting.c"

#line 7394 "obj/debug.linux/SyntaxHighlighting.c"


#line 313 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(beforeEndOfLine && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x100) >> 8)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x80) >> 7)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x1) >> 0)) && !((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x200) >> 9)))

#line 314 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 315 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int wordStart = *c - *wordLen;

#line 7406 "obj/debug.linux/SyntaxHighlighting.c"

#line 316 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int kwType, upTo = (((unsigned int)((__ecerePointer_SyntaxHighlighting->currentState & 0x2) >> 1)) && word[0] != '#' && __ecerePointer_SyntaxHighlighting->cPrep) ? 1 : 0;

#line 7411 "obj/debug.linux/SyntaxHighlighting.c"


#line 317 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 317 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
kwType = 0;
#line 7418 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 317 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
kwType <= upTo;
#line 7422 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 333 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
kwType++)

#line 318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 319 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * keys = (((struct __ecereNameSpace__ecere__com__Instance **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__ecerePointer_SyntaxHighlighting->allKeywords + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[kwType];

#line 7433 "obj/debug.linux/SyntaxHighlighting.c"

#line 320 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Instance * len = (((struct __ecereNameSpace__ecere__com__Instance **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)__ecerePointer_SyntaxHighlighting->keyLen + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[kwType];

#line 7438 "obj/debug.linux/SyntaxHighlighting.c"

#line 321 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int k;

#line 7443 "obj/debug.linux/SyntaxHighlighting.c"


#line 322 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 322 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
k = 0;
#line 7450 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 322 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
k < ((struct __ecereNameSpace__ecere__com__Array *)(((char *)keys + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->count;
#line 7454 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 331 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
k++)

#line 323 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 324 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((((int *)((struct __ecereNameSpace__ecere__com__Array *)(((char *)len + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k] == *wordLen && !strncmp((((const char **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)keys + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k], word, *wordLen)) || ((((const char **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)keys + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k][0] == '.' && wordStart > 0 && *(word - 1) == '.' && (((int *)((struct __ecereNameSpace__ecere__com__Array *)(((char *)len + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k] == *wordLen + 1 && !strncmp((((const char **)((struct __ecereNameSpace__ecere__com__Array *)(((char *)keys + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->array))[k] + 1, word, *wordLen)))

#line 327 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 328 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = (((unsigned int)(__extension__ (
#line 328 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 328 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Iterator __internalIterator =
{

#line 328 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxColorScheme_Get_keywordColors(__ecerePointer_SyntaxHighlighting->colorScheme), 0
}
#line 328 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 7483 "obj/debug.linux/SyntaxHighlighting.c"


#line 328 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, ((uint64)(kwType)), 0);
#line 7488 "obj/debug.linux/SyntaxHighlighting.c"


#line 328 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(unsigned int)(__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
#line 7493 "obj/debug.linux/SyntaxHighlighting.c"


#line 328 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7498 "obj/debug.linux/SyntaxHighlighting.c"
))));
#line 7500 "obj/debug.linux/SyntaxHighlighting.c"


#line 329 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 7505 "obj/debug.linux/SyntaxHighlighting.c"


#line 330 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7510 "obj/debug.linux/SyntaxHighlighting.c"

#line 7512 "obj/debug.linux/SyntaxHighlighting.c"


#line 331 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7517 "obj/debug.linux/SyntaxHighlighting.c"

#line 7519 "obj/debug.linux/SyntaxHighlighting.c"


#line 332 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(k < ((struct __ecereNameSpace__ecere__com__Array *)(((char *)keys + 0 + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->count)

#line 332 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 7527 "obj/debug.linux/SyntaxHighlighting.c"

#line 7529 "obj/debug.linux/SyntaxHighlighting.c"


#line 333 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7534 "obj/debug.linux/SyntaxHighlighting.c"

#line 7536 "obj/debug.linux/SyntaxHighlighting.c"


#line 334 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7541 "obj/debug.linux/SyntaxHighlighting.c"

#line 7543 "obj/debug.linux/SyntaxHighlighting.c"


#line 335 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7548 "obj/debug.linux/SyntaxHighlighting.c"

#line 7550 "obj/debug.linux/SyntaxHighlighting.c"

#line 7552 "obj/debug.linux/SyntaxHighlighting.c"

#line 7554 "obj/debug.linux/SyntaxHighlighting.c"

#line 7556 "obj/debug.linux/SyntaxHighlighting.c"

#line 7558 "obj/debug.linux/SyntaxHighlighting.c"

#line 7560 "obj/debug.linux/SyntaxHighlighting.c"


#line 336 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_SyntaxHighlighting->currentState = (__ecerePointer_SyntaxHighlighting->currentState & ~0x800) | (((int)(0)) << 11);
#line 7565 "obj/debug.linux/SyntaxHighlighting.c"


#line 337 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return newTextColor;
#line 7570 "obj/debug.linux/SyntaxHighlighting.c"


#line 338 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7575 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereMethod_eCSHL_Process(struct __ecereNameSpace__ecere__com__Instance * this, char * word, int * wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char * buffer, int * c)

#line 630 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 631 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int newTextColor = (__extension__ (
#line 631 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 631 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, char *  word, int *  wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char *  buffer, int *  c);

#line 7591 "obj/debug.linux/SyntaxHighlighting.c"


#line 631 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod = ((unsigned int (*)(struct __ecereNameSpace__ecere__com__Instance *, char *  word, int *  wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char *  buffer, int *  c))__ecereClass_SyntaxHighlighting->_vTbl[__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_Process]);
#line 7596 "obj/debug.linux/SyntaxHighlighting.c"


#line 631 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(this, word, wordLen, beforeEndOfLine, defaultTextColor, buffer, c) : (unsigned int)1;
#line 7601 "obj/debug.linux/SyntaxHighlighting.c"


#line 631 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7606 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 631 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
);

#line 7611 "obj/debug.linux/SyntaxHighlighting.c"


#line 632 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x1) >> 0)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x200) >> 9)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x100) >> 8)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x80) >> 7)) && (newTextColor == defaultTextColor || newTextColor == ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->preprocessorColor))

#line 634 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 635 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if((word[0] == '_' || isalpha(word[0])) && *wordLen < 256)

#line 636 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 637 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int valid = 1;

#line 7629 "obj/debug.linux/SyntaxHighlighting.c"

#line 638 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char name[256];

#line 7634 "obj/debug.linux/SyntaxHighlighting.c"

#line 639 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
int i;

#line 7639 "obj/debug.linux/SyntaxHighlighting.c"


#line 640 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
for(
#line 640 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i = 0;
#line 7646 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 640 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i < *wordLen;
#line 7650 "obj/debug.linux/SyntaxHighlighting.c"
 
#line 650 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
i++)

#line 641 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 642 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char ch = word[i];

#line 7661 "obj/debug.linux/SyntaxHighlighting.c"


#line 643 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(ch == '_' || isalnum(ch))

#line 644 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
name[i] = ch;
#line 7669 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 646 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 647 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
valid = 0;
#line 7678 "obj/debug.linux/SyntaxHighlighting.c"


#line 648 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
break;
#line 7683 "obj/debug.linux/SyntaxHighlighting.c"


#line 649 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7688 "obj/debug.linux/SyntaxHighlighting.c"

#line 7690 "obj/debug.linux/SyntaxHighlighting.c"


#line 650 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7695 "obj/debug.linux/SyntaxHighlighting.c"

#line 7697 "obj/debug.linux/SyntaxHighlighting.c"


#line 651 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(valid)

#line 652 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 653 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
name[i] = 0;
#line 7708 "obj/debug.linux/SyntaxHighlighting.c"


#line 654 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecereNameSpace__ecere__com__eSystem_FindClass(((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->privateModule, name))

#line 655 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->typeColor;
#line 7716 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 656 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecereNameSpace__ecere__com__eSystem_FindDefine(((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->privateModule, name))

#line 657 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->defColor;
#line 7724 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 658 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(__ecereNameSpace__ecere__com__eSystem_FindFunction(((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->privateModule, name))

#line 659 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->fnColor;
#line 7732 "obj/debug.linux/SyntaxHighlighting.c"

#line 7734 "obj/debug.linux/SyntaxHighlighting.c"

#line 7736 "obj/debug.linux/SyntaxHighlighting.c"

#line 7738 "obj/debug.linux/SyntaxHighlighting.c"


#line 660 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7743 "obj/debug.linux/SyntaxHighlighting.c"

#line 7745 "obj/debug.linux/SyntaxHighlighting.c"


#line 661 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7750 "obj/debug.linux/SyntaxHighlighting.c"

#line 7752 "obj/debug.linux/SyntaxHighlighting.c"


#line 662 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7757 "obj/debug.linux/SyntaxHighlighting.c"

#line 7759 "obj/debug.linux/SyntaxHighlighting.c"


#line 663 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return newTextColor;
#line 7764 "obj/debug.linux/SyntaxHighlighting.c"


#line 664 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7769 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereMethod_PythonSHL_Process(struct __ecereNameSpace__ecere__com__Instance * this, char * word, int * wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char * buffer, int * c)

#line 736 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 737 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int newTextColor = (__extension__ (
#line 737 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 737 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, char *  word, int *  wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char *  buffer, int *  c);

#line 7785 "obj/debug.linux/SyntaxHighlighting.c"


#line 737 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod = ((unsigned int (*)(struct __ecereNameSpace__ecere__com__Instance *, char *  word, int *  wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char *  buffer, int *  c))__ecereClass_SyntaxHighlighting->_vTbl[__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_Process]);
#line 7790 "obj/debug.linux/SyntaxHighlighting.c"


#line 737 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(this, word, wordLen, beforeEndOfLine, defaultTextColor, buffer, c) : (unsigned int)1;
#line 7795 "obj/debug.linux/SyntaxHighlighting.c"


#line 737 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7800 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 737 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
);

#line 7805 "obj/debug.linux/SyntaxHighlighting.c"


#line 738 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x1) >> 0)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x200) >> 9)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x100) >> 8)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x80) >> 7)))

#line 739 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 740 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(beforeEndOfLine && word[0] == '@' && *wordLen == 1)

#line 741 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 742 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char * s = word + 1;

#line 7823 "obj/debug.linux/SyntaxHighlighting.c"


#line 743 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
while(*s == '.' || isalnum(*s))

#line 743 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
s++;
#line 7831 "obj/debug.linux/SyntaxHighlighting.c"

#line 7833 "obj/debug.linux/SyntaxHighlighting.c"


#line 744 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*wordLen = s - word;
#line 7838 "obj/debug.linux/SyntaxHighlighting.c"


#line 745 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*c += (s - word) - 1;
#line 7843 "obj/debug.linux/SyntaxHighlighting.c"


#line 746 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->preprocessorColor;
#line 7848 "obj/debug.linux/SyntaxHighlighting.c"


#line 747 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7853 "obj/debug.linux/SyntaxHighlighting.c"

#line 7855 "obj/debug.linux/SyntaxHighlighting.c"


#line 748 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7860 "obj/debug.linux/SyntaxHighlighting.c"

#line 7862 "obj/debug.linux/SyntaxHighlighting.c"


#line 749 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return newTextColor;
#line 7867 "obj/debug.linux/SyntaxHighlighting.c"


#line 750 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7872 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereMethod_XMLSHL_Process(struct __ecereNameSpace__ecere__com__Instance * this, char * word, int * wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char * buffer, int * c)

#line 1011 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1011 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct XMLSHL * __ecerePointer_XMLSHL = (struct XMLSHL *)(this ? (((char *)this) + __ecereClass_XMLSHL->offset) : 0);

#line 7883 "obj/debug.linux/SyntaxHighlighting.c"

#line 1012 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int wasInString = ((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x80) >> 7));

#line 7888 "obj/debug.linux/SyntaxHighlighting.c"

#line 1013 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int newTextColor = ((unsigned int)((__ecerePointer_XMLSHL->xmlState & 0x4) >> 2)) ? ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->commentColor : (__extension__ (
#line 1013 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1013 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
unsigned int (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, char *  word, int *  wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char *  buffer, int *  c);

#line 7898 "obj/debug.linux/SyntaxHighlighting.c"


#line 1013 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod = ((unsigned int (*)(struct __ecereNameSpace__ecere__com__Instance *, char *  word, int *  wordLen, unsigned int beforeEndOfLine, unsigned int defaultTextColor, const char *  buffer, int *  c))__ecereClass_SyntaxHighlighting->_vTbl[__ecereVMethodID___ecereNameSpace__ecere__gui__controls__EditSyntaxHL_Process]);
#line 7903 "obj/debug.linux/SyntaxHighlighting.c"


#line 1013 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(this, word, wordLen, beforeEndOfLine, defaultTextColor, buffer, c) : (unsigned int)1;
#line 7908 "obj/debug.linux/SyntaxHighlighting.c"


#line 1013 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7913 "obj/debug.linux/SyntaxHighlighting.c"
)
#line 1013 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
);

#line 7918 "obj/debug.linux/SyntaxHighlighting.c"


#line 1015 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlStateBak = __ecerePointer_XMLSHL->xmlState;
#line 7923 "obj/debug.linux/SyntaxHighlighting.c"


#line 1017 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(!((unsigned int)((__ecerePointer_XMLSHL->xmlState & 0x4) >> 2)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x1) >> 0)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x200) >> 9)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x100) >> 8)) && !((unsigned int)((((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->currentState & 0x80) >> 7)) && !wasInString)

#line 1018 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1019 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(beforeEndOfLine && word[0] == '<' && *wordLen == 1)

#line 1020 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1021 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(word[1] == '!' && word[2] == '-' && word[3] == '-')

#line 1022 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1023 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = (__ecerePointer_XMLSHL->xmlState & ~0x4) | (((int)(1)) << 2);
#line 7946 "obj/debug.linux/SyntaxHighlighting.c"


#line 1024 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*c += 3 - *wordLen;
#line 7951 "obj/debug.linux/SyntaxHighlighting.c"


#line 1025 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*wordLen = 3;
#line 7956 "obj/debug.linux/SyntaxHighlighting.c"


#line 1026 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->commentColor;
#line 7961 "obj/debug.linux/SyntaxHighlighting.c"


#line 1027 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7966 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 1029 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1030 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = (__ecerePointer_XMLSHL->xmlState & ~0x1) | (((int)(1)) << 0);
#line 7975 "obj/debug.linux/SyntaxHighlighting.c"


#line 1031 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = (__ecerePointer_XMLSHL->xmlState & ~0x2) | (((int)(1)) << 1);
#line 7980 "obj/debug.linux/SyntaxHighlighting.c"


#line 1032 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7985 "obj/debug.linux/SyntaxHighlighting.c"

#line 7987 "obj/debug.linux/SyntaxHighlighting.c"


#line 1033 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 7992 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1034 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(beforeEndOfLine && word[0] == '>' && *wordLen == 1)

#line 1035 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1036 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = (__ecerePointer_XMLSHL->xmlState & ~0x1) | (((int)(0)) << 0);
#line 8003 "obj/debug.linux/SyntaxHighlighting.c"


#line 1037 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8008 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1038 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_XMLSHL->xmlState & 0x2) >> 1)))

#line 1039 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1040 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
char * s = word;

#line 8020 "obj/debug.linux/SyntaxHighlighting.c"


#line 1042 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(s[0] == '!' && s[1] == '-' && s[2] == '-')

#line 1043 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1044 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->commentColor;
#line 8031 "obj/debug.linux/SyntaxHighlighting.c"


#line 1045 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
s += 3;
#line 8036 "obj/debug.linux/SyntaxHighlighting.c"


#line 1046 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8041 "obj/debug.linux/SyntaxHighlighting.c"

else

#line 1048 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1049 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(s[0] == '?')

#line 1050 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = (__ecerePointer_XMLSHL->xmlState & ~0x1) | (((int)(0)) << 0);
#line 8053 "obj/debug.linux/SyntaxHighlighting.c"

#line 8055 "obj/debug.linux/SyntaxHighlighting.c"


#line 1052 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
while(isalnum(*s) || *s == '-' || *s == '_' || *s == ':')

#line 1053 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
s++;
#line 8063 "obj/debug.linux/SyntaxHighlighting.c"

#line 8065 "obj/debug.linux/SyntaxHighlighting.c"


#line 1054 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8070 "obj/debug.linux/SyntaxHighlighting.c"

#line 8072 "obj/debug.linux/SyntaxHighlighting.c"


#line 1055 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(s >= word + *wordLen)

#line 1056 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1057 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*c += (s - word) - *wordLen;
#line 8083 "obj/debug.linux/SyntaxHighlighting.c"


#line 1058 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*wordLen = s - word;
#line 8088 "obj/debug.linux/SyntaxHighlighting.c"


#line 1059 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = (((unsigned int)(__extension__ (
#line 1059 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1059 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Iterator __internalIterator =
{

#line 1059 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxColorScheme_Get_keywordColors(((struct SyntaxHighlighting * )(((char * )this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme), 0
}
#line 1059 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
;

#line 8106 "obj/debug.linux/SyntaxHighlighting.c"


#line 1059 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereMethod___ecereNameSpace__ecere__com__Iterator_Index(&__internalIterator, ((uint64)(0)), 0);
#line 8111 "obj/debug.linux/SyntaxHighlighting.c"


#line 1059 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
(unsigned int)(__ecereProp___ecereNameSpace__ecere__com__Iterator_Get_data(&__internalIterator));
#line 8116 "obj/debug.linux/SyntaxHighlighting.c"


#line 1059 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8121 "obj/debug.linux/SyntaxHighlighting.c"
))));
#line 8123 "obj/debug.linux/SyntaxHighlighting.c"


#line 1060 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8128 "obj/debug.linux/SyntaxHighlighting.c"

#line 8130 "obj/debug.linux/SyntaxHighlighting.c"


#line 1061 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(*s != '/')

#line 1062 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = (__ecerePointer_XMLSHL->xmlState & ~0x2) | (((int)(0)) << 1);
#line 8138 "obj/debug.linux/SyntaxHighlighting.c"

#line 8140 "obj/debug.linux/SyntaxHighlighting.c"


#line 1063 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8145 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1064 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_XMLSHL->xmlState & 0x1) >> 0)) && word[0] != '?' && word[0] != '=' && word[0] != '/')

#line 1065 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->preprocessorColor;
#line 8153 "obj/debug.linux/SyntaxHighlighting.c"

#line 8155 "obj/debug.linux/SyntaxHighlighting.c"

#line 8157 "obj/debug.linux/SyntaxHighlighting.c"

#line 8159 "obj/debug.linux/SyntaxHighlighting.c"

#line 8161 "obj/debug.linux/SyntaxHighlighting.c"


#line 1066 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8166 "obj/debug.linux/SyntaxHighlighting.c"

else 
#line 1067 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((unsigned int)((__ecerePointer_XMLSHL->xmlState & 0x4) >> 2)))

#line 1068 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1069 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
newTextColor = ((struct SyntaxColorScheme *)(((char *)((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->colorScheme + __ecereClass_SyntaxColorScheme->offset)))->commentColor;
#line 8177 "obj/debug.linux/SyntaxHighlighting.c"


#line 1070 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(word[0] == '-' && word[1] == '-' && word[2] == '>')

#line 1071 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1072 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*c += 3 - *wordLen;
#line 8188 "obj/debug.linux/SyntaxHighlighting.c"


#line 1073 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
*wordLen = 3;
#line 8193 "obj/debug.linux/SyntaxHighlighting.c"


#line 1074 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_XMLSHL->xmlState = (__ecerePointer_XMLSHL->xmlState & ~0x4) | (((int)(0)) << 2);
#line 8198 "obj/debug.linux/SyntaxHighlighting.c"


#line 1075 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8203 "obj/debug.linux/SyntaxHighlighting.c"

#line 8205 "obj/debug.linux/SyntaxHighlighting.c"


#line 1076 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8210 "obj/debug.linux/SyntaxHighlighting.c"

#line 8212 "obj/debug.linux/SyntaxHighlighting.c"

#line 8214 "obj/debug.linux/SyntaxHighlighting.c"


#line 1077 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return newTextColor;
#line 8219 "obj/debug.linux/SyntaxHighlighting.c"


#line 1078 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8224 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_MakeSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 546 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 546 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 514 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 514 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
".PHONY", ".SUFFIXES", ".DEFAULT", ".PRECIOUS", ".INTERMEDIATE", ".SECONDARY", ".SECONDEXPANSION", ".DELETE_ON_ERROR", ".IGNORE", ".LOW_RESOLUTION_TIME", ".LOW_RESOLUTION_TIME:", ".SILENT", ".EXPORT_ALL_VARIABLES", ".NOTPARALLEL", ".ONESHELL", ".POSIX", "all", "install", "install-html", "install-dvi", "install-pdf", "install-ps", "uninstall", "install-strip", "clean", "distclean", "mostlyclean", "maintainer-clean", "TAGS", "info", "dvi", "html", "pdf", "ps", "dist", "check", "installcheck", "installdirs", "cleantarget", "realclean", "test", "force", "objdir", "include", "ifdef", "ifndef", "ifeq", "ifneq", "else", "endif", "export", "unexport", "define", "endef", "undefine", "override", "private", "vpath", "echo", "cd", "touch", "cat", "cp", "cpr", "rm", "rmr", "mkdir", "rmdir", "for", "in", "do", "done", "subst", "patsubst", "strip", "findstring", "filter", "filter-out", "sort", "word", "wordlist", "words", "firstword", "lastword", "dir", "notdir", "suffix", "basename", "addsuffix", "addprefix", "join", "wildcard", "realpath", "abspath", "if", "or", "and", "foreach", "file", "call", "value", "eval", "origin", "flavor", "error", "warning", "info", "shell", "$@", "$%", "$<", "$?", "$^", "$+", "$*", "$0", "$1", "$2", "$3", "$4", "$5", "$6", "$7", "$8", "$9", "MAKEFILES", "VPATH", "SHELL", "MAKESHELL", "MAKE", "MAKE_VERSION", "MAKE_HOST", "MAKELEVEL", "MAKEFLAGS", "GNUMAKEFLAGS", "MAKECMDGOALS", "CURDIR", "SUFFIXES", ".LIBPATTERNS", "MAKEFILE_LIST", ".DEFAULT_GOAL", "MAKE_RESTARTS", "MAKE_TERMOUT", "MAKE_TERMERR", ".RECIPEPREFIX", ".VARIABLES", ".FEATURES", ".INCLUDE_DIRS", "VPATH"
}
#line 514 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 149, __ecereClass_String
}
#line 514 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8248 "obj/debug.linux/SyntaxHighlighting.c"


#line 546 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->hashTagComments = 1;
#line 8253 "obj/debug.linux/SyntaxHighlighting.c"


#line 546 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->allowDashInKeyword = 1;
#line 8258 "obj/debug.linux/SyntaxHighlighting.c"


#line 546 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8263 "obj/debug.linux/SyntaxHighlighting.c"


#line 546 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8268 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_CSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 554 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 554 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while", "bool", "false", "true", "__attribute__", "_stdcall", "__stdcall", "__stdcall__", "__declspec", "inline", "_inline", "__inline", "__inline__", "__typeof", "__extension__", "asm", "_asm", "__asm", "restrict", "__restrict__", "__restrict", "wchar_t", "int8_t", "int16_t", "int32_t", "int64_t", "uint8_t", "uint16_t", "uint32_t", "uint64_t", "size_t", "ssize_t", "#include", "#define", "#pragma", "#if", "#else", "#elif", "#ifdef", "#ifndef", "#endif", "#undef", "#line", "#cpu", "#error", "#warning"
}
#line 554 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 77, __ecereClass_String
}
#line 554 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8292 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_kwPrep(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 572 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 572 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"defined", "warning"
}
#line 572 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 2, __ecereClass_String
}
#line 572 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8311 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle = 1;
#line 8316 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine = 1;
#line 8321 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cNumbers = 1;
#line 8326 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cPrep = 1;
#line 8331 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->singleQuotes = 1;
#line 8336 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->allowHashInKeyword = 1;
#line 8341 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8346 "obj/debug.linux/SyntaxHighlighting.c"


#line 583 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8351 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_CXXSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 590 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 590 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 591 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 591 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"class", "friend", "compl", "new", "delete", "const_cast", "dynamic_cast", "reinterpret_cast", "explicit", "export", "mutable", "using", "namespace", "operator", "private", "protected", "public", "static_cast", "template", "this", "try", "throw", "catch", "typeid", "typename", "virtual", "not", "not_eq", "or", "or_eq", "xor", "xor_eq", "and", "and_eq", "bitand", "bitor"
}
#line 591 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 36, __ecereClass_String
}
#line 591 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8375 "obj/debug.linux/SyntaxHighlighting.c"


#line 590 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8380 "obj/debug.linux/SyntaxHighlighting.c"


#line 601 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8385 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_eCSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 609 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 609 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"class", "private", "public", "property", "import", "delete", "new", "new0", "renew", "renew0", "define", "get", "set", "remote", "dllexport", "dllimport", "stdcall", "subclass", "__on_register_module", "namespace", "using", "typed_object", "any_object", "incref", "register", "watch", "stopwatching", "firewatchers", "watchable", "class_designer", "class_fixed", "class_no_expansion", "isset", "class_default_property", "property_category", "class_data", "class_property", "virtual", "thisclass", "unichar", "dbtable", "dbindex", "database_open", "dbfield", "uint", "uint32", "uint16", "uint64", "bool", "byte", "int64", "uintptr", "intptr", "intsize", "uintsize", "this", "true", "false", "null", "value"
}
#line 609 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 60, __ecereClass_String
}
#line 609 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8409 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8414 "obj/debug.linux/SyntaxHighlighting.c"


#line 664 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8419 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_ObjCSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 671 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 671 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 671 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 671 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"#import"
}
#line 671 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 1, __ecereClass_String
}
#line 671 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8443 "obj/debug.linux/SyntaxHighlighting.c"


#line 671 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8448 "obj/debug.linux/SyntaxHighlighting.c"


#line 671 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8453 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_JavaSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 678 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 678 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 679 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 679 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"abstract", "assert", "boolean", "byte", "catch", "class", "extends", "final", "finally", "implements", "import", "instanceof", "interface", "native", "new", "package", "private", "protected", "public", "strictfp", "super", "synchronized", "this", "throw", "throws", "transient", "try", "volatile", "null"
}
#line 679 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 29, __ecereClass_String
}
#line 679 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8477 "obj/debug.linux/SyntaxHighlighting.c"


#line 678 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8482 "obj/debug.linux/SyntaxHighlighting.c"


#line 688 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8487 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_CSharpSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 695 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 695 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 696 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 696 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"abstract", "as", "base", "byte", "catch", "checked", "class", "decimal", "delegate", "event", "explicit", "finally", "fixed", "foreach", "implicit", "in", "interface", "internal", "is", "lock", "namespace", "new", "null", "object", "operator", "out", "override", "params", "private", "protected", "public", "readonly", "ref", "sbyte", "sealed", "stackalloc", "string", "this", "throw", "try", "typeof", "uint", "ulong", "unchecked", "unsafe", "ushort", "using", "virtual", "volatile", "add", "alias", "ascending", "async", "await", "descending", "dynamic", "from", "get", "global", "group", "into", "join", "let", "orderby", "partial", "remove", "select", "set", "value", "var", "where", "yield"
}
#line 696 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 72, __ecereClass_String
}
#line 696 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8511 "obj/debug.linux/SyntaxHighlighting.c"


#line 695 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8516 "obj/debug.linux/SyntaxHighlighting.c"


#line 710 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8521 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_PythonSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 718 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 718 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"and", "as", "assert", "break", "class", "continue", "def", "del", "elif", "else", "except", "exec", "finally", "for", "from", "global", "if", "import", "in", "is", "lambda", "not", "or", "pass", "print", "raise", "return", "try", "while", "with", "yield", "True", "False", "None", "self", "super", "isinstance", "getattr", "type", "__init__", "__file__", "__name__", "__neg__", "__int__", "__long__", "__float__", "__truediv__", "__rtruediv__", "__mul__", "__rmul__", "__add__", "__radd__", "__sub__", "__rsub__", "__lt__", "__gt__", "__le__", "__ge__", "__ne__", "__eq__", "__new__", "__metaclass__", "__getitem__", "__len__", "__bases__"
}
#line 718 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 65, __ecereClass_String
}
#line 718 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8545 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->hashTagComments = 1;
#line 8550 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->singleQuotes = 1;
#line 8555 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8560 "obj/debug.linux/SyntaxHighlighting.c"


#line 750 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8565 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_SwiftSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 757 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 757 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 758 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 758 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"associatedtype", "class", "deinit", "enum", "extension", "func", "import", "init", "inout", "internal", "let", "operator", "private", "protocol", "public", "static", "struct", "subscript", "typealias", "var", "break", "case", "continue", "default", "defer", "do", "else", "fallthrough", "for", "guard", "if", "in", "repeat", "return", "switch", "where", "while", "as", "catch", "dynamicType", "false", "is", "nil", "rethrows", "super", "self", "Self", "throw", "throws", "true", "try", "#column", "#file", "#function", "#line", "_", "#available", "#column", "#else#elseif", "#endif", "#file", "#function", "#if", "#line", "#selector", "associativity", "convenience", "dynamic", "didSet", "final", "get", "infix", "indirect", "lazy", "left", "mutating", "none", "nonmutating", "optional", "override", "postfix", "precedence", "prefix", "Protocol", "required", "right", "set", "Type", "unowned", "weak", "willSet", "true", "false", "nil"
}
#line 758 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 94, __ecereClass_String
}
#line 758 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8589 "obj/debug.linux/SyntaxHighlighting.c"


#line 757 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8594 "obj/debug.linux/SyntaxHighlighting.c"


#line 779 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8599 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_RustSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 796 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 796 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 787 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 787 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"abstract", "alignof", "as", "become", "box", "break", "const", "continue", "crate", "do", "else", "enum", "extern", "false", "final", "fn", "for", "if", "impl", "in", "let", "loop", "macro", "match", "mod", "move", "mut", "offsetof", "override", "priv", "proc", "pub", "pure", "ref", "return", "Self", "self", "sizeof", "static", "struct", "super", "trait", "true", "type", "typeof", "unsafe", "unsized", "use", "virtual", "where", "while", "yield"
}
#line 787 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 52, __ecereClass_String
}
#line 787 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8623 "obj/debug.linux/SyntaxHighlighting.c"


#line 796 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle = 1;
#line 8628 "obj/debug.linux/SyntaxHighlighting.c"


#line 796 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine = 1;
#line 8633 "obj/debug.linux/SyntaxHighlighting.c"


#line 796 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8638 "obj/debug.linux/SyntaxHighlighting.c"


#line 796 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8643 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_GoSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 811 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 811 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 804 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 804 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"break", "case", "chan", "const", "continue", "default", "defer", "else", "fallthrough", "for", "func", "go", "goto", "if", "import", "interface", "package", "map", "range", "return", "select", "switch", "struct", "type", "var"
}
#line 804 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 25, __ecereClass_String
}
#line 804 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8667 "obj/debug.linux/SyntaxHighlighting.c"


#line 811 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle = 1;
#line 8672 "obj/debug.linux/SyntaxHighlighting.c"


#line 811 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine = 1;
#line 8677 "obj/debug.linux/SyntaxHighlighting.c"


#line 811 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8682 "obj/debug.linux/SyntaxHighlighting.c"


#line 811 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8687 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_PHPSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 841 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 841 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 819 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 819 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"__halt_compiler()", "abstract", "and", "array()", "as", "break", "callable", "case", "catch", "class", "clone", "const", "continue", "declare", "default", "die()", "do", "echo", "else", "elseif", "empty()", "enddeclare", "endfor", "endforeach", "endif", "endswitch", "endwhile", "eval()", "exit()", "extends", "final", "finally", "for", "foreach", "function", "global", "goto", "if", "implements", "include", "include_once", "instanceof", "insteadof", "interface", "isset()", "list()", "namespace", "new", "or", "print", "private", "protected", "public", "require", "require_once", "return", "static", "switch", "throw", "trait", "try", "unset()", "use", "var", "while", "xor", "yield", "__CLASS__", "__DIR__", "__FILE__", "__FUNCTION__", "__LINE__", "__METHOD__", "__NAMESPACE__", "__TRAIT__"
}
#line 819 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 75, __ecereClass_String
}
#line 819 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8711 "obj/debug.linux/SyntaxHighlighting.c"


#line 841 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine = 1;
#line 8716 "obj/debug.linux/SyntaxHighlighting.c"


#line 841 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle = 1;
#line 8721 "obj/debug.linux/SyntaxHighlighting.c"


#line 841 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->hashTagComments = 1;
#line 8726 "obj/debug.linux/SyntaxHighlighting.c"


#line 841 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->singleQuotes = 1;
#line 8731 "obj/debug.linux/SyntaxHighlighting.c"


#line 841 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8736 "obj/debug.linux/SyntaxHighlighting.c"


#line 841 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8741 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_JavaScriptSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 868 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 868 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 849 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 849 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"break", "case", "catch", "class", "const", "continue", "debugger", "default", "delete", "do", "else", "export", "extends", "finally", "for", "function", "if", "import", "in", "instanceof", "new", "return", "super", "super", "this", "throw", "try", "typeof", "var", "void", "while", "with", "yield", "enum", "implements", "interface", "let", "package", "private", "protected", "public", "static", "await", "abstract", "boolean", "byte", "char", "double", "final", "float", "goto", "int", "long", "native", "short", "synchronized", "throws", "transient", "volatile"
}
#line 849 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 59, __ecereClass_String
}
#line 849 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8765 "obj/debug.linux/SyntaxHighlighting.c"


#line 868 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle = 1;
#line 8770 "obj/debug.linux/SyntaxHighlighting.c"


#line 868 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cNumbers = 1;
#line 8775 "obj/debug.linux/SyntaxHighlighting.c"


#line 868 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine = 1;
#line 8780 "obj/debug.linux/SyntaxHighlighting.c"


#line 868 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->singleQuotes = 1;
#line 8785 "obj/debug.linux/SyntaxHighlighting.c"


#line 868 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8790 "obj/debug.linux/SyntaxHighlighting.c"


#line 868 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8795 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_GLSLSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 876 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 876 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"attribute", "const", "uniform", "varying", "layout", "centroid", "flat", "smooth", "noperspective", "break", "continue", "do", "for", "while", "switch", "case", "default", "if", "else", "in", "out", "inout", "float", "int", "void", "bool", "true", "false", "invariant", "discard", "return", "mat2", "mat3", "mat4", "mat2x2", "mat2x3", "mat2x4", "mat3x2", "mat3x3", "mat3x4", "mat4x2", "mat4x3", "mat4x4", "vec2", "vec3", "vec4", "ivec2", "ivec3", "ivec4", "bvec2", "bvec3", "bvec4", "uint", "uvec2", "uvec3", "uvec4", "lowp", "mediump", "highp", "precision", "sampler1D", "sampler2D", "sampler3D", "samplerCube", "sampler1DShadow", "sampler2DShadow", "samplerCubeShadow", "sampler1DArray", "sampler2DArray", "sampler1DArrayShadow", "sampler2DArrayShadow", "isampler1D", "isampler2D", "isampler3D", "isamplerCube", "isampler1DArray", "isampler2DArray", "usampler1D", "usampler2D", "usampler3D", "usamplerCube", "usampler1DArray", "usampler2DArray", "sampler2DRect", "sampler2DRectShadow", "isampler2DRect", "usampler2DRect", "samplerBuffer", "isamplerBuffer", "usamplerBuffer", "struct", "common", "partition", "active", "asm", "class", "union", "enum", "typedef", "template", "this", "packed", "goto", "inline", "noinline", "volatile", "public", "static", "extern", "external", "interface", "long", "short", "double", "half", "fixed", "unsigned", "superp", "input", "output", "hvec2", "hvec3", "hvec4", "dvec2", "dvec3", "dvec4", "fvec2", "fvec3", "fvec4", "sampler2DRect", "sampler3DRect", "sampler2DRectShadow", "samplerBuffer", "filter", "image1D", "image2D", "image3D", "imageCube", "iimage1D", "iimage2D", "iimage3D", "iimageCube", "uimage1D", "uimage2D", "uimage3D", "uimageCube", "image1DArray", "image2DArray", "iimage1DArray", "iimage2DArray", "uimage1DArray", "uimage2DArray", "image1DShadow", "image2DShadow", "image1DArrayShadow", "image2DArrayShadow", "imageBuffer", "iimageBuffer", "uimageBuffer", "sizeof", "cast", "namespace", "using", "row_major", "#include", "#define", "#if", "#else", "#elif", "#ifdef", "#ifndef", "#endif", "#undef", "#line"
}
#line 876 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 174, __ecereClass_String
}
#line 876 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8819 "obj/debug.linux/SyntaxHighlighting.c"


#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle = 1;
#line 8824 "obj/debug.linux/SyntaxHighlighting.c"


#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cNumbers = 1;
#line 8829 "obj/debug.linux/SyntaxHighlighting.c"


#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine = 1;
#line 8834 "obj/debug.linux/SyntaxHighlighting.c"


#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cPrep = 1;
#line 8839 "obj/debug.linux/SyntaxHighlighting.c"


#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->singleQuotes = 1;
#line 8844 "obj/debug.linux/SyntaxHighlighting.c"


#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->allowHashInKeyword = 1;
#line 8849 "obj/debug.linux/SyntaxHighlighting.c"


#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8854 "obj/debug.linux/SyntaxHighlighting.c"


#line 936 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8859 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_BisonFlexSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 952 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 952 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 953 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 953 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"%debug", "%union", "%type"
}
#line 953 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 3, __ecereClass_String
}
#line 953 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8883 "obj/debug.linux/SyntaxHighlighting.c"


#line 952 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8888 "obj/debug.linux/SyntaxHighlighting.c"


#line 955 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8893 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_BashSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 973 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 973 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 963 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 963 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"case", "do", "done", "elif", "else", "esac", "fi", "for", "function", "if", "in", "select", "then", "time", "until", "while", "echo", "printf", "read", "cd", "pwd", "pushd", "popd", "dirs", "let", "eval", "set", "unset", "export", "declare", "typeset", "readonly", "getopts", "source", "exit", "exec", "shopt", "caller", "true", "false", "type", "hash", "bind", "ln", "chmod", "cd", "clear", "diff", "comm", "cmp", "cp", "rm", "ls", "exit", "grep", "mkdir", "rmdir", "more", "mv", "sort", "date", "cat", "touch"
}
#line 963 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 63, __ecereClass_String
}
#line 963 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8917 "obj/debug.linux/SyntaxHighlighting.c"


#line 973 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->hashTagComments = 1;
#line 8922 "obj/debug.linux/SyntaxHighlighting.c"


#line 973 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->singleQuotes = 1;
#line 8927 "obj/debug.linux/SyntaxHighlighting.c"


#line 973 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8932 "obj/debug.linux/SyntaxHighlighting.c"


#line 973 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8937 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_BatchSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 980 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 980 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 981 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 981 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"rem", "not", "nul", "echo", "off", "for", "in", "do", "goto", "pause", "choice", "if", "exist", "call", "command", "cmd", "set", "shift", "sgn", "errorlevel", "con", "prn", "lpt1", "com1", "assign", "attrib", "cd", "chdir", "cls", "comp", "copy", "del", "deltree", "dir", "erase", "exit", "fc", "find", "md", "mkdir", "more", "move", "path", "ren", "rename", "rd", "rmdir", "sort", "time", "type", "xcopy"
}
#line 981 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 51, __ecereClass_String
}
#line 981 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8961 "obj/debug.linux/SyntaxHighlighting.c"


#line 980 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 8966 "obj/debug.linux/SyntaxHighlighting.c"


#line 988 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 8971 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_ECONSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 1222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 1218 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 1218 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"false", "true", "null"
}
#line 1218 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 3, __ecereClass_String
}
#line 1218 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 8995 "obj/debug.linux/SyntaxHighlighting.c"


#line 1222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle = 1;
#line 9000 "obj/debug.linux/SyntaxHighlighting.c"


#line 1222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cNumbers = 1;
#line 9005 "obj/debug.linux/SyntaxHighlighting.c"


#line 1222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine = 1;
#line 9010 "obj/debug.linux/SyntaxHighlighting.c"


#line 1222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->singleQuotes = 1;
#line 9015 "obj/debug.linux/SyntaxHighlighting.c"


#line 1222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 9020 "obj/debug.linux/SyntaxHighlighting.c"


#line 1222 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9025 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_DiffSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__attribute__((unused)) struct DiffSHL * __ecerePointer_DiffSHL = (struct DiffSHL *)(this ? (((char *)this) + __ecereClass_DiffSHL->offset) : 0);

#line 9036 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 1235 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 1235 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"diff", "index"
}
#line 1235 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 2, __ecereClass_String
}
#line 1235 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 9055 "obj/debug.linux/SyntaxHighlighting.c"


#line 1239 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1240 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_DiffSHL->diffColors[1] = 0xFF00LL;
#line 9063 "obj/debug.linux/SyntaxHighlighting.c"


#line 1241 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_DiffSHL->diffColors[2] = 0xFF6347LL;
#line 9068 "obj/debug.linux/SyntaxHighlighting.c"


#line 1242 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_DiffSHL->diffColors[4] = 0x8000LL;
#line 9073 "obj/debug.linux/SyntaxHighlighting.c"


#line 1243 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_DiffSHL->diffColors[5] = 0xDC143CLL;
#line 9078 "obj/debug.linux/SyntaxHighlighting.c"


#line 1244 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePointer_DiffSHL->diffColors[3] = 0xFFFFLL;
#line 9083 "obj/debug.linux/SyntaxHighlighting.c"


#line 1245 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9088 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 9093 "obj/debug.linux/SyntaxHighlighting.c"


#line 1291 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9098 "obj/debug.linux/SyntaxHighlighting.c"


unsigned int __ecereConstructor_SQLSHL(struct __ecereNameSpace__ecere__com__Instance * this)

#line 1318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_Set_keywords(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 1299 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (const char * [])
{

#line 1299 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
"ABORT", "ACTION", "ADD", "AFTER", "ALL", "ALTER", "ANALYZE", "AND", "AS", "ASC", "ATTACH", "AUTOINCREMENT", "BEFORE", "BEGIN", "BETWEEN", "BY", "CASCADE", "CASE", "CAST", "CHECK", "COLLATE", "COLUMN", "COMMIT", "CONFLICT", "CONSTRAINT", "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP", "DATABASE", "DEFAULT", "DEFERRABLE", "DEFERRED", "DELETE", "DESC", "DETACH", "DISTINCT", "DROP", "EACH", "ELSE", "END", "ESCAPE", "EXCEPT", "EXCLUSIVE", "EXISTS", "EXPLAIN", "FAIL", "FOR", "FOREIGN", "FROM", "FULL", "GLOB", "GROUP", "HAVING", "IF", "IGNORE", "IMMEDIATE", "IN", "INDEX", "INDEXED", "INITIALLY", "INNER", "INSERT", "INSTEAD", "INTERSECT", "INTO", "IS", "ISNULL", "JOIN", "KEY", "LEFT", "LIKE", "LIMIT", "MATCH", "NATURAL", "NO", "NOT", "NOTNULL", "NULL", "OF", "OFFSET", "ON", "OR", "ORDER", "OUTER", "PLAN", "PRAGMA", "PRIMARY", "QUERY", "RAISE", "RECURSIVE", "REFERENCES", "REGEXP", "REINDEX", "RELEASE", "RENAME", "REPLACE", "RESTRICT", "RIGHT", "ROLLBACK", "ROW", "SAVEPOINT", "SELECT", "SET", "TABLE", "TEMP", "TEMPORARY", "THEN", "TO", "TRANSACTION", "TRIGGER", "UNION", "UNIQUE", "UPDATE", "USING", "VACUUM", "VALUES", "VIEW", "VIRTUAL", "WHEN", "WHERE", "WITH", "WITHOUT", "abort", "action", "add", "after", "all", "alter", "analyze", "and", "as", "asc", "attach", "autoincrement", "before", "begin", "between", "by", "cascade", "case", "cast", "check", "collate", "column", "commit", "conflict", "constraint", "create", "cross", "current_date", "current_time", "current_timestamp", "database", "default", "deferrable", "deferred", "delete", "desc", "detach", "distinct", "drop", "each", "else", "end", "escape", "except", "exclusive", "exists", "explain", "fail", "for", "foreign", "from", "full", "glob", "group", "having", "if", "ignore", "immediate", "in", "index", "indexed", "initially", "inner", "insert", "instead", "intersect", "into", "is", "isnull", "join", "key", "left", "like", "limit", "match", "natural", "no", "not", "notnull", "null", "of", "offset", "on", "or", "order", "outer", "plan", "pragma", "primary", "query", "raise", "recursive", "references", "regexp", "reindex", "release", "rename", "replace", "restrict", "right", "rollback", "row", "savepoint", "select", "set", "table", "temp", "temporary", "then", "to", "transaction", "trigger", "union", "unique", "update", "using", "vacuum", "values", "view", "virtual", "when", "where", "with", "without"
}
#line 1299 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
, 248, __ecereClass_String
}
#line 1299 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
));
#line 9122 "obj/debug.linux/SyntaxHighlighting.c"


#line 1318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cppSingle = 1;
#line 9127 "obj/debug.linux/SyntaxHighlighting.c"


#line 1318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->hashTagComments = 1;
#line 9132 "obj/debug.linux/SyntaxHighlighting.c"


#line 1318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->cMultiLine = 1;
#line 9137 "obj/debug.linux/SyntaxHighlighting.c"


#line 1318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
((struct SyntaxHighlighting *)(((char *)this + __ecereClass_SyntaxHighlighting->offset)))->singleQuotes = 1;
#line 9142 "obj/debug.linux/SyntaxHighlighting.c"


#line 1318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
return 1;
#line 9147 "obj/debug.linux/SyntaxHighlighting.c"


#line 1318 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9152 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereUnregisterModule_SyntaxHighlighting(struct __ecereNameSpace__ecere__com__Instance * module)

#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePropM_SyntaxHighlighting_keywords = (void *)0;
#line 9163 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePropM_SyntaxHighlighting_kwPrep = (void *)0;
#line 9168 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePropM_SyntaxHighlighting_syntaxColorScheme = (void *)0;
#line 9173 "obj/debug.linux/SyntaxHighlighting.c"


#line 1360 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9178 "obj/debug.linux/SyntaxHighlighting.c"


void __ecereRegisterModule_SyntaxHighlighting(struct __ecereNameSpace__ecere__com__Instance * module)

#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 9189 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(2, "SyntaxState", "int", 0, 0, (void *)0, (void *)0, module, 2, 1);
#line 9194 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_SyntaxState = class;
#line 9202 "obj/debug.linux/SyntaxHighlighting.c"

#line 9204 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "inMultiLineComment", "bool", 1, 0, 2);
#line 9209 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "inPrep", "bool", 1, 1, 2);
#line 9214 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "escaped", "bool", 1, 2, 2);
#line 9219 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "continuedSingleLineComment", "bool", 1, 3, 2);
#line 9224 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "wasInMultiLine", "bool", 1, 4, 2);
#line 9229 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "continuedString", "bool", 1, 5, 2);
#line 9234 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "continuedQuotes", "bool", 1, 6, 2);
#line 9239 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "inString", "bool", 1, 7, 2);
#line 9244 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "inQuotes", "bool", 1, 8, 2);
#line 9249 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "inSingleLineComment", "bool", 1, 9, 2);
#line 9254 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "lastWasStar", "bool", 1, 10, 2);
#line 9259 "obj/debug.linux/SyntaxHighlighting.c"


#line 1346 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "firstWord", "bool", 1, 11, 2);
#line 9264 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "SyntaxHighlighting", "ecere::gui::controls::EditSyntaxHL", sizeof(struct SyntaxHighlighting), sizeof(struct __ecereClassData_SyntaxHighlighting), (void *)__ecereConstructor_SyntaxHighlighting, (void *)__ecereDestructor_SyntaxHighlighting, module, 1, 1);
#line 9269 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_SyntaxHighlighting = class;
#line 9277 "obj/debug.linux/SyntaxHighlighting.c"

#line 9279 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "InitDraw", 0, __ecereMethod_SyntaxHighlighting_InitDraw, 1);
#line 9284 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "CanImpactOtherLines", 0, __ecereMethod_SyntaxHighlighting_CanImpactOtherLines, 1);
#line 9289 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "GotSpace", 0, __ecereMethod_SyntaxHighlighting_GotSpace, 1);
#line 9294 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "ResetState", 0, __ecereMethod_SyntaxHighlighting_ResetState, 1);
#line 9299 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "Process", 0, __ecereMethod_SyntaxHighlighting_Process, 1);
#line 9304 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "StartLine", 0, __ecereMethod_SyntaxHighlighting_StartLine, 1);
#line 9309 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "NextLine", 0, __ecereMethod_SyntaxHighlighting_NextLine, 1);
#line 9314 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "ParseWord", 0, __ecereMethod_SyntaxHighlighting_ParseWord, 1);
#line 9319 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "FigureStartSyntaxStates", 0, __ecereMethod_SyntaxHighlighting_FigureStartSyntaxStates, 1);
#line 9324 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePropM_SyntaxHighlighting_keywords = __ecereNameSpace__ecere__com__eClass_AddProperty(class, "keywords", "ecere::com::Container<const String>", __ecereProp_SyntaxHighlighting_Set_keywords, 0, 2);
#line 9329 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application)

#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_keywords = __ecerePropM_SyntaxHighlighting_keywords, __ecerePropM_SyntaxHighlighting_keywords = (void *)0;
#line 9337 "obj/debug.linux/SyntaxHighlighting.c"

#line 9339 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePropM_SyntaxHighlighting_kwPrep = __ecereNameSpace__ecere__com__eClass_AddProperty(class, "kwPrep", "ecere::com::Container<const String>", __ecereProp_SyntaxHighlighting_Set_kwPrep, 0, 2);
#line 9344 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application)

#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_kwPrep = __ecerePropM_SyntaxHighlighting_kwPrep, __ecerePropM_SyntaxHighlighting_kwPrep = (void *)0;
#line 9352 "obj/debug.linux/SyntaxHighlighting.c"

#line 9354 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecerePropM_SyntaxHighlighting_syntaxColorScheme = __ecereNameSpace__ecere__com__eClass_AddProperty(class, "syntaxColorScheme", "SyntaxColorScheme", __ecereProp_SyntaxHighlighting_Set_syntaxColorScheme, 0, 2);
#line 9359 "obj/debug.linux/SyntaxHighlighting.c"


#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application)

#line 387 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereProp_SyntaxHighlighting_syntaxColorScheme = __ecerePropM_SyntaxHighlighting_syntaxColorScheme, __ecerePropM_SyntaxHighlighting_syntaxColorScheme = (void *)0;
#line 9367 "obj/debug.linux/SyntaxHighlighting.c"

#line 9369 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
#line 9374 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddClassProperty(class, "extensions", "const char **", __ecereClassProp_SyntaxHighlighting_Set_extensions, __ecereClassProp_SyntaxHighlighting_Get_extensions);
#line 9379 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "MakeSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_MakeSHL, (void *)0, module, 2, 1);
#line 9384 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_MakeSHL = class;
#line 9392 "obj/debug.linux/SyntaxHighlighting.c"

#line 9394 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "CSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_CSHL, (void *)0, module, 2, 1);
#line 9399 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_CSHL = class;
#line 9407 "obj/debug.linux/SyntaxHighlighting.c"

#line 9409 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "CXXSHL", "CSHL", 0, 0, (void *)__ecereConstructor_CXXSHL, (void *)0, module, 2, 1);
#line 9414 "obj/debug.linux/SyntaxHighlighting.c"


#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_CXXSHL = class;
#line 9422 "obj/debug.linux/SyntaxHighlighting.c"

#line 9424 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "eCSHL", "CSHL", 0, 0, (void *)__ecereConstructor_eCSHL, (void *)0, module, 2, 1);
#line 9429 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_eCSHL = class;
#line 9437 "obj/debug.linux/SyntaxHighlighting.c"

#line 9439 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "Process", 0, __ecereMethod_eCSHL_Process, 1);
#line 9444 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "ObjCSHL", "CSHL", 0, 0, (void *)__ecereConstructor_ObjCSHL, (void *)0, module, 2, 1);
#line 9449 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_ObjCSHL = class;
#line 9457 "obj/debug.linux/SyntaxHighlighting.c"

#line 9459 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "JavaSHL", "CSHL", 0, 0, (void *)__ecereConstructor_JavaSHL, (void *)0, module, 2, 1);
#line 9464 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_JavaSHL = class;
#line 9472 "obj/debug.linux/SyntaxHighlighting.c"

#line 9474 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "CSharpSHL", "CSHL", 0, 0, (void *)__ecereConstructor_CSharpSHL, (void *)0, module, 2, 1);
#line 9479 "obj/debug.linux/SyntaxHighlighting.c"


#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 629 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_CSharpSHL = class;
#line 9487 "obj/debug.linux/SyntaxHighlighting.c"

#line 9489 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "PythonSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_PythonSHL, (void *)0, module, 2, 1);
#line 9494 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_PythonSHL = class;
#line 9502 "obj/debug.linux/SyntaxHighlighting.c"

#line 9504 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "Process", 0, __ecereMethod_PythonSHL_Process, 1);
#line 9509 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "SwiftSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_SwiftSHL, (void *)0, module, 2, 1);
#line 9514 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_SwiftSHL = class;
#line 9522 "obj/debug.linux/SyntaxHighlighting.c"

#line 9524 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "RustSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_RustSHL, (void *)0, module, 2, 1);
#line 9529 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_RustSHL = class;
#line 9537 "obj/debug.linux/SyntaxHighlighting.c"

#line 9539 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "GoSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_GoSHL, (void *)0, module, 2, 1);
#line 9544 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_GoSHL = class;
#line 9552 "obj/debug.linux/SyntaxHighlighting.c"

#line 9554 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "PHPSHL", "XMLSHL", 0, 0, (void *)__ecereConstructor_PHPSHL, (void *)0, module, 2, 1);
#line 9559 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_PHPSHL = class;
#line 9567 "obj/debug.linux/SyntaxHighlighting.c"

#line 9569 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "JavaScriptSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_JavaScriptSHL, (void *)0, module, 2, 1);
#line 9574 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_JavaScriptSHL = class;
#line 9582 "obj/debug.linux/SyntaxHighlighting.c"

#line 9584 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "GLSLSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_GLSLSHL, (void *)0, module, 2, 1);
#line 9589 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_GLSLSHL = class;
#line 9597 "obj/debug.linux/SyntaxHighlighting.c"

#line 9599 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "CSSSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_CSSSHL, (void *)0, module, 2, 1);
#line 9604 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_CSSSHL = class;
#line 9612 "obj/debug.linux/SyntaxHighlighting.c"

#line 9614 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "BisonFlexSHL", "CSHL", 0, 0, (void *)__ecereConstructor_BisonFlexSHL, (void *)0, module, 2, 1);
#line 9619 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_BisonFlexSHL = class;
#line 9627 "obj/debug.linux/SyntaxHighlighting.c"

#line 9629 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "BashSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_BashSHL, (void *)0, module, 2, 1);
#line 9634 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_BashSHL = class;
#line 9642 "obj/debug.linux/SyntaxHighlighting.c"

#line 9644 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "BatchSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_BatchSHL, (void *)0, module, 2, 1);
#line 9649 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_BatchSHL = class;
#line 9657 "obj/debug.linux/SyntaxHighlighting.c"

#line 9659 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(2, "SyntaxXMLState", "int", 0, 0, (void *)0, (void *)0, module, 2, 1);
#line 9664 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_SyntaxXMLState = class;
#line 9672 "obj/debug.linux/SyntaxHighlighting.c"

#line 9674 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "inTag", "bool", 1, 0, 2);
#line 9679 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "tagWord", "bool", 1, 1, 2);
#line 9684 "obj/debug.linux/SyntaxHighlighting.c"


#line 735 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddBitMember(class, "xmlComment", "bool", 1, 2, 2);
#line 9689 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "XMLSHL", "SyntaxHighlighting", sizeof(struct XMLSHL), 0, (void *)0, (void *)0, module, 2, 1);
#line 9694 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_XMLSHL = class;
#line 9702 "obj/debug.linux/SyntaxHighlighting.c"

#line 9704 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "InitDraw", 0, __ecereMethod_XMLSHL_InitDraw, 1);
#line 9709 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "CanImpactOtherLines", 0, __ecereMethod_XMLSHL_CanImpactOtherLines, 1);
#line 9714 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "GotSpace", 0, __ecereMethod_XMLSHL_GotSpace, 1);
#line 9719 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "ResetState", 0, __ecereMethod_XMLSHL_ResetState, 1);
#line 9724 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "Process", 0, __ecereMethod_XMLSHL_Process, 1);
#line 9729 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "FigureStartSyntaxStates", 0, __ecereMethod_XMLSHL_FigureStartSyntaxStates, 1);
#line 9734 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, 4, 2);
#line 9739 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "ECONSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_ECONSHL, (void *)0, module, 2, 1);
#line 9744 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_ECONSHL = class;
#line 9752 "obj/debug.linux/SyntaxHighlighting.c"

#line 9754 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "ConfigSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_ConfigSHL, (void *)0, module, 2, 1);
#line 9759 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_ConfigSHL = class;
#line 9767 "obj/debug.linux/SyntaxHighlighting.c"

#line 9769 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "DiffSHLLineMode", 0, 0, 0, (void *)0, (void *)0, module, 2, 1);
#line 9774 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_DiffSHLLineMode = class;
#line 9782 "obj/debug.linux/SyntaxHighlighting.c"

#line 9784 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "normal", 0);
#line 9789 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "addFile", 1);
#line 9794 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "remFile", 2);
#line 9799 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "pos", 3);
#line 9804 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "add", 4);
#line 9809 "obj/debug.linux/SyntaxHighlighting.c"


#line 1207 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "rem", 5);
#line 9814 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "DiffSHL", "SyntaxHighlighting", sizeof(struct DiffSHL), 0, (void *)__ecereConstructor_DiffSHL, (void *)0, module, 2, 1);
#line 9819 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_DiffSHL = class;
#line 9827 "obj/debug.linux/SyntaxHighlighting.c"

#line 9829 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "Process", 0, __ecereMethod_DiffSHL_Process, 1);
#line 9834 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddMethod(class, "StartLine", 0, __ecereMethod_DiffSHL_StartLine, 1);
#line 9839 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, 4, 2);
#line 9844 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "SQLSHL", "SyntaxHighlighting", 0, 0, (void *)__ecereConstructor_SQLSHL, (void *)0, module, 2, 1);
#line 9849 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereClass_SQLSHL = class;
#line 9857 "obj/debug.linux/SyntaxHighlighting.c"

#line 9859 "obj/debug.linux/SyntaxHighlighting.c"


#line 1255 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SHLFromFileName", "SyntaxHighlighting SHLFromFileName(const String fileName)", SHLFromFileName, module, 2);
#line 9864 "obj/debug.linux/SyntaxHighlighting.c"


#line 512 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 512 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "MakeSHL");

#line 9873 "obj/debug.linux/SyntaxHighlighting.c"


#line 512 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)makeExtensions);
#line 9878 "obj/debug.linux/SyntaxHighlighting.c"


#line 512 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9883 "obj/debug.linux/SyntaxHighlighting.c"


#line 552 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 552 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "CSHL");

#line 9892 "obj/debug.linux/SyntaxHighlighting.c"


#line 552 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)cExtensions);
#line 9897 "obj/debug.linux/SyntaxHighlighting.c"


#line 552 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9902 "obj/debug.linux/SyntaxHighlighting.c"


#line 589 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 589 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "CXXSHL");

#line 9911 "obj/debug.linux/SyntaxHighlighting.c"


#line 589 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)cxxExtensions);
#line 9916 "obj/debug.linux/SyntaxHighlighting.c"


#line 589 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9921 "obj/debug.linux/SyntaxHighlighting.c"


#line 607 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 607 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "eCSHL");

#line 9930 "obj/debug.linux/SyntaxHighlighting.c"


#line 607 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)eCExtensions);
#line 9935 "obj/debug.linux/SyntaxHighlighting.c"


#line 607 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9940 "obj/debug.linux/SyntaxHighlighting.c"


#line 670 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 670 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ObjCSHL");

#line 9949 "obj/debug.linux/SyntaxHighlighting.c"


#line 670 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)objCExtensions);
#line 9954 "obj/debug.linux/SyntaxHighlighting.c"


#line 670 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9959 "obj/debug.linux/SyntaxHighlighting.c"


#line 677 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 677 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "JavaSHL");

#line 9968 "obj/debug.linux/SyntaxHighlighting.c"


#line 677 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)javaExtensions);
#line 9973 "obj/debug.linux/SyntaxHighlighting.c"


#line 677 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9978 "obj/debug.linux/SyntaxHighlighting.c"


#line 694 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 694 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "CSharpSHL");

#line 9987 "obj/debug.linux/SyntaxHighlighting.c"


#line 694 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)csExtensions);
#line 9992 "obj/debug.linux/SyntaxHighlighting.c"


#line 694 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 9997 "obj/debug.linux/SyntaxHighlighting.c"


#line 716 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 716 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "PythonSHL");

#line 10006 "obj/debug.linux/SyntaxHighlighting.c"


#line 716 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)pyExtensions);
#line 10011 "obj/debug.linux/SyntaxHighlighting.c"


#line 716 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10016 "obj/debug.linux/SyntaxHighlighting.c"


#line 756 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 756 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "SwiftSHL");

#line 10025 "obj/debug.linux/SyntaxHighlighting.c"


#line 756 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)swiftExtensions);
#line 10030 "obj/debug.linux/SyntaxHighlighting.c"


#line 756 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10035 "obj/debug.linux/SyntaxHighlighting.c"


#line 785 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 785 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "RustSHL");

#line 10044 "obj/debug.linux/SyntaxHighlighting.c"


#line 785 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)rsExtensions);
#line 10049 "obj/debug.linux/SyntaxHighlighting.c"


#line 785 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10054 "obj/debug.linux/SyntaxHighlighting.c"


#line 802 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 802 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "GoSHL");

#line 10063 "obj/debug.linux/SyntaxHighlighting.c"


#line 802 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)goExtensions);
#line 10068 "obj/debug.linux/SyntaxHighlighting.c"


#line 802 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10073 "obj/debug.linux/SyntaxHighlighting.c"


#line 817 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 817 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "PHPSHL");

#line 10082 "obj/debug.linux/SyntaxHighlighting.c"


#line 817 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)phpExtensions);
#line 10087 "obj/debug.linux/SyntaxHighlighting.c"


#line 817 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10092 "obj/debug.linux/SyntaxHighlighting.c"


#line 847 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 847 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "JavaScriptSHL");

#line 10101 "obj/debug.linux/SyntaxHighlighting.c"


#line 847 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)jsExtensions);
#line 10106 "obj/debug.linux/SyntaxHighlighting.c"


#line 847 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10111 "obj/debug.linux/SyntaxHighlighting.c"


#line 874 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 874 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "GLSLSHL");

#line 10120 "obj/debug.linux/SyntaxHighlighting.c"


#line 874 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)glslExtensions);
#line 10125 "obj/debug.linux/SyntaxHighlighting.c"


#line 874 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10130 "obj/debug.linux/SyntaxHighlighting.c"


#line 942 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 942 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "CSSSHL");

#line 10139 "obj/debug.linux/SyntaxHighlighting.c"


#line 942 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)cssExtensions);
#line 10144 "obj/debug.linux/SyntaxHighlighting.c"


#line 942 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10149 "obj/debug.linux/SyntaxHighlighting.c"


#line 951 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 951 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "BisonFlexSHL");

#line 10158 "obj/debug.linux/SyntaxHighlighting.c"


#line 951 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)bisonExtensions);
#line 10163 "obj/debug.linux/SyntaxHighlighting.c"


#line 951 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10168 "obj/debug.linux/SyntaxHighlighting.c"


#line 961 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 961 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "BashSHL");

#line 10177 "obj/debug.linux/SyntaxHighlighting.c"


#line 961 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)shExtensions);
#line 10182 "obj/debug.linux/SyntaxHighlighting.c"


#line 961 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10187 "obj/debug.linux/SyntaxHighlighting.c"


#line 979 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 979 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "BatchSHL");

#line 10196 "obj/debug.linux/SyntaxHighlighting.c"


#line 979 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)batExtensions);
#line 10201 "obj/debug.linux/SyntaxHighlighting.c"


#line 979 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10206 "obj/debug.linux/SyntaxHighlighting.c"


#line 999 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 999 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "XMLSHL");

#line 10215 "obj/debug.linux/SyntaxHighlighting.c"


#line 999 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)xmlExtensions);
#line 10220 "obj/debug.linux/SyntaxHighlighting.c"


#line 999 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10225 "obj/debug.linux/SyntaxHighlighting.c"


#line 1217 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1217 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "ECONSHL");

#line 10234 "obj/debug.linux/SyntaxHighlighting.c"


#line 1217 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)econExtensions);
#line 10239 "obj/debug.linux/SyntaxHighlighting.c"


#line 1217 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10244 "obj/debug.linux/SyntaxHighlighting.c"


#line 1234 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1234 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "DiffSHL");

#line 10253 "obj/debug.linux/SyntaxHighlighting.c"


#line 1234 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)diffExtensions);
#line 10258 "obj/debug.linux/SyntaxHighlighting.c"


#line 1234 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10263 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
{

#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
struct __ecereNameSpace__ecere__com__Class * _class = __ecereNameSpace__ecere__com__eSystem_FindClass(module, "SQLSHL");

#line 10272 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
__ecereNameSpace__ecere__com__eClass_SetProperty(_class, "extensions", (long long)(intptr_t)sqlExtensions);
#line 10277 "obj/debug.linux/SyntaxHighlighting.c"


#line 1297 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10282 "obj/debug.linux/SyntaxHighlighting.c"


#line 1360 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxHighlighting.ec"
}
#line 10287 "obj/debug.linux/SyntaxHighlighting.c"


