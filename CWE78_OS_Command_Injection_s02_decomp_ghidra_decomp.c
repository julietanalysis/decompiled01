
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00633ff8;
  if (PTR___gmon_start___00633ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400b40(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00634010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00634018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_00634020)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00634028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00634030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00634038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execl_00634040)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00634048)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00634050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00634058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int execlp(char *__file,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execlp_00634060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00634068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00634070)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00634078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00634080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00634088)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00634090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pclose_00634098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_006340a0)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_006340a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_006340b0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_006340b8)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_006340c0)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006340c8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006340d0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006340d8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006340e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006340e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_popen_006340f0)();
  return pFVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006340f8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00634100)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00633ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400d87) */
/* WARNING: Removing unreachable block (ram,0x00400d91) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400dc4) */
/* WARNING: Removing unreachable block (ram,0x00400dce) */

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


/* WARNING: Removing unreachable block (ram,0x00400e14) */
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
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_41_good();");
  CWE78_OS_Command_Injection__char_console_system_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_04_good();");
  CWE78_OS_Command_Injection__char_environment_system_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_44_good();");
  CWE78_OS_Command_Injection__char_console_system_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_06_good();");
  CWE78_OS_Command_Injection__char_console_popen_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_68_good();");
  CWE78_OS_Command_Injection__char_environment_system_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_09_good();");
  CWE78_OS_Command_Injection__char_environment_system_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_61_good();");
  CWE78_OS_Command_Injection__char_console_popen_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_54_good();");
  CWE78_OS_Command_Injection__char_environment_system_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_01_good();");
  CWE78_OS_Command_Injection__char_environment_system_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_15_good();");
  CWE78_OS_Command_Injection__char_console_popen_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_61_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_67_good();");
  CWE78_OS_Command_Injection__char_environment_popen_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_52_good();");
  CWE78_OS_Command_Injection__char_console_system_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_07_good();");
  CWE78_OS_Command_Injection__char_console_system_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_01_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_10_good();");
  CWE78_OS_Command_Injection__char_environment_popen_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_01_good();");
  CWE78_OS_Command_Injection__char_console_popen_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_09_good();");
  CWE78_OS_Command_Injection__char_console_system_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_42_good();");
  CWE78_OS_Command_Injection__char_environment_system_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_52_good();");
  CWE78_OS_Command_Injection__char_environment_execl_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_53_good();");
  CWE78_OS_Command_Injection__char_environment_system_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_53_good();");
  CWE78_OS_Command_Injection__char_console_system_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_08_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_18_good();");
  CWE78_OS_Command_Injection__char_environment_system_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_08_good();");
  CWE78_OS_Command_Injection__char_console_system_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_31_good();");
  CWE78_OS_Command_Injection__char_environment_execl_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_01_good();");
  CWE78_OS_Command_Injection__char_environment_execl_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_22_good();");
  CWE78_OS_Command_Injection__char_environment_popen_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_41_good();");
  CWE78_OS_Command_Injection__char_environment_popen_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_02_good();");
  CWE78_OS_Command_Injection__char_console_system_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_15_good();");
  CWE78_OS_Command_Injection__char_environment_popen_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_11_good();");
  CWE78_OS_Command_Injection__char_console_popen_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_44_good();");
  CWE78_OS_Command_Injection__char_environment_execl_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_11_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_54_good();");
  CWE78_OS_Command_Injection__char_console_popen_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_15_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_41_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_08_good();");
  CWE78_OS_Command_Injection__char_environment_system_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_34_good();");
  CWE78_OS_Command_Injection__char_environment_execl_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_42_good();");
  CWE78_OS_Command_Injection__char_environment_popen_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_42_good();");
  CWE78_OS_Command_Injection__char_environment_execl_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_54_good();");
  CWE78_OS_Command_Injection__char_environment_popen_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_09_good();");
  CWE78_OS_Command_Injection__char_console_popen_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_07_good();");
  CWE78_OS_Command_Injection__char_environment_system_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_22_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_63_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_61_good();");
  CWE78_OS_Command_Injection__char_environment_execl_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_34_good();");
  CWE78_OS_Command_Injection__char_environment_system_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_10_good();");
  CWE78_OS_Command_Injection__char_console_popen_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_68_good();");
  CWE78_OS_Command_Injection__char_console_system_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_52_good();");
  CWE78_OS_Command_Injection__char_environment_popen_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_68_good();");
  CWE78_OS_Command_Injection__char_environment_popen_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_02_good();");
  CWE78_OS_Command_Injection__char_environment_execl_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_32_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_34_good();");
  CWE78_OS_Command_Injection__char_console_system_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_16_good();");
  CWE78_OS_Command_Injection__char_console_system_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_12_good();");
  CWE78_OS_Command_Injection__char_console_system_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_12_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_15_good();");
  CWE78_OS_Command_Injection__char_console_system_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_63_good();");
  CWE78_OS_Command_Injection__char_environment_popen_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_54_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_14_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_09_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_13_good();");
  CWE78_OS_Command_Injection__char_console_system_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_64_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_02_good();");
  CWE78_OS_Command_Injection__char_environment_popen_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_06_good();");
  CWE78_OS_Command_Injection__char_environment_execl_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_03_good();");
  CWE78_OS_Command_Injection__char_environment_execl_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_11_good();");
  CWE78_OS_Command_Injection__char_environment_system_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_32_good();");
  CWE78_OS_Command_Injection__char_environment_execl_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_22_good();");
  CWE78_OS_Command_Injection__char_console_popen_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_17_good();");
  CWE78_OS_Command_Injection__char_environment_system_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_54_good();");
  CWE78_OS_Command_Injection__char_console_system_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_68_good();");
  CWE78_OS_Command_Injection__char_environment_execl_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_42_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_18_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_67_good();");
  CWE78_OS_Command_Injection__char_environment_system_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_31_good();");
  CWE78_OS_Command_Injection__char_environment_popen_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_17_good();");
  CWE78_OS_Command_Injection__char_console_system_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_12_good();");
  CWE78_OS_Command_Injection__char_environment_execl_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_34_good();");
  CWE78_OS_Command_Injection__char_console_popen_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_45_good();");
  CWE78_OS_Command_Injection__char_console_popen_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_05_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_52_good();");
  CWE78_OS_Command_Injection__char_console_popen_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_18_good();");
  CWE78_OS_Command_Injection__char_environment_execl_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_32_good();");
  CWE78_OS_Command_Injection__char_console_popen_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_16_good();");
  CWE78_OS_Command_Injection__char_environment_execl_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_04_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_68_good();");
  CWE78_OS_Command_Injection__char_console_popen_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_06_good();");
  CWE78_OS_Command_Injection__char_environment_popen_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_44_good();");
  CWE78_OS_Command_Injection__char_environment_system_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_31_good();");
  CWE78_OS_Command_Injection__char_console_popen_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_45_good();");
  CWE78_OS_Command_Injection__char_environment_system_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_18_good();");
  CWE78_OS_Command_Injection__char_environment_popen_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_05_good();");
  CWE78_OS_Command_Injection__char_console_system_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_01_good();");
  CWE78_OS_Command_Injection__char_console_system_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_21_good();");
  CWE78_OS_Command_Injection__char_environment_execl_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_67_good();");
  CWE78_OS_Command_Injection__char_console_system_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_21_good();");
  CWE78_OS_Command_Injection__char_environment_system_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_13_good();");
  CWE78_OS_Command_Injection__char_console_popen_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_08_good();");
  CWE78_OS_Command_Injection__char_console_popen_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_32_good();");
  CWE78_OS_Command_Injection__char_environment_popen_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_16_good();");
  CWE78_OS_Command_Injection__char_environment_system_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_06_good();");
  CWE78_OS_Command_Injection__char_environment_system_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_31_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_41_good();");
  CWE78_OS_Command_Injection__char_environment_execl_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_13_good();");
  CWE78_OS_Command_Injection__char_environment_execl_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_67_good();");
  CWE78_OS_Command_Injection__char_environment_execl_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_51_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_32_good();");
  CWE78_OS_Command_Injection__char_console_system_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_31_good();");
  CWE78_OS_Command_Injection__char_console_system_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_09_good();");
  CWE78_OS_Command_Injection__char_environment_popen_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_16_good();");
  CWE78_OS_Command_Injection__char_console_popen_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_13_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_53_good();");
  CWE78_OS_Command_Injection__char_environment_popen_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_13_good();");
  CWE78_OS_Command_Injection__char_environment_system_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_21_good();");
  CWE78_OS_Command_Injection__char_console_system_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_31_good();");
  CWE78_OS_Command_Injection__char_environment_system_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_65_good();");
  CWE78_OS_Command_Injection__char_console_popen_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_03_good();");
  CWE78_OS_Command_Injection__char_console_popen_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_02_good();");
  CWE78_OS_Command_Injection__char_environment_system_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_65_good();");
  CWE78_OS_Command_Injection__char_environment_execl_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_03_good();");
  CWE78_OS_Command_Injection__char_environment_system_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_22_good();");
  CWE78_OS_Command_Injection__char_environment_execl_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_44_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_32_good();");
  CWE78_OS_Command_Injection__char_environment_system_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_04_good();");
  CWE78_OS_Command_Injection__char_console_popen_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_08_good();");
  CWE78_OS_Command_Injection__char_environment_execl_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_06_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_09_good();");
  CWE78_OS_Command_Injection__char_environment_execl_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_17_good();");
  CWE78_OS_Command_Injection__char_environment_popen_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_12_good();");
  CWE78_OS_Command_Injection__char_console_popen_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_65_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_04_good();");
  CWE78_OS_Command_Injection__char_console_system_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_13_good();");
  CWE78_OS_Command_Injection__char_environment_popen_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_51_good();");
  CWE78_OS_Command_Injection__char_environment_execl_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_67_good();");
  CWE78_OS_Command_Injection__char_console_popen_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_64_good();");
  CWE78_OS_Command_Injection__char_environment_system_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_05_good();");
  CWE78_OS_Command_Injection__char_environment_system_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_45_good();");
  CWE78_OS_Command_Injection__char_console_system_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_52_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_65_good();");
  CWE78_OS_Command_Injection__char_console_system_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_03_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_07_good();");
  CWE78_OS_Command_Injection__char_environment_popen_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_42_good();");
  CWE78_OS_Command_Injection__char_console_system_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_21_good();");
  CWE78_OS_Command_Injection__char_environment_popen_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_61_good();");
  CWE78_OS_Command_Injection__char_environment_system_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_17_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_66_good();");
  CWE78_OS_Command_Injection__char_environment_system_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_61_good();");
  CWE78_OS_Command_Injection__char_console_system_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_02_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_63_good();");
  CWE78_OS_Command_Injection__char_environment_system_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_05_good();");
  CWE78_OS_Command_Injection__char_console_popen_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_51_good();");
  CWE78_OS_Command_Injection__char_environment_system_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_10_good();");
  CWE78_OS_Command_Injection__char_environment_execl_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_34_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_66_good();");
  CWE78_OS_Command_Injection__char_environment_popen_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_18_good();");
  CWE78_OS_Command_Injection__char_console_system_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_66_good();");
  CWE78_OS_Command_Injection__char_console_system_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_18_good();");
  CWE78_OS_Command_Injection__char_console_popen_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_63_good();");
  CWE78_OS_Command_Injection__char_console_popen_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_07_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_22_good();");
  CWE78_OS_Command_Injection__char_environment_system_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_61_good();");
  CWE78_OS_Command_Injection__char_environment_popen_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_11_good();");
  CWE78_OS_Command_Injection__char_console_system_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_03_good();");
  CWE78_OS_Command_Injection__char_console_system_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_52_good();");
  CWE78_OS_Command_Injection__char_environment_system_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_07_good();");
  CWE78_OS_Command_Injection__char_console_popen_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_63_good();");
  CWE78_OS_Command_Injection__char_console_system_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_67_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_05_good();");
  CWE78_OS_Command_Injection__char_environment_execl_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_10_good();");
  CWE78_OS_Command_Injection__char_console_system_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_08_good();");
  CWE78_OS_Command_Injection__char_environment_popen_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_45_good();");
  CWE78_OS_Command_Injection__char_environment_popen_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_42_good();");
  CWE78_OS_Command_Injection__char_console_popen_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_14_good();");
  CWE78_OS_Command_Injection__char_console_system_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_65_good();");
  CWE78_OS_Command_Injection__char_environment_system_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_15_good();");
  CWE78_OS_Command_Injection__char_environment_system_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_03_good();");
  CWE78_OS_Command_Injection__char_environment_popen_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_65_good();");
  CWE78_OS_Command_Injection__char_environment_popen_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_44_good();");
  CWE78_OS_Command_Injection__char_environment_popen_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_04_good();");
  CWE78_OS_Command_Injection__char_environment_popen_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_15_good();");
  CWE78_OS_Command_Injection__char_environment_execl_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_14_good();");
  CWE78_OS_Command_Injection__char_console_popen_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_17_good();");
  CWE78_OS_Command_Injection__char_console_popen_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_22_good();");
  CWE78_OS_Command_Injection__char_console_system_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_16_good();");
  CWE78_OS_Command_Injection__char_environment_popen_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_02_good();");
  CWE78_OS_Command_Injection__char_console_popen_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_54_good();");
  CWE78_OS_Command_Injection__char_environment_execl_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_10_good();");
  CWE78_OS_Command_Injection__char_environment_system_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_45_good();");
  CWE78_OS_Command_Injection__char_environment_execl_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_07_good();");
  CWE78_OS_Command_Injection__char_environment_execl_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_21_good();");
  CWE78_OS_Command_Injection__char_console_popen_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_11_good();");
  CWE78_OS_Command_Injection__char_environment_execl_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_51_good();");
  CWE78_OS_Command_Injection__char_console_system_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_64_good();");
  CWE78_OS_Command_Injection__char_console_system_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_16_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_66_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_53_good();");
  CWE78_OS_Command_Injection__char_environment_execl_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_21_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_66_good();");
  CWE78_OS_Command_Injection__char_environment_execl_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_12_good();");
  CWE78_OS_Command_Injection__char_environment_popen_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_53_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_05_good();");
  CWE78_OS_Command_Injection__char_environment_popen_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_34_good();");
  CWE78_OS_Command_Injection__char_environment_popen_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_06_good();");
  CWE78_OS_Command_Injection__char_console_system_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_53_good();");
  CWE78_OS_Command_Injection__char_console_popen_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_63_good();");
  CWE78_OS_Command_Injection__char_environment_execl_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_51_good();");
  CWE78_OS_Command_Injection__char_console_popen_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_51_good();");
  CWE78_OS_Command_Injection__char_environment_popen_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_12_good();");
  CWE78_OS_Command_Injection__char_environment_system_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_64_good();");
  CWE78_OS_Command_Injection__char_console_popen_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_11_good();");
  CWE78_OS_Command_Injection__char_environment_popen_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_17_good();");
  CWE78_OS_Command_Injection__char_environment_execl_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_14_good();");
  CWE78_OS_Command_Injection__char_environment_popen_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_68_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_04_good();");
  CWE78_OS_Command_Injection__char_environment_execl_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_01_good();");
  CWE78_OS_Command_Injection__char_environment_popen_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_14_good();");
  CWE78_OS_Command_Injection__char_environment_execl_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_14_good();");
  CWE78_OS_Command_Injection__char_environment_system_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_44_good();");
  CWE78_OS_Command_Injection__char_console_popen_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_64_good();");
  CWE78_OS_Command_Injection__char_environment_execl_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_66_good();");
  CWE78_OS_Command_Injection__char_console_popen_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_41_good();");
  CWE78_OS_Command_Injection__char_console_popen_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_45_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_41_good();");
  CWE78_OS_Command_Injection__char_environment_system_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_10_good();");
  CWE78_OS_Command_Injection__char_environment_execlp_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_64_good();");
  CWE78_OS_Command_Injection__char_environment_popen_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_41_bad();");
  CWE78_OS_Command_Injection__char_console_system_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_04_bad();");
  CWE78_OS_Command_Injection__char_environment_system_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_44_bad();");
  CWE78_OS_Command_Injection__char_console_system_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_06_bad();");
  CWE78_OS_Command_Injection__char_console_popen_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_68_bad();");
  CWE78_OS_Command_Injection__char_environment_system_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_09_bad();");
  CWE78_OS_Command_Injection__char_environment_system_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_61_bad();");
  CWE78_OS_Command_Injection__char_console_popen_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_54_bad();");
  CWE78_OS_Command_Injection__char_environment_system_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_01_bad();");
  CWE78_OS_Command_Injection__char_environment_system_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_15_bad();");
  CWE78_OS_Command_Injection__char_console_popen_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_61_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_67_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_52_bad();");
  CWE78_OS_Command_Injection__char_console_system_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_07_bad();");
  CWE78_OS_Command_Injection__char_console_system_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_01_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_10_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_01_bad();");
  CWE78_OS_Command_Injection__char_console_popen_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_09_bad();");
  CWE78_OS_Command_Injection__char_console_system_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_42_bad();");
  CWE78_OS_Command_Injection__char_environment_system_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_52_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_53_bad();");
  CWE78_OS_Command_Injection__char_environment_system_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_53_bad();");
  CWE78_OS_Command_Injection__char_console_system_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_08_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_18_bad();");
  CWE78_OS_Command_Injection__char_environment_system_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_08_bad();");
  CWE78_OS_Command_Injection__char_console_system_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_31_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_01_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_22_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_41_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_02_bad();");
  CWE78_OS_Command_Injection__char_console_system_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_15_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_11_bad();");
  CWE78_OS_Command_Injection__char_console_popen_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_44_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_11_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_54_bad();");
  CWE78_OS_Command_Injection__char_console_popen_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_15_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_41_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_08_bad();");
  CWE78_OS_Command_Injection__char_environment_system_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_34_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_42_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_42_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_54_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_09_bad();");
  CWE78_OS_Command_Injection__char_console_popen_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_07_bad();");
  CWE78_OS_Command_Injection__char_environment_system_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_22_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_63_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_61_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_34_bad();");
  CWE78_OS_Command_Injection__char_environment_system_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_10_bad();");
  CWE78_OS_Command_Injection__char_console_popen_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_68_bad();");
  CWE78_OS_Command_Injection__char_console_system_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_52_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_68_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_02_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_32_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_34_bad();");
  CWE78_OS_Command_Injection__char_console_system_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_16_bad();");
  CWE78_OS_Command_Injection__char_console_system_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_12_bad();");
  CWE78_OS_Command_Injection__char_console_system_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_12_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_15_bad();");
  CWE78_OS_Command_Injection__char_console_system_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_63_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_54_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_14_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_09_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_13_bad();");
  CWE78_OS_Command_Injection__char_console_system_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_64_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_02_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_06_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_03_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_11_bad();");
  CWE78_OS_Command_Injection__char_environment_system_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_32_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_22_bad();");
  CWE78_OS_Command_Injection__char_console_popen_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_17_bad();");
  CWE78_OS_Command_Injection__char_environment_system_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_54_bad();");
  CWE78_OS_Command_Injection__char_console_system_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_68_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_42_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_18_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_67_bad();");
  CWE78_OS_Command_Injection__char_environment_system_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_31_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_17_bad();");
  CWE78_OS_Command_Injection__char_console_system_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_12_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_34_bad();");
  CWE78_OS_Command_Injection__char_console_popen_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_45_bad();");
  CWE78_OS_Command_Injection__char_console_popen_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_05_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_52_bad();");
  CWE78_OS_Command_Injection__char_console_popen_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_18_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_32_bad();");
  CWE78_OS_Command_Injection__char_console_popen_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_16_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_04_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_68_bad();");
  CWE78_OS_Command_Injection__char_console_popen_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_06_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_44_bad();");
  CWE78_OS_Command_Injection__char_environment_system_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_31_bad();");
  CWE78_OS_Command_Injection__char_console_popen_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_45_bad();");
  CWE78_OS_Command_Injection__char_environment_system_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_18_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_05_bad();");
  CWE78_OS_Command_Injection__char_console_system_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_01_bad();");
  CWE78_OS_Command_Injection__char_console_system_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_21_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_67_bad();");
  CWE78_OS_Command_Injection__char_console_system_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_21_bad();");
  CWE78_OS_Command_Injection__char_environment_system_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_13_bad();");
  CWE78_OS_Command_Injection__char_console_popen_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_08_bad();");
  CWE78_OS_Command_Injection__char_console_popen_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_32_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_16_bad();");
  CWE78_OS_Command_Injection__char_environment_system_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_06_bad();");
  CWE78_OS_Command_Injection__char_environment_system_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_31_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_41_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_13_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_67_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_51_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_32_bad();");
  CWE78_OS_Command_Injection__char_console_system_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_31_bad();");
  CWE78_OS_Command_Injection__char_console_system_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_09_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_16_bad();");
  CWE78_OS_Command_Injection__char_console_popen_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_13_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_53_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_13_bad();");
  CWE78_OS_Command_Injection__char_environment_system_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_21_bad();");
  CWE78_OS_Command_Injection__char_console_system_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_31_bad();");
  CWE78_OS_Command_Injection__char_environment_system_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_65_bad();");
  CWE78_OS_Command_Injection__char_console_popen_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_03_bad();");
  CWE78_OS_Command_Injection__char_console_popen_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_02_bad();");
  CWE78_OS_Command_Injection__char_environment_system_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_65_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_03_bad();");
  CWE78_OS_Command_Injection__char_environment_system_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_22_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_44_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_32_bad();");
  CWE78_OS_Command_Injection__char_environment_system_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_04_bad();");
  CWE78_OS_Command_Injection__char_console_popen_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_08_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_06_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_09_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_17_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_12_bad();");
  CWE78_OS_Command_Injection__char_console_popen_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_65_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_04_bad();");
  CWE78_OS_Command_Injection__char_console_system_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_13_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_51_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_67_bad();");
  CWE78_OS_Command_Injection__char_console_popen_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_64_bad();");
  CWE78_OS_Command_Injection__char_environment_system_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_05_bad();");
  CWE78_OS_Command_Injection__char_environment_system_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_45_bad();");
  CWE78_OS_Command_Injection__char_console_system_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_52_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_65_bad();");
  CWE78_OS_Command_Injection__char_console_system_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_03_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_07_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_42_bad();");
  CWE78_OS_Command_Injection__char_console_system_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_21_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_61_bad();");
  CWE78_OS_Command_Injection__char_environment_system_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_17_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_66_bad();");
  CWE78_OS_Command_Injection__char_environment_system_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_61_bad();");
  CWE78_OS_Command_Injection__char_console_system_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_02_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_63_bad();");
  CWE78_OS_Command_Injection__char_environment_system_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_05_bad();");
  CWE78_OS_Command_Injection__char_console_popen_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_51_bad();");
  CWE78_OS_Command_Injection__char_environment_system_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_10_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_34_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_66_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_18_bad();");
  CWE78_OS_Command_Injection__char_console_system_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_66_bad();");
  CWE78_OS_Command_Injection__char_console_system_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_18_bad();");
  CWE78_OS_Command_Injection__char_console_popen_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_63_bad();");
  CWE78_OS_Command_Injection__char_console_popen_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_07_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_22_bad();");
  CWE78_OS_Command_Injection__char_environment_system_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_61_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_11_bad();");
  CWE78_OS_Command_Injection__char_console_system_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_03_bad();");
  CWE78_OS_Command_Injection__char_console_system_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_52_bad();");
  CWE78_OS_Command_Injection__char_environment_system_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_07_bad();");
  CWE78_OS_Command_Injection__char_console_popen_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_63_bad();");
  CWE78_OS_Command_Injection__char_console_system_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_67_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_05_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_10_bad();");
  CWE78_OS_Command_Injection__char_console_system_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_08_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_45_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_42_bad();");
  CWE78_OS_Command_Injection__char_console_popen_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_14_bad();");
  CWE78_OS_Command_Injection__char_console_system_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_65_bad();");
  CWE78_OS_Command_Injection__char_environment_system_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_15_bad();");
  CWE78_OS_Command_Injection__char_environment_system_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_03_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_65_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_44_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_04_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_15_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_14_bad();");
  CWE78_OS_Command_Injection__char_console_popen_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_17_bad();");
  CWE78_OS_Command_Injection__char_console_popen_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_22_bad();");
  CWE78_OS_Command_Injection__char_console_system_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_16_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_02_bad();");
  CWE78_OS_Command_Injection__char_console_popen_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_54_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_10_bad();");
  CWE78_OS_Command_Injection__char_environment_system_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_45_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_07_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_21_bad();");
  CWE78_OS_Command_Injection__char_console_popen_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_11_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_51_bad();");
  CWE78_OS_Command_Injection__char_console_system_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_64_bad();");
  CWE78_OS_Command_Injection__char_console_system_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_16_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_66_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_53_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_21_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_66_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_12_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_53_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_05_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_34_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_system_06_bad();");
  CWE78_OS_Command_Injection__char_console_system_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_53_bad();");
  CWE78_OS_Command_Injection__char_console_popen_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_63_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_51_bad();");
  CWE78_OS_Command_Injection__char_console_popen_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_51_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_12_bad();");
  CWE78_OS_Command_Injection__char_environment_system_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_64_bad();");
  CWE78_OS_Command_Injection__char_console_popen_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_11_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_17_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_14_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_68_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_04_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_01_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_14_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_14_bad();");
  CWE78_OS_Command_Injection__char_environment_system_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_44_bad();");
  CWE78_OS_Command_Injection__char_console_popen_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execl_64_bad();");
  CWE78_OS_Command_Injection__char_environment_execl_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_66_bad();");
  CWE78_OS_Command_Injection__char_console_popen_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_console_popen_41_bad();");
  CWE78_OS_Command_Injection__char_console_popen_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_45_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_system_41_bad();");
  CWE78_OS_Command_Injection__char_environment_system_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_execlp_10_bad();");
  CWE78_OS_Command_Injection__char_environment_execlp_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_environment_popen_64_bad();");
  CWE78_OS_Command_Injection__char_environment_popen_64_bad();
  return 0;
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


