/* include/dnscore/dnscore-config.h.  Generated from dnscore-config.h.in by configure.  */
/* include/dnscore/dnscore-config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* number of harware core if the auto-detect fails */
#define DEFAULT_ASSUMED_CPU_COUNT 2

/* always on */
#define HAS_ACL_SUPPORT 1

/* bfd debug support disabled. */
#define HAS_BFD_DEBUG_SUPPORT 0

/* i386, Athlon, Opteron, Core2, i3, i5, i7, ... */
#define HAS_CPU_AMDINTEL 1

/* T1000 has a Niagara cpu */
/* #undef HAS_CPU_NIAGARA */

/* remote control disabled. */
#define HAS_CTRL 0

/* dynamic provisioning disabled. */
#define HAS_CTRL_DYNAMIC_PROVISIONING 0

/* DNSQ support enabled */
#define HAS_DNSQ 0

/* always on */
#define HAS_DNSSEC_SUPPORT 1

/* DROPALL mode will not actually send back the answer (debug/bench) */
#define HAS_DROPALL_SUPPORT 0

/* dynamic configuration disabled. */
#define HAS_DYNCONF_SUPPORT 0

/* dynamic update support disabled. */
#define HAS_DYNUPDATE_SUPPORT 1

/* Disables Elliptic Curve (ECDSA) support (ie: the available OpenSSL does not
   supports it) disabled. */
#define HAS_ECDSA_SUPPORT 1

/* Eric's code is enabled */
#define HAS_EDF 0

/* experimental stuff disabled. */
#define HAS_EXPERIMENTAL 0

/* YADIFA will now accept ASCII7 characters in DNS names (not recommended)
   disabled. */
#define HAS_FULL_ASCII7 0

/* Gery's code is enabled */
#define HAS_GERY 0

/* where to put the log files */
#define HAS_LOGDIR 0

/* write the pid in each line of log disabled. */
#define HAS_LOG_PID_ALWAYS_ON 0

/* write the thread id in each line of log disabled. */
#define HAS_LOG_THREAD_ID_ALWAYS_ON 0

/* malloc debug support disabled. */
#define HAS_MALLOC_DEBUG_SUPPORT 0

/* DNS master disabled. */
#define HAS_MASTER_SUPPORT 1

/* Define this to enable slow but safe unaligned memory accesses */
#define HAS_MEMALIGN_ISSUES 0

/* use messages instead of send (needed if you use more than one IP aliased on
   the same network interface) disabled. */
#define HAS_MESSAGES_SUPPORT 0

/* MIRROR mode will only reply what has been read (debug/bench) */
#define HAS_MIRROR_SUPPORT 0

/* mutex debug support disabled. */
#define HAS_MUTEX_DEBUG_SUPPORT 0

/* Allows AXFR answer from master without AA bit set (Microsoft DNS) disabled.
   */
#define HAS_NON_AA_AXFR_SUPPORT 0

/* always on */
#define HAS_NSEC3_SUPPORT 1

/* always on */
#define HAS_NSEC_SUPPORT 1

/* NSID support disabled. */
#define HAS_NSID_SUPPORT 1

/* The system supports thread affinity */
#define HAS_PTHREAD_SETAFFINITY_NP 1

/* The system supports thread names */
#define HAS_PTHREAD_SETNAME_NP 1

/* The system supports spinlocks */
#define HAS_PTHREAD_SPINLOCK 1

/* always off */
#define HAS_RDTSC 0

/* always off */
#define HAS_RRCACHE_ENABLED 0

/* DNS Response Rate Limiter disabled. */
#define HAS_RRL_SUPPORT 1

/* RRSIG verification and generation for zones disabled. */
#define HAS_RRSIG_MANAGEMENT_SUPPORT 1

/* The sockaddr_in6 struct has an sin6_len field */
#define HAS_SOCKADDR_IN6_SIN6_LEN 0

/* The sockaddr_in struct has an sin_len field */
#define HAS_SOCKADDR_IN_SIN_LEN 0

/* The sockaddr struct has an sa_len field */
#define HAS_SOCKADDR_SA_LEN 0

/* always off */
#define HAS_TCL 0

/* Tim's code is enabled */
#define HAS_THX 0

/* The system supports timegm */
#define HAS_TIMEGM 1

/* Tracks the instanciated zones for detecting zones potentially not released.
   Relatively cheap with a small (<100) amount of zones. disabled. */
#define HAS_TRACK_ZONES_DEBUG_SUPPORT 0

/* always on */
#define HAS_TSIG_SUPPORT 1

/* where to put the log files */
/* #undef HAS_WITH_LOGDIR */

/* zalloc debug support disabled. */
#define HAS_ZALLOC_DEBUG_SUPPORT 0

/* zalloc statistics support disabled. */
#define HAS_ZALLOC_STATISTICS_SUPPORT 0

/* zalloc memory system disabled. */
#define HAS_ZALLOC_SUPPORT 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <byteswap.h> header file. */
#define HAVE_BYTESWAP_H 1

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define to 1 if you have the <cpuid.h> header file. */
#define HAVE_CPUID_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the <i386/limits.h> header file. */
/* #undef HAVE_I386_LIMITS_H */

/* Define to 1 if you have the <i386/types.h> header file. */
/* #undef HAVE_I386_TYPES_H */

/* Define to 1 if the system has the type `int64_t'. */
#define HAVE_INT64_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `c' library (-lc). */
#define HAVE_LIBC 1

/* Define to 1 if you have the `dnscore' library (-ldnscore). */
/* #undef HAVE_LIBDNSCORE */

/* Define to 1 if you have the `dnsdb' library (-ldnsdb). */
/* #undef HAVE_LIBDNSDB */

/* Define to 1 if you have the `dnslg' library (-ldnslg). */
/* #undef HAVE_LIBDNSLG */

/* Define to 1 if you have the `dnszone' library (-ldnszone). */
/* #undef HAVE_LIBDNSZONE */

/* Define to 1 if you have the <linux/limits.h> header file. */
#define HAVE_LINUX_LIMITS_H 1

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the <machine/endian.h> header file. */
/* #undef HAVE_MACHINE_ENDIAN_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the <netinet6/in6.h> header file. */
/* #undef HAVE_NETINET6_IN6_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <ppc/limits.h> header file. */
/* #undef HAVE_PPC_LIMITS_H */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
/* #undef HAVE_STAT_EMPTY_STRING_BUG */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/byteorder.h> header file. */
/* #undef HAVE_SYS_BYTEORDER_H */

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/syslimits.h> header file. */
/* #undef HAVE_SYS_SYSLIMITS_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if the system has the type `uint64_t'. */
#define HAVE_UINT64_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `u_char'. */
#define HAVE_U_CHAR 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* BSD */
#define IS_BSD_FAMILY 0

/* OSX */
#define IS_DARWIN_OS 0

/* LINUX */
#define IS_LINUX_FAMILY 1

/* SOLARIS */
#define IS_SOLARIS_FAMILY 0

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "dnscore"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bugreport@yadifa.eu"

/* Define to the full name of this package. */
#define PACKAGE_NAME "dnscore"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "dnscore 2.2.3-6704"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "dnscore"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.2.3-6704"

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to the type of arg 1 for `select'. */
#define SELECT_TYPE_ARG1 int

/* Define to the type of args 2, 3 and 4 for `select'. */
#define SELECT_TYPE_ARG234 (fd_set *)

/* Define to the type of arg 5 for `select'. */
#define SELECT_TYPE_ARG5 (struct timeval *)

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package */
#define VERSION "2.2.3-6704"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */
