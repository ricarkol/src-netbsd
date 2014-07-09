/* $NetBSD: linux32_syscalls.c,v 1.71 2014/05/04 10:10:39 njoly Exp $ */

/*
 * System call names.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.66 2014/05/04 10:08:53 njoly Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: linux32_syscalls.c,v 1.71 2014/05/04 10:10:39 njoly Exp $");

#if defined(_KERNEL_OPT)
#include <sys/param.h>
#include <sys/poll.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/syscallargs.h>
#include <machine/netbsd32_machdep.h>
#include <compat/netbsd32/netbsd32.h>
#include <compat/netbsd32/netbsd32_syscallargs.h>
#include <compat/linux/common/linux_types.h>
#include <compat/linux32/common/linux32_types.h>
#include <compat/linux32/common/linux32_signal.h>
#include <compat/linux32/arch/amd64/linux32_missing.h>
#include <compat/linux32/linux32_syscallargs.h>
#include <compat/linux/common/linux_mmap.h>
#include <compat/linux/common/linux_signal.h>
#include <compat/linux/common/linux_siginfo.h>
#include <compat/linux/common/linux_machdep.h>
#include <compat/linux/common/linux_ipc.h>
#include <compat/linux/common/linux_sem.h>
#include <compat/linux/linux_syscallargs.h>
#endif /* _KERNEL_OPT */

