
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0063dff8;
  if (PTR___gmon_start___0063dff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400c90(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0063e010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0063e018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0063e020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0063e028)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0063e030)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = (*(code *)PTR_htons_0063e038)();
  return uVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0063e040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0063e048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execl_0063e050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0063e058)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0063e060)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_0063e068)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0063e070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int execlp(char *__file,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execlp_0063e078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0063e080)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0063e088)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0063e090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0063e098)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0063e0a0)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0063e0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pclose_0063e0b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0063e0b8)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0063e0c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0063e0c8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0063e0d0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0063e0d8)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_0063e0e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0063e0e8)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0063e0f0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0063e0f8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0063e100)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0063e108)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0063e110)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_popen_0063e118)();
  return pFVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0063e120)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0063e128)();
  return tVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

in_addr_t inet_addr(char *__cp)

{
  in_addr_t iVar1;
  
  iVar1 = (*(code *)PTR_inet_addr_0063e130)();
  return iVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0063dff8)();
  return;
}


void _start(undefined8 uParm1,undefined8 uParm2,undefined8 uParm3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,uParm3,
                    auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00400f37) */
/* WARNING: Removing unreachable block (ram,0x00400f41) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400f74) */
/* WARNING: Removing unreachable block (ram,0x00400f7e) */

void register_tm_clones(void)

{
  return;
}


void __do_global_dtors_aux(void)