void CWE78_OS_Command_Injection__char_console_system_44_bad(void)

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
  uStack144 = 0x4033db;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_44_good(void)

{
  goodG2B();
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


void CWE78_OS_Command_Injection__char_environment_execl_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  iVar1 = staticReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_004269ba,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_004269ba,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_004269ba,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_51_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_51b_badSink(local_10);
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
  uStack128 = 0x4037a4;
  CWE78_OS_Command_Injection__char_console_popen_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_04_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x004038a3) */

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
  uStack128 = 0x4038ea;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x4038f8;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x403902;
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
  uStack128 = 0x40397d;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x40398b;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x403995;
  exit(1);
}


void CWE78_OS_Command_Injection__char_environment_system_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_environment_execl_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_execl_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00426a27,local_10,0);
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
  CWE78_OS_Command_Injection__char_environment_execl_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_execl_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00426a27,local_10,0);
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
  CWE78_OS_Command_Injection__char_environment_execl_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_execl_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_00426a27,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
  uStack144 = 0x403c5d;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x403c74;
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
  uStack144 = 0x403cec;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x403d03;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_environment_system_61b_badSource
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
             CWE78_OS_Command_Injection__char_environment_system_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_61_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_console_popen_45_badData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_45_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_console_popen_45_goodG2BData,"w");
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
  CWE78_OS_Command_Injection__char_console_popen_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_console_popen_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_console_popen_45_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x403fee;
  local_10 = CWE78_OS_Command_Injection__char_console_popen_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_67_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_environment_system_67b_badSink(local_10);
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
  uStack144 = 0x40411a;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_environment_system_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_67_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,99 - sVar1);
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_environment_popen_42_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_environment_popen_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00426a71,local_10,0);
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
    uStack128 = 0x4043b1;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x404408;
  execl("/bin/sh","/bin/sh",&DAT_00426a71,local_10,0);
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
  uStack128 = 0x40449f;
  execl("/bin/sh","/bin/sh",&DAT_00426a71,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_environment_system_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  if (CWE78_OS_Command_Injection__char_environment_system_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,99 - sVar1);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_environment_system_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_environment_system_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_environment_system_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_environment_system_22_goodG2B2Global != 0) {
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


void CWE78_OS_Command_Injection__char_environment_execl_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_63_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_63b_badSink(&local_18);
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
  uStack128 = 0x404750;
  CWE78_OS_Command_Injection__char_console_popen_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_console_system_61b_badSource
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
             CWE78_OS_Command_Injection__char_console_system_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_61_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,99 - sVar1);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_environment_execlp_21_bad(undefined8 uParm1,undefined8 uParm2)

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
  execlp("sh","sh",&DAT_00426ad7,local_10,0);
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
  execlp("sh","sh",&DAT_00426ad7,local_10,0);
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
  execlp("sh","sh",&DAT_00426ad7,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execlp("sh","sh",&DAT_00426af6,local_10,0);
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
  uStack128 = 0x404bfe;
  execlp("sh","sh",&DAT_00426af6,local_10,0);
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
  uStack128 = 0x404c8a;
  execlp("sh","sh",&DAT_00426af6,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00426b00,local_10,0);
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
    uStack128 = 0x404da3;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x404dfa;
  execl("/bin/sh","/bin/sh",&DAT_00426b00,local_10,0);
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
  uStack128 = 0x404e91;
  execl("/bin/sh","/bin/sh",&DAT_00426b00,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_environment_execl_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  if (CWE78_OS_Command_Injection__char_environment_execl_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,99 - sVar1);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_environment_execl_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_environment_execl_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_environment_execl_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_environment_execl_22_goodG2B2Global != 0) {
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


void CWE78_OS_Command_Injection__char_console_system_07_bad(void)

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
  if (staticFive == 5) {
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
    uStack128 = 0x405110;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40514d;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40515b;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405165;
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
  uStack128 = 0x4051e2;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4051f0;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4051fa;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execlp("sh","sh",&DAT_00426b7b,local_10,0);
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
  uStack128 = 0x40534a;
  execlp("sh","sh",&DAT_00426b7b,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
    uStack144 = 0x405465;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x4054a7;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4054be;
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
  uStack144 = 0x40553f;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x405556;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_64b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_64b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_environment_system_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_system_22_badSource
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
  CWE78_OS_Command_Injection__char_environment_system_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_system_22_goodG2B1Source
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
  CWE78_OS_Command_Injection__char_environment_system_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_system_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execlp("sh","sh",&DAT_00426bbc,local_10,0);
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
  execlp("sh","sh",&DAT_00426bbc,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_12_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,99 - sVar1);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_environment_execl_21_bad(undefined8 uParm1,undefined8 uParm2)

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
  execl("/bin/sh","/bin/sh",&DAT_00426bc6,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_00426bc6,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_00426bc6,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execl("/bin/sh","/bin/sh",&DAT_00426bea,local_10,0);
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
  uStack128 = 0x405cf7;
  execl("/bin/sh","/bin/sh",&DAT_00426bea,local_10,0);
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
  uStack128 = 0x405d83;
  execl("/bin/sh","/bin/sh",&DAT_00426bea,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_66b_badSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_66b_goodG2BSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execlp("sh","sh",&DAT_00426bfb,local_10,0);
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
  uStack128 = 0x405f57;
  execlp("sh","sh",&DAT_00426bfb,local_10,0);
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
  uStack128 = 0x405fe4;
  execlp("sh","sh",&DAT_00426bfb,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execl("/bin/sh","/bin/sh",&DAT_00426c05,local_10,0);
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
  uStack128 = 0x406168;
  execl("/bin/sh","/bin/sh",&DAT_00426c05,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_15_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
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
  uStack128 = 0x406292;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4062a0;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4062aa;
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
  uStack128 = 0x40631d;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40632b;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406335;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execlp("sh","sh",&DAT_00426c32,local_10,0);
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
    uStack128 = 0x40644c;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4064a3;
  execlp("sh","sh",&DAT_00426c32,local_10,0);
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
  uStack128 = 0x406539;
  execlp("sh","sh",&DAT_00426c32,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_64_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,99 - local_10);
  }
  CWE78_OS_Command_Injection__char_environment_execlp_64b_badSink(&local_20);
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
  uStack128 = 0x406652;
  CWE78_OS_Command_Injection__char_environment_execlp_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_a8;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_38 = local_10;
  local_28 = local_10;
  execl("/bin/sh","/bin/sh",&DAT_00426c55,local_10,0);
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
  uStack160 = 0x406802;
  local_18 = local_28;
  local_10 = local_28;
  execl("/bin/sh","/bin/sh",&DAT_00426c55,local_28,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_54e_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00426c60,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_54e_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00426c60,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_66_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_b8;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_environment_execlp_66b_badSink(local_48);
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
  uStack176 = 0x4069a2;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_environment_execlp_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_63b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_63b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_66_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_66b_badSink(local_48);
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
  uStack176 = 0x406bbb;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_console_popen_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_05_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
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
    uStack128 = 0x406cc6;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x406d03;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x406d11;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406d1b;
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
  uStack128 = 0x406d97;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x406da5;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406daf;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_54b_badSink(local_10);
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
  uStack128 = 0x406f28;
  CWE78_OS_Command_Injection__char_console_popen_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_41_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_41_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_system_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_41_goodG2BSink(char *pcParm1)

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
  uStack128 = 0x40709c;
  CWE78_OS_Command_Injection__char_environment_system_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_64b_badSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_64b_goodG2BSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_environment_execl_54e_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00426cf5,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_54e_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00426cf5,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_66_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_b8;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_environment_execl_66b_badSink(local_48);
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
  uStack176 = 0x4072c6;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_environment_execl_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_63_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,99 - local_10);
  }
  CWE78_OS_Command_Injection__char_environment_popen_63b_badSink(&local_20);
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
  uStack128 = 0x4073d5;
  CWE78_OS_Command_Injection__char_environment_popen_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_34_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_a8;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_38 = local_10;
  local_28 = local_10;
  iVar1 = system((char *)local_10);
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
  uStack160 = 0x407535;
  local_18 = local_28;
  local_10 = local_28;
  iVar2 = system(local_28);
  if (iVar2 != 0) {
    uStack160 = 0x407543;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack160 = 0x40754d;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  FILE *local_30;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_a8;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_38 = local_10;
  local_28 = local_10;
  local_30 = popen((char *)local_10,"w");
  if (local_30 != (FILE *)0x0) {
    pclose(local_30);
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
  uStack160 = 0x4076b6;
  local_18 = local_28;
  local_10 = local_28;
  local_20 = popen(local_28,"w");
  if (local_20 != (FILE *)0x0) {
    uStack160 = 0x4076cd;
    pclose(local_20);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_66b_badSink(long lParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_66b_goodG2BSink(long lParm1)

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


void CWE78_OS_Command_Injection__char_console_popen_65b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_65b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_12_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_console_system_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_64_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_64b_badSink(&local_18);
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
  uStack128 = 0x407b46;
  CWE78_OS_Command_Injection__char_console_system_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_63_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,99 - local_10);
  }
  CWE78_OS_Command_Injection__char_environment_system_63b_badSink(&local_20);
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
  uStack128 = 0x407c89;
  CWE78_OS_Command_Injection__char_environment_system_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_54e_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_54e_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_popen_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_console_popen_65b_badSink;
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
  
  local_10 = CWE78_OS_Command_Injection__char_console_popen_65b_goodG2BSink;
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
  uStack144 = 0x407e6e;
  CWE78_OS_Command_Injection__char_console_popen_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [12];
  FILE *local_30;
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    local_28 = getenv("ADD");
    if (local_28 != (char *)0x0) {
      strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
    }
    local_c = local_c + 1;
  }
  local_30 = popen((char *)local_18,"w");
  if (local_30 != (FILE *)0x0) {
    pclose(local_30);
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
      uStack144 = 0x407fd1;
      local_20 = popen(local_18,"w");
      if (local_20 != (FILE *)0x0) {
        uStack144 = 0x407fe8;
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


void CWE78_OS_Command_Injection__char_environment_popen_17_good(void)

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


void CWE78_OS_Command_Injection__char_environment_popen_44_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
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
  uStack144 = 0x408182;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_68b_badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_console_popen_68_badData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_68b_goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_console_popen_68_goodG2BData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


char * CWE78_OS_Command_Injection__char_environment_popen_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,99 - sVar1);
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_environment_popen_61b_goodG2BSource(char *pcParm1)

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


char * CWE78_OS_Command_Injection__char_console_system_61b_badSource(char *pcParm1)

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


char * CWE78_OS_Command_Injection__char_console_system_61b_goodG2BSource(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_popen_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_52c_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_52c_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_environment_popen_61b_badSource
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
             CWE78_OS_Command_Injection__char_environment_popen_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_61_good(void)

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


void CWE78_OS_Command_Injection__char_console_system_42_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_console_system_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execlp("sh","sh",&DAT_00426dff,local_10,0);
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
    uStack128 = 0x40880b;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x408862;
  execlp("sh","sh",&DAT_00426dff,local_10,0);
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
  uStack128 = 0x4088f9;
  execlp("sh","sh",&DAT_00426dff,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_environment_execlp_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  char *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_40;
  local_18 = &local_40;
  local_a8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_40 = &local_a8;
  local_20 = local_40;
  local_28 = strlen((char *)local_40);
  local_30 = getenv("ADD");
  if (local_30 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_28),local_30,99 - local_28);
  }
  *local_10 = local_20;
  local_38 = *local_18;
  execlp("sh","sh",&DAT_00426e1e,local_38,0);
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
  execlp("sh","sh",&DAT_00426e1e,local_30,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
    uStack144 = 0x408bde;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x408c20;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x408c37;
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
  uStack144 = 0x408cb9;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x408cd0;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_53_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_53b_badSink(local_10);
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
  uStack128 = 0x408e49;
  CWE78_OS_Command_Injection__char_console_popen_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00426e52,local_10,0);
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
    uStack128 = 0x408f58;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x408faf;
  execl("/bin/sh","/bin/sh",&DAT_00426e52,local_10,0);
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
  uStack128 = 0x409046;
  execl("/bin/sh","/bin/sh",&DAT_00426e52,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execlp("sh","sh",&DAT_00426e80,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409151) */

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
  uStack128 = 0x4091b2;
  execlp("sh","sh",&DAT_00426e80,local_10,0);
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
  uStack128 = 0x409247;
  execlp("sh","sh",&DAT_00426e80,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = local_10;
  local_30 = local_10;
  execlp("sh","sh",&DAT_00426e9f,local_10,0);
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
  uStack144 = 0x4093c1;
  local_18 = local_20;
  local_10 = local_20;
  execlp("sh","sh",&DAT_00426e9f,local_20,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_31_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_environment_execl_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  char *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_40;
  local_18 = &local_40;
  local_a8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_40 = &local_a8;
  local_20 = local_40;
  local_28 = strlen((char *)local_40);
  local_30 = getenv("ADD");
  if (local_30 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_28),local_30,99 - local_28);
  }
  *local_10 = local_20;
  local_38 = *local_18;
  execl("/bin/sh","/bin/sh",&DAT_00426ea9,local_38,0);
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
  execl("/bin/sh","/bin/sh",&DAT_00426ea9,local_30,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
  uStack144 = 0x4096be;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4096d5;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_63_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_63b_badSink(&local_18);
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
  uStack128 = 0x409877;
  CWE78_OS_Command_Injection__char_console_system_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_67b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00426ec9,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_67b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00426ec9,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_67_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_environment_execlp_67b_badSink(local_10);
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
  uStack144 = 0x409a1b;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_environment_execlp_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_06_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409b83) */

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
  uStack144 = 0x409bcf;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x409be6;
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
  uStack144 = 0x409c67;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x409c7e;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_environment_execlp_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  if (CWE78_OS_Command_Injection__char_environment_execlp_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,99 - sVar1);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_environment_execlp_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_environment_execlp_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_environment_execlp_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_environment_execlp_22_goodG2B2Global != 0) {
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


void CWE78_OS_Command_Injection__char_environment_execl_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execl("/bin/sh","/bin/sh",&DAT_00426f28,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409e8e) */

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
  uStack128 = 0x409eef;
  execl("/bin/sh","/bin/sh",&DAT_00426f28,local_10,0);
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
  uStack128 = 0x409f84;
  execl("/bin/sh","/bin/sh",&DAT_00426f28,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = local_10;
  local_30 = local_10;
  execl("/bin/sh","/bin/sh",&DAT_00426f4c,local_10,0);
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
  uStack144 = 0x40a0fe;
  local_18 = local_20;
  local_10 = local_20;
  execl("/bin/sh","/bin/sh",&DAT_00426f4c,local_20,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_31_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,99 - sVar1);
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_environment_system_42_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_environment_system_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_41_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_41_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_41_goodG2BSink(char *pcParm1)

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
  uStack128 = 0x40a451;
  CWE78_OS_Command_Injection__char_console_system_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_52_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_52b_badSink(local_10);
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
  uStack128 = 0x40a5c0;
  CWE78_OS_Command_Injection__char_console_popen_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_51b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_51b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_14_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
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
    uStack128 = 0x40a739;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40a776;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40a784;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40a78e;
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
  uStack128 = 0x40a80b;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40a819;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40a823;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_67_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_environment_execl_67b_badSink(local_10);
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
  uStack144 = 0x40a959;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_environment_execl_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_67_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_environment_system_32_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  char *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_40;
  local_18 = &local_40;
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_40 = &local_a8;
  local_20 = local_40;
  local_28 = strlen((char *)local_40);
  local_30 = getenv("ADD");
  if (local_30 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_28),local_30,99 - local_28);
  }
  *local_10 = local_20;
  local_38 = *local_18;
  iVar1 = system((char *)local_38);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
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


void CWE78_OS_Command_Injection__char_environment_system_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_16_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
  uStack144 = 0x40aca7;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40acbe;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_environment_execlp_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_execlp_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00427015,local_10,0);
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
  CWE78_OS_Command_Injection__char_environment_execlp_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_execlp_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00427015,local_10,0);
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
  CWE78_OS_Command_Injection__char_environment_execlp_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_execlp_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00427015,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_17_bad(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 local_80 [12];
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_88 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_80;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_18 = &local_88;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    if (1 < 100 - local_20) {
      pcVar2 = fgets((char *)(local_20 + (long)local_18),100 - (int)local_20,stdin);
      if (pcVar2 == (char *)0x0) {
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
  iVar1 = system((char *)local_18);
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
      uStack144 = 0x40aff1;
      iVar2 = system(local_18);
      if (iVar2 != 0) {
        uStack144 = 0x40afff;
        printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
        uStack144 = 0x40b009;
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


void CWE78_OS_Command_Injection__char_console_system_17_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_67b_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_67b_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_execl_51_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execl_51b_badSink(local_10);
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
  uStack128 = 0x40b18d;
  CWE78_OS_Command_Injection__char_environment_execl_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_51_good(void)

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


void CWE78_OS_Command_Injection__char_console_popen_44_bad(void)

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
  uStack144 = 0x40b37a;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_09_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
    uStack144 = 0x40b4ec;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x40b52e;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40b545;
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
  uStack144 = 0x40b5c6;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40b5dd;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_05_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
    uStack144 = 0x40b78d;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x40b7cf;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40b7e6;
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
  uStack144 = 0x40b867;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40b87e;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
  uStack144 = 0x40b9c5;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40b9dc;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_41_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_41_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_41_goodG2BSink(char *pcParm1)

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
  uStack128 = 0x40bbb7;
  CWE78_OS_Command_Injection__char_console_popen_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_52_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_system_52b_badSink(local_10);
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
  uStack128 = 0x40bcc7;
  CWE78_OS_Command_Injection__char_environment_system_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_53d_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_53d_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_51b_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_51b_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_console_system_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_system_22_badSource
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
  CWE78_OS_Command_Injection__char_console_system_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_system_22_goodG2B1Source
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
  CWE78_OS_Command_Injection__char_console_system_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_system_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00427110,
        CWE78_OS_Command_Injection__char_environment_execl_45_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_45_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execl_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00427110,
        CWE78_OS_Command_Injection__char_environment_execl_45_goodG2BData,0);
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
  CWE78_OS_Command_Injection__char_environment_execl_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_environment_execl_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_environment_execl_45_goodG2BData + (~uVar3 - 1))
       = 0x2a2e2a;
  uStack128 = 0x40c0a8;
  local_10 = CWE78_OS_Command_Injection__char_environment_execl_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_16_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  iVar1 = system((char *)local_10);
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
  uStack128 = 0x40c1d2;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40c1e0;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40c1ea;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execl("/bin/sh","/bin/sh",&DAT_00427148,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c2ed) */

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
  uStack128 = 0x40c34e;
  execl("/bin/sh","/bin/sh",&DAT_00427148,local_10,0);
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
  uStack128 = 0x40c3e4;
  execl("/bin/sh","/bin/sh",&DAT_00427148,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_64b_badSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_00427168,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_64b_goodG2BSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_00427168,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_34_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  FILE *local_28;
  undefined8 *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_a8;
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
  local_20 = local_10;
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
  uStack160 = 0x40c644;
  local_18 = local_28;
  local_10 = local_28;
  local_20 = popen(local_28,"w");
  if (local_20 != (FILE *)0x0) {
    uStack160 = 0x40c65b;
    pclose(local_20);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_31_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  char *local_20;
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
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = local_10;
  local_30 = local_10;
  iVar1 = system((char *)local_10);
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
  uStack144 = 0x40c7af;
  local_18 = local_20;
  local_10 = local_20;
  iVar2 = system(local_20);
  if (iVar2 != 0) {
    uStack144 = 0x40c7bd;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack144 = 0x40c7c7;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_66b_badSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_66b_goodG2BSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_54e_goodG2BSink(uParm1);
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


void CWE78_OS_Command_Injection__char_environment_popen_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
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
  iVar1 = staticReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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


void CWE78_OS_Command_Injection__char_environment_popen_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_51_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_system_51b_badSink(local_10);
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
  uStack128 = 0x40cbc7;
  CWE78_OS_Command_Injection__char_environment_system_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_13_bad(void)

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
  if (GLOBAL_CONST_FIVE == 5) {
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
    uStack128 = 0x40cd37;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40cd74;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40cd82;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40cd8c;
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
  uStack128 = 0x40ce09;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40ce17;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40ce21;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_13_good(void)

{
  goodG2B1();
  goodG2B2();
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


void CWE78_OS_Command_Injection__char_console_popen_42_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_console_popen_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_64b_badSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0042720d,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_64b_goodG2BSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0042720d,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_67_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_67b_badSink(local_10);
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
  uStack144 = 0x40d25f;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_console_popen_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54e_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54e_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_environment_system_45_badData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_45_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_system_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_environment_system_45_goodG2BData);
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
  CWE78_OS_Command_Injection__char_environment_system_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_environment_system_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_environment_system_45_goodG2BData + (~uVar3 - 1))
       = 0x2a2e2a;
  uStack128 = 0x40d45f;
  local_10 = CWE78_OS_Command_Injection__char_environment_system_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_06_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x0040d560) */

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
  uStack128 = 0x40d5a7;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x40d5b5;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x40d5bf;
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
  uStack128 = 0x40d63b;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x40d649;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x40d653;
  exit(1);
}


void CWE78_OS_Command_Injection__char_environment_system_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_54c_goodG2BSink(uParm1);
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


void CWE78_OS_Command_Injection__char_console_system_21_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_console_system_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_03_bad(void)

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
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
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
  uStack128 = 0x40daf9;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40db07;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40db11;
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
  uStack128 = 0x40db83;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40db91;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40db9b;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_68_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_68_badData = local_10;
  CWE78_OS_Command_Injection__char_console_popen_68b_badSink();
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
  CWE78_OS_Command_Injection__char_console_popen_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_console_popen_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_console_popen_68_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x40dd26;
  local_10 = CWE78_OS_Command_Injection__char_console_popen_68_goodG2BData;
  CWE78_OS_Command_Injection__char_console_popen_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
    uStack144 = 0x40de41;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x40de83;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40de9a;
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
  uStack144 = 0x40df1b;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40df32;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_66b_badSink(long lParm1)

{
  execlp("sh","sh",&DAT_00427310,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_66b_goodG2BSink(long lParm1)

{
  execlp("sh","sh",&DAT_00427310,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_18_bad(void)

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
  iVar1 = system((char *)local_10);
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
  uStack128 = 0x40e145;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40e153;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40e15d;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_64_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,99 - local_10);
  }
  CWE78_OS_Command_Injection__char_environment_execl_64b_badSink(&local_20);
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
  uStack128 = 0x40e26c;
  CWE78_OS_Command_Injection__char_environment_execl_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_54_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execl_54b_badSink(local_10);
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
  uStack128 = 0x40e37c;
  CWE78_OS_Command_Injection__char_environment_execl_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_54_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_popen_54b_badSink(local_10);
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
  uStack128 = 0x40e48c;
  CWE78_OS_Command_Injection__char_environment_popen_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_64b_badSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_64b_goodG2BSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_environment_popen_65b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_65b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_34_bad(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  undefined8 *local_20;
  size_t local_18;
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
  local_28 = local_10;
  local_20 = local_10;
  iVar1 = system((char *)local_10);
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
  uStack160 = 0x40e775;
  local_18 = local_28;
  local_10 = local_28;
  iVar2 = system(local_28);
  if (iVar2 != 0) {
    uStack160 = 0x40e783;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack160 = 0x40e78d;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_53_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execlp_53b_badSink(local_10);
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
  uStack128 = 0x40e89d;
  CWE78_OS_Command_Injection__char_environment_execlp_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execlp("sh","sh",&DAT_00427398,local_10,0);
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
    uStack128 = 0x40e9aa;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x40ea01;
  execlp("sh","sh",&DAT_00427398,local_10,0);
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
  uStack128 = 0x40ea97;
  execlp("sh","sh",&DAT_00427398,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_02_bad(void)

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
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
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
  uStack128 = 0x40ec28;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40ec36;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40ec40;
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
  uStack128 = 0x40ecb2;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40ecc0;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40ecca;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_10_bad(void)

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
  if (globalTrue != 0) {
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
    uStack128 = 0x40ee76;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40eeb3;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40eec1;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40eecb;
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
  uStack128 = 0x40ef47;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40ef55;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40ef5f;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_65_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_environment_popen_65b_badSink;
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
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
  
  local_10 = CWE78_OS_Command_Injection__char_environment_popen_65b_goodG2BSink;
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
  uStack144 = 0x40f097;
  CWE78_OS_Command_Injection__char_environment_popen_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_63b_badSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_0042741e,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_63b_goodG2BSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_0042741e,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_01_bad(void)

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
  iVar1 = system((char *)local_10);
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
  uStack128 = 0x40f2d0;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40f2de;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40f2e8;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_53d_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_53d_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_popen_68b_badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_environment_popen_68_badData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_68b_goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_environment_popen_68_goodG2BData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_63_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,99 - local_10);
  }
  CWE78_OS_Command_Injection__char_environment_execlp_63b_badSink(&local_20);
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
  uStack128 = 0x40f4d5;
  CWE78_OS_Command_Injection__char_environment_execlp_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_63b_badSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0042746d,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_63b_goodG2BSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0042746d,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_09_bad(void)

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
  if (GLOBAL_CONST_TRUE != 0) {
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
    uStack128 = 0x40f6c1;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40f6fe;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40f70c;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40f716;
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
  uStack128 = 0x40f792;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40f7a0;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40f7aa;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_67b_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_67b_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_popen_52c_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_52c_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_14_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
    uStack144 = 0x40fa3c;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x40fa7e;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40fa95;
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
  uStack144 = 0x40fb17;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40fb2e;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_68_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_popen_68_badData = local_10;
  CWE78_OS_Command_Injection__char_environment_popen_68b_badSink();
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
  CWE78_OS_Command_Injection__char_environment_popen_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_environment_popen_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_environment_popen_68_goodG2BData + (~uVar3 - 1))
       = 0x2a2e2a;
  uStack128 = 0x40fc5a;
  local_10 = CWE78_OS_Command_Injection__char_environment_popen_68_goodG2BData;
  CWE78_OS_Command_Injection__char_environment_popen_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_68_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_console_popen_32_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  FILE *local_38;
  undefined8 *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_40;
  local_18 = &local_40;
  local_a8 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_40 = &local_a8;
  local_20 = local_40;
  local_28 = strlen((char *)local_40);
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
  local_38 = popen((char *)local_30,"w");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
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


void CWE78_OS_Command_Injection__char_console_popen_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_63_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,99 - local_10);
  }
  CWE78_OS_Command_Injection__char_environment_execl_63b_badSink(&local_20);
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
  uStack128 = 0x40ff8a;
  CWE78_OS_Command_Injection__char_environment_execl_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_67b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_67b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_53_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_popen_53b_badSink(local_10);
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
  uStack128 = 0x41014a;
  CWE78_OS_Command_Injection__char_environment_popen_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execlp("sh","sh",&DAT_0042751b,local_10,0);
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
  uStack128 = 0x41028e;
  execlp("sh","sh",&DAT_0042751b,local_10,0);
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
  uStack128 = 0x41031a;
  execlp("sh","sh",&DAT_0042751b,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    local_28 = getenv("ADD");
    if (local_28 != (char *)0x0) {
      strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
    }
    local_c = local_c + 1;
  }
  execlp("sh","sh",&DAT_00427525,local_18,0);
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
      uStack144 = 0x41049a;
      execlp("sh","sh",&DAT_00427525,local_18,0);
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


void CWE78_OS_Command_Injection__char_environment_execlp_17_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_63b_badSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_63b_goodG2BSink(char **ppcParm1)

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
  execlp("sh","sh",&DAT_00427545,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_44_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00427545,uParm1,0);
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
  uStack144 = 0x4106aa;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_31_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [12];
  FILE *local_30;
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
  local_30 = popen((char *)local_10,"w");
  if (local_30 != (FILE *)0x0) {
    pclose(local_30);
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
  uStack160 = 0x410872;
  local_18 = local_20;
  local_10 = local_20;
  local_28 = popen(local_20,"w");
  if (local_28 != (FILE *)0x0) {
    uStack160 = 0x410889;
    pclose(local_28);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_54_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_54b_badSink(local_10);
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
  uStack128 = 0x4109f8;
  CWE78_OS_Command_Injection__char_console_system_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    local_28 = getenv("ADD");
    if (local_28 != (char *)0x0) {
      strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
    }
    local_c = local_c + 1;
  }
  execl("/bin/sh","/bin/sh",&DAT_00427573,local_18,0);
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
      uStack144 = 0x410b6e;
      execl("/bin/sh","/bin/sh",&DAT_00427573,local_18,0);
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


void CWE78_OS_Command_Injection__char_environment_execl_17_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_console_popen_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  if (CWE78_OS_Command_Injection__char_console_popen_22_badGlobal != 0) {
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


char * CWE78_OS_Command_Injection__char_console_popen_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_console_popen_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_console_popen_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_console_popen_22_goodG2B2Global != 0) {
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


void badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_004275a2,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_44_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_004275a2,uParm1,0);
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
  uStack144 = 0x410e6c;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_68_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_68_badData = local_10;
  CWE78_OS_Command_Injection__char_console_system_68b_badSink();
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
  CWE78_OS_Command_Injection__char_console_system_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_console_system_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_console_system_68_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x410fed;
  local_10 = CWE78_OS_Command_Injection__char_console_system_68_goodG2BData;
  CWE78_OS_Command_Injection__char_console_system_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_68_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_environment_execl_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,99 - sVar1);
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_environment_execl_61b_goodG2BSource(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_53d_goodG2BSink(uParm1);
  return;
}


char * CWE78_OS_Command_Injection__char_console_system_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *pcVar2;
  
  if (CWE78_OS_Command_Injection__char_console_system_22_badGlobal != 0) {
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


char * CWE78_OS_Command_Injection__char_console_system_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_console_system_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_console_system_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_console_system_22_goodG2B2Global != 0) {
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


void CWE78_OS_Command_Injection__char_environment_popen_52_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_popen_52b_badSink(local_10);
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
  uStack128 = 0x411333;
  CWE78_OS_Command_Injection__char_environment_popen_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_51b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_51b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_11_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_console_system_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_console_popen_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_popen_22_badSource
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
  CWE78_OS_Command_Injection__char_console_popen_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_popen_22_goodG2B1Source
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
  CWE78_OS_Command_Injection__char_console_popen_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_console_popen_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execlp("sh","sh",&DAT_00427632,local_10,0);
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
    uStack128 = 0x4118a0;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4118f7;
  execlp("sh","sh",&DAT_00427632,local_10,0);
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
  uStack128 = 0x41198e;
  execlp("sh","sh",&DAT_00427632,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_66b_badSink(long lParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0042764d,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_66b_goodG2BSink(long lParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0042764d,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_console_system_65b_badSink;
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
  
  local_10 = CWE78_OS_Command_Injection__char_console_system_65b_goodG2BSink;
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
  uStack144 = 0x411b99;
  CWE78_OS_Command_Injection__char_console_system_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_17_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_98;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    local_28 = getenv("ADD");
    if (local_28 != (char *)0x0) {
      strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
    }
    local_c = local_c + 1;
  }
  iVar1 = system((char *)local_18);
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
      uStack144 = 0x411cf3;
      iVar2 = system(local_18);
      if (iVar2 != 0) {
        uStack144 = 0x411d01;
        printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
        uStack144 = 0x411d0b;
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


void CWE78_OS_Command_Injection__char_environment_system_17_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_54e_goodG2BSink(uParm1);
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


void CWE78_OS_Command_Injection__char_environment_system_44_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
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
  uStack144 = 0x411ed1;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_64_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,99 - local_10);
  }
  CWE78_OS_Command_Injection__char_environment_system_64b_badSink(&local_20);
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
  uStack128 = 0x411fe0;
  CWE78_OS_Command_Injection__char_environment_system_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_53d_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_53d_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_52_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execlp_52b_badSink(local_10);
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
  uStack128 = 0x41215c;
  CWE78_OS_Command_Injection__char_environment_execlp_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_51_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_popen_51b_badSink(local_10);
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
  uStack128 = 0x41226c;
  CWE78_OS_Command_Injection__char_environment_popen_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_68b_badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_console_system_68_badData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_68b_goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_console_system_68_goodG2BData);
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


void CWE78_OS_Command_Injection__char_console_system_08_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_console_system_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_environment_system_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,99 - sVar1);
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_environment_system_61b_goodG2BSource(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_popen_41_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_41_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_popen_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_41_goodG2BSink(char *pcParm1)

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
  uStack128 = 0x412777;
  CWE78_OS_Command_Injection__char_environment_popen_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_41_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_environment_popen_45_badData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_45_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_popen_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_environment_popen_45_goodG2BData,"w");
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
  CWE78_OS_Command_Injection__char_environment_popen_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_environment_popen_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_environment_popen_45_goodG2BData + (~uVar3 - 1))
       = 0x2a2e2a;
  uStack128 = 0x412913;
  local_10 = CWE78_OS_Command_Injection__char_environment_popen_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execlp("sh","sh",&DAT_0042771d,local_10,0);
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
    uStack128 = 0x412a22;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x412a79;
  execlp("sh","sh",&DAT_0042771d,local_10,0);
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
  uStack128 = 0x412b10;
  execlp("sh","sh",&DAT_0042771d,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412c2b) */

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
  uStack144 = 0x412c77;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x412c8e;
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
  uStack144 = 0x412d0f;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x412d26;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_06_good(void)

{
  goodG2B1();
  goodG2B2();
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


void CWE78_OS_Command_Injection__char_console_popen_21_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_console_popen_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_03_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
  uStack144 = 0x4131ad;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4131c4;
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
  uStack144 = 0x41323b;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x413252;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_02_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
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
  uStack128 = 0x413384;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x413392;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41339c;
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
  uStack128 = 0x41340e;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x41341c;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x413426;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_18_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
  uStack144 = 0x4135c2;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4135d9;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_16_bad(void)

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
  iVar1 = system((char *)local_10);
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
  uStack128 = 0x413764;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x413772;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41377c;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_07_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
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
    uStack128 = 0x413889;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x4138c6;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4138d4;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4138de;
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
  uStack128 = 0x41395b;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x413969;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x413973;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_64b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_64b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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


void CWE78_OS_Command_Injection__char_console_popen_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_64_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  char *local_18;
  size_t local_10;
  
  local_88 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  local_18 = getenv("ADD");
  if (local_18 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_10),local_18,99 - local_10);
  }
  CWE78_OS_Command_Injection__char_environment_popen_64b_badSink(&local_20);
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
  uStack128 = 0x413d7d;
  CWE78_OS_Command_Injection__char_environment_popen_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_63b_badSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_63b_goodG2BSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_console_popen_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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


void CWE78_OS_Command_Injection__char_console_popen_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_02_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
  uStack144 = 0x414200;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x414217;
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
  uStack144 = 0x41428e;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4142a5;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_52c_goodG2BSink(uParm1);
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,99 - sVar1);
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_environment_execlp_42_bad(undefined8 uParm1,undefined8 uParm2)

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
  execlp("sh","sh",&DAT_00427885,local_10,0);
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
  execlp("sh","sh",&DAT_00427885,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_10_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
    uStack144 = 0x4145d9;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x41461b;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x414632;
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
  uStack144 = 0x4146b3;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4146ca;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_environment_execl_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_004278b1,local_10,0);
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
             CWE78_OS_Command_Injection__char_environment_execl_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_004278b1,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_popen_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_01_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
  uStack144 = 0x414982;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x414999;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_52_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_52b_badSink(local_10);
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
  uStack128 = 0x414b08;
  CWE78_OS_Command_Injection__char_console_system_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execl("/bin/sh","/bin/sh",&DAT_004278e0,local_10,0);
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
  uStack128 = 0x414c4e;
  execl("/bin/sh","/bin/sh",&DAT_004278e0,local_10,0);
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
  uStack128 = 0x414cdb;
  execl("/bin/sh","/bin/sh",&DAT_004278e0,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_51b_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_51b_goodG2BSink(char *pcParm1)

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
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,99 - sVar1);
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_environment_execl_42_bad(undefined8 uParm1,undefined8 uParm2)

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
  execl("/bin/sh","/bin/sh",&DAT_00427909,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_00427909,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_51b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00427914,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_51b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00427914,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_67b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0042791f,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_67b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0042791f,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_a8;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_38 = local_10;
  local_28 = local_10;
  execlp("sh","sh",&DAT_00427929,local_10,0);
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
  uStack160 = 0x415129;
  local_18 = local_28;
  local_10 = local_28;
  execlp("sh","sh",&DAT_00427929,local_28,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_34_good(void)

{
  goodG2B();
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


void CWE78_OS_Command_Injection__char_console_popen_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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


void CWE78_OS_Command_Injection__char_console_popen_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_51_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_51b_badSink(local_10);
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
  uStack128 = 0x41555b;
  CWE78_OS_Command_Injection__char_console_system_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_52_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execl_52b_badSink(local_10);
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
  uStack128 = 0x41566b;
  CWE78_OS_Command_Injection__char_environment_execl_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0042796c,local_10,0);
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
    uStack128 = 0x415778;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4157cf;
  execl("/bin/sh","/bin/sh",&DAT_0042796c,local_10,0);
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
  uStack128 = 0x415865;
  execl("/bin/sh","/bin/sh",&DAT_0042796c,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_41_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0042798c,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_41_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execl_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_41_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0042798c,uParm1,0);
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
  uStack128 = 0x4159e7;
  CWE78_OS_Command_Injection__char_environment_execl_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_64_bad(void)

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
  CWE78_OS_Command_Injection__char_console_popen_64b_badSink(&local_18);
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
  uStack128 = 0x415b55;
  CWE78_OS_Command_Injection__char_console_popen_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_13_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
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
    uStack128 = 0x415c62;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x415c9f;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x415cad;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x415cb7;
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
  uStack128 = 0x415d34;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x415d42;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x415d4c;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_53d_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004279dd,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_53d_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_004279dd,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  iVar1 = globalReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execlp("sh","sh",&DAT_004279e7,local_10,0);
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
  execlp("sh","sh",&DAT_004279e7,local_10,0);
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
  execlp("sh","sh",&DAT_004279e7,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00427a06,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_00427a06,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_65b_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_65b_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_popen_54e_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_54e_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_66_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_b8;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_environment_popen_66b_badSink(local_48);
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
  uStack176 = 0x41639a;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_environment_popen_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execlp("sh","sh",&DAT_00427a35,local_10,0);
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
    uStack128 = 0x4164a7;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4164fe;
  execlp("sh","sh",&DAT_00427a35,local_10,0);
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
  uStack128 = 0x416594;
  execlp("sh","sh",&DAT_00427a35,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,99 - sVar1);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_environment_system_21_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_environment_system_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_03_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
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
  uStack128 = 0x416944;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x416952;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41695c;
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
  uStack128 = 0x4169ce;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4169dc;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4169e6;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_environment_execlp_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  sVar1 = strlen(pcParm1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat(pcParm1 + sVar1,__src,99 - sVar1);
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_environment_execlp_61b_goodG2BSource(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_execlp_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execlp("sh","sh",&DAT_00427aa9,local_10,0);
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
  uStack128 = 0x416c02;
  execlp("sh","sh",&DAT_00427aa9,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_18_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  iVar1 = system((char *)local_10);
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
  uStack128 = 0x416d2c;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x416d3a;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x416d44;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  iVar1 = globalReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00427ad1,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_00427ad1,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_00427ad1,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execl("/bin/sh","/bin/sh",&DAT_00427af5,local_10,0);
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
  uStack128 = 0x417098;
  execl("/bin/sh","/bin/sh",&DAT_00427af5,local_10,0);
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
  uStack128 = 0x417124;
  execl("/bin/sh","/bin/sh",&DAT_00427af5,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00427b04,local_10,0);
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
    uStack128 = 0x41723b;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x417292;
  execl("/bin/sh","/bin/sh",&DAT_00427b04,local_10,0);
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
  uStack128 = 0x417328;
  execl("/bin/sh","/bin/sh",&DAT_00427b04,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
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


void CWE78_OS_Command_Injection__char_environment_system_12_good(void)

{
  goodG2B();
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


void CWE78_OS_Command_Injection__char_environment_execlp_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  iVar1 = staticReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execlp("sh","sh",&DAT_00427b46,local_10,0);
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
  execlp("sh","sh",&DAT_00427b46,local_10,0);
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
  execlp("sh","sh",&DAT_00427b46,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execl("/bin/sh","/bin/sh",&DAT_00427b65,local_10,0);
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
  uStack128 = 0x41785c;
  execl("/bin/sh","/bin/sh",&DAT_00427b65,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_53d_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00427b70,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_53d_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00427b70,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_54_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_system_54b_badSink(local_10);
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
  uStack128 = 0x4179d4;
  CWE78_OS_Command_Injection__char_environment_system_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_15_bad(void)

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
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
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
  uStack128 = 0x417b5f;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x417b6d;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x417b77;
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
  uStack128 = 0x417bea;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x417bf8;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x417c02;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_15_good(void)

{
  goodG2B1();
  goodG2B2();
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


void CWE78_OS_Command_Injection__char_environment_system_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  iVar1 = staticReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
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


void CWE78_OS_Command_Injection__char_environment_system_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_06_bad(void)

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
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x00417f90) */

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
  uStack128 = 0x417fd7;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x417fe5;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x417fef;
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
  uStack128 = 0x41806b;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x418079;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x418083;
  exit(1);
}


void CWE78_OS_Command_Injection__char_console_system_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  iVar1 = globalReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
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


void CWE78_OS_Command_Injection__char_environment_system_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_console_system_45_badData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_45_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_console_system_45_goodG2BData);
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
  CWE78_OS_Command_Injection__char_console_system_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_console_system_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_console_system_45_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x41848a;
  local_10 = CWE78_OS_Command_Injection__char_console_system_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_63b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_63b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_00427c80,local_10,0);
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
    uStack128 = 0x41864d;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4186a4;
  execl("/bin/sh","/bin/sh",&DAT_00427c80,local_10,0);
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
  uStack128 = 0x41873a;
  execl("/bin/sh","/bin/sh",&DAT_00427c80,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_environment_execlp_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00427ca0,local_10,0);
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
             CWE78_OS_Command_Injection__char_environment_execlp_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_00427ca0,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_05_bad(void)

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
  if (staticTrue != 0) {
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
    uStack128 = 0x4189d0;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x418a0d;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x418a1b;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x418a25;
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
  uStack128 = 0x418aa1;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x418aaf;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x418ab9;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_01_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  iVar1 = system((char *)local_10);
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
  uStack128 = 0x418beb;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x418bf9;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x418c03;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_53d_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_53d_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_execlp_54_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execlp_54b_badSink(local_10);
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
  uStack128 = 0x418d77;
  CWE78_OS_Command_Injection__char_environment_execlp_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_41_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00427d20,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_41_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execlp_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_41_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00427d20,uParm1,0);
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
  uStack128 = 0x418f23;
  CWE78_OS_Command_Injection__char_environment_execlp_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_09_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
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
    uStack128 = 0x41902e;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x41906b;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x419079;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x419083;
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
  uStack128 = 0x4190ff;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x41910d;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x419117;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_65b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00427d5d,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_65b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00427d5d,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_52c_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_52c_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_popen_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
    uStack144 = 0x41933e;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x419380;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x419397;
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
  uStack144 = 0x419419;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x419430;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_53d_goodG2BSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_environment_popen_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined8 *local_48;
  FILE *local_40;
  undefined8 *local_38;
  char *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_48;
  local_18 = &local_48;
  local_b8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_48 = &local_b8;
  local_20 = local_48;
  local_28 = strlen((char *)local_48);
  local_30 = getenv("ADD");
  if (local_30 != (char *)0x0) {
    strncat((char *)((long)local_20 + local_28),local_30,99 - local_28);
  }
  *local_10 = local_20;
  local_38 = *local_18;
  local_40 = popen((char *)local_38,"w");
  if (local_40 != (FILE *)0x0) {
    pclose(local_40);
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


void CWE78_OS_Command_Injection__char_environment_popen_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_54e_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_54e_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_system_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_console_system_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_66_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_66b_badSink(local_48);
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
  uStack176 = 0x41985f;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_console_system_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_17_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  int local_c;
  
  local_98 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_18 = &local_98;
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
  local_28 = popen((char *)local_18,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
      uStack144 = 0x419a28;
      local_20 = popen(local_18,"w");
      if (local_20 != (FILE *)0x0) {
        uStack144 = 0x419a3f;
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


void CWE78_OS_Command_Injection__char_console_popen_17_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_52c_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00427dd8,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_52c_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00427dd8,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_67b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_67b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_65_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_environment_execlp_65b_badSink;
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
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
  
  local_10 = CWE78_OS_Command_Injection__char_environment_execlp_65b_goodG2BSink;
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
  uStack144 = 0x419c51;
  CWE78_OS_Command_Injection__char_environment_execlp_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_65b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00427de9,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_65b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_00427de9,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_a8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_a8;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = local_10;
  local_30 = local_10;
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
  uStack160 = 0x419e22;
  local_18 = local_20;
  local_10 = local_20;
  local_28 = popen(local_20,"w");
  if (local_28 != (FILE *)0x0) {
    uStack160 = 0x419e39;
    pclose(local_28);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419f48) */

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
  uStack144 = 0x419f94;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x419fab;
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
  uStack144 = 0x41a02b;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41a042;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_console_popen_61b_badSource(char *pcParm1)

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


char * CWE78_OS_Command_Injection__char_console_popen_61b_goodG2BSource(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_execlp_68b_badSink(void)

{
  execlp("sh","sh",&DAT_00427e2e,CWE78_OS_Command_Injection__char_environment_execlp_68_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_68b_goodG2BSink(void)

{
  execlp("sh","sh",&DAT_00427e2e,CWE78_OS_Command_Injection__char_environment_execlp_68_goodG2BData,
         0);
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_04_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a321) */

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
  uStack144 = 0x41a36d;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41a384;
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
  uStack144 = 0x41a404;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41a41b;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_66b_badSink(long lParm1)

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


void CWE78_OS_Command_Injection__char_console_system_66b_goodG2BSink(long lParm1)

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


void CWE78_OS_Command_Injection__char_environment_popen_67_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_environment_popen_67b_badSink(local_10);
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
  uStack144 = 0x41a5cd;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_environment_popen_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_14_bad(void)

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
  if (globalFive == 5) {
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
    uStack128 = 0x41a73d;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x41a77a;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x41a788;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41a792;
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
  uStack128 = 0x41a80f;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x41a81d;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41a827;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_65_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_environment_execl_65b_badSink;
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
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
  
  local_10 = CWE78_OS_Command_Injection__char_environment_execl_65b_goodG2BSink;
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
  uStack144 = 0x41a95f;
  CWE78_OS_Command_Injection__char_environment_execl_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execl_53c_goodG2BSink(uParm1);
  return;
}


char * CWE78_OS_Command_Injection__char_environment_popen_22_badSource(char *pcParm1)

{
  size_t sVar1;
  char *__src;
  
  if (CWE78_OS_Command_Injection__char_environment_popen_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,99 - sVar1);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_environment_popen_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_environment_popen_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_environment_popen_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_environment_popen_22_goodG2B2Global != 0) {
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


void CWE78_OS_Command_Injection__char_environment_execlp_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_65b_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_65b_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_console_popen_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_console_popen_61b_badSource
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
             CWE78_OS_Command_Injection__char_console_popen_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_52c_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00427ef7,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_52c_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00427ef7,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_68b_badSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00427efd,
        CWE78_OS_Command_Injection__char_environment_execl_68_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_68b_goodG2BSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_00427efd,
        CWE78_OS_Command_Injection__char_environment_execl_68_goodG2BData,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_68_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execlp_68_badData = local_10;
  CWE78_OS_Command_Injection__char_environment_execlp_68b_badSink();
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
  CWE78_OS_Command_Injection__char_environment_execlp_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_environment_execlp_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_environment_execlp_68_goodG2BData + (~uVar3 - 1))
       = 0x2a2e2a;
  uStack128 = 0x41ae1e;
  local_10 = CWE78_OS_Command_Injection__char_environment_execlp_68_goodG2BData;
  CWE78_OS_Command_Injection__char_environment_execlp_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_13_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
    uStack144 = 0x41af92;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x41afd4;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41afeb;
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
  uStack144 = 0x41b06d;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41b084;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_07_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
    uStack144 = 0x41b202;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x41b244;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41b25b;
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
  uStack144 = 0x41b2dd;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41b2f4;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_53_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_53b_badSink(local_10);
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
  uStack128 = 0x41b4a1;
  CWE78_OS_Command_Injection__char_console_system_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_environment_popen_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_popen_22_badSource
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
  CWE78_OS_Command_Injection__char_environment_popen_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_popen_22_goodG2B1Source
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
  CWE78_OS_Command_Injection__char_environment_popen_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_environment_popen_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_65_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  char *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_environment_system_65b_badSink;
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_98;
  local_20 = strlen((char *)local_18);
  local_28 = getenv("ADD");
  if (local_28 != (char *)0x0) {
    strncat((char *)((long)local_18 + local_20),local_28,99 - local_20);
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
  
  local_10 = CWE78_OS_Command_Injection__char_environment_system_65b_goodG2BSink;
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
  uStack144 = 0x41b754;
  CWE78_OS_Command_Injection__char_environment_system_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_popen_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_68_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execl_68_badData = local_10;
  CWE78_OS_Command_Injection__char_environment_execl_68b_badSink();
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
  CWE78_OS_Command_Injection__char_environment_execl_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_environment_execl_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_environment_execl_68_goodG2BData + (~uVar3 - 1))
       = 0x2a2e2a;
  uStack128 = 0x41b8aa;
  local_10 = CWE78_OS_Command_Injection__char_environment_execl_68_goodG2BData;
  CWE78_OS_Command_Injection__char_environment_execl_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
    uStack144 = 0x41b9c7;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x41ba09;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41ba20;
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
  uStack144 = 0x41baa2;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41bab9;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_68b_badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_environment_system_68_badData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_68b_goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_environment_system_68_goodG2BData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_10_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
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
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
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
    uStack128 = 0x41bc40;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x41bc7d;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x41bc8b;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41bc95;
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
  uStack128 = 0x41bd11;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x41bd1f;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41bd29;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_53_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execl_53b_badSink(local_10);
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
  uStack128 = 0x41be43;
  CWE78_OS_Command_Injection__char_environment_execl_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_execlp_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execlp("sh","sh",&DAT_00427fe8,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041bf7a) */

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
  uStack128 = 0x41bfdb;
  execlp("sh","sh",&DAT_00427fe8,local_10,0);
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
  uStack128 = 0x41c071;
  execlp("sh","sh",&DAT_00427fe8,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_52c_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_environment_system_52c_goodG2BSink(char *pcParm1)

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
  size_t sVar1;
  char *__src;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    __src = getenv("ADD");
    if (__src != (char *)0x0) {
      strncat(pcParm1 + sVar1,__src,99 - sVar1);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_environment_popen_21_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_environment_popen_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
  uStack144 = 0x41c4da;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41c4f1;
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
  uStack144 = 0x41c568;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41c57f;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_68_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_system_68_badData = local_10;
  CWE78_OS_Command_Injection__char_environment_system_68b_badSink();
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
  CWE78_OS_Command_Injection__char_environment_system_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_environment_system_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_environment_system_68_goodG2BData + (~uVar3 - 1))
       = 0x2a2e2a;
  uStack128 = 0x41c6ab;
  local_10 = CWE78_OS_Command_Injection__char_environment_system_68_goodG2BData;
  CWE78_OS_Command_Injection__char_environment_system_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_68_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_console_system_32_bad(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
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
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_38 = &local_a8;
  local_20 = local_38;
  local_28 = strlen((char *)local_38);
  if (1 < 100 - local_28) {
    pcVar2 = fgets((char *)(local_28 + (long)local_20),100 - (int)local_28,stdin);
    if (pcVar2 == (char *)0x0) {
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
  iVar1 = system((char *)local_30);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
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


void CWE78_OS_Command_Injection__char_console_system_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
  uStack144 = 0x41ca03;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41ca1a;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_51b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00428071,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_51b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_00428071,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execlp("sh","sh",&DAT_0042807b,local_10,0);
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
  uStack128 = 0x41cbc8;
  execlp("sh","sh",&DAT_0042807b,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_53_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_system_53b_badSink(local_10);
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
  uStack128 = 0x41ccd8;
  CWE78_OS_Command_Injection__char_environment_system_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  bVar6 = 0;
  local_98 = 0x20736c;
  lVar3 = 0xb;
  puVar5 = local_90;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_10 = &local_98;
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
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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


void CWE78_OS_Command_Injection__char_environment_popen_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_04_bad(void)

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
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x0041d00e) */

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
  uStack128 = 0x41d055;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x41d063;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x41d06d;
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
  uStack128 = 0x41d0e8;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x41d0f6;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x41d100;
  exit(1);
}


void CWE78_OS_Command_Injection__char_console_system_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_31_bad(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  undefined8 *local_20;
  size_t local_18;
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
  local_20 = local_10;
  local_28 = local_10;
  iVar1 = system((char *)local_10);
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
  uStack144 = 0x41d2bd;
  local_18 = local_20;
  local_10 = local_20;
  iVar2 = system(local_20);
  if (iVar2 != 0) {
    uStack144 = 0x41d2cb;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack144 = 0x41d2d5;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_system_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_51_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execlp_51b_badSink(local_10);
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
  uStack128 = 0x41d3e5;
  CWE78_OS_Command_Injection__char_environment_execlp_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_15_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
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
  local_20 = popen((char *)local_10,"w");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
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
  uStack144 = 0x41d579;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41d590;
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
  uStack144 = 0x41d608;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41d61f;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_console_popen_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  execl("/bin/sh","/bin/sh",&DAT_00428114,local_10,0);
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
  uStack128 = 0x41d76f;
  execl("/bin/sh","/bin/sh",&DAT_00428114,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execl_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_console_system_67_bad(void)

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
  CWE78_OS_Command_Injection__char_console_system_67b_badSink(local_10);
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
  uStack144 = 0x41d8fa;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_console_system_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_console_system_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
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
  iVar1 = globalReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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


void CWE78_OS_Command_Injection__char_environment_popen_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
  uStack144 = 0x41dc59;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41dc70;
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
  uStack144 = 0x41dce7;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41dcfe;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_environment_system_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_66_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_b8 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_b8;
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_environment_system_66b_badSink(local_48);
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
  uStack176 = 0x41de74;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_environment_system_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_environment_system_66_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  execlp("sh","sh",&DAT_00428153,CWE78_OS_Command_Injection__char_environment_execlp_45_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_45_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  char *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  local_20 = getenv("ADD");
  if (local_20 != (char *)0x0) {
    strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
  }
  CWE78_OS_Command_Injection__char_environment_execlp_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  execlp("sh","sh",&DAT_00428153,CWE78_OS_Command_Injection__char_environment_execlp_45_goodG2BData,
         0);
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
  CWE78_OS_Command_Injection__char_environment_execlp_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_environment_execlp_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_environment_execlp_45_goodG2BData + (~uVar3 - 1))
       = 0x2a2e2a;
  uStack128 = 0x41e00c;
  local_10 = CWE78_OS_Command_Injection__char_environment_execlp_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_environment_execlp_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  char *local_20;
  size_t local_18;
  undefined8 *local_10;
  
  local_98 = 0x20736c;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_98;
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    local_20 = getenv("ADD");
    if (local_20 != (char *)0x0) {
      strncat((char *)((long)local_10 + local_18),local_20,99 - local_18);
    }
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
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
    uStack144 = 0x41e127;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x41e169;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41e180;
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
  uStack144 = 0x41e201;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41e218;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_environment_popen_10_good(void)

{
  goodG2B1();
  goodG2B2();
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
  printf((char *)(double)fParm1,&DAT_00428195);
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
  printf(pcParm1,&DAT_004281b2);
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
    __isoc99_sscanf(lVar1,&DAT_004281c0,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_004281c8,&local_14);
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

