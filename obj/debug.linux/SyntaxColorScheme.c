/* Code generated from eC source file: SyntaxColorScheme.ec */
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

#line 55 "obj/debug.linux/SyntaxColorScheme.c"


#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __u_short;

#line 61 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int;

#line 67 "obj/debug.linux/SyntaxColorScheme.c"


#line 34 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_long;

#line 73 "obj/debug.linux/SyntaxColorScheme.c"


#line 37 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed char __int8_t;

#line 79 "obj/debug.linux/SyntaxColorScheme.c"


#line 38 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __uint8_t;

#line 85 "obj/debug.linux/SyntaxColorScheme.c"


#line 39 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed short int __int16_t;

#line 91 "obj/debug.linux/SyntaxColorScheme.c"


#line 40 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short int __uint16_t;

#line 97 "obj/debug.linux/SyntaxColorScheme.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed int __int32_t;

#line 103 "obj/debug.linux/SyntaxColorScheme.c"


#line 42 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uint32_t;

#line 109 "obj/debug.linux/SyntaxColorScheme.c"


#line 44 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef signed long int __int64_t;

#line 115 "obj/debug.linux/SyntaxColorScheme.c"


#line 45 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uint64_t;

#line 121 "obj/debug.linux/SyntaxColorScheme.c"


#line 52 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int8_t __int_least8_t;

#line 127 "obj/debug.linux/SyntaxColorScheme.c"


#line 53 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint8_t __uint_least8_t;

#line 133 "obj/debug.linux/SyntaxColorScheme.c"


#line 54 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int16_t __int_least16_t;

#line 139 "obj/debug.linux/SyntaxColorScheme.c"


#line 55 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint16_t __uint_least16_t;

#line 145 "obj/debug.linux/SyntaxColorScheme.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int32_t __int_least32_t;

#line 151 "obj/debug.linux/SyntaxColorScheme.c"


#line 57 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint32_t __uint_least32_t;

#line 157 "obj/debug.linux/SyntaxColorScheme.c"


#line 58 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __int64_t __int_least64_t;

#line 163 "obj/debug.linux/SyntaxColorScheme.c"


#line 59 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __uint64_t __uint_least64_t;

#line 169 "obj/debug.linux/SyntaxColorScheme.c"


#line 63 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __quad_t;

#line 175 "obj/debug.linux/SyntaxColorScheme.c"


#line 64 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __u_quad_t;

#line 181 "obj/debug.linux/SyntaxColorScheme.c"


#line 72 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intmax_t;

#line 187 "obj/debug.linux/SyntaxColorScheme.c"


#line 73 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __uintmax_t;

#line 193 "obj/debug.linux/SyntaxColorScheme.c"


#line 145 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __dev_t;

#line 199 "obj/debug.linux/SyntaxColorScheme.c"


#line 146 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t;

#line 205 "obj/debug.linux/SyntaxColorScheme.c"


#line 147 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t;

#line 211 "obj/debug.linux/SyntaxColorScheme.c"


#line 148 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino_t;

#line 217 "obj/debug.linux/SyntaxColorScheme.c"


#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __ino64_t;

#line 223 "obj/debug.linux/SyntaxColorScheme.c"


#line 150 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t;

#line 229 "obj/debug.linux/SyntaxColorScheme.c"


#line 151 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __nlink_t;

#line 235 "obj/debug.linux/SyntaxColorScheme.c"


#line 152 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off_t;

#line 241 "obj/debug.linux/SyntaxColorScheme.c"


#line 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __off64_t;

#line 247 "obj/debug.linux/SyntaxColorScheme.c"


#line 154 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;

#line 253 "obj/debug.linux/SyntaxColorScheme.c"