{
  if (completed_6355 == 0) {
    deregister_tm_clones();
    completed_6355 = 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400fc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frame_dummy(void)

{
  register_tm_clones();
  return;
}


undefined8 main(undefined4 uParm1,undefined8 uParm2)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  globalArgc = uParm1;
  globalArgv = uParm2;
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_18_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_42_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_41_good();");
  CWE78_OS_Command_Injection__char_console_execlp_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_66_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_65_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_01_good();");
  CWE78_OS_Command_Injection__char_console_execlp_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_31_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_09_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_11_good();");
  CWE78_OS_Command_Injection__char_console_execl_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_61_good();");
  CWE78_OS_Command_Injection__char_console_execlp_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_64_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_06_good();");
  CWE78_OS_Command_Injection__char_console_execlp_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_07_good();");
  CWE78_OS_Command_Injection__char_console_execl_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_45_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_09_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_13_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_51_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_01_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_03_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_61_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_05_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_05_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_08_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_17_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_11_good();");
  CWE78_OS_Command_Injection__char_console_execlp_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_45_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_64_good();");
  CWE78_OS_Command_Injection__char_console_execlp_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_45_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_18_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_52_good();");
  CWE78_OS_Command_Injection__char_console_execlp_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_34_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_53_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_01_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_04_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_41_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_14_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_15_good();");
  CWE78_OS_Command_Injection__char_console_execl_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_10_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_32_good();");
  CWE78_OS_Command_Injection__char_console_execlp_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_32_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_03_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_22_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_65_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_45_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_44_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_34_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_54_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_12_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_21_good();");
  CWE78_OS_Command_Injection__char_console_execl_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_21_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_03_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_15_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_17_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_04_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_61_good();");
  CWE78_OS_Command_Injection__char_console_execl_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_04_good();");
  CWE78_OS_Command_Injection__char_console_execlp_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_68_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_42_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_15_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_42_good();");
  CWE78_OS_Command_Injection__char_console_execlp_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_63_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_52_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_22_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_52_good();");
  CWE78_OS_Command_Injection__char_console_execl_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_21_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_07_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_06_good();");
  CWE78_OS_Command_Injection__char_console_execl_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_67_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_61_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_64_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_06_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_16_good();");
  CWE78_OS_Command_Injection__char_console_execlp_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_18_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_68_good();");
  CWE78_OS_Command_Injection__char_console_execlp_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_10_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_53_good();");
  CWE78_OS_Command_Injection__char_console_execlp_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_32_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_66_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_53_good();");
  CWE78_OS_Command_Injection__char_console_execl_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_10_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_04_good();");
  CWE78_OS_Command_Injection__char_console_execl_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_02_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_52_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_54_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_63_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_52_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_21_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_34_good();");
  CWE78_OS_Command_Injection__char_console_execlp_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_68_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_14_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_14_good();");
  CWE78_OS_Command_Injection__char_console_execlp_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_52_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_51_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_64_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_34_good();");
  CWE78_OS_Command_Injection__char_console_execl_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_61_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_04_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_31_good();");
  CWE78_OS_Command_Injection__char_console_execlp_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_68_good();");
  CWE78_OS_Command_Injection__char_console_execl_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_12_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_02_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_13_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_06_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_12_good();");
  CWE78_OS_Command_Injection__char_console_execlp_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_51_good();");
  CWE78_OS_Command_Injection__char_console_execl_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_17_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_18_good();");
  CWE78_OS_Command_Injection__char_console_execlp_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_15_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_05_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_02_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_34_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_42_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_53_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_22_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_12_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_01_good();");
  CWE78_OS_Command_Injection__char_console_execl_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_03_good();");
  CWE78_OS_Command_Injection__char_console_execl_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_09_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_67_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_64_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_42_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_54_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_51_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_02_good();");
  CWE78_OS_Command_Injection__char_console_execl_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_06_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_53_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_67_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_21_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_09_good();");
  CWE78_OS_Command_Injection__char_console_execl_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_11_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_67_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_11_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_66_good();");
  CWE78_OS_Command_Injection__char_console_execlp_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_03_good();");
  CWE78_OS_Command_Injection__char_console_execlp_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_15_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_64_good();");
  CWE78_OS_Command_Injection__char_console_execl_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_66_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_54_good();");
  CWE78_OS_Command_Injection__char_console_execlp_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_22_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_44_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_67_good();");
  CWE78_OS_Command_Injection__char_console_execl_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_31_good();");
  CWE78_OS_Command_Injection__char_console_execl_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_09_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_65_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_32_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_11_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_32_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_22_good();");
  CWE78_OS_Command_Injection__char_console_execl_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_04_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_08_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_18_good();");
  CWE78_OS_Command_Injection__char_console_execl_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_02_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_08_good();");
  CWE78_OS_Command_Injection__char_console_execl_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_06_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_13_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_17_good();");
  CWE78_OS_Command_Injection__char_console_execlp_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_68_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_01_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_66_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_12_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_10_good();");
  CWE78_OS_Command_Injection__char_console_execl_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_63_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_09_good();");
  CWE78_OS_Command_Injection__char_console_execlp_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_02_good();");
  CWE78_OS_Command_Injection__char_console_execlp_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_44_good();");
  CWE78_OS_Command_Injection__char_console_execl_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_44_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_63_good();");
  CWE78_OS_Command_Injection__char_console_execl_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_53_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_63_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_14_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_42_good();");
  CWE78_OS_Command_Injection__char_console_execl_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_44_good();");
  CWE78_OS_Command_Injection__char_console_execlp_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_54_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_31_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_65_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_14_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_51_good();");
  CWE78_OS_Command_Injection__char_console_execlp_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_10_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_63_good();");
  CWE78_OS_Command_Injection__char_console_execlp_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_17_good();");
  CWE78_OS_Command_Injection__char_console_execl_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_05_good();");
  CWE78_OS_Command_Injection__char_console_execlp_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_67_good();");
  CWE78_OS_Command_Injection__char_console_execlp_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_16_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_16_good();");
  CWE78_OS_Command_Injection__char_console_execl_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_08_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_32_good();");
  CWE78_OS_Command_Injection__char_console_execl_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_65_good();");
  CWE78_OS_Command_Injection__char_console_execl_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_61_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_16_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_15_good();");
  CWE78_OS_Command_Injection__char_console_execlp_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_54_good();");
  CWE78_OS_Command_Injection__char_console_execl_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_16_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_41_good();");
  CWE78_OS_Command_Injection__char_console_execl_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_41_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_31_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_07_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_22_good();");
  CWE78_OS_Command_Injection__char_console_execlp_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_51_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_13_good();");
  CWE78_OS_Command_Injection__char_console_execlp_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_16_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_65_good();");
  CWE78_OS_Command_Injection__char_console_execlp_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_10_good();");
  CWE78_OS_Command_Injection__char_console_execlp_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_14_good();");
  CWE78_OS_Command_Injection__char_console_execl_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_44_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_34_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_13_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_66_good();");
  CWE78_OS_Command_Injection__char_console_execl_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_01_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_45_good();");
  CWE78_OS_Command_Injection__char_console_execlp_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_11_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_18_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_41_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_08_good();");
  CWE78_OS_Command_Injection__char_console_execlp_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_13_good();");
  CWE78_OS_Command_Injection__char_console_execl_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_05_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_03_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_12_good();");
  CWE78_OS_Command_Injection__char_console_execl_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_05_good();");
  CWE78_OS_Command_Injection__char_console_execl_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_31_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_07_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_21_good();");
  CWE78_OS_Command_Injection__char_console_execlp_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_07_good();");
  CWE78_OS_Command_Injection__char_console_execlp_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_17_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_07_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_08_good();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_68_good();");
  CWE78_OS_Command_Injection__char_connect_socket_system_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_41_good();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_45_good();");
  CWE78_OS_Command_Injection__char_console_execl_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_18_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_42_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_41_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_66_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_65_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_01_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_31_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_09_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_11_bad();");
  CWE78_OS_Command_Injection__char_console_execl_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_61_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_64_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_06_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_07_bad();");
  CWE78_OS_Command_Injection__char_console_execl_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_45_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_09_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_13_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_51_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_01_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_03_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_61_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_05_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_05_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_08_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_17_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_11_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_45_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_64_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_45_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_18_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_52_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_34_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_53_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_01_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_04_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_41_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_14_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_15_bad();");
  CWE78_OS_Command_Injection__char_console_execl_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_10_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_32_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_32_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_03_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_22_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_65_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_45_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_44_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_34_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_54_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_12_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_21_bad();");
  CWE78_OS_Command_Injection__char_console_execl_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_21_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_03_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_15_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_17_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_04_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_61_bad();");
  CWE78_OS_Command_Injection__char_console_execl_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_04_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_68_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_42_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_15_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_42_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_63_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_52_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_22_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_52_bad();");
  CWE78_OS_Command_Injection__char_console_execl_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_21_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_07_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_06_bad();");
  CWE78_OS_Command_Injection__char_console_execl_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_67_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_61_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_64_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_06_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_16_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_18_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_68_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_10_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_53_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_32_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_66_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_53_bad();");
  CWE78_OS_Command_Injection__char_console_execl_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_10_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_04_bad();");
  CWE78_OS_Command_Injection__char_console_execl_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_02_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_52_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_54_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_63_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_52_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_21_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_34_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_68_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_14_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_14_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_52_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_51_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_64_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_34_bad();");
  CWE78_OS_Command_Injection__char_console_execl_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_61_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_04_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_31_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_68_bad();");
  CWE78_OS_Command_Injection__char_console_execl_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_12_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_02_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_13_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_06_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_12_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_51_bad();");
  CWE78_OS_Command_Injection__char_console_execl_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_17_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_18_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_15_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_05_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_02_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_34_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_42_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_53_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_22_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_12_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_01_bad();");
  CWE78_OS_Command_Injection__char_console_execl_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_03_bad();");
  CWE78_OS_Command_Injection__char_console_execl_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_09_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_67_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_64_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_42_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_54_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_51_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_02_bad();");
  CWE78_OS_Command_Injection__char_console_execl_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_06_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_53_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_67_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_21_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_09_bad();");
  CWE78_OS_Command_Injection__char_console_execl_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_11_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_67_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_11_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_66_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_03_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_15_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_64_bad();");
  CWE78_OS_Command_Injection__char_console_execl_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_66_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_54_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_22_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_44_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_67_bad();");
  CWE78_OS_Command_Injection__char_console_execl_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_31_bad();");
  CWE78_OS_Command_Injection__char_console_execl_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_09_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_65_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_32_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_11_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_32_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_22_bad();");
  CWE78_OS_Command_Injection__char_console_execl_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_04_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_08_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_18_bad();");
  CWE78_OS_Command_Injection__char_console_execl_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_02_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_08_bad();");
  CWE78_OS_Command_Injection__char_console_execl_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_06_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_13_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_17_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_68_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_01_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_66_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_12_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_10_bad();");
  CWE78_OS_Command_Injection__char_console_execl_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_63_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_09_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_02_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_44_bad();");
  CWE78_OS_Command_Injection__char_console_execl_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_44_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_63_bad();");
  CWE78_OS_Command_Injection__char_console_execl_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_53_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_63_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_14_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_42_bad();");
  CWE78_OS_Command_Injection__char_console_execl_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_44_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_54_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_31_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_65_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_14_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_51_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_10_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_63_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_17_bad();");
  CWE78_OS_Command_Injection__char_console_execl_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_05_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_67_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_16_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_16_bad();");
  CWE78_OS_Command_Injection__char_console_execl_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_08_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_32_bad();");
  CWE78_OS_Command_Injection__char_console_execl_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_65_bad();");
  CWE78_OS_Command_Injection__char_console_execl_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_61_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_16_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_15_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_54_bad();");
  CWE78_OS_Command_Injection__char_console_execl_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_16_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_41_bad();");
  CWE78_OS_Command_Injection__char_console_execl_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_41_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_31_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_07_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_22_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_51_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_13_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_16_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_65_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_10_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_14_bad();");
  CWE78_OS_Command_Injection__char_console_execl_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_44_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_34_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_13_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_66_bad();");
  CWE78_OS_Command_Injection__char_console_execl_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_01_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_45_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_11_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_18_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_41_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_08_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_13_bad();");
  CWE78_OS_Command_Injection__char_console_execl_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_05_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execlp_03_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execlp_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_12_bad();");
  CWE78_OS_Command_Injection__char_console_execl_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_05_bad();");
  CWE78_OS_Command_Injection__char_console_execl_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_31_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_07_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_21_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execlp_07_bad();");
  CWE78_OS_Command_Injection__char_console_execlp_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_17_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_07_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_popen_08_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_popen_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_system_68_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_system_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_connect_socket_execl_41_bad();");
  CWE78_OS_Command_Injection__char_connect_socket_execl_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_execl_45_bad();");
  CWE78_OS_Command_Injection__char_console_execl_45_bad();
  return 0;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar2 = system((char *)local_10);
  if (iVar2 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  iVar2 = system((char *)local_10);
  if (iVar2 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x4038e2;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4038f0;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4038fa;
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x40396c;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40397a;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x403984;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_07_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execlp("sh","sh",&DAT_00430965,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x403b00;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x403b57;
  execlp("sh","sh",&DAT_00430965,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x403bee;
  execlp("sh","sh",&DAT_00430965,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54c_goodG2BSink(uParm1);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0043098a,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  execl("/bin/sh","/bin/sh",&DAT_0043098a,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execl("/bin/sh","/bin/sh",&DAT_0043098a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (globalFalse == 0) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x40416b;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x4041a8;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4041b6;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4041c0;
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (globalTrue != 0) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x40423c;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40424a;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x404254;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x404489;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x404497;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4044a1;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_53d_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_53d_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_07_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00430a30,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x404677;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4046ce;
  execl("/bin/sh","/bin/sh",&DAT_00430a30,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x404765;
  execl("/bin/sh","/bin/sh",&DAT_00430a30,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execl_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x404982;
  CWE78_OS_Command_Injection__char_connect_socket_execl_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x404b95;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execlp_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00430a64,local_10,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execlp_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00430a64,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_22_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_console_execl_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execl_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00430a6a,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_console_execl_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execl_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00430a6a,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_console_execl_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execl_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00430a6a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_52c_goodG2BSink(uParm1);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar2 = system((char *)local_10);
  if (iVar2 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  iVar2 = system((char *)local_10);
  if (iVar2 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_65b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00430aae,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_65b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00430aae,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execl_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x405408;
  CWE78_OS_Command_Injection__char_connect_socket_execl_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack144 = 0x405620;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x405662;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x405679;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack144 = 0x4056fb;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x405712;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_connect_socket_popen_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_d8;
  uint16_t local_d6;
  in_addr_t local_d4;
  undefined8 local_c8;
  undefined8 local_c0 [13];
  undefined8 *local_58;
  FILE *local_50;
  undefined8 *local_48;
  char *local_40;
  int local_34;
  size_t local_30;
  int local_24;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_58;
  local_18 = &local_58;
  local_c8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_c0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_58 = &local_c8;
  local_24 = 0xffffffff;
  local_20 = local_58;
  local_30 = strlen((char *)local_58);
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_d8,0,0x10);
    local_d8 = 2;
    local_d4 = inet_addr("127.0.0.1");
    local_d6 = htons(0x6987);
    iVar1 = connect(local_24,(sockaddr *)&local_d8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_24,(void *)((long)local_20 + local_30),99 - local_30,0);
      local_34 = (int)sVar2;
      if ((local_34 != -1) && (local_34 != 0)) {
        *(undefined *)((long)local_20 + (long)local_34 + local_30) = 0;
        local_40 = strchr((char *)local_20,0xd);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
        local_40 = strchr((char *)local_20,10);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  *local_10 = local_20;
  local_48 = *local_18;
  local_50 = popen((char *)local_48,"w");
  if (local_50 != (FILE *)0x0) {
    pclose(local_50);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack169;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  FILE *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  Stack169._1_8_ = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_38 = (undefined8 *)((long)&Stack169 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_38;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_38 + (~uVar3 - 1)) = 0x2a2e2a;
  local_28 = local_38;
  local_20 = local_38;
  local_30 = popen((char *)local_38,"w");
  if (local_30 != (FILE *)0x0) {
    pclose(local_30);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_67b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_67b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_execlp_65b_badSink;
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_execlp_65b_goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x405caa;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_65b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00430af7,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_65b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00430af7,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405f1c) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x405f68;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x405f7f;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x405fff;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x406016;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_c8;
  uint16_t local_c6;
  in_addr_t local_c4;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  FILE *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_b0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_b8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_c8,0,0x10);
    local_c8 = 2;
    local_c4 = inet_addr("127.0.0.1");
    local_c6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_c8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  local_40 = local_10;
  local_48 = popen((char *)local_10,"w");
  if (local_48 != (FILE *)0x0) {
    pclose(local_48);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_20 = &uStack160 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack160 = 0x406280;
  local_18 = local_20;
  local_10 = local_20;
  local_28 = popen(local_20,"w");
  if (local_28 != (FILE *)0x0) {
    uStack160 = 0x406297;
    pclose(local_28);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_68b_badSink(void)

{
  execlp("sh","sh",&DAT_00430b39,CWE78_OS_Command_Injection__char_connect_socket_execlp_68_badData,0
        );
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_68b_goodG2BSink(void)

{
  execlp("sh","sh",&DAT_00430b39,
         CWE78_OS_Command_Injection__char_connect_socket_execlp_68_goodG2BData,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  local_40 = local_10;
  execl("/bin/sh","/bin/sh",&DAT_00430b49,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_20 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x4065a8;
  local_18 = local_20;
  local_10 = local_20;
  execl("/bin/sh","/bin/sh",&DAT_00430b49,local_20,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_64_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_10 = strlen((char *)local_18);
  if (1 < 100 - local_10) {
    pcVar1 = fgets((char *)(local_10 + (long)local_18),100 - (int)local_10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_10 + (long)local_18) = 0;
    }
    else {
      local_10 = strlen((char *)local_18);
      if ((local_10 != 0) && (*(char *)((long)local_18 + (local_10 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_10 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execl_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x40674a;
  CWE78_OS_Command_Injection__char_console_execl_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x40695e;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40699b;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4069a9;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4069b3;
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x406a30;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x406a3e;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406a48;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_execl_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x406c75;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_connect_socket_execl_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_67_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_connect_socket_system_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_c8;
  uint16_t local_c6;
  in_addr_t local_c4;
  undefined8 local_b8;
  undefined8 local_b0 [12];
  undefined8 *local_50;
  undefined8 *local_48;
  char *local_40;
  int local_34;
  size_t local_30;
  int local_24;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_50;
  local_18 = &local_50;
  local_b8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_b0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_50 = &local_b8;
  local_24 = 0xffffffff;
  local_20 = local_50;
  local_30 = strlen((char *)local_50);
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_c8,0,0x10);
    local_c8 = 2;
    local_c4 = inet_addr("127.0.0.1");
    local_c6 = htons(0x6987);
    iVar1 = connect(local_24,(sockaddr *)&local_c8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_24,(void *)((long)local_20 + local_30),99 - local_30,0);
      local_34 = (int)sVar2;
      if ((local_34 != -1) && (local_34 != 0)) {
        *(undefined *)((long)local_20 + (long)local_34 + local_30) = 0;
        local_40 = strchr((char *)local_20,0xd);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
        local_40 = strchr((char *)local_20,10);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  *local_10 = local_20;
  local_48 = *local_18;
  iVar1 = system((char *)local_48);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  unkbyte9 Stack153;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack153._1_8_ = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_30 = (undefined8 *)((long)&Stack153 + 1);
  uVar4 = 0xffffffffffffffff;
  puVar5 = local_30;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *(char *)puVar5;
    puVar5 = (undefined8 *)((long)puVar5 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar4 - 1)) = 0x2a2e2a;
  local_28 = local_30;
  local_20 = local_30;
  iVar2 = system((char *)local_30);
  if (iVar2 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execlp_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00430bca,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execlp_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00430bca,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execlp_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00430bca,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execl_22_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_execl_22_badGlobal != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execl_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_execl_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execl_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_execl_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_67b_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_67b_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE78_OS_Command_Injection__char_console_execlp_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_88;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar2 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execlp("sh","sh",&DAT_00430c18,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  execlp("sh","sh",&DAT_00430c18,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execlp("sh","sh",&DAT_00430c18,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407799) */

void goodG2B1(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x4077e0;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x4077ee;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x4077f8;
  exit(1);
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x407873;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x407881;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x40788b;
  exit(1);
}


void CWE78_OS_Command_Injection__char_connect_socket_system_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  local_40 = local_10;
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_20 = &uStack144 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_20;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack144 = 0x407ae0;
  local_18 = local_20;
  local_10 = local_20;
  iVar2 = system(local_20);
  if (iVar2 != 0) {
    uStack144 = 0x407aee;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack144 = 0x407af8;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execlp("sh","sh",&DAT_00430ca3,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x407d0e;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x407d65;
  execlp("sh","sh",&DAT_00430ca3,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x407dfc;
  execlp("sh","sh",&DAT_00430ca3,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x40803c;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x408053;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x4080cb;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4080e2;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_system_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4082ff;
  CWE78_OS_Command_Injection__char_connect_socket_system_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_system_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x408522;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_connect_socket_system_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040872e) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x40877a;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x408791;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x408812;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x408829;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_63b_badSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_00430d11,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_63b_goodG2BSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_00430d11,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_41_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_system_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_41_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x408d98;
  CWE78_OS_Command_Injection__char_connect_socket_system_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execlp("sh","sh",&DAT_00430d45,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x408fdf;
  execlp("sh","sh",&DAT_00430d45,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40906b;
  execlp("sh","sh",&DAT_00430d45,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00430d55,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x40928b;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4092e2;
  execl("/bin/sh","/bin/sh",&DAT_00430d55,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x409379;
  execl("/bin/sh","/bin/sh",&DAT_00430d55,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execlp("sh","sh",&DAT_00430d7f,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4095cc;
  execlp("sh","sh",&DAT_00430d7f,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack144 = 0x4097e2;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x409824;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40983b;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack144 = 0x4098bc;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4098d3;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_41_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_popen_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_41_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x409b5c;
  CWE78_OS_Command_Injection__char_connect_socket_popen_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_connect_socket_system_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_system_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_connect_socket_system_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_system_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_connect_socket_system_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_system_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_63_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_10 = strlen((char *)local_18);
  if (1 < 100 - local_10) {
    pcVar1 = fgets((char *)(local_10 + (long)local_18),100 - (int)local_10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_10 + (long)local_18) = 0;
    }
    else {
      local_10 = strlen((char *)local_18);
      if ((local_10 != 0) && (*(char *)((long)local_18 + (local_10 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_10 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execlp_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x409e43;
  CWE78_OS_Command_Injection__char_console_execlp_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_63b_badSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00430ddb,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_63b_goodG2BSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00430ddb,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_c8;
  uint16_t local_c6;
  in_addr_t local_c4;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined8 *local_48;
  FILE *local_40;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_b0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_b8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_c8,0,0x10);
    local_c8 = 2;
    local_c4 = inet_addr("127.0.0.1");
    local_c6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_c8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  local_38 = local_10;
  local_40 = popen((char *)local_10,"w");
  if (local_40 != (FILE *)0x0) {
    pclose(local_40);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  FILE *local_20;
  char *local_18;
  char *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack160 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack160 = 0x40a121;
  local_18 = local_28;
  local_10 = local_28;
  local_20 = popen(local_28,"w");
  if (local_20 != (FILE *)0x0) {
    uStack160 = 0x40a138;
    pclose(local_20);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_34_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (badStatic != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00430dfc,local_10,0);
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00430dfc,local_10,0);
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00430dfc,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execl("/bin/sh","/bin/sh",&DAT_00430e26,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40a6ef;
  execl("/bin/sh","/bin/sh",&DAT_00430e26,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40a77b;
  execl("/bin/sh","/bin/sh",&DAT_00430e26,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_66b_badSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_66b_goodG2BSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execl("/bin/sh","/bin/sh",&DAT_00430e3d,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40aa86;
  execl("/bin/sh","/bin/sh",&DAT_00430e3d,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_connect_socket_execl_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execl_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00430e48,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_connect_socket_execl_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execl_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00430e48,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_connect_socket_execl_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execl_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00430e48,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x40ae19;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40ae56;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40ae64;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40ae6e;
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x40aeeb;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40aef9;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40af03;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execlp("sh","sh",&DAT_00430e96,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40b188;
  execlp("sh","sh",&DAT_00430e96,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40b214;
  execlp("sh","sh",&DAT_00430e96,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  bVar7 = 0;
  local_98 = 0x20736c;
  lVar4 = 0xb;
  puVar6 = local_90;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_10 = &local_98;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined4 *)((long)puVar6 + 4));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar5 - 1)) = 0x2a2e2a;
  }
  else {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar2 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar3;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00430ea6,local_10,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrueOrFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execl("/bin/sh","/bin/sh",&DAT_00430ea6,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54e_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54e_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_d8;
  uint16_t local_d6;
  in_addr_t local_d4;
  undefined8 local_c8;
  undefined8 local_c0 [13];
  undefined local_58 [16];
  undefined8 *local_48;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_c8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_c0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_c8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_d8,0,0x10);
    local_d8 = 2;
    local_d4 = inet_addr("127.0.0.1");
    local_d6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_d8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_popen_66b_badSink(local_58);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack176 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack176 = 0x40b784;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_connect_socket_popen_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_53d_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00430ebd,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_53d_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00430ebd,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_17_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    if (1 < 100 - local_20) {
      pcVar1 = fgets((char *)(local_20 + (long)local_18),100 - (int)local_20,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      else {
        local_20 = strlen((char *)local_18);
        if ((local_20 != 0) && (*(char *)((long)local_18 + (local_20 - 1)) == '\n')) {
          *(undefined *)((long)local_18 + (local_20 - 1)) = 0;
        }
      }
    }
    local_c = local_c + 1;
  }
  execlp("sh","sh",&DAT_00430ed2,local_18,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  int local_c;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack144 = 0x40b9bc;
      execlp("sh","sh",&DAT_00430ed2,local_18,0);
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
    local_c = local_c + 1;
  } while( true );
}


void CWE78_OS_Command_Injection__char_console_execlp_17_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execlp("sh","sh",&DAT_00430ee2,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x40bbd0;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x40bc27;
  execlp("sh","sh",&DAT_00430ee2,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x40bcbd;
  execlp("sh","sh",&DAT_00430ee2,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00430efd,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_44_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    pcVar1 = fgets((char *)(local_20 + (long)local_18),100 - (int)local_20,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_20 + (long)local_18) = 0;
    }
    else {
      local_20 = strlen((char *)local_18);
      if ((local_20 != 0) && (*(char *)((long)local_18 + (local_20 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_20 - 1)) = 0;
      }
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00430efd,uParm1,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x40beb0;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_44_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (badStatic != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execlp("sh","sh",&DAT_00430f55,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40c495;
  execlp("sh","sh",&DAT_00430f55,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00430f65,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  execl("/bin/sh","/bin/sh",&DAT_00430f65,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execl("/bin/sh","/bin/sh",&DAT_00430f65,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execl("/bin/sh","/bin/sh",&DAT_00430f8f,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40c9f3;
  execl("/bin/sh","/bin/sh",&DAT_00430f8f,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40ca7f;
  execl("/bin/sh","/bin/sh",&DAT_00430f8f,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_console_execlp_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      pcParm1[sVar1] = 0;
    }
    else {
      sVar1 = strlen(pcParm1);
      if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
        pcParm1[sVar1 - 1] = 0;
      }
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_console_execlp_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_console_execl_17_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    if (1 < 100 - local_20) {
      pcVar1 = fgets((char *)(local_20 + (long)local_18),100 - (int)local_20,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      else {
        local_20 = strlen((char *)local_18);
        if ((local_20 != 0) && (*(char *)((long)local_18 + (local_20 - 1)) == '\n')) {
          *(undefined *)((long)local_18 + (local_20 - 1)) = 0;
        }
      }
    }
    local_c = local_c + 1;
  }
  execl("/bin/sh","/bin/sh",&DAT_00430fb8,local_18,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  int local_c;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack144 = 0x40cd52;
      execl("/bin/sh","/bin/sh",&DAT_00430fb8,local_18,0);
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
    local_c = local_c + 1;
  } while( true );
}


void CWE78_OS_Command_Injection__char_console_execl_17_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execlp("sh","sh",&DAT_00430fcd,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x40cf66;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x40cfbd;
  execlp("sh","sh",&DAT_00430fcd,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x40d053;
  execlp("sh","sh",&DAT_00430fcd,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00430ff2,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x40d271;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x40d2c8;
  execl("/bin/sh","/bin/sh",&DAT_00430ff2,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x40d35e;
  execl("/bin/sh","/bin/sh",&DAT_00430ff2,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  bVar7 = 0;
  local_98 = 0x20736c;
  lVar4 = 0xb;
  puVar6 = local_90;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_10 = &local_98;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined4 *)((long)puVar6 + 4));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar5 - 1)) = 0x2a2e2a;
  }
  else {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar2 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar3;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  iVar2 = system((char *)local_10);
  if (iVar2 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrueOrFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  iVar2 = system((char *)local_10);
  if (iVar2 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_12_good(void)

{
  goodG2B();
  return;
}


void badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431036,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_44_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    pcVar1 = fgets((char *)(local_20 + (long)local_18),100 - (int)local_20,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_20 + (long)local_18) = 0;
    }
    else {
      local_20 = strlen((char *)local_18);
      if ((local_20 != 0) && (*(char *)((long)local_18 + (local_20 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_20 - 1)) = 0;
      }
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431036,uParm1,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x40d818;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_54d_goodG2BSink(uParm1);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execlp("sh","sh",&DAT_0043105a,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  execlp("sh","sh",&DAT_0043105a,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execlp("sh","sh",&DAT_0043105a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execl("/bin/sh","/bin/sh",&DAT_0043107f,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40ddc0;
  execl("/bin/sh","/bin/sh",&DAT_0043107f,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_01_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_console_execl_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      pcParm1[sVar1] = 0;
    }
    else {
      sVar1 = strlen(pcParm1);
      if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
        pcParm1[sVar1 - 1] = 0;
      }
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_console_execl_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_63b_badSink(char **ppcParm1)

{
  int iVar1;
  
  iVar1 = system(*ppcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_63b_goodG2BSink(char **ppcParm1)

{
  int iVar1;
  
  iVar1 = system(*ppcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004310d7,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004310d7,uParm1,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x40e428;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_44_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      else {
        sVar1 = strlen(pcParm1);
        if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
          pcParm1[sVar1 - 1] = 0;
        }
      }
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_console_execl_21_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_004310f6,local_10,0);
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_004310f6,local_10,0);
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_004310f6,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_03_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00431125,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40e8b2;
  execl("/bin/sh","/bin/sh",&DAT_00431125,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40e93e;
  execl("/bin/sh","/bin/sh",&DAT_00431125,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_18_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0043113f,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40eaed;
  execl("/bin/sh","/bin/sh",&DAT_0043113f,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_52c_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0043114a,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_52c_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0043114a,uParm1,0);
  return;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execlp_61b_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execlp_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_63b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_63b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_88;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar2 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execlp("sh","sh",&DAT_00431170,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  execlp("sh","sh",&DAT_00431170,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execlp("sh","sh",&DAT_00431170,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_02_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execlp("sh","sh",&DAT_0043119a,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40f16f;
  execlp("sh","sh",&DAT_0043119a,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40f1fb;
  execlp("sh","sh",&DAT_0043119a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  bVar7 = 0;
  local_88 = 0x20736c;
  lVar4 = 0xb;
  puVar6 = local_80;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_10 = &local_88;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined4 *)((long)puVar6 + 4));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar5 - 1)) = 0x2a2e2a;
  }
  else {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar3 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar3 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_004311af,local_10,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrueOrFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execl("/bin/sh","/bin/sh",&DAT_004311af,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_12_good(void)

{
  goodG2B();
  return;
}


void badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_004311ba,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_004311ba,uParm1,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x40f6b9;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_10_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execlp("sh","sh",&DAT_004311de,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x40f829;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x40f880;
  execlp("sh","sh",&DAT_004311de,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x40f916;
  execlp("sh","sh",&DAT_004311de,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_41_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004311f9,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execlp_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_41_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004311f9,uParm1,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40fb9b;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execlp_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00431209,local_10,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execlp_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00431209,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_54d_goodG2BSink(uParm1);
  return;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execl_61b_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execl_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_console_execlp_01_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execlp("sh","sh",&DAT_00431228,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x40ffde;
  execlp("sh","sh",&DAT_00431228,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_popen_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4101f1;
  CWE78_OS_Command_Injection__char_connect_socket_popen_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_53d_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431238,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_53d_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431238,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_88;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar2 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0043124d,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  execl("/bin/sh","/bin/sh",&DAT_0043124d,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execl("/bin/sh","/bin/sh",&DAT_0043124d,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_02_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0043127c,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41066f;
  execl("/bin/sh","/bin/sh",&DAT_0043127c,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4106fb;
  execl("/bin/sh","/bin/sh",&DAT_0043127c,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_51b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_51b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_66b_badSink(long lParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431289,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_66b_goodG2BSink(long lParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431289,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execlp("sh","sh",&DAT_0043129e,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x410a07;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x410a5e;
  execlp("sh","sh",&DAT_0043129e,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x410af5;
  execlp("sh","sh",&DAT_0043129e,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x410d35;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x410d4c;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x410f92;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x410fcf;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x410fdd;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x410fe7;
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x411063;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x411071;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41107b;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_10_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0043130d,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x4111f5;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x41124c;
  execl("/bin/sh","/bin/sh",&DAT_0043130d,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x4112e2;
  execl("/bin/sh","/bin/sh",&DAT_0043130d,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    local_c = local_c + 1;
  }
  iVar1 = system((char *)local_18);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  int local_c;
  
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_18 = &uStack144 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack144 = 0x411544;
      iVar2 = system(local_18);
      if (iVar2 != 0) {
        uStack144 = 0x411552;
        printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
        uStack144 = 0x41155c;
        exit(1);
      }
      return;
    }
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_18;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar4 - 1)) = 0x2a2e2a;
    local_c = local_c + 1;
  } while( true );
}


void CWE78_OS_Command_Injection__char_connect_socket_system_17_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x4117e5;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_09_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execlp("sh","sh",&DAT_00431384,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x411989;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4119e0;
  execlp("sh","sh",&DAT_00431384,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x411a76;
  execlp("sh","sh",&DAT_00431384,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_01_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_004313ae,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x411c23;
  execl("/bin/sh","/bin/sh",&DAT_004313ae,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_popen_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x411e36;
  CWE78_OS_Command_Injection__char_connect_socket_popen_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_004313cd,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x41204c;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4120a3;
  execl("/bin/sh","/bin/sh",&DAT_004313cd,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x41213a;
  execl("/bin/sh","/bin/sh",&DAT_004313cd,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_connect_socket_system_61b_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_system_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_connect_socket_popen_45_badData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_popen_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_connect_socket_popen_45_goodG2BData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_connect_socket_popen_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_connect_socket_popen_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE78_OS_Command_Injection__char_connect_socket_popen_45_goodG2BData + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x412565;
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_popen_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_09_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00431412,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x412709;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x412760;
  execl("/bin/sh","/bin/sh",&DAT_00431412,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x4127f6;
  execl("/bin/sh","/bin/sh",&DAT_00431412,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_connect_socket_system_22_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_system_22_badGlobal != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_system_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_system_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_system_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_system_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_system_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_system_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x412ceb;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x412d28;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x412d36;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x412d40;
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (staticFive == 5) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x412dbd;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x412dcb;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x412dd5;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execlp_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x412f4e;
  CWE78_OS_Command_Injection__char_console_execlp_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_64b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_64b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_65b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004314b5,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_65b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004314b5,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execl_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4131eb;
  CWE78_OS_Command_Injection__char_console_execl_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = &local_98;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE78_OS_Command_Injection__char_connect_socket_popen_64b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x4133fd;
  CWE78_OS_Command_Injection__char_connect_socket_popen_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execlp("sh","sh",&DAT_004314de,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x413646;
  execlp("sh","sh",&DAT_004314de,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4136d3;
  execlp("sh","sh",&DAT_004314de,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    local_c = local_c + 1;
  }
  execlp("sh","sh",&DAT_004314ee,local_18,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  int local_c;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack144 = 0x4139b9;
      execlp("sh","sh",&DAT_004314ee,local_18,0);
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
    local_c = local_c + 1;
  } while( true );
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_17_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_004314fe,local_10,0);
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_004314fe,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_66b_badSink(long lParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431504,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_66b_goodG2BSink(long lParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431504,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_console_execlp_65b_badSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    pcVar1 = fgets((char *)(local_20 + (long)local_18),100 - (int)local_20,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_20 + (long)local_18) = 0;
    }
    else {
      local_20 = strlen((char *)local_18);
      if ((local_20 != 0) && (*(char *)((long)local_18 + (local_20 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_20 - 1)) = 0;
      }
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_console_execlp_65b_goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x413e26;
  CWE78_OS_Command_Injection__char_console_execlp_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_65b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0043151e,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_65b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0043151e,uParm1,0);
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (badStatic != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00431533,local_10,0);
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00431533,local_10,0);
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00431533,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execl("/bin/sh","/bin/sh",&DAT_00431558,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x414447;
  execl("/bin/sh","/bin/sh",&DAT_00431558,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4144d4;
  execl("/bin/sh","/bin/sh",&DAT_00431558,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_51_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execlp_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x414681;
  CWE78_OS_Command_Injection__char_console_execlp_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_53d_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_53d_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_42_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_0043157e,local_10,0);
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_0043157e,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_67b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431589,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_67b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431589,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_console_execl_65b_badSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    pcVar1 = fgets((char *)(local_20 + (long)local_18),100 - (int)local_20,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_20 + (long)local_18) = 0;
    }
    else {
      local_20 = strlen((char *)local_18);
      if ((local_20 != 0) && (*(char *)((long)local_18 + (local_20 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_20 - 1)) = 0;
      }
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_console_execl_65b_goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x414b52;
  CWE78_OS_Command_Injection__char_console_execl_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_66b_badSink(long lParm1)

{
  execlp("sh","sh",&DAT_0043159e,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_66b_goodG2BSink(long lParm1)

{
  execlp("sh","sh",&DAT_0043159e,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  bVar7 = 0;
  local_98 = 0x20736c;
  lVar4 = 0xb;
  puVar6 = local_90;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_10 = &local_98;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined4 *)((long)puVar6 + 4));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar5 - 1)) = 0x2a2e2a;
  }
  else {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar2 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar3;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execlp("sh","sh",&DAT_004315ae,local_10,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrueOrFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execlp("sh","sh",&DAT_004315ae,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_004315be,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x4150b1;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x415108;
  execl("/bin/sh","/bin/sh",&DAT_004315be,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x41519e;
  execl("/bin/sh","/bin/sh",&DAT_004315be,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_41_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_004315de,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_41_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execl_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_41_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_004315de,uParm1,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x415423;
  CWE78_OS_Command_Injection__char_connect_socket_execl_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execlp("sh","sh",&DAT_004315fd,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x415637;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x41568e;
  execlp("sh","sh",&DAT_004315fd,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x415724;
  execlp("sh","sh",&DAT_004315fd,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = &local_98;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execlp_64b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x415940;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_15_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x415b6d;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x415b7b;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x415b85;
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x415bf8;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x415c06;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x415c10;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_c8;
  uint16_t local_c6;
  in_addr_t local_c4;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined8 *local_48;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_b0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_b8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_c8,0,0x10);
    local_c8 = 2;
    local_c4 = inet_addr("127.0.0.1");
    local_c6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_c8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  local_38 = local_10;
  execl("/bin/sh","/bin/sh",&DAT_00431650,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack160 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack160 = 0x415e8d;
  local_18 = local_28;
  local_10 = local_28;
  execl("/bin/sh","/bin/sh",&DAT_00431650,local_28,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_04_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00431673,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00415ff1) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x416052;
  execl("/bin/sh","/bin/sh",&DAT_00431673,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4160e7;
  execl("/bin/sh","/bin/sh",&DAT_00431673,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54e_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431693,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54e_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431693,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_d8;
  uint16_t local_d6;
  in_addr_t local_d4;
  undefined8 local_c8;
  undefined8 local_c0 [13];
  undefined local_58 [16];
  undefined8 *local_48;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_c8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_c0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_c8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_d8,0,0x10);
    local_d8 = 2;
    local_d4 = inet_addr("127.0.0.1");
    local_d6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_d8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_66b_badSink(local_58);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack176 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack176 = 0x416388;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_53_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execlp_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4164f7;
  CWE78_OS_Command_Injection__char_console_execlp_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_68_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execl_68_badData = local_10;
  CWE78_OS_Command_Injection__char_console_execl_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_console_execl_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_console_execl_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_console_execl_68_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x4166ac;
  local_10 = CWE78_OS_Command_Injection__char_console_execl_68_goodG2BData;
  CWE78_OS_Command_Injection__char_console_execl_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_05_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (staticTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (staticFalse == 0) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x4168be;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x4168fb;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x416909;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x416913;
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  if (staticTrue != 0) {
    uVar4 = 0xffffffffffffffff;
    pcVar6 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x41698f;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x41699d;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4169a7;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execl_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x416bc4;
  CWE78_OS_Command_Injection__char_connect_socket_execl_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_popen_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_popen_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54e_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431706,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_54e_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431706,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_d8;
  uint16_t local_d6;
  in_addr_t local_d4;
  undefined8 local_c8;
  undefined8 local_c0 [13];
  undefined local_58 [16];
  undefined8 *local_48;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_c8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_c0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_c8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_d8,0,0x10);
    local_d8 = 2;
    local_d4 = inet_addr("127.0.0.1");
    local_d6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_d8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_execl_66b_badSink(local_58);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack176 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack176 = 0x416f49;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_connect_socket_execl_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_53_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execl_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4170b8;
  CWE78_OS_Command_Injection__char_console_execl_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = &local_98;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE78_OS_Command_Injection__char_connect_socket_popen_63b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x4172fe;
  CWE78_OS_Command_Injection__char_connect_socket_popen_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x417521;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_c8;
  uint16_t local_c6;
  in_addr_t local_c4;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined8 *local_48;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_b0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_b8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_c8,0,0x10);
    local_c8 = 2;
    local_c4 = inet_addr("127.0.0.1");
    local_c6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_c8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  local_38 = local_10;
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_28 = &uStack160 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_28;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack160 = 0x417778;
  local_18 = local_28;
  local_10 = local_28;
  iVar2 = system(local_28);
  if (iVar2 != 0) {
    uStack160 = 0x417786;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack160 = 0x417790;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_34_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execlp_22_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_execlp_22_badGlobal != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execlp_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_execlp_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_execlp_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_execlp_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_66b_badSink(long lParm1)

{
  int iVar1;
  
  iVar1 = system(*(char **)(lParm1 + 0x10));
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_66b_goodG2BSink(long lParm1)

{
  int iVar1;
  
  iVar1 = system(*(char **)(lParm1 + 0x10));
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execlp("sh","sh",&DAT_004317a5,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  execlp("sh","sh",&DAT_004317a5,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execlp("sh","sh",&DAT_004317a5,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = &local_98;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE78_OS_Command_Injection__char_connect_socket_system_63b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x417f26;
  CWE78_OS_Command_Injection__char_connect_socket_system_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_68b_badSink(void)

{
  execlp("sh","sh",&DAT_004317ca,CWE78_OS_Command_Injection__char_console_execlp_68_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_68b_goodG2BSink(void)

{
  execlp("sh","sh",&DAT_004317ca,CWE78_OS_Command_Injection__char_console_execlp_68_goodG2BData,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execl_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_51b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004317d0,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_51b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004317d0,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_16_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execlp("sh","sh",&DAT_004317e5,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4181df;
  execlp("sh","sh",&DAT_004317e5,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54e_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_54e_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_66_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_d8;
  uint16_t local_d6;
  in_addr_t local_d4;
  undefined8 local_c8;
  undefined8 local_c0 [13];
  undefined local_58 [16];
  undefined8 *local_48;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_c8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_c0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_c8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_d8,0,0x10);
    local_d8 = 2;
    local_d4 = inet_addr("127.0.0.1");
    local_d6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_d8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_system_66b_badSink(local_58);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack176 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack176 = 0x418472;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_connect_socket_system_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  FILE *local_40;
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    local_c = local_c + 1;
  }
  local_40 = popen((char *)local_18,"w");
  if (local_40 != (FILE *)0x0) {
    pclose(local_40);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
  char *local_18;
  int local_c;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack144 = 0x4186d3;
      local_20 = popen(local_18,"w");
      if (local_20 != (FILE *)0x0) {
        uStack144 = 0x4186ea;
        pclose(local_20);
      }
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
    local_c = local_c + 1;
  } while( true );
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_17_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_44_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x41897b;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_52_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execl_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x418b1e;
  CWE78_OS_Command_Injection__char_console_execl_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_51b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431836,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_51b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431836,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  bVar7 = 0;
  local_88 = 0x20736c;
  lVar4 = 0xb;
  puVar6 = local_80;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_10 = &local_88;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined4 *)((long)puVar6 + 4));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar5 - 1)) = 0x2a2e2a;
  }
  else {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar3 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar3 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execlp("sh","sh",&DAT_00431850,local_10,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = globalReturnsTrueOrFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execlp("sh","sh",&DAT_00431850,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_12_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_connect_socket_popen_61b_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_c = 0xffffffff;
  local_18 = strlen(pcParm1);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_38,0,0x10);
    local_38 = 2;
    local_34 = inet_addr("127.0.0.1");
    local_36 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        pcParm1[(long)local_1c + local_18] = 0;
        local_28 = strchr(pcParm1,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr(pcParm1,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_popen_61b_goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void badSink(void)

{
  execlp("sh","sh",&DAT_00431860,CWE78_OS_Command_Injection__char_console_execlp_45_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_45_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execlp_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  execlp("sh","sh",&DAT_00431860,CWE78_OS_Command_Injection__char_console_execlp_45_goodG2BData,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_console_execlp_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_console_execlp_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_console_execlp_45_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x419126;
  local_10 = CWE78_OS_Command_Injection__char_console_execlp_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_64_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_10 = strlen((char *)local_18);
  if (1 < 100 - local_10) {
    pcVar1 = fgets((char *)(local_10 + (long)local_18),100 - (int)local_10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_10 + (long)local_18) = 0;
    }
    else {
      local_10 = strlen((char *)local_18);
      if ((local_10 != 0) && (*(char *)((long)local_18 + (local_10 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_10 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execlp_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x419294;
  CWE78_OS_Command_Injection__char_console_execlp_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_06_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execlp("sh","sh",&DAT_00431897,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004193fa) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41945b;
  execlp("sh","sh",&DAT_00431897,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4194f1;
  execlp("sh","sh",&DAT_00431897,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_64b_badSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_004318b2,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_64b_goodG2BSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_004318b2,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_17_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  int local_c;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_c = 0;
  while (local_c < 1) {
    local_1c = 0xffffffff;
    local_28 = strlen((char *)local_18);
    local_1c = socket(2,1,6);
    if (local_1c != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
        local_2c = (int)sVar2;
        if ((local_2c != -1) && (local_2c != 0)) {
          *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
          local_38 = strchr((char *)local_18,0xd);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
          local_38 = strchr((char *)local_18,10);
          if (local_38 != (char *)0x0) {
            *local_38 = 0;
          }
        }
      }
    }
    if (local_1c != -1) {
      close(local_1c);
    }
    local_c = local_c + 1;
  }
  execl("/bin/sh","/bin/sh",&DAT_004318c7,local_18,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  int local_c;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  local_c = 0;
  do {
    if (0 < local_c) {
      uStack144 = 0x4197fd;
      execl("/bin/sh","/bin/sh",&DAT_004318c7,local_18,0);
      return;
    }
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_18;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
    local_c = local_c + 1;
  } while( true );
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_17_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_connect_socket_execlp_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_c8;
  uint16_t local_c6;
  in_addr_t local_c4;
  undefined8 local_b8;
  undefined8 local_b0 [12];
  undefined8 *local_50;
  undefined8 *local_48;
  char *local_40;
  int local_34;
  size_t local_30;
  int local_24;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_50;
  local_18 = &local_50;
  local_b8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_b0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_50 = &local_b8;
  local_24 = 0xffffffff;
  local_20 = local_50;
  local_30 = strlen((char *)local_50);
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_c8,0,0x10);
    local_c8 = 2;
    local_c4 = inet_addr("127.0.0.1");
    local_c6 = htons(0x6987);
    iVar1 = connect(local_24,(sockaddr *)&local_c8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_24,(void *)((long)local_20 + local_30),99 - local_30,0);
      local_34 = (int)sVar2;
      if ((local_34 != -1) && (local_34 != 0)) {
        *(undefined *)((long)local_20 + (long)local_34 + local_30) = 0;
        local_40 = strchr((char *)local_20,0xd);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
        local_40 = strchr((char *)local_20,10);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  *local_10 = local_20;
  local_48 = *local_18;
  execlp("sh","sh",&DAT_004318dc,local_48,0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack153;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack153._1_8_ = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = (undefined8 *)((long)&Stack153 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar3 - 1)) = 0x2a2e2a;
  local_28 = local_30;
  local_20 = local_30;
  execlp("sh","sh",&DAT_004318dc,local_30,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_32_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_004318e2,CWE78_OS_Command_Injection__char_console_execl_45_badData,
        0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_45_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execl_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_004318e2,
        CWE78_OS_Command_Injection__char_console_execl_45_goodG2BData,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_console_execl_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_console_execl_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_console_execl_45_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x419ca9;
  local_10 = CWE78_OS_Command_Injection__char_console_execl_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_07_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  if (staticFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack144 = 0x419ec1;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x419f03;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x419f1a;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (staticFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack144 = 0x419f9c;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x419fb3;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_65b_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_65b_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_06_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0043194b,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a187) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41a1e8;
  execl("/bin/sh","/bin/sh",&DAT_0043194b,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41a27e;
  execl("/bin/sh","/bin/sh",&DAT_0043194b,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_68_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execlp_68_badData = local_10;
  CWE78_OS_Command_Injection__char_console_execlp_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_console_execlp_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_console_execlp_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_console_execlp_68_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x41a409;
  local_10 = CWE78_OS_Command_Injection__char_console_execlp_68_goodG2BData;
  CWE78_OS_Command_Injection__char_console_execlp_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_64b_badSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_0043197a,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_64b_goodG2BSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_0043197a,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_51_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execl_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41a606;
  CWE78_OS_Command_Injection__char_console_execl_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_66_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  size_t local_18;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_b8;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_console_execlp_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack176 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack176 = 0x41a79d;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_console_execlp_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_67b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0043199e,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_67b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0043199e,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_004319b3,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x41aa2b;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x41aa82;
  execl("/bin/sh","/bin/sh",&DAT_004319b3,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x41ab19;
  execl("/bin/sh","/bin/sh",&DAT_004319b3,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execlp("sh","sh",&DAT_004319e6,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ad2b) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41ad8c;
  execlp("sh","sh",&DAT_004319e6,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41ae21;
  execlp("sh","sh",&DAT_004319e6,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_31_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  local_40 = local_10;
  execlp("sh","sh",&DAT_00431a0b,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_20 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x41b092;
  local_18 = local_20;
  local_10 = local_20;
  execlp("sh","sh",&DAT_00431a0b,local_20,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_34_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_c8;
  uint16_t local_c6;
  in_addr_t local_c4;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined8 *local_48;
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_b0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_b8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_c8,0,0x10);
    local_c8 = 2;
    local_c4 = inet_addr("127.0.0.1");
    local_c6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_c8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_48 = local_10;
  local_38 = local_10;
  execlp("sh","sh",&DAT_00431a1b,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack160 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack160 = 0x41b305;
  local_18 = local_28;
  local_10 = local_28;
  execlp("sh","sh",&DAT_00431a1b,local_28,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_64b_badSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431a21,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_64b_goodG2BSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431a21,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00431a36,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x41b5a7;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x41b5fe;
  execl("/bin/sh","/bin/sh",&DAT_00431a36,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x41b694;
  execl("/bin/sh","/bin/sh",&DAT_00431a36,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_04_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execl("/bin/sh","/bin/sh",&DAT_00431a6a,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b8a6) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41b907;
  execl("/bin/sh","/bin/sh",&DAT_00431a6a,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41b99c;
  execl("/bin/sh","/bin/sh",&DAT_00431a6a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_15_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execlp("sh","sh",&DAT_00431a99,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41bb4d;
  execlp("sh","sh",&DAT_00431a99,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41bbda;
  execlp("sh","sh",&DAT_00431a99,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_67_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_popen_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x41be07;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_connect_socket_popen_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_execl_65b_badSink;
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_execl_65b_goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x41c02c;
  CWE78_OS_Command_Injection__char_connect_socket_execl_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_65_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      pcParm1[sVar1] = 0;
    }
    else {
      sVar1 = strlen(pcParm1);
      if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
        pcParm1[sVar1 - 1] = 0;
      }
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_console_execlp_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00431ac2,local_10,0);
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00431ac2,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_42_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_connect_socket_popen_22_badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_popen_22_badGlobal != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_popen_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_popen_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_connect_socket_popen_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_connect_socket_popen_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_console_execlp_52c_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431ae7,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_52c_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431ae7,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_68b_badSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00431aed,
        CWE78_OS_Command_Injection__char_connect_socket_execl_68_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_68b_goodG2BSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00431aed,
        CWE78_OS_Command_Injection__char_connect_socket_execl_68_goodG2BData,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execlp_68_badData = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_connect_socket_execlp_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE78_OS_Command_Injection__char_connect_socket_execlp_68_goodG2BData + (~uVar3 - 1)) = 0x2a2e2a
  ;
  uStack128 = 0x41c703;
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_execlp_68_goodG2BData;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_15_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00431b11,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41c8aa;
  execl("/bin/sh","/bin/sh",&DAT_00431b11,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41c937;
  execl("/bin/sh","/bin/sh",&DAT_00431b11,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_53d_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431b1c,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_53d_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431b1c,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_05_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execlp("sh","sh",&DAT_00431b36,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x41cb4d;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x41cba4;
  execlp("sh","sh",&DAT_00431b36,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x41cc3a;
  execlp("sh","sh",&DAT_00431b36,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_22_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  CWE78_OS_Command_Injection__char_connect_socket_popen_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_popen_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  CWE78_OS_Command_Injection__char_connect_socket_popen_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_popen_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  CWE78_OS_Command_Injection__char_connect_socket_popen_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_popen_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_68b_badSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00431b53,CWE78_OS_Command_Injection__char_console_execl_68_badData,
        0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_68b_goodG2BSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00431b53,
        CWE78_OS_Command_Injection__char_console_execl_68_goodG2BData,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execlp_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41d052;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_63_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_88;
  local_10 = strlen((char *)local_18);
  if (1 < 100 - local_10) {
    pcVar1 = fgets((char *)(local_10 + (long)local_18),100 - (int)local_10,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_10 + (long)local_18) = 0;
    }
    else {
      local_10 = strlen((char *)local_18);
      if ((local_10 != 0) && (*(char *)((long)local_18 + (local_10 - 1)) == '\n')) {
        *(undefined *)((long)local_18 + (local_10 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execl_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x41d1f4;
  CWE78_OS_Command_Injection__char_console_execl_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_system_65b_badSink;
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_system_65b_goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x41d419;
  CWE78_OS_Command_Injection__char_connect_socket_system_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_34_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  undefined8 *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_28 = local_10;
  local_20 = local_10;
  execlp("sh","sh",&DAT_00431b90,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack160 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack160 = 0x41d5f4;
  local_18 = local_28;
  local_10 = local_28;
  execlp("sh","sh",&DAT_00431b90,local_28,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execl_68_badData = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_execl_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_connect_socket_execl_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_connect_socket_execl_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE78_OS_Command_Injection__char_connect_socket_execl_68_goodG2BData + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41d84d;
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_execl_68_goodG2BData;
  CWE78_OS_Command_Injection__char_connect_socket_execl_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_41_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431ba0,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_41_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execlp_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_41_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431ba0,uParm1,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41da24;
  CWE78_OS_Command_Injection__char_console_execlp_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_05_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00431bc4,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x41db94;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x41dbeb;
  execl("/bin/sh","/bin/sh",&DAT_00431bc4,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (staticTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x41dc81;
  execl("/bin/sh","/bin/sh",&DAT_00431bc4,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_41_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431be4,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_41_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execl_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_41_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431be4,uParm1,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41de62;
  CWE78_OS_Command_Injection__char_console_execl_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_13_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  if (GLOBAL_CONST_FIVE == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack144 = 0x41e07a;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x41e0bc;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41e0d3;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack144 = 0x41e155;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41e16c;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_68b_badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_connect_socket_system_68_badData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_68b_goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_connect_socket_system_68_goodG2BData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execl_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41e3fb;
  CWE78_OS_Command_Injection__char_connect_socket_execl_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_34_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  undefined8 *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_28 = local_10;
  local_20 = local_10;
  execl("/bin/sh","/bin/sh",&DAT_00431c52,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack160 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack160 = 0x41e5d6;
  local_18 = local_28;
  local_10 = local_28;
  execl("/bin/sh","/bin/sh",&DAT_00431c52,local_28,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_52c_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_52c_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


char * badSource(char *pcParm1)

{
  int iVar1;
  ssize_t sVar2;
  sa_family_t local_38;
  uint16_t local_36;
  in_addr_t local_34;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  if (badStatic != 0) {
    local_c = 0xffffffff;
    local_18 = strlen(pcParm1);
    local_c = socket(2,1,6);
    if (local_c != -1) {
      memset(&local_38,0,0x10);
      local_38 = 2;
      local_34 = inet_addr("127.0.0.1");
      local_36 = htons(0x6987);
      iVar1 = connect(local_c,(sockaddr *)&local_38,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_c,pcParm1 + local_18,99 - local_18,0);
        local_1c = (int)sVar2;
        if ((local_1c != -1) && (local_1c != 0)) {
          pcParm1[(long)local_1c + local_18] = 0;
          local_28 = strchr(pcParm1,0xd);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
          local_28 = strchr(pcParm1,10);
          if (local_28 != (char *)0x0) {
            *local_28 = 0;
          }
        }
      }
    }
    if (local_c != -1) {
      close(local_c);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_21_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x41ec18;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41ec2f;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x41eca6;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41ecbd;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_system_68_badData = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_system_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_connect_socket_system_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_connect_socket_system_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE78_OS_Command_Injection__char_connect_socket_system_68_goodG2BData + (~uVar3 - 1)) = 0x2a2e2a
  ;
  uStack128 = 0x41eeec;
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_system_68_goodG2BData;
  CWE78_OS_Command_Injection__char_connect_socket_system_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execlp_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41f0ff;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execl_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_61_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execl_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00431cb8,local_10,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_connect_socket_execl_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00431cb8,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_51b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431cc3,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_51b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431cc3,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execlp("sh","sh",&DAT_00431cd3,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41f4ce;
  execlp("sh","sh",&DAT_00431cd3,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54e_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431cd9,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_54e_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431cd9,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_66_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  size_t local_18;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_b8;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_console_execl_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined local_38 [16];
  char *local_28;
  char *local_10;
  
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_28 = &uStack176 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_28;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_28 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack176 = 0x41f6cd;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_console_execl_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_system_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41f8e0;
  CWE78_OS_Command_Injection__char_connect_socket_system_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_12_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  ssize_t sVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  bVar7 = 0;
  local_a8 = 0x20736c;
  lVar4 = 0xb;
  puVar6 = local_a0;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_10 = &local_a8;
  iVar2 = globalReturnsTrueOrFalse(puVar6,uParm2,(undefined4 *)((long)puVar6 + 4));
  if (iVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
    puVar6 = local_10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + (ulong)bVar7 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar5 - 1)) = 0x2a2e2a;
  }
  else {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar2 = connect(local_14,(sockaddr *)&local_b8,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar3;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  bVar6 = 0;
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_88;
  iVar2 = globalReturnsTrueOrFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execlp("sh","sh",&DAT_00431d1a,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fdb9) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41fe1a;
  execlp("sh","sh",&DAT_00431d1a,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x41feb0;
  execlp("sh","sh",&DAT_00431d1a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execlp_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4200cd;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_51b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431d3f,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_51b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431d3f,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_66b_badSink(long lParm1)

{
  execlp("sh","sh",&DAT_00431d4a,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_66b_goodG2BSink(long lParm1)

{
  execlp("sh","sh",&DAT_00431d4a,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x4203eb;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x420402;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  bVar6 = 0;
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_88;
  iVar2 = globalReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  bVar6 = 0;
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_88;
  iVar2 = globalReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_system_52c_goodG2BSink(uParm1);
  return;
}


void badSink(void)

{
  execlp("sh","sh",&DAT_00431d7d,CWE78_OS_Command_Injection__char_connect_socket_execlp_45_badData,0
        );
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execlp_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  execlp("sh","sh",&DAT_00431d7d,
         CWE78_OS_Command_Injection__char_connect_socket_execlp_45_goodG2BData,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_connect_socket_execlp_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE78_OS_Command_Injection__char_connect_socket_execlp_45_goodG2BData + (~uVar3 - 1)) = 0x2a2e2a
  ;
  uStack128 = 0x4209ee;
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_execlp_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_53d_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431d8d,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_53d_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00431d8d,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_10_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  if (globalTrue != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (globalFalse == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack144 = 0x420c6c;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x420cae;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x420cc5;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (globalTrue != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack144 = 0x420d46;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x420d5d;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_54d_goodG2BSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_connect_socket_execl_32_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_c8;
  uint16_t local_c6;
  in_addr_t local_c4;
  undefined8 local_b8;
  undefined8 local_b0 [12];
  undefined8 *local_50;
  undefined8 *local_48;
  char *local_40;
  int local_34;
  size_t local_30;
  int local_24;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_50;
  local_18 = &local_50;
  local_b8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_b0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_50 = &local_b8;
  local_24 = 0xffffffff;
  local_20 = local_50;
  local_30 = strlen((char *)local_50);
  local_24 = socket(2,1,6);
  if (local_24 != -1) {
    memset(&local_c8,0,0x10);
    local_c8 = 2;
    local_c4 = inet_addr("127.0.0.1");
    local_c6 = htons(0x6987);
    iVar1 = connect(local_24,(sockaddr *)&local_c8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_24,(void *)((long)local_20 + local_30),99 - local_30,0);
      local_34 = (int)sVar2;
      if ((local_34 != -1) && (local_34 != 0)) {
        *(undefined *)((long)local_20 + (long)local_34 + local_30) = 0;
        local_40 = strchr((char *)local_20,0xd);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
        local_40 = strchr((char *)local_20,10);
        if (local_40 != (char *)0x0) {
          *local_40 = 0;
        }
      }
    }
  }
  if (local_24 != -1) {
    close(local_24);
  }
  *local_10 = local_20;
  local_48 = *local_18;
  execl("/bin/sh","/bin/sh",&DAT_00431dc3,local_48,0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack153;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack153._1_8_ = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = (undefined8 *)((long)&Stack153 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar3 - 1)) = 0x2a2e2a;
  local_28 = local_30;
  local_20 = local_30;
  execl("/bin/sh","/bin/sh",&DAT_00431dc3,local_30,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_52_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_system_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x421263;
  CWE78_OS_Command_Injection__char_connect_socket_system_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_51b_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_51b_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void badSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00431df2,
        CWE78_OS_Command_Injection__char_connect_socket_execl_45_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execl_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00431df2,
        CWE78_OS_Command_Injection__char_connect_socket_execl_45_goodG2BData,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_connect_socket_execl_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_connect_socket_execl_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE78_OS_Command_Injection__char_connect_socket_execl_45_goodG2BData + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x421562;
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_execl_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_45_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      pcParm1[sVar1] = 0;
    }
    else {
      sVar1 = strlen(pcParm1);
      if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
        pcParm1[sVar1 - 1] = 0;
      }
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_console_execl_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00431e16,local_10,0);
  return;
}


char * goodG2BSource(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffffffffffff;
  pcVar3 = pcParm1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  return pcParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)goodG2BSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00431e16,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x421972;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x421980;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x42198a;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execl("/bin/sh","/bin/sh",&DAT_00431e56,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421bc8) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x421c29;
  execl("/bin/sh","/bin/sh",&DAT_00431e56,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x421cbf;
  execl("/bin/sh","/bin/sh",&DAT_00431e56,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_64b_badSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_00431e76,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_64b_goodG2BSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_00431e76,*puParm1,0);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  bVar6 = 0;
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_88;
  iVar2 = staticReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  bVar6 = 0;
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_88;
  iVar2 = staticReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_51_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_system_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4222d1;
  CWE78_OS_Command_Injection__char_connect_socket_system_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_14_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execlp("sh","sh",&DAT_00431eb6,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x422443;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x42249a;
  execlp("sh","sh",&DAT_00431eb6,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x422531;
  execlp("sh","sh",&DAT_00431eb6,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_console_execlp_32_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  undefined8 *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_38 = &local_a8;
  local_20 = local_38;
  local_28 = strlen((char *)local_38);
  if (1 < 100 - local_28) {
    pcVar1 = fgets((char *)(local_28 + (long)local_20),100 - (int)local_28,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_28 + (long)local_20) = 0;
    }
    else {
      local_28 = strlen((char *)local_20);
      if ((local_28 != 0) && (*(char *)((long)local_20 + (local_28 - 1)) == '\n')) {
        *(undefined *)((long)local_20 + (local_28 - 1)) = 0;
      }
    }
  }
  *local_10 = local_20;
  local_30 = *local_18;
  execlp("sh","sh",&DAT_00431ee0,local_30,0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack153;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack153._1_8_ = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = (undefined8 *)((long)&Stack153 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar3 - 1)) = 0x2a2e2a;
  local_28 = local_30;
  local_20 = local_30;
  execlp("sh","sh",&DAT_00431ee0,local_30,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_32_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_connect_socket_system_45_badData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_45_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_system_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_connect_socket_system_45_goodG2BData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_connect_socket_system_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_connect_socket_system_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE78_OS_Command_Injection__char_connect_socket_system_45_goodG2BData + (~uVar3 - 1)) = 0x2a2e2a
  ;
  uStack128 = 0x4229ef;
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_system_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_06_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422bf7) */

void goodG2B1(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x422c3e;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x422c4c;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x422c56;
  exit(1);
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x422cd2;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x422ce0;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x422cea;
  exit(1);
}


void CWE78_OS_Command_Injection__char_connect_socket_system_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execl_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00431f49,local_10,0);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execl_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00431f49,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_67b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431f54,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_67b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00431f54,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_09_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  if (GLOBAL_CONST_TRUE != 0) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_b8,0,0x10);
      local_b8 = 2;
      local_b4 = inet_addr("127.0.0.1");
      local_b6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (GLOBAL_CONST_FALSE == 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack144 = 0x4230a0;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x4230e2;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4230f9;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack144 = 0x42317a;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x423191;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_16_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  execl("/bin/sh","/bin/sh",&DAT_00431f85,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4233e4;
  execl("/bin/sh","/bin/sh",&DAT_00431f85,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = &local_98;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execl_64b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x4235f6;
  CWE78_OS_Command_Injection__char_connect_socket_execl_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_14_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00431fa9,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x423768;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4237bf;
  execl("/bin/sh","/bin/sh",&DAT_00431fa9,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x423856;
  execl("/bin/sh","/bin/sh",&DAT_00431fa9,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_04_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execlp("sh","sh",&DAT_00431fe3,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004239c4) */

void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x423a25;
  execlp("sh","sh",&DAT_00431fe3,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x423aba;
  execlp("sh","sh",&DAT_00431fe3,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_31_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  undefined8 *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_20 = local_10;
  local_28 = local_10;
  execlp("sh","sh",&DAT_0043200d,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_20 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x423c93;
  local_18 = local_20;
  local_10 = local_20;
  execlp("sh","sh",&DAT_0043200d,local_20,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_31_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_console_execl_32_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  undefined8 *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_38 = &local_a8;
  local_20 = local_38;
  local_28 = strlen((char *)local_38);
  if (1 < 100 - local_28) {
    pcVar1 = fgets((char *)(local_28 + (long)local_20),100 - (int)local_28,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_28 + (long)local_20) = 0;
    }
    else {
      local_28 = strlen((char *)local_20);
      if ((local_28 != 0) && (*(char *)((long)local_20 + (local_28 - 1)) == '\n')) {
        *(undefined *)((long)local_20 + (local_28 - 1)) = 0;
      }
    }
  }
  *local_10 = local_20;
  local_30 = *local_18;
  execl("/bin/sh","/bin/sh",&DAT_00432022,local_30,0);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  unkbyte9 Stack153;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  Stack153._1_8_ = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = (undefined8 *)((long)&Stack153 + 1);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((long)local_30 + (~uVar3 - 1)) = 0x2a2e2a;
  local_28 = local_30;
  local_20 = local_30;
  execl("/bin/sh","/bin/sh",&DAT_00432022,local_30,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_popen_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4240c3;
  CWE78_OS_Command_Injection__char_connect_socket_popen_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_67b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00432037,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_67b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00432037,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_67_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_console_execlp_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x4242c6;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_console_execlp_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_67_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_console_execlp_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  if (CWE78_OS_Command_Injection__char_console_execlp_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      else {
        sVar1 = strlen(pcParm1);
        if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
          pcParm1[sVar1 - 1] = 0;
        }
      }
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_console_execlp_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_console_execlp_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_console_execlp_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_console_execlp_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_65b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_65b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_31_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  undefined8 *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_20 = local_10;
  local_28 = local_10;
  execl("/bin/sh","/bin/sh",&DAT_00432086,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_20 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_20;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_20 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x424669;
  local_18 = local_20;
  local_10 = local_20;
  execl("/bin/sh","/bin/sh",&DAT_00432086,local_20,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_52c_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00432091,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_52c_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00432091,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_02_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x424905;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x42491c;
    pclose(local_18);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x424993;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4249aa;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_64_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = &local_98;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE78_OS_Command_Injection__char_connect_socket_system_64b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x424bc6;
  CWE78_OS_Command_Injection__char_connect_socket_system_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_67_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_console_execl_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x424d51;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_console_execl_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_22_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_console_execlp_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execlp_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_004320c1,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_console_execlp_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execlp_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_004320c1,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE78_OS_Command_Injection__char_console_execlp_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_execlp_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_004320c1,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_console_execl_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  if (CWE78_OS_Command_Injection__char_console_execl_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      else {
        sVar1 = strlen(pcParm1);
        if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
          pcParm1[sVar1 - 1] = 0;
        }
      }
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_console_execl_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_console_execl_22_goodG2B1Global == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_console_execl_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_console_execl_22_goodG2B2Global != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_65_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  char *local_38;
  int local_2c;
  size_t local_28;
  int local_1c;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_popen_65b_badSink;
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_a8;
  local_1c = 0xffffffff;
  local_28 = strlen((char *)local_18);
  local_1c = socket(2,1,6);
  if (local_1c != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_1c,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_1c,(void *)((long)local_18 + local_28),99 - local_28,0);
      local_2c = (int)sVar2;
      if ((local_2c != -1) && (local_2c != 0)) {
        *(undefined *)((long)local_18 + (long)local_2c + local_28) = 0;
        local_38 = strchr((char *)local_18,0xd);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
        local_38 = strchr((char *)local_18,10);
        if (local_38 != (char *)0x0) {
          *local_38 = 0;
        }
      }
    }
  }
  if (local_1c != -1) {
    close(local_1c);
  }
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  char *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_popen_65b_goodG2BSink;
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_18;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_18 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x42525d;
  CWE78_OS_Command_Injection__char_connect_socket_popen_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_63b_badSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_004320f5,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_63b_goodG2BSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_004320f5,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_54e_goodG2BSink(uParm1);
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE78_OS_Command_Injection__char_console_execl_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_88;
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar2 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0043210a,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsFalse(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 == 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  execl("/bin/sh","/bin/sh",&DAT_0043210a,local_10,0);
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  bVar6 = 0;
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_78;
  iVar2 = staticReturnsTrue(puVar5,uParm2,(undefined4 *)((long)puVar5 + 4));
  if (iVar2 != 0) {
    uVar4 = 0xffffffffffffffff;
    puVar5 = local_10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)bVar6 * -2 + 1);
    } while (cVar1 != 0);
    *(undefined4 *)((long)local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  }
  execl("/bin/sh","/bin/sh",&DAT_0043210a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_execlp_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_13_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execlp("sh","sh",&DAT_00432139,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x42573e;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x425795;
  execlp("sh","sh",&DAT_00432139,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x42582c;
  execlp("sh","sh",&DAT_00432139,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_execlp_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_68b_badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_connect_socket_popen_68_badData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_68b_goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_connect_socket_popen_68_goodG2BData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_14_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  if (globalFive == 5) {
    local_14 = 0xffffffff;
    local_20 = strlen((char *)local_10);
    local_14 = socket(2,1,6);
    if (local_14 != -1) {
      memset(&local_a8,0,0x10);
      local_a8 = 2;
      local_a4 = inet_addr("127.0.0.1");
      local_a6 = htons(0x6987);
      iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
      if (iVar1 != -1) {
        sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
        local_24 = (int)sVar2;
        if ((local_24 != -1) && (local_24 != 0)) {
          *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
          local_30 = strchr((char *)local_10,0xd);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
          local_30 = strchr((char *)local_10,10);
          if (local_30 != (char *)0x0) {
            *local_30 = 0;
          }
        }
      }
    }
    if (local_14 != -1) {
      close(local_14);
    }
  }
  execlp("sh","sh",&DAT_00432160,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x425afa;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x425b51;
  execlp("sh","sh",&DAT_00432160,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (globalFive == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x425be8;
  execlp("sh","sh",&DAT_00432160,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = &local_98;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execlp_63b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x425e04;
  CWE78_OS_Command_Injection__char_connect_socket_execlp_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_63b_badSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00432185,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_63b_goodG2BSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00432185,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_52_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  CWE78_OS_Command_Injection__char_console_execlp_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x425ff1;
  CWE78_OS_Command_Injection__char_console_execlp_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_connect_socket_popen_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_01_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_b8;
  uint16_t local_b6;
  in_addr_t local_b4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_a8;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_b8,0,0x10);
    local_b8 = 2;
    local_b4 = inet_addr("127.0.0.1");
    local_b6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_b8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  local_38 = popen((char *)local_10,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack144;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  char *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack144 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack144 = 0x426259;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x426270;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_18_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x42649d;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4264ab;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4264b5;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_52c_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_52c_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,stdin);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      else {
        sVar1 = strlen(pcParm1);
        if ((sVar1 != 0) && (pcParm1[sVar1 - 1] == '\n')) {
          pcParm1[sVar1 - 1] = 0;
        }
      }
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_console_execlp_21_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_004321e0,local_10,0);
  return;
}


char * goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B1Static == 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  else {
    printLine("Benign, fixed string");
  }
  return pcParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_004321e0,local_10,0);
  return;
}


char * goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (goodG2B2Static != 0) {
    uVar2 = 0xffffffffffffffff;
    pcVar3 = pcParm1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(pcParm1 + (~uVar2 - 1)) = 0x2a2e2a;
  }
  return pcParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_004321e0,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_03_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execlp("sh","sh",&DAT_0043220a,local_10,0);
  return;
}


void goodG2B1(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x4269ab;
  execlp("sh","sh",&DAT_0043220a,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x426a37;
  execlp("sh","sh",&DAT_0043220a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_13_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      else {
        local_18 = strlen((char *)local_10);
        if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
          *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
        }
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0043221f,local_10,0);
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  else {
    uStack128 = 0x426bb3;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x426c0a;
  execl("/bin/sh","/bin/sh",&DAT_0043221f,local_10,0);
  return;
}


void goodG2B2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar3 = 0xffffffffffffffff;
    pcVar5 = local_10;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != 0);
    *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  }
  uStack128 = 0x426ca1;
  execl("/bin/sh","/bin/sh",&DAT_0043221f,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_68_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_popen_68_badData = local_10;
  CWE78_OS_Command_Injection__char_connect_socket_popen_68b_badSink();
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  CWE78_OS_Command_Injection__char_connect_socket_popen_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_connect_socket_popen_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)
   (CWE78_OS_Command_Injection__char_connect_socket_popen_68_goodG2BData + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x426ed0;
  local_10 = CWE78_OS_Command_Injection__char_connect_socket_popen_68_goodG2BData;
  CWE78_OS_Command_Injection__char_connect_socket_popen_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_16_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00432258,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x427077;
  execl("/bin/sh","/bin/sh",&DAT_00432258,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execl_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_18_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  size_t local_18;
  undefined8 *local_10;
  
  local_88 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_88;
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    pcVar1 = fgets((char *)(local_18 + (long)local_10),100 - (int)local_18,stdin);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    else {
      local_18 = strlen((char *)local_10);
      if ((local_18 != 0) && (*(char *)((long)local_10 + (local_18 - 1)) == '\n')) {
        *(undefined *)((long)local_10 + (local_18 - 1)) = 0;
      }
    }
  }
  execlp("sh","sh",&DAT_00432272,local_10,0);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x42721c;
  execlp("sh","sh",&DAT_00432272,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54e_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00432278,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_execlp_54e_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00432278,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_03_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B1(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x4274af;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4274bd;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4274c7;
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_70;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &uStack128 + 8;
  uVar4 = 0xffffffffffffffff;
  pcVar6 = local_10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar4 - 1)) = 0x2a2e2a;
  uStack128 = 0x427539;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x427547;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x427551;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_63_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  char *local_28;
  int local_1c;
  size_t local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_30 = &local_98;
  local_c = 0xffffffff;
  local_18 = strlen((char *)local_30);
  local_c = socket(2,1,6);
  if (local_c != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_c,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_c,(void *)((long)local_30 + local_18),99 - local_18,0);
      local_1c = (int)sVar2;
      if ((local_1c != -1) && (local_1c != 0)) {
        *(undefined *)((long)local_30 + local_18 + (long)local_1c) = 0;
        local_28 = strchr((char *)local_30,0xd);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
        local_28 = strchr((char *)local_30,10);
        if (local_28 != (char *)0x0) {
          *local_28 = 0;
        }
      }
    }
  }
  if (local_c != -1) {
    close(local_c);
  }
  CWE78_OS_Command_Injection__char_connect_socket_execl_63b_badSink(&local_30);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = (undefined8 *)(&uStack128 + 8);
  uVar3 = 0xffffffffffffffff;
  puVar4 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined8 *)((long)puVar4 + 1);
  } while (cVar1 != 0);
  *(undefined4 *)((~uVar3 - 1) + (long)local_10) = 0x2a2e2a;
  uStack128 = 0x42776d;
  CWE78_OS_Command_Injection__char_connect_socket_execl_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execl_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_52c_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004322ac,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_execlp_52c_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004322ac,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_64b_badSink(char **ppcParm1)

{
  int iVar1;
  
  iVar1 = system(*ppcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_system_64b_goodG2BSink(char **ppcParm1)

{
  int iVar1;
  
  iVar1 = system(*ppcParm1);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_53_bad(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  sa_family_t local_a8;
  uint16_t local_a6;
  in_addr_t local_a4;
  undefined8 local_98;
  undefined8 local_90 [12];
  char *local_30;
  int local_24;
  size_t local_20;
  int local_14;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &local_98;
  local_14 = 0xffffffff;
  local_20 = strlen((char *)local_10);
  local_14 = socket(2,1,6);
  if (local_14 != -1) {
    memset(&local_a8,0,0x10);
    local_a8 = 2;
    local_a4 = inet_addr("127.0.0.1");
    local_a6 = htons(0x6987);
    iVar1 = connect(local_14,(sockaddr *)&local_a8,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_14,(void *)((long)local_10 + local_20),99 - local_20,0);
      local_24 = (int)sVar2;
      if ((local_24 != -1) && (local_24 != 0)) {
        *(undefined *)((long)local_10 + (long)local_24 + local_20) = 0;
        local_30 = strchr((char *)local_10,0xd);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
        local_30 = strchr((char *)local_10,10);
        if (local_30 != (char *)0x0) {
          *local_30 = 0;
        }
      }
    }
  }
  if (local_14 != -1) {
    close(local_14);
  }
  CWE78_OS_Command_Injection__char_connect_socket_popen_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 local_70 [12];
  char *local_10;
  
  local_78 = 0x20736c;
  lVar2 = 0xb;
  puVar4 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_10 = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = local_10;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(local_10 + (~uVar3 - 1)) = 0x2a2e2a;
  uStack128 = 0x427a72;
  CWE78_OS_Command_Injection__char_connect_socket_popen_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_connect_socket_popen_53_good(void)

{
  goodG2B();
  return;
}


void printLine(char *pcParm1)

{
  if (pcParm1 != (char *)0x0) {
    puts(pcParm1);
  }
  return;
}


void printWLine(long lParm1)

{
  if (lParm1 != 0) {
    wprintf(L"%ls\n",lParm1);
  }
  return;
}


void printIntLine(uint uParm1)

{
  printf("%d\n",(ulong)uParm1);
  return;
}


void printShortLine(short sParm1)

{
  printf("%hd\n",(ulong)(uint)(int)sParm1);
  return;
}


void printFloatLine(float fParm1)

{
  printf((char *)(double)fParm1,&DAT_004322f5);
  return;
}


void printLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printLongLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printSizeTLine(undefined8 uParm1)

{
  printf("%zu\n",uParm1);
  return;
}


void printHexCharLine(char cParm1)

{
  printf("%02x\n",(ulong)(uint)(int)cParm1);
  return;
}


void printWcharLine(undefined4 uParm1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = uParm1;
  printf("%ls\n",&local_18);
  return;
}


void printUnsignedLine(uint uParm1)

{
  printf("%u\n",(ulong)uParm1);
  return;
}


void printHexUnsignedCharLine(byte bParm1)

{
  printf("%02x\n",(ulong)bParm1);
  return;
}


void printDoubleLine(char *pcParm1)

{
  printf(pcParm1,&DAT_00432312);
  return;
}


void printStructLine(uint *puParm1)

{
  printf("%d -- %d\n",(ulong)*puParm1,(ulong)puParm1[1]);
  return;
}


void printBytesLine(long lParm1,ulong uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < uParm2) {
    printf("%02x",(ulong)*(byte *)(local_10 + lParm1));
    local_10 = local_10 + 1;
  }
  puts("");
  return;
}


ulong decodeHexChars(long lParm1,ulong uParm2,long lParm3)

{
  long lVar1;
  ushort **ppuVar2;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2)] & 0x1000) == 0) break;
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2 + 1)] & 0x1000) == 0) {
      return local_10;
    }
    lVar1 = local_10 * 2 + lParm3;
    __isoc99_sscanf(lVar1,&DAT_00432320,&local_14,lVar1);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


ulong decodeHexWChars(long lParm1,ulong uParm2,long lParm3)

{
  int iVar1;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8 + 4));
    if (iVar1 == 0) {
      return local_10;
    }
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00432328,&local_14);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


undefined8 globalReturnsTrue(void)

{
  return 1;
}


undefined8 globalReturnsFalse(void)

{
  return 0;
}


ulong globalReturnsTrueOrFalse(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = rand();
  uVar2 = (uint)(iVar1 >> 0x1f) >> 0x1f;
  return (ulong)((iVar1 + uVar2 & 1) - uVar2);
}


void good1(void)

{
  return;
}


void good2(void)

{
  return;
}


void good3(void)

{
  return;
}


void good4(void)

{
  return;
}


void good5(void)

{
  return;
}


void good6(void)

{
  return;
}


void good7(void)

{
  return;
}


void good8(void)

{
  return;
}


void good9(void)

{
  return;
}


void bad1(void)

{
  return;
}


void bad2(void)

{
  return;
}


void bad3(void)

{
  return;
}


void bad4(void)

{
  return;
}


void bad5(void)

{
  return;
}


void bad6(void)

{
  return;
}


void bad7(void)

{
  return;
}


void bad8(void)

{
  return;
}


void bad9(void)

{
  return;
}


void internal_start(long lParm1,undefined8 uParm2)

{
  (**(code **)(lParm1 + 8))(*(undefined8 *)(lParm1 + 0x10),uParm2,*(undefined8 *)(lParm1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}


undefined8 stdThreadCreate(pthread_t pParm1,pthread_t pParm2,pthread_t **pppParm3)

{
  int iVar1;
  undefined8 uVar2;
  pthread_t local_18;
  pthread_t *local_10;
  
  *pppParm3 = (pthread_t *)0x0;
  local_10 = (pthread_t *)malloc(0x18);
  if (local_10 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_10[1] = pParm1;
    local_10[2] = pParm2;
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,internal_start,local_10);
    if (iVar1 == 0) {
      *local_10 = local_18;
      *pppParm3 = local_10;
      uVar2 = 1;
    }
    else {
      free(local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}


ulong stdThreadJoin(pthread_t *ppParm1)

{
  int iVar1;
  void *local_10;
  
  iVar1 = pthread_join(*ppParm1,&local_10);
  return (ulong)(iVar1 == 0);
}


undefined8 stdThreadDestroy(void *pvParm1)

{
  free(pvParm1);
  return 1;
}


undefined8 stdThreadLockCreate(pthread_mutex_t **ppabParm1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *ppabParm1 = (pthread_mutex_t *)0x0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *ppabParm1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(ppabParm1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


void stdThreadLockAcquire(pthread_mutex_t *pabParm1)

{
  pthread_mutex_lock(pabParm1);
  return;
}


void stdThreadLockRelease(pthread_mutex_t *pabParm1)

{
  pthread_mutex_unlock(pabParm1);
  return;
}


void stdThreadLockDestroy(pthread_mutex_t *pabParm1)

{
  pthread_mutex_destroy(pabParm1);
  free(pabParm1);
  return;
}


void __libc_csu_init(EVP_PKEY_CTX *pEParm1,undefined8 uParm2,undefined8 uParm3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(pEParm1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)pEParm1 & 0xffffffff,uParm2,uParm3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}


void __libc_csu_fini(void)

{
  return;
}


void _fini(void)

{
  return;
}

