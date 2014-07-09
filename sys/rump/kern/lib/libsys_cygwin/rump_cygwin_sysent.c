/* $NetBSD: rump_cygwin_sysent.c,v 1.2 2013/05/15 21:41:25 pooka Exp $ */

/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.2 2013/05/15 21:39:30 pooka Exp
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: rump_cygwin_sysent.c,v 1.2 2013/05/15 21:41:25 pooka Exp $");

#include <sys/param.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/socket.h>
#include <sys/mount.h>
#include <sys/sched.h>
#include <sys/syscallargs.h>
#include "rump_cygwin_syscallargs.h"

#define	s(type)	sizeof(type)
#define	n(type)	(sizeof(type)/sizeof (register_t))
#define	ns(type)	n(type), s(type)

struct sysent rump_cygwin_sysent[] = {
	{ 0, 0, 0,
	    (sy_call_t *)sys_nosys },		/* 0 = nosys */
	{ 0, 0, 0,
	    sys_nosys },			/* 1 = unimplemented exit */
	{ 0, 0, 0,
	    sys_nosys },			/* 2 = unimplemented fork */
	{ ns(struct sys_read_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_read },		/* 3 = read */
	{ ns(struct sys_write_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_write },		/* 4 = write */
	{ ns(struct rump_cygwin_sys_open_args), SYCALL_ARG_PTR,
	    (sy_call_t *)rump_cygwin_sys_open },/* 5 = open */
	{ ns(struct sys_close_args), 0,
	    (sy_call_t *)sys_close },		/* 6 = close */
	{ 0, 0, 0,
	    sys_nosys },			/* 7 = unimplemented wait4 */
	{ 0, 0, 0,
	    sys_nosys },			/* 8 = unimplemented creat */
	{ ns(struct sys_link_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_link },		/* 9 = link */
	{ ns(struct sys_unlink_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_unlink },		/* 10 = unlink */
	{ 0, 0, 0,
	    sys_nosys },			/* 11 = unimplemented execv */
	{ ns(struct sys_chdir_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chdir },		/* 12 = chdir */
	{ ns(struct sys_fchdir_args), 0,
	    (sy_call_t *)sys_fchdir },		/* 13 = fchdir */
	{ 0, 0, 0,
	    sys_nosys },			/* 14 = unimplemented mknod */
	{ ns(struct sys_chmod_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chmod },		/* 15 = chmod */
	{ ns(struct sys_chown_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chown },		/* 16 = chown */
	{ 0, 0, 0,
	    sys_nosys },			/* 17 = unimplemented obreak */
	{ 0, 0, 0,
	    sys_nosys },			/* 18 = unimplemented getfsstat */
	{ 0, 0, 0,
	    sys_nosys },			/* 19 = unimplemented lseek */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getpid_with_ppid },/* 20 = getpid */
	{ 0, 0, 0,
	    sys_nosys },			/* 21 = unimplemented mount */
	{ 0, 0, 0,
	    sys_nosys },			/* 22 = unimplemented unmount */
	{ ns(struct sys_setuid_args), 0,
	    (sy_call_t *)sys_setuid },		/* 23 = setuid */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getuid_with_euid },/* 24 = getuid */
	{ 0, 0, 0,
	    (sy_call_t *)sys_geteuid },		/* 25 = geteuid */
	{ 0, 0, 0,
	    sys_nosys },			/* 26 = unimplemented ptrace */
	{ 0, 0, 0,
	    sys_nosys },			/* 27 = unimplemented recvmsg */
	{ 0, 0, 0,
	    sys_nosys },			/* 28 = unimplemented sendmsg */
	{ 0, 0, 0,
	    sys_nosys },			/* 29 = unimplemented recvfrom */
	{ 0, 0, 0,
	    sys_nosys },			/* 30 = unimplemented accept */
	{ 0, 0, 0,
	    sys_nosys },			/* 31 = unimplemented getpeername */
	{ 0, 0, 0,
	    sys_nosys },			/* 32 = unimplemented getsockname */
	{ ns(struct sys_access_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_access },		/* 33 = access */
	{ 0, 0, 0,
	    sys_nosys },			/* 34 = unimplemented chflags */
	{ 0, 0, 0,
	    sys_nosys },			/* 35 = unimplemented fchflags */
	{ 0, 0, 0,
	    (sy_call_t *)sys_sync },		/* 36 = sync */
	{ 0, 0, 0,
	    sys_nosys },			/* 37 = unimplemented kill */
	{ 0, 0, 0,
	    sys_nosys },			/* 38 = unimplemented stat */
	{ 0, 0, 0,
	    sys_nosys },			/* 39 = unimplemented getppid */
	{ 0, 0, 0,
	    sys_nosys },			/* 40 = unimplemented lstat */
	{ ns(struct sys_dup_args), 0,
	    (sy_call_t *)sys_dup },		/* 41 = dup */
	{ 0, 0, 0,
	    (sy_call_t *)sys_pipe },		/* 42 = pipe */
	{ 0, 0, 0,
	    sys_nosys },			/* 43 = unimplemented getegid */
	{ 0, 0, 0,
	    sys_nosys },			/* 44 = unimplemented profil */
	{ 0, 0, 0,
	    sys_nosys },			/* 45 = unimplemented ktrace */
	{ 0, 0, 0,
	    sys_nosys },			/* 46 = unimplemented sigaction */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getgid_with_egid },/* 47 = getgid */
	{ 0, 0, 0,
	    sys_nosys },			/* 48 = unimplemented sigprocmask */
	{ 0, 0, 0,
	    sys_nosys },			/* 49 = unimplemented __getlogin */
	{ 0, 0, 0,
	    sys_nosys },			/* 50 = unimplemented __setlogin */
	{ 0, 0, 0,
	    sys_nosys },			/* 51 = unimplemented acct */
	{ 0, 0, 0,
	    sys_nosys },			/* 52 = unimplemented sigpending */
	{ 0, 0, 0,
	    sys_nosys },			/* 53 = unimplemented sigaltstack */
	{ 0, 0, 0,
	    sys_nosys },			/* 54 = unimplemented ioctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 55 = unimplemented reboot */
	{ 0, 0, 0,
	    sys_nosys },			/* 56 = unimplemented revoke */
	{ ns(struct sys_symlink_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_symlink },		/* 57 = symlink */
	{ ns(struct sys_readlink_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_readlink },	/* 58 = readlink */
	{ 0, 0, 0,
	    sys_nosys },			/* 59 = unimplemented execve */
	{ ns(struct sys_umask_args), 0,
	    (sy_call_t *)sys_umask },		/* 60 = umask */
	{ ns(struct sys_chroot_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_chroot },		/* 61 = chroot */
	{ 0, 0, 0,
	    sys_nosys },			/* 62 = unimplemented fstat43 */
	{ 0, 0, 0,
	    sys_nosys },			/* 63 = unimplemented getkerninfo */
	{ 0, 0, 0,
	    sys_nosys },			/* 64 = unimplemented getpagesize */
	{ 0, 0, 0,
	    sys_nosys },			/* 65 = unimplemented msync */
	{ 0, 0, 0,
	    sys_nosys },			/* 66 = unimplemented vfork */
	{ 0, 0, 0,
	    sys_nosys },			/* 67 = unimplemented vread */
	{ 0, 0, 0,
	    sys_nosys },			/* 68 = unimplemented vwrite */
	{ 0, 0, 0,
	    sys_nosys },			/* 69 = unimplemented sbrk */
	{ 0, 0, 0,
	    sys_nosys },			/* 70 = unimplemented sstk */
	{ 0, 0, 0,
	    sys_nosys },			/* 71 = unimplemented mmap */
	{ 0, 0, 0,
	    sys_nosys },			/* 72 = unimplemented ovadvise */
	{ 0, 0, 0,
	    sys_nosys },			/* 73 = unimplemented munmap */
	{ 0, 0, 0,
	    sys_nosys },			/* 74 = unimplemented mprotect */
	{ 0, 0, 0,
	    sys_nosys },			/* 75 = unimplemented madvise */
	{ 0, 0, 0,
	    sys_nosys },			/* 76 = unimplemented vhangup */
	{ 0, 0, 0,
	    sys_nosys },			/* 77 = unimplemented vlimit */
	{ 0, 0, 0,
	    sys_nosys },			/* 78 = unimplemented mincore */
	{ ns(struct sys_getgroups_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_getgroups },	/* 79 = getgroups */
	{ ns(struct sys_setgroups_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_setgroups },	/* 80 = setgroups */
	{ 0, 0, 0,
	    (sy_call_t *)sys_getpgrp },		/* 81 = getpgrp */
	{ ns(struct sys_setpgid_args), 0,
	    (sy_call_t *)sys_setpgid },		/* 82 = setpgid */
	{ 0, 0, 0,
	    sys_nosys },			/* 83 = unimplemented setitimer */
	{ 0, 0, 0,
	    sys_nosys },			/* 84 = unimplemented wait */
	{ 0, 0, 0,
	    sys_nosys },			/* 85 = unimplemented swapon */
	{ 0, 0, 0,
	    sys_nosys },			/* 86 = unimplemented getitimer */
	{ 0, 0, 0,
	    sys_nosys },			/* 87 = unimplemented gethostname */
	{ 0, 0, 0,
	    sys_nosys },			/* 88 = unimplemented sethostname */
	{ 0, 0, 0,
	    sys_nosys },			/* 89 = unimplemented getdtablesize */
	{ ns(struct sys_dup2_args), 0,
	    (sy_call_t *)sys_dup2 },		/* 90 = dup2 */
	{ 0, 0, 0,
	    sys_nosys },			/* 91 = unimplemented getdopt */
	{ 0, 0, 0,
	    sys_nosys },			/* 92 = unimplemented fcntl */
	{ 0, 0, 0,
	    sys_nosys },			/* 93 = unimplemented select */
	{ 0, 0, 0,
	    sys_nosys },			/* 94 = unimplemented setdopt */
	{ ns(struct sys_fsync_args), 0,
	    (sy_call_t *)sys_fsync },		/* 95 = fsync */
	{ 0, 0, 0,
	    sys_nosys },			/* 96 = unimplemented setpriority */
	{ 0, 0, 0,
	    sys_nosys },			/* 97 = unimplemented socket */
	{ 0, 0, 0,
	    sys_nosys },			/* 98 = unimplemented connect */
	{ 0, 0, 0,
	    sys_nosys },			/* 99 = unimplemented accept */
	{ 0, 0, 0,
	    sys_nosys },			/* 100 = unimplemented getpriority */
	{ 0, 0, 0,
	    sys_nosys },			/* 101 = unimplemented send */
	{ 0, 0, 0,
	    sys_nosys },			/* 102 = unimplemented recv */
	{ 0, 0, 0,
	    sys_nosys },			/* 103 = unimplemented sigreturn */
	{ 0, 0, 0,
	    sys_nosys },			/* 104 = unimplemented bind */
	{ 0, 0, 0,
	    sys_nosys },			/* 105 = unimplemented setsockopt */
	{ 0, 0, 0,
	    sys_nosys },			/* 106 = unimplemented listen */
	{ 0, 0, 0,
	    sys_nosys },			/* 107 = unimplemented vtimes */
	{ 0, 0, 0,
	    sys_nosys },			/* 108 = unimplemented sigvec */
	{ 0, 0, 0,
	    sys_nosys },			/* 109 = unimplemented sigblock */
	{ 0, 0, 0,
	    sys_nosys },			/* 110 = unimplemented sigsetmask */
	{ 0, 0, 0,
	    sys_nosys },			/* 111 = unimplemented sigsuspend */
	{ 0, 0, 0,
	    sys_nosys },			/* 112 = unimplemented sigstack */
	{ 0, 0, 0,
	    sys_nosys },			/* 113 = unimplemented orecvmsg */
	{ 0, 0, 0,
	    sys_nosys },			/* 114 = unimplemented osendmsg */
	{ 0, 0, 0,
	    sys_nosys },			/* 115 = unimplemented vtrace */
	{ 0, 0, 0,
	    sys_nosys },			/* 116 = unimplemented gettimeofday */
	{ 0, 0, 0,
	    sys_nosys },			/* 117 = unimplemented getrusage */
	{ 0, 0, 0,
	    sys_nosys },			/* 118 = unimplemented getsockopt */
	{ 0, 0, 0,
	    sys_nosys },			/* 119 = unimplemented resuba */
	{ ns(struct sys_readv_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_readv },		/* 120 = readv */
	{ ns(struct sys_writev_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_writev },		/* 121 = writev */
	{ 0, 0, 0,
	    sys_nosys },			/* 122 = unimplemented settimeofday */
	{ ns(struct sys_fchown_args), 0,
	    (sy_call_t *)sys_fchown },		/* 123 = fchown */
	{ ns(struct sys_fchmod_args), 0,
	    (sy_call_t *)sys_fchmod },		/* 124 = fchmod */
	{ 0, 0, 0,
	    sys_nosys },			/* 125 = unimplemented orecvfrom */
	{ ns(struct sys_setreuid_args), 0,
	    (sy_call_t *)sys_setreuid },	/* 126 = setreuid */
	{ ns(struct sys_setregid_args), 0,
	    (sy_call_t *)sys_setregid },	/* 127 = setregid */
	{ ns(struct sys_rename_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_rename },		/* 128 = rename */
	{ 0, 0, 0,
	    sys_nosys },			/* 129 = unimplemented otruncate */
	{ 0, 0, 0,
	    sys_nosys },			/* 130 = unimplemented oftruncate */
	{ ns(struct sys_flock_args), 0,
	    (sy_call_t *)sys_flock },		/* 131 = flock */
	{ 0, 0, 0,
	    sys_nosys },			/* 132 = unimplemented mkfifo */
	{ 0, 0, 0,
	    sys_nosys },			/* 133 = unimplemented sendto */
	{ 0, 0, 0,
	    sys_nosys },			/* 134 = unimplemented shutdown */
	{ 0, 0, 0,
	    sys_nosys },			/* 135 = unimplemented socketpair */
	{ ns(struct sys_mkdir_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_mkdir },		/* 136 = mkdir */
	{ ns(struct sys_rmdir_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_rmdir },		/* 137 = rmdir */
	{ 0, 0, 0,
	    sys_nosys },			/* 138 = unimplemented utimes */
	{ 0, 0, 0,
	    sys_nosys },			/* 139 = unimplemented 4.2 sigreturn */
	{ 0, 0, 0,
	    sys_nosys },			/* 140 = unimplemented adjtime */
	{ 0, 0, 0,
	    sys_nosys },			/* 141 = unimplemented ogetpeername */
	{ 0, 0, 0,
	    sys_nosys },			/* 142 = unimplemented ogethostid */
	{ 0, 0, 0,
	    sys_nosys },			/* 143 = unimplemented osethostid */
	{ 0, 0, 0,
	    sys_nosys },			/* 144 = unimplemented ogetrlimit */
	{ 0, 0, 0,
	    sys_nosys },			/* 145 = unimplemented osetrlimit */
	{ 0, 0, 0,
	    sys_nosys },			/* 146 = unimplemented okillpg */
	{ 0, 0, 0,
	    (sy_call_t *)sys_setsid },		/* 147 = setsid */
	{ 0, 0, 0,
	    sys_nosys },			/* 148 = unimplemented quotactl */
	{ 0, 0, 0,
	    sys_nosys },			/* 149 = unimplemented oquota */
	{ 0, 0, 0,
	    sys_nosys },			/* 150 = unimplemented ogetsockname */
	{ 0, 0, 0,
	    sys_nosys },			/* 151 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 152 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 153 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 154 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 155 = unimplemented nfssvc */
	{ 0, 0, 0,
	    sys_nosys },			/* 156 = unimplemented ogetdirentries */
	{ 0, 0, 0,
	    sys_nosys },			/* 157 = unimplemented statfs12 */
	{ 0, 0, 0,
	    sys_nosys },			/* 158 = unimplemented fstatfs12 */
	{ 0, 0, 0,
	    sys_nosys },			/* 159 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 160 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 161 = unimplemented getfh30 */
	{ 0, 0, 0,
	    sys_nosys },			/* 162 = unimplemented ogetdomainname */
	{ 0, 0, 0,
	    sys_nosys },			/* 163 = unimplemented osetdomainname */
	{ 0, 0, 0,
	    sys_nosys },			/* 164 = unimplemented ouname */
	{ 0, 0, 0,
	    sys_nosys },			/* 165 = unimplemented sysarch */
	{ 0, 0, 0,
	    sys_nosys },			/* 166 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 167 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 168 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 169 = unimplemented 1.0 semsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 170 = unimplemented 1.0 msgsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 171 = unimplemented 1.0 shmsys */
	{ 0, 0, 0,
	    sys_nosys },			/* 172 = unimplemented */
	{ ns(struct sys_pread_args), SYCALL_NARGS64_VAL(1) | SYCALL_ARG4_64 | SYCALL_ARG_PTR,
	    (sy_call_t *)sys_pread },		/* 173 = pread */
	{ ns(struct sys_pwrite_args), SYCALL_NARGS64_VAL(1) | SYCALL_ARG4_64 | SYCALL_ARG_PTR,
	    (sy_call_t *)sys_pwrite },		/* 174 = pwrite */
	{ 0, 0, 0,
	    sys_nosys },			/* 175 = unimplemented ntp_gettime */
	{ 0, 0, 0,
	    sys_nosys },			/* 176 = unimplemented ntp_adjtime */
	{ 0, 0, 0,
	    sys_nosys },			/* 177 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 178 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 179 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 180 = unimplemented */
	{ ns(struct sys_setgid_args), 0,
	    (sy_call_t *)sys_setgid },		/* 181 = setgid */
	{ ns(struct sys_setegid_args), 0,
	    (sy_call_t *)sys_setegid },		/* 182 = setegid */
	{ ns(struct sys_seteuid_args), 0,
	    (sy_call_t *)sys_seteuid },		/* 183 = seteuid */
	{ 0, 0, 0,
	    sys_nosys },			/* 184 = unimplemented lfs_bmapv */
	{ 0, 0, 0,
	    sys_nosys },			/* 185 = unimplemented lfs_markv */
	{ 0, 0, 0,
	    sys_nosys },			/* 186 = unimplemented lfs_segclean */
	{ 0, 0, 0,
	    sys_nosys },			/* 187 = unimplemented lfs_segwait */
	{ 0, 0, 0,
	    sys_nosys },			/* 188 = unimplemented stat12 */
	{ 0, 0, 0,
	    sys_nosys },			/* 189 = unimplemented fstat12 */
	{ 0, 0, 0,
	    sys_nosys },			/* 190 = unimplemented lstat12 */
	{ 0, 0, 0,
	    sys_nosys },			/* 191 = unimplemented pathconf */
	{ 0, 0, 0,
	    sys_nosys },			/* 192 = unimplemented fpathconf */
	{ 0, 0, 0,
	    sys_nosys },			/* 193 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 194 = unimplemented getrlimit */
	{ 0, 0, 0,
	    sys_nosys },			/* 195 = unimplemented setrlimit */
	{ 0, 0, 0,
	    sys_nosys },			/* 196 = unimplemented getdirentries */
	{ 0, 0, 0,
	    sys_nosys },			/* 197 = unimplemented mmap */
	{ 0, 0, 0,
	    sys_nosys },			/* 198 = unimplemented __syscall */
	{ ns(struct sys_lseek_args), SYCALL_NARGS64_VAL(1) | SYCALL_ARG2_64,
	    (sy_call_t *)sys_lseek },		/* 199 = lseek */
	{ ns(struct sys_truncate_args), SYCALL_NARGS64_VAL(1) | SYCALL_ARG2_64 | SYCALL_ARG_PTR,
	    (sy_call_t *)sys_truncate },	/* 200 = truncate */
	{ ns(struct sys_ftruncate_args), SYCALL_NARGS64_VAL(1) | SYCALL_ARG2_64,
	    (sy_call_t *)sys_ftruncate },	/* 201 = ftruncate */
	{ 0, 0, 0,
	    sys_nosys },			/* 202 = unimplemented __sysctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 203 = unimplemented mlock */
	{ 0, 0, 0,
	    sys_nosys },			/* 204 = unimplemented munlock */
	{ 0, 0, 0,
	    sys_nosys },			/* 205 = unimplemented undelete */
	{ 0, 0, 0,
	    sys_nosys },			/* 206 = unimplemented futimes */
	{ ns(struct sys_getpgid_args), 0,
	    (sy_call_t *)sys_getpgid },		/* 207 = getpgid */
	{ 0, 0, 0,
	    sys_nosys },			/* 208 = unimplemented reboot */
	{ ns(struct sys_poll_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys_poll },		/* 209 = poll */
	{ 0, 0, 0,
	    sys_nosys },			/* 210 = unimplemented afssys */
	{ 0, 0, 0,
	    sys_nosys },			/* 211 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 212 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 213 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 214 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 215 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 216 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 217 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 218 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 219 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 220 = unimplemented compat_14_semctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 221 = unimplemented semget */
	{ 0, 0, 0,
	    sys_nosys },			/* 222 = unimplemented semop */
	{ 0, 0, 0,
	    sys_nosys },			/* 223 = unimplemented semconfig */
	{ 0, 0, 0,
	    sys_nosys },			/* 224 = unimplemented compat_14_msgctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 225 = unimplemented msgget */
	{ 0, 0, 0,
	    sys_nosys },			/* 226 = unimplemented msgsnd */
	{ 0, 0, 0,
	    sys_nosys },			/* 227 = unimplemented msgrcv */
	{ 0, 0, 0,
	    sys_nosys },			/* 228 = unimplemented shmat */
	{ 0, 0, 0,
	    sys_nosys },			/* 229 = unimplemented compat_14_shmctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 230 = unimplemented shmdt */
	{ 0, 0, 0,
	    sys_nosys },			/* 231 = unimplemented shmget */
	{ 0, 0, 0,
	    sys_nosys },			/* 232 = unimplemented clock_gettime */
	{ 0, 0, 0,
	    sys_nosys },			/* 233 = unimplemented clock_settime */
	{ 0, 0, 0,
	    sys_nosys },			/* 234 = unimplemented clock_getres */
	{ 0, 0, 0,
	    sys_nosys },			/* 235 = unimplemented timer_create */
	{ 0, 0, 0,
	    sys_nosys },			/* 236 = unimplemented timer_delete */
	{ 0, 0, 0,
	    sys_nosys },			/* 237 = unimplemented timer_settime */
	{ 0, 0, 0,
	    sys_nosys },			/* 238 = unimplemented timer_gettime */
	{ 0, 0, 0,
	    sys_nosys },			/* 239 = unimplemented timer_getoverrun */
	{ 0, 0, 0,
	    sys_nosys },			/* 240 = unimplemented nanosleep */
	{ 0, 0, 0,
	    sys_nosys },			/* 241 = unimplemented fdatasync */
	{ 0, 0, 0,
	    sys_nosys },			/* 242 = unimplemented mlockall */
	{ 0, 0, 0,
	    sys_nosys },			/* 243 = unimplemented munlockall */
	{ 0, 0, 0,
	    sys_nosys },			/* 244 = unimplemented __sigtimedwait */
	{ 0, 0, 0,
	    sys_nosys },			/* 245 = unimplemented sigqueueinfo */
	{ 0, 0, 0,
	    sys_nosys },			/* 246 = unimplemented modctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 247 = unimplemented _ksem_init */
	{ 0, 0, 0,
	    sys_nosys },			/* 248 = unimplemented _ksem_open */
	{ 0, 0, 0,
	    sys_nosys },			/* 249 = unimplemented _ksem_unlink */
	{ 0, 0, 0,
	    sys_nosys },			/* 250 = unimplemented _ksem_close */
	{ 0, 0, 0,
	    sys_nosys },			/* 251 = unimplemented _ksem_post */
	{ 0, 0, 0,
	    sys_nosys },			/* 252 = unimplemented _ksem_wait */
	{ 0, 0, 0,
	    sys_nosys },			/* 253 = unimplemented _ksem_trywait */
	{ 0, 0, 0,
	    sys_nosys },			/* 254 = unimplemented _ksem_getvalue */
	{ 0, 0, 0,
	    sys_nosys },			/* 255 = unimplemented _ksem_destroy */
	{ 0, 0, 0,
	    sys_nosys },			/* 256 = unimplemented _ksem_timedwait */
	{ 0, 0, 0,
	    sys_nosys },			/* 257 = unimplemented mq_open */
	{ 0, 0, 0,
	    sys_nosys },			/* 258 = unimplemented mq_close */
	{ 0, 0, 0,
	    sys_nosys },			/* 259 = unimplemented mq_unlink */
	{ 0, 0, 0,
	    sys_nosys },			/* 260 = unimplemented mq_getattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 261 = unimplemented mq_setattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 262 = unimplemented mq_notify */
	{ 0, 0, 0,
	    sys_nosys },			/* 263 = unimplemented mq_send */
	{ 0, 0, 0,
	    sys_nosys },			/* 264 = unimplemented mq_receive */
	{ 0, 0, 0,
	    sys_nosys },			/* 265 = unimplemented mq_timedsend */
	{ 0, 0, 0,
	    sys_nosys },			/* 266 = unimplemented mq_timedreceive */
	{ 0, 0, 0,
	    sys_nosys },			/* 267 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 268 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 269 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 270 = unimplemented __posix_rename */
	{ 0, 0, 0,
	    sys_nosys },			/* 271 = unimplemented swapctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 272 = unimplemented getdents */
	{ 0, 0, 0,
	    sys_nosys },			/* 273 = unimplemented minherit */
	{ 0, 0, 0,
	    sys_nosys },			/* 274 = unimplemented lchmod */
	{ 0, 0, 0,
	    sys_nosys },			/* 275 = unimplemented lchown */
	{ 0, 0, 0,
	    sys_nosys },			/* 276 = unimplemented lutimes */
	{ 0, 0, 0,
	    sys_nosys },			/* 277 = unimplemented msync */
	{ 0, 0, 0,
	    sys_nosys },			/* 278 = unimplemented stat */
	{ 0, 0, 0,
	    sys_nosys },			/* 279 = unimplemented fstat */
	{ 0, 0, 0,
	    sys_nosys },			/* 280 = unimplemented lstat */
	{ 0, 0, 0,
	    sys_nosys },			/* 281 = unimplemented sigaltstack */
	{ 0, 0, 0,
	    sys_nosys },			/* 282 = unimplemented vfork */
	{ 0, 0, 0,
	    sys_nosys },			/* 283 = unimplemented __posix_chown */
	{ 0, 0, 0,
	    sys_nosys },			/* 284 = unimplemented __posix_fchown */
	{ 0, 0, 0,
	    sys_nosys },			/* 285 = unimplemented __posix_lchown */
	{ ns(struct sys_getsid_args), 0,
	    (sy_call_t *)sys_getsid },		/* 286 = getsid */
	{ 0, 0, 0,
	    sys_nosys },			/* 287 = unimplemented __clone */
	{ 0, 0, 0,
	    sys_nosys },			/* 288 = unimplemented fktrace */
	{ 0, 0, 0,
	    sys_nosys },			/* 289 = unimplemented { ssize_t | sys | | preadv ( int fd , const struct iovec * iovp , int iovcnt , int PAD , off_t offset ) ; } */
	{ 0, 0, 0,
	    sys_nosys },			/* 290 = unimplemented { ssize_t | sys | | pwritev ( int fd , const struct iovec * iovp , int iovcnt , int PAD , off_t offset ) ; } */
	{ 0, 0, 0,
	    sys_nosys },			/* 291 = unimplemented sigaction */
	{ 0, 0, 0,
	    sys_nosys },			/* 292 = unimplemented sigpending */
	{ 0, 0, 0,
	    sys_nosys },			/* 293 = unimplemented sigprocmask */
	{ 0, 0, 0,
	    sys_nosys },			/* 294 = unimplemented sigsuspend */
	{ 0, 0, 0,
	    sys_nosys },			/* 295 = unimplemented sigreturn */
	{ ns(struct sys___getcwd_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___getcwd },	/* 296 = __getcwd */
	{ ns(struct sys_fchroot_args), 0,
	    (sy_call_t *)sys_fchroot },		/* 297 = fchroot */
	{ 0, 0, 0,
	    sys_nosys },			/* 298 = unimplemented fhopen */
	{ 0, 0, 0,
	    sys_nosys },			/* 299 = unimplemented fhstat */
	{ 0, 0, 0,
	    sys_nosys },			/* 300 = unimplemented fhstatfs */
	{ 0, 0, 0,
	    sys_nosys },			/* 301 = unimplemented ____semctl13 */
	{ 0, 0, 0,
	    sys_nosys },			/* 302 = unimplemented __msgctl13 */
	{ 0, 0, 0,
	    sys_nosys },			/* 303 = unimplemented __shmctl13 */
	{ 0, 0, 0,
	    sys_nosys },			/* 304 = unimplemented lchflags */
	{ 0, 0, 0,
	    sys_nosys },			/* 305 = unimplemented issetugid */
	{ 0, 0, 0,
	    sys_nosys },			/* 306 = unimplemented utrace */
	{ 0, 0, 0,
	    sys_nosys },			/* 307 = unimplemented getcontext */
	{ 0, 0, 0,
	    sys_nosys },			/* 308 = unimplemented setcontext */
	{ 0, 0, 0,
	    sys_nosys },			/* 309 = unimplemented _lwp_create */
	{ 0, 0, 0,
	    sys_nosys },			/* 310 = unimplemented _lwp_exit */
	{ 0, 0, 0,
	    sys_nosys },			/* 311 = unimplemented _lwp_self */
	{ 0, 0, 0,
	    sys_nosys },			/* 312 = unimplemented _lwp_wait */
	{ 0, 0, 0,
	    sys_nosys },			/* 313 = unimplemented _lwp_suspend */
	{ 0, 0, 0,
	    sys_nosys },			/* 314 = unimplemented _lwp_continue */
	{ 0, 0, 0,
	    sys_nosys },			/* 315 = unimplemented _lwp_wakeup */
	{ 0, 0, 0,
	    sys_nosys },			/* 316 = unimplemented _lwp_getprivate */
	{ 0, 0, 0,
	    sys_nosys },			/* 317 = unimplemented _lwp_setprivate */
	{ 0, 0, 0,
	    sys_nosys },			/* 318 = unimplemented _lwp_kill */
	{ 0, 0, 0,
	    sys_nosys },			/* 319 = unimplemented _lwp_detach */
	{ 0, 0, 0,
	    sys_nosys },			/* 320 = unimplemented _lwp_park */
	{ 0, 0, 0,
	    sys_nosys },			/* 321 = unimplemented _lwp_unpark */
	{ 0, 0, 0,
	    sys_nosys },			/* 322 = unimplemented _lwp_unpark_all */
	{ 0, 0, 0,
	    sys_nosys },			/* 323 = unimplemented _lwp_setname */
	{ 0, 0, 0,
	    sys_nosys },			/* 324 = unimplemented _lwp_getname */
	{ 0, 0, 0,
	    sys_nosys },			/* 325 = unimplemented _lwp_ctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 326 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 327 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 328 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 329 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 330 = unimplemented sa_register */
	{ 0, 0, 0,
	    sys_nosys },			/* 331 = unimplemented sa_stacks */
	{ 0, 0, 0,
	    sys_nosys },			/* 332 = unimplemented sa_enable */
	{ 0, 0, 0,
	    sys_nosys },			/* 333 = unimplemented sa_setconcurrency */
	{ 0, 0, 0,
	    sys_nosys },			/* 334 = unimplemented sa_yield */
	{ 0, 0, 0,
	    sys_nosys },			/* 335 = unimplemented sa_preempt */
	{ 0, 0, 0,
	    sys_nosys },			/* 336 = unimplemented sys_sa_unblockyield */
	{ 0, 0, 0,
	    sys_nosys },			/* 337 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 338 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 339 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 340 = unimplemented __sigaction_sigtramp */
	{ 0, 0, 0,
	    sys_nosys },			/* 341 = unimplemented pmc_get_info */
	{ 0, 0, 0,
	    sys_nosys },			/* 342 = unimplemented pmc_control */
	{ 0, 0, 0,
	    sys_nosys },			/* 343 = unimplemented rasctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 344 = unimplemented kqueue */
	{ 0, 0, 0,
	    sys_nosys },			/* 345 = unimplemented kevent */
	{ 0, 0, 0,
	    sys_nosys },			/* 346 = unimplemented _sched_setparam */
	{ 0, 0, 0,
	    sys_nosys },			/* 347 = unimplemented _sched_getparam */
	{ 0, 0, 0,
	    sys_nosys },			/* 348 = unimplemented _sched_setaffinity */
	{ 0, 0, 0,
	    sys_nosys },			/* 349 = unimplemented _sched_getaffinity */
	{ 0, 0, 0,
	    sys_nosys },			/* 350 = unimplemented sched_yield */
	{ 0, 0, 0,
	    sys_nosys },			/* 351 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 352 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 353 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 354 = unimplemented fsync_range */
	{ 0, 0, 0,
	    sys_nosys },			/* 355 = unimplemented uuidgen */
	{ 0, 0, 0,
	    sys_nosys },			/* 356 = unimplemented getvfsstat */
	{ 0, 0, 0,
	    sys_nosys },			/* 357 = unimplemented statvfs1 */
	{ 0, 0, 0,
	    sys_nosys },			/* 358 = unimplemented fstatvfs1 */
	{ 0, 0, 0,
	    sys_nosys },			/* 359 = unimplemented fhstatvfs1 */
	{ 0, 0, 0,
	    sys_nosys },			/* 360 = unimplemented extattrctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 361 = unimplemented extattr_set_file */
	{ 0, 0, 0,
	    sys_nosys },			/* 362 = unimplemented extattr_get_file */
	{ 0, 0, 0,
	    sys_nosys },			/* 363 = unimplemented extattr_delete_file */
	{ 0, 0, 0,
	    sys_nosys },			/* 364 = unimplemented extattr_set_fd */
	{ 0, 0, 0,
	    sys_nosys },			/* 365 = unimplemented extattr_get_fd */
	{ 0, 0, 0,
	    sys_nosys },			/* 366 = unimplemented extattr_delete_fd */
	{ 0, 0, 0,
	    sys_nosys },			/* 367 = unimplemented extattr_set_link */
	{ 0, 0, 0,
	    sys_nosys },			/* 368 = unimplemented extattr_get_link */
	{ 0, 0, 0,
	    sys_nosys },			/* 369 = unimplemented extattr_delete_link */
	{ 0, 0, 0,
	    sys_nosys },			/* 370 = unimplemented extattr_list_fd */
	{ 0, 0, 0,
	    sys_nosys },			/* 371 = unimplemented extattr_list_file */
	{ 0, 0, 0,
	    sys_nosys },			/* 372 = unimplemented extattr_list_link */
	{ 0, 0, 0,
	    sys_nosys },			/* 373 = unimplemented pselect */
	{ 0, 0, 0,
	    sys_nosys },			/* 374 = unimplemented pollts */
	{ 0, 0, 0,
	    sys_nosys },			/* 375 = unimplemented setxattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 376 = unimplemented lsetxattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 377 = unimplemented fsetxattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 378 = unimplemented getxattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 379 = unimplemented lgetxattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 380 = unimplemented fgetxattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 381 = unimplemented listxattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 382 = unimplemented llistxattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 383 = unimplemented flistxattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 384 = unimplemented removexattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 385 = unimplemented lremovexattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 386 = unimplemented fremovexattr */
	{ 0, 0, 0,
	    sys_nosys },			/* 387 = unimplemented stat30 */
	{ 0, 0, 0,
	    sys_nosys },			/* 388 = unimplemented fstat30 */
	{ 0, 0, 0,
	    sys_nosys },			/* 389 = unimplemented lstat30 */
	{ ns(struct rump_cygwin_sys_getdents_args), SYCALL_ARG_PTR,
	    (sy_call_t *)rump_cygwin_sys_getdents },/* 390 = getdents */
	{ 0, 0, 0,
	    sys_nosys },			/* 391 = unimplemented old posix_fadvise */
	{ 0, 0, 0,
	    sys_nosys },			/* 392 = unimplemented fhstat */
	{ 0, 0, 0,
	    sys_nosys },			/* 393 = unimplemented ntp_gettime */
	{ 0, 0, 0,
	    sys_nosys },			/* 394 = unimplemented socket */
	{ 0, 0, 0,
	    sys_nosys },			/* 395 = unimplemented getfh */
	{ 0, 0, 0,
	    sys_nosys },			/* 396 = unimplemented fhopen */
	{ 0, 0, 0,
	    sys_nosys },			/* 397 = unimplemented fhstatvfs1 */
	{ 0, 0, 0,
	    sys_nosys },			/* 398 = unimplemented fhstat */
	{ 0, 0, 0,
	    sys_nosys },			/* 399 = unimplemented aio_cancel */
	{ 0, 0, 0,
	    sys_nosys },			/* 400 = unimplemented aio_error */
	{ 0, 0, 0,
	    sys_nosys },			/* 401 = unimplemented aio_fsync */
	{ 0, 0, 0,
	    sys_nosys },			/* 402 = unimplemented aio_read */
	{ 0, 0, 0,
	    sys_nosys },			/* 403 = unimplemented aio_return */
	{ 0, 0, 0,
	    sys_nosys },			/* 404 = unimplemented aio_suspend */
	{ 0, 0, 0,
	    sys_nosys },			/* 405 = unimplemented aio_write */
	{ 0, 0, 0,
	    sys_nosys },			/* 406 = unimplemented lio_listio */
	{ 0, 0, 0,
	    sys_nosys },			/* 407 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 408 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 409 = unimplemented */
	{ 0, 0, 0,
	    sys_nosys },			/* 410 = unimplemented mount */
	{ 0, 0, 0,
	    sys_nosys },			/* 411 = unimplemented mremap */
	{ 0, 0, 0,
	    sys_nosys },			/* 412 = unimplemented pset_create */
	{ 0, 0, 0,
	    sys_nosys },			/* 413 = unimplemented pset_destroy */
	{ 0, 0, 0,
	    sys_nosys },			/* 414 = unimplemented pset_assign */
	{ 0, 0, 0,
	    sys_nosys },			/* 415 = unimplemented _pset_bind */
	{ 0, 0, 0,
	    sys_nosys },			/* 416 = unimplemented fadvise */
	{ 0, 0, 0,
	    sys_nosys },			/* 417 = unimplemented select */
	{ 0, 0, 0,
	    sys_nosys },			/* 418 = unimplemented gettimeofday */
	{ 0, 0, 0,
	    sys_nosys },			/* 419 = unimplemented settimeofday */
	{ ns(struct compat_50_sys_utimes_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_utimes },/* 420 = utimes */
	{ 0, 0, 0,
	    sys_nosys },			/* 421 = unimplemented adjtime */
	{ 0, 0, 0,
	    sys_nosys },			/* 422 = unimplemented lfs_segwait */
	{ ns(struct compat_50_sys_futimes_args), SYCALL_ARG_PTR,
	    (sy_call_t *)compat_50_sys_futimes },/* 423 = futimes */
	{ 0, 0, 0,
	    sys_nosys },			/* 424 = unimplemented lutimes */
	{ 0, 0, 0,
	    sys_nosys },			/* 425 = unimplemented setitimer */
	{ 0, 0, 0,
	    sys_nosys },			/* 426 = unimplemented getitimer */
	{ 0, 0, 0,
	    sys_nosys },			/* 427 = unimplemented clock_gettime */
	{ 0, 0, 0,
	    sys_nosys },			/* 428 = unimplemented clock_settime */
	{ 0, 0, 0,
	    sys_nosys },			/* 429 = unimplemented clock_getres */
	{ 0, 0, 0,
	    sys_nosys },			/* 430 = unimplemented nanosleep */
	{ 0, 0, 0,
	    sys_nosys },			/* 431 = unimplemented __sigtimedwait */
	{ 0, 0, 0,
	    sys_nosys },			/* 432 = unimplemented mq_timedsend */
	{ 0, 0, 0,
	    sys_nosys },			/* 433 = unimplemented mq_timedreceive */
	{ 0, 0, 0,
	    sys_nosys },			/* 434 = unimplemented _lwp_park */
	{ 0, 0, 0,
	    sys_nosys },			/* 435 = unimplemented kevent */
	{ 0, 0, 0,
	    sys_nosys },			/* 436 = unimplemented pselect */
	{ 0, 0, 0,
	    sys_nosys },			/* 437 = unimplemented ppoll */
	{ 0, 0, 0,
	    sys_nosys },			/* 438 = unimplemented aio_suspend */
	{ ns(struct rump_cygwin_sys_stat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)rump_cygwin_sys_stat },/* 439 = stat */
	{ ns(struct rump_cygwin_sys_fstat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)rump_cygwin_sys_fstat },/* 440 = fstat */
	{ ns(struct rump_cygwin_sys_lstat_args), SYCALL_ARG_PTR,
	    (sy_call_t *)rump_cygwin_sys_lstat },/* 441 = lstat */
	{ 0, 0, 0,
	    sys_nosys },			/* 442 = unimplemented __semctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 443 = unimplemented shmctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 444 = unimplemented msgctl */
	{ 0, 0, 0,
	    sys_nosys },			/* 445 = unimplemented getrusage */
	{ 0, 0, 0,
	    sys_nosys },			/* 446 = unimplemented timer_settime */
	{ 0, 0, 0,
	    sys_nosys },			/* 447 = unimplemented timer_gettime */
	{ 0, 0, 0,
	    sys_nosys },			/* 448 = unimplemented ntp_gettime */
	{ 0, 0, 0,
	    sys_nosys },			/* 449 = unimplemented wait4 */
	{ ns(struct sys___mknod50_args), SYCALL_ARG_PTR,
	    (sy_call_t *)sys___mknod50 },	/* 450 = __mknod50 */
	{ 0, 0, 0,
	    sys_nosys },			/* 451 = unimplemented fhstat */
	{ 0, 0, 0,
	    sys_nosys },			/* 452 = unimplemented 5.99 quotactl */
	{ 0, 0, 0,
	    sys_nosys },			/* 453 = unimplemented pipe2 */
	{ 0, 0, 0,
	    sys_nosys },			/* 454 = unimplemented dup3 */
	{ 0, 0, 0,
	    sys_nosys },			/* 455 = unimplemented kqueue1 */
	{ 0, 0, 0,
	    sys_nosys },			/* 456 = unimplemented paccept */
	{ 0, 0, 0,
	    sys_nosys },			/* 457 = unimplemented linkat */
	{ 0, 0, 0,
	    sys_nosys },			/* 458 = unimplemented renameat */
	{ 0, 0, 0,
	    sys_nosys },			/* 459 = unimplemented mkfifoat */
	{ 0, 0, 0,
	    sys_nosys },			/* 460 = unimplemented mknodat */
	{ 0, 0, 0,
	    sys_nosys },			/* 461 = unimplemented mkdirat */
	{ 0, 0, 0,
	    sys_nosys },			/* 462 = unimplemented faccessat */
	{ 0, 0, 0,
	    sys_nosys },			/* 463 = unimplemented fchmodat */
	{ 0, 0, 0,
	    sys_nosys },			/* 464 = unimplemented fchownat */
	{ 0, 0, 0,
	    sys_nosys },			/* 465 = unimplemented fexecve */
	{ 0, 0, 0,
	    sys_nosys },			/* 466 = unimplemented fstatat */
	{ 0, 0, 0,
	    sys_nosys },			/* 467 = unimplemented utimensat */
	{ 0, 0, 0,
	    sys_nosys },			/* 468 = unimplemented openat */
	{ 0, 0, 0,
	    sys_nosys },			/* 469 = unimplemented readlinkat */
	{ 0, 0, 0,
	    sys_nosys },			/* 470 = unimplemented symlinkat */
	{ 0, 0, 0,
	    sys_nosys },			/* 471 = unimplemented unlinkat */
	{ 0, 0, 0,
	    sys_nosys },			/* 472 = unimplemented futimens */
	{ 0, 0, 0,
	    sys_nosys },			/* 473 = unimplemented __quotactl */
	{ 0, 0, 0,
	    sys_nosys },			/* 474 = unimplemented posix_spawn */
	{ 0, 0, 0,
	    sys_nosys },			/* 475 = unimplemented recvmmsg */
	{ 0, 0, 0,
	    sys_nosys },			/* 476 = unimplemented sendmmsg */
	{ 0, 0, 0,
	    sys_nosys },			/* 477 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 478 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 479 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 480 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 481 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 482 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 483 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 484 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 485 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 486 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 487 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 488 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 489 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 490 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 491 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 492 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 493 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 494 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 495 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 496 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 497 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 498 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 499 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 500 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 501 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 502 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 503 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 504 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 505 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 506 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 507 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 508 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 509 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 510 = filler */
	{ 0, 0, 0,
	    sys_nosys },			/* 511 = filler */
};