const char *const linux32_syscallnames[] = {
	/*   0 */	"syscall",
	/*   1 */	"exit",
	/*   2 */	"fork",
	/*   3 */	"netbsd32_read",
	/*   4 */	"netbsd32_write",
	/*   5 */	"open",
	/*   6 */	"netbsd32_close",
	/*   7 */	"waitpid",
	/*   8 */	"creat",
	/*   9 */	"netbsd32_link",
	/*  10 */	"unlink",
	/*  11 */	"netbsd32_execve",
	/*  12 */	"netbsd32_chdir",
	/*  13 */	"time",
	/*  14 */	"mknod",
	/*  15 */	"netbsd32_chmod",
	/*  16 */	"lchown16",
	/*  17 */	"break",
	/*  18 */	"#18 (obsolete ostat)",
	/*  19 */	"compat_43_netbsd32_olseek",
	/*  20 */	"getpid",
	/*  21 */	"#21 (unimplemented mount)",
	/*  22 */	"#22 (unimplemented umount)",
	/*  23 */	"linux_setuid16",
	/*  24 */	"linux_getuid16",
	/*  25 */	"stime",
	/*  26 */	"ptrace",
	/*  27 */	"alarm",
	/*  28 */	"#28 (obsolete ofstat)",
	/*  29 */	"pause",
	/*  30 */	"utime",
	/*  31 */	"#31 (obsolete stty)",
	/*  32 */	"#32 (obsolete gtty)",
	/*  33 */	"netbsd32_access",
	/*  34 */	"nice",
	/*  35 */	"#35 (obsolete ftime)",
	/*  36 */	"sync",
	/*  37 */	"kill",
	/*  38 */	"netbsd32___posix_rename",
	/*  39 */	"netbsd32_mkdir",
	/*  40 */	"netbsd32_rmdir",
	/*  41 */	"netbsd32_dup",
	/*  42 */	"pipe",
	/*  43 */	"times",
	/*  44 */	"#44 (obsolete prof)",
	/*  45 */	"brk",
	/*  46 */	"linux_setgid16",
	/*  47 */	"linux_getgid16",
	/*  48 */	"signal",
	/*  49 */	"linux_geteuid16",
	/*  50 */	"linux_getegid16",
	/*  51 */	"netbsd32_acct",
	/*  52 */	"#52 (obsolete phys)",
	/*  53 */	"#53 (obsolete lock)",
	/*  54 */	"ioctl",
	/*  55 */	"fcntl",
	/*  56 */	"#56 (obsolete mpx)",
	/*  57 */	"netbsd32_setpgid",
	/*  58 */	"#58 (obsolete ulimit)",
	/*  59 */	"oldolduname",
	/*  60 */	"netbsd32_umask",
	/*  61 */	"netbsd32_chroot",
	/*  62 */	"#62 (unimplemented ustat)",
	/*  63 */	"netbsd32_dup2",
	/*  64 */	"getppid",
	/*  65 */	"getpgrp",
	/*  66 */	"setsid",
	/*  67 */	"#67 (unimplemented sigaction)",
	/*  68 */	"siggetmask",
	/*  69 */	"sigsetmask",
	/*  70 */	"setreuid16",
	/*  71 */	"setregid16",
	/*  72 */	"#72 (unimplemented sigsuspend)",
	/*  73 */	"#73 (unimplemented sigpending)",
	/*  74 */	"compat_43_netbsd32_osethostname",
	/*  75 */	"setrlimit",
	/*  76 */	"getrlimit",
	/*  77 */	"compat_50_netbsd32_getrusage",
	/*  78 */	"gettimeofday",
	/*  79 */	"settimeofday",
	/*  80 */	"getgroups16",
	/*  81 */	"setgroups16",
	/*  82 */	"oldselect",
	/*  83 */	"netbsd32_symlink",
	/*  84 */	"compat_43_netbsd32_lstat43",
	/*  85 */	"netbsd32_readlink",
	/*  86 */	"#86 (unimplemented uselib)",
	/*  87 */	"swapon",
	/*  88 */	"reboot",
	/*  89 */	"readdir",
	/*  90 */	"old_mmap",
	/*  91 */	"netbsd32_munmap",
	/*  92 */	"compat_43_netbsd32_otruncate",
	/*  93 */	"compat_43_netbsd32_oftruncate",
	/*  94 */	"netbsd32_fchmod",
	/*  95 */	"fchown16",
	/*  96 */	"getpriority",
	/*  97 */	"netbsd32_setpriority",
	/*  98 */	"netbsd32_profil",
	/*  99 */	"statfs",
	/* 100 */	"fstatfs",
	/* 101 */	"ioperm",
	/* 102 */	"socketcall",
	/* 103 */	"#103 (unimplemented syslog)",
	/* 104 */	"compat_50_netbsd32_setitimer",
	/* 105 */	"compat_50_netbsd32_getitimer",
	/* 106 */	"stat",
	/* 107 */	"lstat",
	/* 108 */	"fstat",
	/* 109 */	"olduname",
	/* 110 */	"iopl",
	/* 111 */	"#111 (unimplemented vhangup)",
	/* 112 */	"#112 (unimplemented idle)",
	/* 113 */	"#113 (unimplemented vm86old)",
	/* 114 */	"wait4",
	/* 115 */	"swapoff",
	/* 116 */	"sysinfo",
	/* 117 */	"ipc",
	/* 118 */	"netbsd32_fsync",
	/* 119 */	"sigreturn",
	/* 120 */	"clone",
	/* 121 */	"setdomainname",
	/* 122 */	"uname",
	/* 123 */	"modify_ldt",
	/* 124 */	"#124 (unimplemented adjtimex)",
	/* 125 */	"mprotect",
	/* 126 */	"#126 (unimplemented sigprocmask)",
	/* 127 */	"#127 (unimplemented create_module)",
	/* 128 */	"#128 (unimplemented init_module)",
	/* 129 */	"#129 (unimplemented delete_module)",
	/* 130 */	"#130 (unimplemented get_kernel_syms)",
	/* 131 */	"#131 (unimplemented quotactl)",
	/* 132 */	"netbsd32_getpgid",
	/* 133 */	"netbsd32_fchdir",
	/* 134 */	"#134 (unimplemented bdflush)",
	/* 135 */	"#135 (unimplemented sysfs)",
	/* 136 */	"personality",
	/* 137 */	"#137 (unimplemented afs_syscall)",
	/* 138 */	"setfsuid16",
	/* 139 */	"setfsgid16",
	/* 140 */	"llseek",
	/* 141 */	"getdents",
	/* 142 */	"select",
	/* 143 */	"netbsd32_flock",
	/* 144 */	"netbsd32___msync13",
	/* 145 */	"netbsd32_readv",
	/* 146 */	"netbsd32_writev",
	/* 147 */	"netbsd32_getsid",
	/* 148 */	"fdatasync",
	/* 149 */	"__sysctl",
	/* 150 */	"netbsd32_mlock",
	/* 151 */	"netbsd32_munlock",
	/* 152 */	"netbsd32_mlockall",
	/* 153 */	"munlockall",
	/* 154 */	"sched_setparam",
	/* 155 */	"sched_getparam",
	/* 156 */	"sched_setscheduler",
	/* 157 */	"sched_getscheduler",
	/* 158 */	"sched_yield",
	/* 159 */	"sched_get_priority_max",
	/* 160 */	"sched_get_priority_min",
	/* 161 */	"#161 (unimplemented sched_rr_get_interval)",
	/* 162 */	"nanosleep",
	/* 163 */	"mremap",
	/* 164 */	"setresuid16",
	/* 165 */	"getresuid16",
	/* 166 */	"#166 (unimplemented vm86)",
	/* 167 */	"#167 (unimplemented query_module)",
	/* 168 */	"netbsd32_poll",
	/* 169 */	"#169 (unimplemented nfsservctl)",
	/* 170 */	"setresgid16",
	/* 171 */	"getresgid16",
	/* 172 */	"#172 (unimplemented prctl)",
	/* 173 */	"rt_sigreturn",
	/* 174 */	"rt_sigaction",
	/* 175 */	"rt_sigprocmask",
	/* 176 */	"rt_sigpending",
	/* 177 */	"rt_sigtimedwait",
	/* 178 */	"rt_queueinfo",
	/* 179 */	"rt_sigsuspend",
	/* 180 */	"pread",
	/* 181 */	"pwrite",
	/* 182 */	"chown16",
	/* 183 */	"netbsd32___getcwd",
	/* 184 */	"#184 (unimplemented capget)",
	/* 185 */	"#185 (unimplemented capset)",
	/* 186 */	"#186 (unimplemented sigaltstack)",
	/* 187 */	"#187 (unimplemented sendfile)",
	/* 188 */	"#188 (unimplemented getpmsg)",
	/* 189 */	"#189 (unimplemented putpmsg)",
	/* 190 */	"__vfork14",
	/* 191 */	"ugetrlimit",
	/* 192 */	"mmap2",
	/* 193 */	"truncate64",
	/* 194 */	"ftruncate64",
	/* 195 */	"stat64",
	/* 196 */	"lstat64",
	/* 197 */	"fstat64",
	/* 198 */	"netbsd32___posix_lchown",
	/* 199 */	"getuid",
	/* 200 */	"getgid",
	/* 201 */	"geteuid",
	/* 202 */	"getegid",
	/* 203 */	"netbsd32_setreuid",
	/* 204 */	"netbsd32_setregid",
	/* 205 */	"netbsd32_getgroups",
	/* 206 */	"netbsd32_setgroups",
	/* 207 */	"netbsd32___posix_fchown",
	/* 208 */	"setresuid",
	/* 209 */	"getresuid",
	/* 210 */	"setresgid",
	/* 211 */	"getresgid",
	/* 212 */	"netbsd32___posix_chown",
	/* 213 */	"netbsd32_setuid",
	/* 214 */	"netbsd32_setgid",
	/* 215 */	"setfsuid",
	/* 216 */	"setfsgid",
	/* 217 */	"#217 (unimplemented pivot_root)",
	/* 218 */	"netbsd32_mincore",
	/* 219 */	"netbsd32_madvise",
	/* 220 */	"getdents64",
#define linux32_sys_fcntl64 linux32_sys_fcntl
#define linux32_sys_fcntl64_args linux32_sys_fcntl_args
	/* 221 */	"fcntl64",
	/* 222 */	"#222 (unimplemented / * unused * /)",
	/* 223 */	"#223 (unimplemented / * unused * /)",
	/* 224 */	"gettid",
	/* 225 */	"#225 (unimplemented readahead)",
	/* 226 */	"netbsd32_setxattr",
	/* 227 */	"netbsd32_lsetxattr",
	/* 228 */	"netbsd32_fsetxattr",
	/* 229 */	"netbsd32_getxattr",
	/* 230 */	"netbsd32_lgetxattr",
	/* 231 */	"netbsd32_fgetxattr",
	/* 232 */	"netbsd32_listxattr",
	/* 233 */	"netbsd32_llistxattr",
	/* 234 */	"netbsd32_flistxattr",
	/* 235 */	"netbsd32_removexattr",
	/* 236 */	"netbsd32_lremovexattr",
	/* 237 */	"netbsd32_fremovexattr",
	/* 238 */	"tkill",
	/* 239 */	"#239 (unimplemented sendfile64)",
	/* 240 */	"futex",
	/* 241 */	"sched_setaffinity",
	/* 242 */	"sched_getaffinity",
	/* 243 */	"set_thread_area",
	/* 244 */	"get_thread_area",
	/* 245 */	"#245 (unimplemented io_setup)",
	/* 246 */	"#246 (unimplemented io_destroy)",
	/* 247 */	"#247 (unimplemented io_getevents)",
	/* 248 */	"#248 (unimplemented io_submit)",
	/* 249 */	"#249 (unimplemented io_cancel)",
	/* 250 */	"fadvise64",
	/* 251 */	"#251 (unimplemented / * unused * /)",
	/* 252 */	"exit_group",
	/* 253 */	"#253 (unimplemented lookup_dcookie)",
	/* 254 */	"#254 (unimplemented epoll_create)",
	/* 255 */	"#255 (unimplemented epoll_ctl)",
	/* 256 */	"#256 (unimplemented epoll_wait)",
	/* 257 */	"#257 (unimplemented remap_file_pages)",
	/* 258 */	"set_tid_address",
	/* 259 */	"#259 (unimplemented timer_create)",
	/* 260 */	"#260 (unimplemented timer_settime)",
	/* 261 */	"#261 (unimplemented timer_gettime)",
	/* 262 */	"#262 (unimplemented timer_getoverrun)",
	/* 263 */	"#263 (unimplemented timer_delete)",
	/* 264 */	"clock_settime",
	/* 265 */	"clock_gettime",
	/* 266 */	"clock_getres",
	/* 267 */	"clock_nanosleep",
	/* 268 */	"statfs64",
	/* 269 */	"fstatfs64",
	/* 270 */	"tgkill",
	/* 271 */	"#271 (unimplemented utimes)",
	/* 272 */	"fadvise64_64",
	/* 273 */	"#273 (unimplemented vserver)",
	/* 274 */	"#274 (unimplemented mbind)",
	/* 275 */	"#275 (unimplemented get_mempolicy)",
	/* 276 */	"#276 (unimplemented set_mempolicy)",
	/* 277 */	"#277 (unimplemented mq_open)",
	/* 278 */	"#278 (unimplemented mq_unlink)",
	/* 279 */	"#279 (unimplemented mq_timedsend)",
	/* 280 */	"#280 (unimplemented mq_timedreceive)",
	/* 281 */	"#281 (unimplemented mq_notify)",
	/* 282 */	"#282 (unimplemented mq_getsetattr)",
	/* 283 */	"#283 (unimplemented kexec_load)",
	/* 284 */	"#284 (unimplemented waitid)",
	/* 285 */	"#285 (unimplemented / * unused * /)",
	/* 286 */	"#286 (unimplemented add_key)",
	/* 287 */	"#287 (unimplemented request_key)",
	/* 288 */	"#288 (unimplemented keyctl)",
	/* 289 */	"#289 (unimplemented ioprio_set)",
	/* 290 */	"#290 (unimplemented ioprio_get)",
	/* 291 */	"#291 (unimplemented inotify_init)",
	/* 292 */	"#292 (unimplemented inotify_add_watch)",
	/* 293 */	"#293 (unimplemented inotify_rm_watch)",
	/* 294 */	"#294 (unimplemented migrate_pages)",
	/* 295 */	"openat",
	/* 296 */	"netbsd32_mkdirat",
	/* 297 */	"mknodat",
	/* 298 */	"fchownat",
	/* 299 */	"#299 (unimplemented futimesat)",
	/* 300 */	"fstatat64",
	/* 301 */	"unlinkat",
	/* 302 */	"netbsd32_renameat",
	/* 303 */	"linkat",
	/* 304 */	"netbsd32_symlinkat",
	/* 305 */	"netbsd32_readlinkat",
	/* 306 */	"fchmodat",
	/* 307 */	"faccessat",
	/* 308 */	"#308 (unimplemented pselect6)",
	/* 309 */	"#309 (unimplemented ppoll)",
	/* 310 */	"#310 (unimplemented unshare)",
	/* 311 */	"set_robust_list",
	/* 312 */	"get_robust_list",
	/* 313 */	"#313 (unimplemented splice)",
	/* 314 */	"#314 (unimplemented sync_file_range)",
	/* 315 */	"#315 (unimplemented tee)",
	/* 316 */	"#316 (unimplemented vmsplice)",
	/* 317 */	"#317 (unimplemented move_pages)",
	/* 318 */	"#318 (unimplemented getcpu)",
	/* 319 */	"#319 (unimplemented epoll_wait)",
	/* 320 */	"utimensat",
	/* 321 */	"#321 (unimplemented signalfd)",
	/* 322 */	"#322 (unimplemented timerfd_create)",
	/* 323 */	"#323 (unimplemented eventfd)",
	/* 324 */	"#324 (unimplemented fallocate)",
	/* 325 */	"#325 (unimplemented timerfd_settime)",
	/* 326 */	"#326 (unimplemented timerfd_gettime)",
	/* 327 */	"#327 (unimplemented signalfd4)",
	/* 328 */	"#328 (unimplemented eventfd2)",
	/* 329 */	"#329 (unimplemented epoll_create1)",
	/* 330 */	"dup3",
	/* 331 */	"pipe2",
	/* 332 */	"#332 (unimplemented inotify_init1)",
	/* 333 */	"#333 (unimplemented preadv)",
	/* 334 */	"#334 (unimplemented pwritev)",
	/* 335 */	"#335 (unimplemented rt_tgsigqueueinfo)",
	/* 336 */	"#336 (unimplemented perf_counter_open)",
	/* 337 */	"#337 (unimplemented recvmmsg)",
	/* 338 */	"#338 (unimplemented fanotify_init)",
	/* 339 */	"#339 (unimplemented fanotify_mark)",
	/* 340 */	"#340 (unimplemented prlimit64)",
	/* 341 */	"#341 (unimplemented name_to_handle_at)",
	/* 342 */	"#342 (unimplemented open_by_handle_at)",
	/* 343 */	"#343 (unimplemented clock_adjtime)",
	/* 344 */	"#344 (unimplemented syncfs)",
	/* 345 */	"#345 (unimplemented sendmmsg)",
	/* 346 */	"#346 (unimplemented setns)",
	/* 347 */	"#347 (unimplemented process_vm_readv)",
	/* 348 */	"#348 (unimplemented process_vm_writev)",
	/* 349 */	"#349 (unimplemented kcmp)",
	/* 350 */	"#350 (unimplemented finit_module)",
	/* 351 */	"# filler",
	/* 352 */	"# filler",
	/* 353 */	"# filler",
	/* 354 */	"# filler",
	/* 355 */	"# filler",
	/* 356 */	"# filler",
	/* 357 */	"# filler",
	/* 358 */	"# filler",
	/* 359 */	"# filler",
	/* 360 */	"# filler",
	/* 361 */	"# filler",
	/* 362 */	"# filler",
	/* 363 */	"# filler",
	/* 364 */	"# filler",
	/* 365 */	"# filler",
	/* 366 */	"# filler",
	/* 367 */	"# filler",
	/* 368 */	"# filler",
	/* 369 */	"# filler",
	/* 370 */	"# filler",
	/* 371 */	"# filler",
	/* 372 */	"# filler",
	/* 373 */	"# filler",
	/* 374 */	"# filler",
	/* 375 */	"# filler",
	/* 376 */	"# filler",
	/* 377 */	"# filler",
	/* 378 */	"# filler",
	/* 379 */	"# filler",
	/* 380 */	"# filler",
	/* 381 */	"# filler",
	/* 382 */	"# filler",
	/* 383 */	"# filler",
	/* 384 */	"# filler",
	/* 385 */	"# filler",
	/* 386 */	"# filler",
	/* 387 */	"# filler",
	/* 388 */	"# filler",
	/* 389 */	"# filler",
	/* 390 */	"# filler",
	/* 391 */	"# filler",
	/* 392 */	"# filler",
	/* 393 */	"# filler",
	/* 394 */	"# filler",
	/* 395 */	"# filler",
	/* 396 */	"# filler",
	/* 397 */	"# filler",
	/* 398 */	"# filler",
	/* 399 */	"# filler",
	/* 400 */	"# filler",
	/* 401 */	"# filler",
	/* 402 */	"# filler",
	/* 403 */	"# filler",
	/* 404 */	"# filler",
	/* 405 */	"# filler",
	/* 406 */	"# filler",
	/* 407 */	"# filler",
	/* 408 */	"# filler",
	/* 409 */	"# filler",
	/* 410 */	"# filler",
	/* 411 */	"# filler",
	/* 412 */	"# filler",
	/* 413 */	"# filler",
	/* 414 */	"# filler",
	/* 415 */	"# filler",
	/* 416 */	"# filler",
	/* 417 */	"# filler",
	/* 418 */	"# filler",
	/* 419 */	"# filler",
	/* 420 */	"# filler",
	/* 421 */	"# filler",
	/* 422 */	"# filler",
	/* 423 */	"# filler",
	/* 424 */	"# filler",
	/* 425 */	"# filler",
	/* 426 */	"# filler",
	/* 427 */	"# filler",
	/* 428 */	"# filler",
	/* 429 */	"# filler",
	/* 430 */	"# filler",
	/* 431 */	"# filler",
	/* 432 */	"# filler",
	/* 433 */	"# filler",
	/* 434 */	"# filler",
	/* 435 */	"# filler",
	/* 436 */	"# filler",
	/* 437 */	"# filler",
	/* 438 */	"# filler",
	/* 439 */	"# filler",
	/* 440 */	"# filler",
	/* 441 */	"# filler",
	/* 442 */	"# filler",
	/* 443 */	"# filler",
	/* 444 */	"# filler",
	/* 445 */	"# filler",
	/* 446 */	"# filler",
	/* 447 */	"# filler",
	/* 448 */	"# filler",
	/* 449 */	"# filler",
	/* 450 */	"# filler",
	/* 451 */	"# filler",
	/* 452 */	"# filler",
	/* 453 */	"# filler",
	/* 454 */	"# filler",
	/* 455 */	"# filler",
	/* 456 */	"# filler",
	/* 457 */	"# filler",
	/* 458 */	"# filler",
	/* 459 */	"# filler",
	/* 460 */	"# filler",
	/* 461 */	"# filler",
	/* 462 */	"# filler",
	/* 463 */	"# filler",
	/* 464 */	"# filler",
	/* 465 */	"# filler",
	/* 466 */	"# filler",
	/* 467 */	"# filler",
	/* 468 */	"# filler",
	/* 469 */	"# filler",
	/* 470 */	"# filler",
	/* 471 */	"# filler",
	/* 472 */	"# filler",
	/* 473 */	"# filler",
	/* 474 */	"# filler",
	/* 475 */	"# filler",
	/* 476 */	"# filler",
	/* 477 */	"# filler",
	/* 478 */	"# filler",
	/* 479 */	"# filler",
	/* 480 */	"# filler",
	/* 481 */	"# filler",
	/* 482 */	"# filler",
	/* 483 */	"# filler",
	/* 484 */	"# filler",
	/* 485 */	"# filler",
	/* 486 */	"# filler",
	/* 487 */	"# filler",
	/* 488 */	"# filler",
	/* 489 */	"# filler",
	/* 490 */	"# filler",
	/* 491 */	"# filler",
	/* 492 */	"# filler",
	/* 493 */	"# filler",
	/* 494 */	"# filler",
	/* 495 */	"# filler",
	/* 496 */	"# filler",
	/* 497 */	"# filler",
	/* 498 */	"# filler",
	/* 499 */	"# filler",
	/* 500 */	"# filler",
	/* 501 */	"# filler",
	/* 502 */	"# filler",
	/* 503 */	"# filler",
	/* 504 */	"# filler",
	/* 505 */	"# filler",
	/* 506 */	"# filler",
	/* 507 */	"# filler",
	/* 508 */	"# filler",
	/* 509 */	"# filler",
	/* 510 */	"# filler",
	/* 511 */	"# filler",
};