#line 155 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef struct
{

#line 155 "/usr/include/x86_64-linux-gnu/bits/types.h"
int __val[2];

#line 263 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __fsid_t;

#line 266 "obj/debug.linux/SyntaxColorScheme.c"


#line 156 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __clock_t;

#line 272 "obj/debug.linux/SyntaxColorScheme.c"


#line 157 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim_t;

#line 278 "obj/debug.linux/SyntaxColorScheme.c"


#line 158 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __rlim64_t;

#line 284 "obj/debug.linux/SyntaxColorScheme.c"


#line 159 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __id_t;

#line 290 "obj/debug.linux/SyntaxColorScheme.c"


#line 160 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __time_t;

#line 296 "obj/debug.linux/SyntaxColorScheme.c"


#line 161 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __useconds_t;

#line 302 "obj/debug.linux/SyntaxColorScheme.c"


#line 162 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __suseconds_t;

#line 308 "obj/debug.linux/SyntaxColorScheme.c"


#line 164 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __daddr_t;

#line 314 "obj/debug.linux/SyntaxColorScheme.c"


#line 165 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __key_t;

#line 320 "obj/debug.linux/SyntaxColorScheme.c"


#line 168 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __clockid_t;

#line 326 "obj/debug.linux/SyntaxColorScheme.c"


#line 171 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef void * __timer_t;

#line 332 "obj/debug.linux/SyntaxColorScheme.c"


#line 174 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blksize_t;

#line 338 "obj/debug.linux/SyntaxColorScheme.c"


#line 179 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt_t;

#line 344 "obj/debug.linux/SyntaxColorScheme.c"


#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __blkcnt64_t;

#line 350 "obj/debug.linux/SyntaxColorScheme.c"


#line 183 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt_t;

#line 356 "obj/debug.linux/SyntaxColorScheme.c"


#line 184 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsblkcnt64_t;

#line 362 "obj/debug.linux/SyntaxColorScheme.c"


#line 187 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt_t;

#line 368 "obj/debug.linux/SyntaxColorScheme.c"


#line 188 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __fsfilcnt64_t;

#line 374 "obj/debug.linux/SyntaxColorScheme.c"


#line 191 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __fsword_t;

#line 380 "obj/debug.linux/SyntaxColorScheme.c"


#line 193 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __ssize_t;

#line 386 "obj/debug.linux/SyntaxColorScheme.c"


#line 196 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __syscall_slong_t;

#line 392 "obj/debug.linux/SyntaxColorScheme.c"


#line 198 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long int __syscall_ulong_t;

#line 398 "obj/debug.linux/SyntaxColorScheme.c"


#line 202 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef __off64_t __loff_t;

#line 404 "obj/debug.linux/SyntaxColorScheme.c"


#line 203 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef char * __caddr_t;

#line 410 "obj/debug.linux/SyntaxColorScheme.c"


#line 206 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long int __intptr_t;

#line 416 "obj/debug.linux/SyntaxColorScheme.c"


#line 209 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __socklen_t;

#line 422 "obj/debug.linux/SyntaxColorScheme.c"


#line 214 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __sig_atomic_t;

#line 428 "obj/debug.linux/SyntaxColorScheme.c"


#line 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int8_t int8_t;

#line 434 "obj/debug.linux/SyntaxColorScheme.c"


#line 25 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int16_t int16_t;

#line 440 "obj/debug.linux/SyntaxColorScheme.c"


#line 26 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int32_t int32_t;

#line 446 "obj/debug.linux/SyntaxColorScheme.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h"
typedef __int64_t int64_t;

#line 452 "obj/debug.linux/SyntaxColorScheme.c"


#line 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint8_t uint8_t;

#line 458 "obj/debug.linux/SyntaxColorScheme.c"


#line 25 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint16_t uint16_t;

#line 464 "obj/debug.linux/SyntaxColorScheme.c"


#line 26 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint32_t uint32_t;

#line 470 "obj/debug.linux/SyntaxColorScheme.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h"
typedef __uint64_t uint64_t;

#line 476 "obj/debug.linux/SyntaxColorScheme.c"


#line 43 "/usr/include/stdint.h"
typedef __int_least8_t int_least8_t;

#line 482 "obj/debug.linux/SyntaxColorScheme.c"


#line 44 "/usr/include/stdint.h"
typedef __int_least16_t int_least16_t;

#line 488 "obj/debug.linux/SyntaxColorScheme.c"


#line 45 "/usr/include/stdint.h"
typedef __int_least32_t int_least32_t;

#line 494 "obj/debug.linux/SyntaxColorScheme.c"


#line 46 "/usr/include/stdint.h"
typedef __int_least64_t int_least64_t;

#line 500 "obj/debug.linux/SyntaxColorScheme.c"


#line 49 "/usr/include/stdint.h"
typedef __uint_least8_t uint_least8_t;

#line 506 "obj/debug.linux/SyntaxColorScheme.c"


#line 50 "/usr/include/stdint.h"
typedef __uint_least16_t uint_least16_t;

#line 512 "obj/debug.linux/SyntaxColorScheme.c"


#line 51 "/usr/include/stdint.h"
typedef __uint_least32_t uint_least32_t;

#line 518 "obj/debug.linux/SyntaxColorScheme.c"


#line 52 "/usr/include/stdint.h"
typedef __uint_least64_t uint_least64_t;

#line 524 "obj/debug.linux/SyntaxColorScheme.c"


#line 58 "/usr/include/stdint.h"
typedef signed char int_fast8_t;

#line 530 "obj/debug.linux/SyntaxColorScheme.c"


#line 60 "/usr/include/stdint.h"
typedef long int int_fast16_t;

#line 536 "obj/debug.linux/SyntaxColorScheme.c"


#line 61 "/usr/include/stdint.h"
typedef long int int_fast32_t;

#line 542 "obj/debug.linux/SyntaxColorScheme.c"


#line 62 "/usr/include/stdint.h"
typedef long int int_fast64_t;

#line 548 "obj/debug.linux/SyntaxColorScheme.c"


#line 71 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;

#line 554 "obj/debug.linux/SyntaxColorScheme.c"


#line 73 "/usr/include/stdint.h"
typedef unsigned long int uint_fast16_t;

#line 560 "obj/debug.linux/SyntaxColorScheme.c"


#line 74 "/usr/include/stdint.h"
typedef unsigned long int uint_fast32_t;

#line 566 "obj/debug.linux/SyntaxColorScheme.c"


#line 75 "/usr/include/stdint.h"
typedef unsigned long int uint_fast64_t;

#line 572 "obj/debug.linux/SyntaxColorScheme.c"


#line 87 "/usr/include/stdint.h"
typedef long int intptr_t;

#line 578 "obj/debug.linux/SyntaxColorScheme.c"


#line 90 "/usr/include/stdint.h"
typedef unsigned long int uintptr_t;

#line 584 "obj/debug.linux/SyntaxColorScheme.c"


#line 101 "/usr/include/stdint.h"
typedef __intmax_t intmax_t;

#line 590 "obj/debug.linux/SyntaxColorScheme.c"


#line 102 "/usr/include/stdint.h"
typedef __uintmax_t uintmax_t;

#line 596 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_char u_char;

#line 602 "obj/debug.linux/SyntaxColorScheme.c"


#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_short u_short;

#line 608 "obj/debug.linux/SyntaxColorScheme.c"


#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_int u_int;

#line 614 "obj/debug.linux/SyntaxColorScheme.c"


#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_long u_long;

#line 620 "obj/debug.linux/SyntaxColorScheme.c"


#line 37 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __quad_t quad_t;

#line 626 "obj/debug.linux/SyntaxColorScheme.c"


#line 38 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_quad_t u_quad_t;

#line 632 "obj/debug.linux/SyntaxColorScheme.c"


#line 39 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsid_t fsid_t;

#line 638 "obj/debug.linux/SyntaxColorScheme.c"


#line 42 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __loff_t loff_t;

#line 644 "obj/debug.linux/SyntaxColorScheme.c"


#line 47 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ino_t ino_t;

#line 650 "obj/debug.linux/SyntaxColorScheme.c"


#line 59 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __dev_t dev_t;

#line 656 "obj/debug.linux/SyntaxColorScheme.c"


#line 64 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __gid_t gid_t;

#line 662 "obj/debug.linux/SyntaxColorScheme.c"


#line 69 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __mode_t mode_t;

#line 668 "obj/debug.linux/SyntaxColorScheme.c"


#line 74 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __nlink_t nlink_t;

#line 674 "obj/debug.linux/SyntaxColorScheme.c"


#line 79 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uid_t uid_t;

#line 680 "obj/debug.linux/SyntaxColorScheme.c"


#line 85 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __off_t off_t;

#line 686 "obj/debug.linux/SyntaxColorScheme.c"


#line 97 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;

#line 692 "obj/debug.linux/SyntaxColorScheme.c"


#line 103 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __id_t id_t;

#line 698 "obj/debug.linux/SyntaxColorScheme.c"


#line 108 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ssize_t ssize_t;

#line 704 "obj/debug.linux/SyntaxColorScheme.c"


#line 114 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __daddr_t daddr_t;

#line 710 "obj/debug.linux/SyntaxColorScheme.c"


#line 115 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __caddr_t caddr_t;

#line 716 "obj/debug.linux/SyntaxColorScheme.c"


#line 121 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __key_t key_t;

#line 722 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h"
typedef __clock_t clock_t;

#line 728 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h"
typedef __clockid_t clockid_t;

#line 734 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h"
typedef __time_t time_t;

#line 740 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h"
typedef __timer_t timer_t;

#line 746 "obj/debug.linux/SyntaxColorScheme.c"


#line 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
typedef long unsigned int size_t;

#line 752 "obj/debug.linux/SyntaxColorScheme.c"


#line 148 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned long int ulong;

#line 758 "obj/debug.linux/SyntaxColorScheme.c"


#line 149 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned short int ushort;

#line 764 "obj/debug.linux/SyntaxColorScheme.c"


#line 150 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint;

#line 770 "obj/debug.linux/SyntaxColorScheme.c"


#line 158 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint8_t u_int8_t;

#line 776 "obj/debug.linux/SyntaxColorScheme.c"


#line 159 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint16_t u_int16_t;

#line 782 "obj/debug.linux/SyntaxColorScheme.c"


#line 160 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint32_t u_int32_t;

#line 788 "obj/debug.linux/SyntaxColorScheme.c"


#line 161 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __uint64_t u_int64_t;

#line 794 "obj/debug.linux/SyntaxColorScheme.c"


#line 164 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef int register_t __attribute__((__mode__ (__word__)));

#line 800 "obj/debug.linux/SyntaxColorScheme.c"

static __inline __uint16_t __bswap_16(__uint16_t __bsx)

#line 35 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 37 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap16(__bsx);
#line 809 "obj/debug.linux/SyntaxColorScheme.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 814 "obj/debug.linux/SyntaxColorScheme.c"


static __inline __uint32_t __bswap_32(__uint32_t __bsx)

#line 50 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 52 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap32(__bsx);
#line 824 "obj/debug.linux/SyntaxColorScheme.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 829 "obj/debug.linux/SyntaxColorScheme.c"


 static __inline __uint64_t __bswap_64(__uint64_t __bsx)

#line 71 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
{

#line 73 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
return __builtin_bswap64(__bsx);
#line 839 "obj/debug.linux/SyntaxColorScheme.c"


#line 77 "/usr/include/x86_64-linux-gnu/bits/byteswap.h"
}
#line 844 "obj/debug.linux/SyntaxColorScheme.c"


static __inline __uint16_t __uint16_identity(__uint16_t __x)

#line 34 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 35 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 854 "obj/debug.linux/SyntaxColorScheme.c"


#line 36 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 859 "obj/debug.linux/SyntaxColorScheme.c"


static __inline __uint32_t __uint32_identity(__uint32_t __x)

#line 40 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 41 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 869 "obj/debug.linux/SyntaxColorScheme.c"


#line 42 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 874 "obj/debug.linux/SyntaxColorScheme.c"


static __inline __uint64_t __uint64_identity(__uint64_t __x)

#line 46 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
{

#line 47 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
return __x;
#line 884 "obj/debug.linux/SyntaxColorScheme.c"


#line 48 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h"
}
#line 889 "obj/debug.linux/SyntaxColorScheme.c"



#line 5 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
typedef struct
{

#line 7 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h"
unsigned long int __val[16];

#line 900 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __sigset_t;

#line 903 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h"
typedef __sigset_t sigset_t;

#line 909 "obj/debug.linux/SyntaxColorScheme.c"


#line 8 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
struct timeval
{

#line 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
__time_t tv_sec;

#line 919 "obj/debug.linux/SyntaxColorScheme.c"

#line 11 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h"
__suseconds_t tv_usec;

#line 924 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 927 "obj/debug.linux/SyntaxColorScheme.c"


#line 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
struct timespec
{

#line 12 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
__time_t tv_sec;

#line 937 "obj/debug.linux/SyntaxColorScheme.c"

#line 16 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h"
__syscall_slong_t tv_nsec;

#line 942 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 945 "obj/debug.linux/SyntaxColorScheme.c"


#line 43 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef __suseconds_t suseconds_t;

#line 951 "obj/debug.linux/SyntaxColorScheme.c"


#line 49 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef long int __fd_mask;

#line 957 "obj/debug.linux/SyntaxColorScheme.c"


#line 59 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef struct
{

#line 67 "/usr/include/x86_64-linux-gnu/sys/select.h"
__fd_mask __fds_bits[16];

#line 967 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct fd_set;

#line 970 "obj/debug.linux/SyntaxColorScheme.c"


#line 77 "/usr/include/x86_64-linux-gnu/sys/select.h"
typedef __fd_mask fd_mask;

#line 976 "obj/debug.linux/SyntaxColorScheme.c"


#line 101 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval * __restrict __timeout);

#line 982 "obj/debug.linux/SyntaxColorScheme.c"


#line 113 "/usr/include/x86_64-linux-gnu/sys/select.h"
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec * __restrict __timeout, const __sigset_t * __restrict __sigmask);

#line 988 "obj/debug.linux/SyntaxColorScheme.c"


#line 185 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __blksize_t blksize_t;

#line 994 "obj/debug.linux/SyntaxColorScheme.c"


#line 192 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __blkcnt_t blkcnt_t;

#line 1000 "obj/debug.linux/SyntaxColorScheme.c"


#line 196 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t;

#line 1006 "obj/debug.linux/SyntaxColorScheme.c"


#line 200 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t;

#line 1012 "obj/debug.linux/SyntaxColorScheme.c"


#line 49 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
typedef struct __pthread_internal_list
{

#line 51 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_list * __prev;

#line 1022 "obj/debug.linux/SyntaxColorScheme.c"

#line 52 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_list * __next;

#line 1027 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __pthread_list_t;

#line 1030 "obj/debug.linux/SyntaxColorScheme.c"


#line 55 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
typedef struct __pthread_internal_slist
{

#line 57 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_internal_slist * __next;

#line 1040 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __pthread_slist_t;

#line 1043 "obj/debug.linux/SyntaxColorScheme.c"


#line 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
struct __pthread_mutex_s
{

#line 24 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __lock;

#line 1053 "obj/debug.linux/SyntaxColorScheme.c"

#line 25 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
unsigned int __count;

#line 1058 "obj/debug.linux/SyntaxColorScheme.c"

#line 26 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __owner;

#line 1063 "obj/debug.linux/SyntaxColorScheme.c"

#line 28 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
unsigned int __nusers;

#line 1068 "obj/debug.linux/SyntaxColorScheme.c"

#line 32 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
int __kind;

#line 1073 "obj/debug.linux/SyntaxColorScheme.c"

#line 34 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
short __spins;

#line 1078 "obj/debug.linux/SyntaxColorScheme.c"

#line 35 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
short __elision;

#line 1083 "obj/debug.linux/SyntaxColorScheme.c"

#line 36 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h"
__pthread_list_t __list;

#line 1088 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1091 "obj/debug.linux/SyntaxColorScheme.c"


#line 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
struct __pthread_rwlock_arch_t
{

#line 25 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __readers;

#line 1101 "obj/debug.linux/SyntaxColorScheme.c"

#line 26 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __writers;

#line 1106 "obj/debug.linux/SyntaxColorScheme.c"

#line 27 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __wrphase_futex;

#line 1111 "obj/debug.linux/SyntaxColorScheme.c"

#line 28 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __writers_futex;

#line 1116 "obj/debug.linux/SyntaxColorScheme.c"

#line 29 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __pad3;

#line 1121 "obj/debug.linux/SyntaxColorScheme.c"

#line 30 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __pad4;

#line 1126 "obj/debug.linux/SyntaxColorScheme.c"

#line 32 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
int __cur_writer;

#line 1131 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
int __shared;

#line 1136 "obj/debug.linux/SyntaxColorScheme.c"

#line 34 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
signed char __rwelision;

#line 1141 "obj/debug.linux/SyntaxColorScheme.c"

#line 39 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned char __pad1[7];

#line 1146 "obj/debug.linux/SyntaxColorScheme.c"

#line 42 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned long int __pad2;

#line 1151 "obj/debug.linux/SyntaxColorScheme.c"

#line 45 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h"
unsigned int __flags;

#line 1156 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1159 "obj/debug.linux/SyntaxColorScheme.c"


#line 92 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct __pthread_cond_s
{

#line 94 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 union
{

#line 96 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 unsigned long long int __wseq;

#line 1173 "obj/debug.linux/SyntaxColorScheme.c"

#line 97 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct
{

#line 99 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __low;

#line 1182 "obj/debug.linux/SyntaxColorScheme.c"

#line 100 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __high;

#line 1187 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __wseq32;

#line 1190 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1193 "obj/debug.linux/SyntaxColorScheme.c"

#line 103 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 union
{

#line 105 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
 unsigned long long int __g1_start;

#line 1202 "obj/debug.linux/SyntaxColorScheme.c"

#line 106 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
struct
{

#line 108 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __low;

#line 1211 "obj/debug.linux/SyntaxColorScheme.c"

#line 109 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __high;

#line 1216 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __g1_start32;

#line 1219 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1222 "obj/debug.linux/SyntaxColorScheme.c"

#line 112 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_refs[2];

#line 1227 "obj/debug.linux/SyntaxColorScheme.c"

#line 113 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_size[2];

#line 1232 "obj/debug.linux/SyntaxColorScheme.c"

#line 114 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g1_orig_size;

#line 1237 "obj/debug.linux/SyntaxColorScheme.c"

#line 115 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __wrefs;

#line 1242 "obj/debug.linux/SyntaxColorScheme.c"

#line 116 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h"
unsigned int __g_signals[2];

#line 1247 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1250 "obj/debug.linux/SyntaxColorScheme.c"


#line 27 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned long int pthread_t;

#line 1256 "obj/debug.linux/SyntaxColorScheme.c"


#line 32 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 34 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1266 "obj/debug.linux/SyntaxColorScheme.c"

#line 35 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1271 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct pthread_mutexattr_t;

#line 1274 "obj/debug.linux/SyntaxColorScheme.c"


#line 41 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 43 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1284 "obj/debug.linux/SyntaxColorScheme.c"

#line 44 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1289 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct pthread_condattr_t;

#line 1292 "obj/debug.linux/SyntaxColorScheme.c"


#line 49 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;

#line 1298 "obj/debug.linux/SyntaxColorScheme.c"


#line 53 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef int pthread_once_t;

#line 1304 "obj/debug.linux/SyntaxColorScheme.c"


#line 56 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union pthread_attr_t
{

#line 58 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[56];

#line 1314 "obj/debug.linux/SyntaxColorScheme.c"

#line 59 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1319 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1322 "obj/debug.linux/SyntaxColorScheme.c"


#line 62 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;

#line 1328 "obj/debug.linux/SyntaxColorScheme.c"


#line 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_mutex_s __data;

#line 1338 "obj/debug.linux/SyntaxColorScheme.c"

#line 70 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[40];

#line 1343 "obj/debug.linux/SyntaxColorScheme.c"

#line 71 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1348 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct pthread_mutex_t;

#line 1351 "obj/debug.linux/SyntaxColorScheme.c"


#line 75 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_cond_s __data;

#line 1361 "obj/debug.linux/SyntaxColorScheme.c"

#line 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[48];

#line 1366 "obj/debug.linux/SyntaxColorScheme.c"

#line 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
 long long int __align;

#line 1371 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct pthread_cond_t;

#line 1374 "obj/debug.linux/SyntaxColorScheme.c"


#line 86 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 88 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_rwlock_arch_t __data;

#line 1384 "obj/debug.linux/SyntaxColorScheme.c"

#line 89 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[56];

#line 1389 "obj/debug.linux/SyntaxColorScheme.c"

#line 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1394 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct pthread_rwlock_t;

#line 1397 "obj/debug.linux/SyntaxColorScheme.c"


#line 93 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 95 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[8];

#line 1407 "obj/debug.linux/SyntaxColorScheme.c"

#line 96 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1412 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct pthread_rwlockattr_t;

#line 1415 "obj/debug.linux/SyntaxColorScheme.c"


#line 103 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef volatile int pthread_spinlock_t;

#line 1421 "obj/debug.linux/SyntaxColorScheme.c"


#line 108 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 110 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[32];

#line 1431 "obj/debug.linux/SyntaxColorScheme.c"

#line 111 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
long int __align;

#line 1436 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct pthread_barrier_t;

#line 1439 "obj/debug.linux/SyntaxColorScheme.c"


#line 114 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union
{

#line 116 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
char __size[4];

#line 1449 "obj/debug.linux/SyntaxColorScheme.c"

#line 117 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
int __align;

#line 1454 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct pthread_barrierattr_t;

#line 1457 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BTNode;

#line 1463 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  first;

#line 1473 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  last;

#line 1478 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int count;

#line 1483 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int offset;

#line 1488 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int circ;

#line 1493 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1496 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__DataValue
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
union
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
char c;

#line 1510 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned char uc;

#line 1515 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
short s;

#line 1520 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned short us;

#line 1525 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int i;

#line 1530 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int ui;

#line 1535 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  p;

#line 1540 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
float f;

#line 1545 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
double d;

#line 1550 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
long long i64;

#line 1555 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
uint64 ui64;

#line 1560 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __anon1;

#line 1563 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1566 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__SerialBuffer
{

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned char *  _buffer;

#line 1576 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
size_t count;

#line 1581 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
size_t _size;

#line 1586 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
size_t pos;

#line 1591 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1594 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New(unsigned int size);

#line 1600 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);

#line 1606 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew(void *  memory, unsigned int size);

#line 1612 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eSystem_Renew0(void *  memory, unsigned int size);

#line 1618 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eSystem_Delete(void *  memory);

#line 1624 "obj/debug.linux/SyntaxColorScheme.c"


#line 31 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Array
{

#line 31 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
uint64 *  array;

#line 1634 "obj/debug.linux/SyntaxColorScheme.c"

#line 31 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int count;

#line 1639 "obj/debug.linux/SyntaxColorScheme.c"

#line 31 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int minAllocSize;

#line 1644 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1647 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Property;

#line 1653 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
static __attribute__((unused)) struct __ecereNameSpace__ecere__com__Property * __ecereProp_SyntaxColorScheme_keywordColors, * __ecerePropM_SyntaxColorScheme_keywordColors;

#line 1659 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class;

#line 1665 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void * *  _vTbl;

#line 1675 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 1680 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int _refCount;

#line 1685 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1688 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) long long __ecereNameSpace__ecere__com__eClass_GetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name);

#line 1694 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eClass_SetProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, long long value);

#line 1700 "obj/debug.linux/SyntaxColorScheme.c"


#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__BuiltInContainer
{

#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void * *  _vTbl;

#line 1710 "obj/debug.linux/SyntaxColorScheme.c"

#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 1715 "obj/debug.linux/SyntaxColorScheme.c"

#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int _refCount;

#line 1720 "obj/debug.linux/SyntaxColorScheme.c"

#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  data;

#line 1725 "obj/debug.linux/SyntaxColorScheme.c"

#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int count;

#line 1730 "obj/debug.linux/SyntaxColorScheme.c"

#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * type;

#line 1735 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1738 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eEnum_AddFixedValue(struct __ecereNameSpace__ecere__com__Class * _class, const char *  string, long long value);

#line 1744 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Property * __ecereNameSpace__ecere__com__eClass_AddProperty(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

#line 1750 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void *  __ecereNameSpace__ecere__com__eInstance_New(struct __ecereNameSpace__ecere__com__Class * _class);

#line 1756 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Property
{

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Property * prev;

#line 1766 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Property * next;

#line 1771 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  name;

#line 1776 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int isProperty;

#line 1781 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int memberAccess;

#line 1786 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int id;

#line 1791 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 1796 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  dataTypeString;

#line 1801 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 1806 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 1811 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void (*  Set)(void * , int);

#line 1816 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int (*  Get)(void * );

#line 1821 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int (*  IsSet)(void * );

#line 1826 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  data;

#line 1831 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  symbol;

#line 1836 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int vid;

#line 1841 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int conversion;

#line 1846 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int watcherOffset;

#line 1851 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  category;

#line 1856 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int compiled;

#line 1861 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int selfWatchable;

#line 1866 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int isWatchable;

#line 1871 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1874 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 1880 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_SetMethod(struct __ecereNameSpace__ecere__com__Instance * instance, const char *  name, void *  function);

#line 1886 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_IncRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 1892 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_StopWatching(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, struct __ecereNameSpace__ecere__com__Instance * object);

#line 1898 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_Watch(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property, void *  object, void (*  callback)(void * , void * ));

#line 1904 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_FireWatchers(struct __ecereNameSpace__ecere__com__Instance * instance, struct __ecereNameSpace__ecere__com__Property * _property);

#line 1910 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct SyntaxColorScheme
{

#line 12 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int commentColor;

#line 1920 "obj/debug.linux/SyntaxColorScheme.c"

#line 13 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int charLiteralColor;

#line 1925 "obj/debug.linux/SyntaxColorScheme.c"

#line 14 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int stringLiteralColor;

#line 1930 "obj/debug.linux/SyntaxColorScheme.c"

#line 15 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int preprocessorColor;

#line 1935 "obj/debug.linux/SyntaxColorScheme.c"

#line 16 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int numberColor;

#line 1940 "obj/debug.linux/SyntaxColorScheme.c"

#line 17 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int typeColor;

#line 1945 "obj/debug.linux/SyntaxColorScheme.c"

#line 18 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int defColor;

#line 1950 "obj/debug.linux/SyntaxColorScheme.c"

#line 19 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int fnColor;

#line 1955 "obj/debug.linux/SyntaxColorScheme.c"

#line 31 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * keywordColors;

#line 1960 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 1963 "obj/debug.linux/SyntaxColorScheme.c"


#line 31 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

#line 1969 "obj/debug.linux/SyntaxColorScheme.c"


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern int __ecereVMethodID___ecereNameSpace__ecere__com__Container_Copy;

#line 1975 "obj/debug.linux/SyntaxColorScheme.c"

struct __ecereNameSpace__ecere__com__Instance * __ecereProp_SyntaxColorScheme_Get_keywordColors(struct __ecereNameSpace__ecere__com__Instance * this);

void __ecereProp_SyntaxColorScheme_Set_keywordColors(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value);


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree;

#line 1985 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BTNode * root;

#line 1995 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int count;

#line 2000 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, uintptr_t a, uintptr_t b);

#line 2005 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void (*  FreeKey)(void *  key);

#line 2010 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 2013 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__DataMember;

#line 2019 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__DataMember
{

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__DataMember * prev;

#line 2029 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__DataMember * next;

#line 2034 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  name;

#line 2039 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int isProperty;

#line 2044 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int memberAccess;

#line 2049 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int id;

#line 2054 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2059 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  dataTypeString;

#line 2064 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2069 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2074 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int type;

#line 2079 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int offset;

#line 2084 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int memberID;

#line 2089 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList members;

#line 2094 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;

#line 2099 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int memberOffset;

#line 2104 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
short structAlignment;

#line 2109 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
short pointerAlignment;

#line 2114 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 2117 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__DataMember * __ecereNameSpace__ecere__com__eClass_AddDataMember(struct __ecereNameSpace__ecere__com__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

#line 2123 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Method;

#line 2129 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
union
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  dataTypeString;

#line 2147 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;

#line 2152 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __anon1;

#line 2155 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__DataValue expression;

#line 2160 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  memberString;

#line 2169 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
union
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__DataMember * member;

#line 2178 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Property * prop;

#line 2183 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Method * method;

#line 2188 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __anon1;

#line 2191 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __anon2;

#line 2194 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct __anon1;

#line 2197 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 2200 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Method
{

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  name;

#line 2210 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Method * parent;

#line 2215 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Method * left;

#line 2220 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Method * right;

#line 2225 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int depth;

#line 2230 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int (*  function)();

#line 2235 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int vid;

#line 2240 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int type;

#line 2245 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * _class;

#line 2250 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  symbol;

#line 2255 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  dataTypeString;

#line 2260 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2265 "obj/debug.linux/SyntaxColorScheme.c"

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int memberAccess;

#line 2270 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 2273 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Module;

#line 2279 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern __attribute__ ((visibility("default"))) struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

#line 2285 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

#line 2291 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace;

#line 2297 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  name;

#line 2307 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;

#line 2312 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  left;

#line 2317 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  right;

#line 2322 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int depth;

#line 2327 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  parent;

#line 2332 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;

#line 2337 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classes;

#line 2342 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree defines;

#line 2347 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree functions;

#line 2352 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 2355 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * prev;

#line 2365 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * next;

#line 2370 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  name;

#line 2375 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int offset;

#line 2380 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int structSize;

#line 2385 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void * *  _vTbl;

#line 2390 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int vTblSize;

#line 2395 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int (*  Constructor)(void * );

#line 2400 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void (*  Destructor)(void * );

#line 2405 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int offsetClass;

#line 2410 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int sizeClass;

#line 2415 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * base;

#line 2420 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree methods;

#line 2425 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree members;

#line 2430 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree prop;

#line 2435 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;

#line 2440 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;

#line 2445 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList derivatives;

#line 2450 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int memberID;

#line 2455 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int startMemberID;

#line 2460 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int type;

#line 2465 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * module;

#line 2470 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;

#line 2475 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  dataTypeString;

#line 2480 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * dataType;

#line 2485 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int typeSize;

#line 2490 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int defaultAlignment;

#line 2495 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void (*  Initialize)();

#line 2500 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int memberOffset;

#line 2505 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;

#line 2510 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  designerClass;

#line 2515 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int noExpansion;

#line 2520 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  defaultProperty;

#line 2525 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int comRedefinition;

#line 2530 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int count;

#line 2535 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int isRemote;

#line 2540 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int internalDecl;

#line 2545 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  data;

#line 2550 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int computeSize;

#line 2555 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
short structAlignment;

#line 2560 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
short pointerAlignment;

#line 2565 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int destructionWatchOffset;

#line 2570 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int fixed;

#line 2575 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;

#line 2580 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int inheritanceAccess;

#line 2585 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  fullName;

#line 2590 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  symbol;

#line 2595 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList conversions;

#line 2600 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList templateParams;

#line 2605 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;

#line 2610 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class * templateClass;

#line 2615 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList templatized;

#line 2620 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int numParams;

#line 2625 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int isInstanceClass;

#line 2630 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int byValueSystemClass;

#line 2635 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  bindingsClass;

#line 2640 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 2643 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Application
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int argc;

#line 2653 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char * *  argv;

#line 2658 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int exitCode;

#line 2663 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
unsigned int isGUIApp;

#line 2668 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList allModules;

#line 2673 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
char *  parsedCommand;

#line 2678 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace systemNameSpace;

#line 2683 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 2686 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_KeywordType;

#line 2692 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
static struct __ecereNameSpace__ecere__com__Class * __ecereClass_SyntaxColorScheme;

#line 2698 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__gfx__Color_;

#line 2704 "obj/debug.linux/SyntaxColorScheme.c"

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__gfx__Color;


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Array;

#line 2714 "obj/debug.linux/SyntaxColorScheme.c"


#line 39 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Instance;

#line 2720 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

#line 2726 "obj/debug.linux/SyntaxColorScheme.c"


#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Module
{

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * application;

#line 2736 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList classes;

#line 2741 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList defines;

#line 2746 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList functions;

#line 2751 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__sys__OldList modules;

#line 2756 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * prev;

#line 2761 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * next;

#line 2766 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
const char *  name;

#line 2771 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  library;

#line 2776 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void *  Unload;

#line 2781 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int importType;

#line 2786 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
int origImportType;

#line 2791 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;

#line 2796 "obj/debug.linux/SyntaxColorScheme.c"

#line 7 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;

#line 2801 "obj/debug.linux/SyntaxColorScheme.c"
} ecere_gcc_struct;

#line 2804 "obj/debug.linux/SyntaxColorScheme.c"

void __ecereDestructor_SyntaxColorScheme(struct __ecereNameSpace__ecere__com__Instance * this)

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
{

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__attribute__((unused)) struct SyntaxColorScheme * __ecerePointer_SyntaxColorScheme = (struct SyntaxColorScheme *)(this ? (((char *)this) + __ecereClass_SyntaxColorScheme->offset) : 0);

#line 2814 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(__ecerePointer_SyntaxColorScheme->keywordColors), __ecerePointer_SyntaxColorScheme->keywordColors = 0);
#line 2819 "obj/debug.linux/SyntaxColorScheme.c"


#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
}
#line 2824 "obj/debug.linux/SyntaxColorScheme.c"


struct __ecereNameSpace__ecere__com__Instance * __ecereProp_SyntaxColorScheme_Get_keywordColors(struct __ecereNameSpace__ecere__com__Instance * this)

#line 42 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
{

#line 42 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__attribute__((unused)) struct SyntaxColorScheme * __ecerePointer_SyntaxColorScheme = (struct SyntaxColorScheme *)(this ? (((char *)this) + __ecereClass_SyntaxColorScheme->offset) : 0);

#line 2835 "obj/debug.linux/SyntaxColorScheme.c"


#line 42 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
return __ecerePointer_SyntaxColorScheme->keywordColors;
#line 2840 "obj/debug.linux/SyntaxColorScheme.c"


#line 42 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
}
#line 2845 "obj/debug.linux/SyntaxColorScheme.c"


unsigned int __ecereConstructor_SyntaxColorScheme(struct __ecereNameSpace__ecere__com__Instance * this)

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
{

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__attribute__((unused)) struct SyntaxColorScheme * __ecerePointer_SyntaxColorScheme = (struct SyntaxColorScheme *)(this ? (((char *)this) + __ecereClass_SyntaxColorScheme->offset) : 0);

#line 2856 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePointer_SyntaxColorScheme->keywordColors = __ecereNameSpace__ecere__com__eInstance_New(__ecereClass___ecereNameSpace__ecere__com__Array_TPL_ecere__gfx__Color_);
#line 2861 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eInstance_IncRef(__ecerePointer_SyntaxColorScheme->keywordColors);
#line 2866 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePointer_SyntaxColorScheme->commentColor = 0x696969LL;
#line 2871 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePointer_SyntaxColorScheme->charLiteralColor = 0xDC143CLL;
#line 2876 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePointer_SyntaxColorScheme->stringLiteralColor = 0xDC143CLL;
#line 2881 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePointer_SyntaxColorScheme->preprocessorColor = 0x8000LL;
#line 2886 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePointer_SyntaxColorScheme->numberColor = 0x8080LL;
#line 2891 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereProp_SyntaxColorScheme_Set_keywordColors(this, ((struct __ecereNameSpace__ecere__com__Instance *)&__extension__ (struct __ecereNameSpace__ecere__com__BuiltInContainer)
{

#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereClass___ecereNameSpace__ecere__com__BuiltInContainer->_vTbl, __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer, 0, __extension__ (unsigned int [])
{

#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
0xFFLL, 0xFFLL
}
#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
, 2, __ecereClass___ecereNameSpace__ecere__gfx__Color
}
#line 26 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
));
#line 2910 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePointer_SyntaxColorScheme->typeColor = 0x15CE4C;
#line 2915 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePointer_SyntaxColorScheme->defColor = 0xFFCE7A;
#line 2920 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePointer_SyntaxColorScheme->fnColor = 0x9CB7FF;
#line 2925 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
return 1;
#line 2930 "obj/debug.linux/SyntaxColorScheme.c"


#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
}
#line 2935 "obj/debug.linux/SyntaxColorScheme.c"


void __ecereProp_SyntaxColorScheme_Set_keywordColors(struct __ecereNameSpace__ecere__com__Instance * this, struct __ecereNameSpace__ecere__com__Instance * value)

#line 36 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
{

#line 36 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__attribute__((unused)) struct SyntaxColorScheme * __ecerePointer_SyntaxColorScheme = (struct SyntaxColorScheme *)(this ? (((char *)this) + __ecereClass_SyntaxColorScheme->offset) : 0);

#line 2946 "obj/debug.linux/SyntaxColorScheme.c"


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
(__extension__ (
#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
{

#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
void (*  __internal_VirtualMethod)(struct __ecereNameSpace__ecere__com__Instance *, struct __ecereNameSpace__ecere__com__Instance * source);

#line 2957 "obj/debug.linux/SyntaxColorScheme.c"


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__internal_VirtualMethod = ((void (*)(struct __ecereNameSpace__ecere__com__Instance *, struct __ecereNameSpace__ecere__com__Instance * source))__extension__ (
#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
{

#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Instance * __internal_ClassInst = __ecerePointer_SyntaxColorScheme->keywordColors;

#line 2968 "obj/debug.linux/SyntaxColorScheme.c"


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__internal_ClassInst ? __internal_ClassInst->_vTbl : __ecereClass___ecereNameSpace__ecere__com__Array->_vTbl;
#line 2973 "obj/debug.linux/SyntaxColorScheme.c"


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
}
#line 2978 "obj/debug.linux/SyntaxColorScheme.c"
)
#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
[__ecereVMethodID___ecereNameSpace__ecere__com__Container_Copy]);
#line 2982 "obj/debug.linux/SyntaxColorScheme.c"


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__internal_VirtualMethod ? __internal_VirtualMethod(__ecerePointer_SyntaxColorScheme->keywordColors, (void *)value) : (void)1;
#line 2987 "obj/debug.linux/SyntaxColorScheme.c"


#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
}
#line 2992 "obj/debug.linux/SyntaxColorScheme.c"
)
#line 37 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
);
#line 2996 "obj/debug.linux/SyntaxColorScheme.c"


#line 39 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
if(value && ((struct __ecereNameSpace__ecere__com__Instance *)(char *)value)->_class != __ecereClass___ecereNameSpace__ecere__com__BuiltInContainer && !((struct __ecereNameSpace__ecere__com__Instance *)(char *)value)->_refCount)

#line 40 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
(__ecereNameSpace__ecere__com__eInstance_DecRef(value), value = 0);
#line 3004 "obj/debug.linux/SyntaxColorScheme.c"

#line 3006 "obj/debug.linux/SyntaxColorScheme.c"

__ecereProp_SyntaxColorScheme_keywordColors && __ecereProp_SyntaxColorScheme_keywordColors->selfWatchable ? __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(this, __ecereProp_SyntaxColorScheme_keywordColors) : (void)0, __ecerePropM_SyntaxColorScheme_keywordColors && __ecerePropM_SyntaxColorScheme_keywordColors->selfWatchable ? __ecereNameSpace__ecere__com__eInstance_FireSelfWatchers(this, __ecerePropM_SyntaxColorScheme_keywordColors) : (void)0;

#line 41 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
}
#line 3012 "obj/debug.linux/SyntaxColorScheme.c"


void __ecereUnregisterModule_SyntaxColorScheme(struct __ecereNameSpace__ecere__com__Instance * module)

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
{


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePropM_SyntaxColorScheme_keywordColors = (void *)0;
#line 3023 "obj/debug.linux/SyntaxColorScheme.c"


#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
}
#line 3028 "obj/debug.linux/SyntaxColorScheme.c"


void __ecereRegisterModule_SyntaxColorScheme(struct __ecereNameSpace__ecere__com__Instance * module)

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
{

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
struct __ecereNameSpace__ecere__com__Class __attribute__((unused)) * class;

#line 3039 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(4, "KeywordType", 0, 0, 0, (void *)0, (void *)0, module, 2, 1);
#line 3044 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereClass_KeywordType = class;
#line 3052 "obj/debug.linux/SyntaxColorScheme.c"

#line 3054 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "regular", 0);
#line 3059 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eEnum_AddFixedValue(class, "preprocessor", 1);
#line 3064 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(0, "SyntaxColorScheme", 0, sizeof(struct SyntaxColorScheme), 0, (void *)__ecereConstructor_SyntaxColorScheme, (void *)__ecereDestructor_SyntaxColorScheme, module, 2, 1);
#line 3069 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application && class)

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereClass_SyntaxColorScheme = class;
#line 3077 "obj/debug.linux/SyntaxColorScheme.c"

#line 3079 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "commentColor", "ecere::gfx::Color", 4, 4, 1);
#line 3084 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "charLiteralColor", "ecere::gfx::Color", 4, 4, 1);
#line 3089 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "stringLiteralColor", "ecere::gfx::Color", 4, 4, 1);
#line 3094 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "preprocessorColor", "ecere::gfx::Color", 4, 4, 1);
#line 3099 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "numberColor", "ecere::gfx::Color", 4, 4, 1);
#line 3104 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "typeColor", "ecere::gfx::Color", 4, 4, 1);
#line 3109 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "defColor", "ecere::gfx::Color", 4, 4, 1);
#line 3114 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "fnColor", "ecere::gfx::Color", 4, 4, 1);
#line 3119 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecerePropM_SyntaxColorScheme_keywordColors = __ecereNameSpace__ecere__com__eClass_AddProperty(class, "keywordColors", "ecere::com::Container<ecere::gfx::Color>", __ecereProp_SyntaxColorScheme_Set_keywordColors, __ecereProp_SyntaxColorScheme_Get_keywordColors, 1);
#line 3124 "obj/debug.linux/SyntaxColorScheme.c"


#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + sizeof(struct __ecereNameSpace__ecere__com__Instance))))->application)

#line 33 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
__ecereProp_SyntaxColorScheme_keywordColors = __ecerePropM_SyntaxColorScheme_keywordColors, __ecerePropM_SyntaxColorScheme_keywordColors = (void *)0;
#line 3132 "obj/debug.linux/SyntaxColorScheme.c"

#line 3134 "obj/debug.linux/SyntaxColorScheme.c"


#line 43 "/home/amigojapan/ecere/ecere-sdk/ide/src/designer/SyntaxColorScheme.ec"
}
#line 3139 "obj/debug.linux/SyntaxColorScheme.c"


