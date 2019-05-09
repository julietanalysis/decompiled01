
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00624ff8;
  if (PTR___gmon_start___00624ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400b00(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00625010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00625018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00625020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00625028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00625030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execl_00625038)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00625040)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00625048)();
  return pFVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00625050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00625058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int execlp(char *__file,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execlp_00625060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00625068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00625070)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00625078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00625080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00625088)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00625090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pclose_00625098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_006250a0)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_006250a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_006250b0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_006250b8)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006250c0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006250c8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_006250d0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006250d8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006250e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006250e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_popen_006250f0)();
  return pFVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006250f8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00625100)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00624ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400d47) */
/* WARNING: Removing unreachable block (ram,0x00400d51) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400d84) */
/* WARNING: Removing unreachable block (ram,0x00400d8e) */

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


/* WARNING: Removing unreachable block (ram,0x00400dd4) */
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
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_09_good();");
  CWE78_OS_Command_Injection__char_file_popen_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_34_good();");
  CWE78_OS_Command_Injection__char_file_execlp_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_54_good();");
  CWE78_OS_Command_Injection__char_file_execl_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_61_good();");
  CWE78_OS_Command_Injection__char_file_execl_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_52_good();");
  CWE78_OS_Command_Injection__char_file_execlp_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_06_good();");
  CWE78_OS_Command_Injection__char_file_execlp_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_32_good();");
  CWE78_OS_Command_Injection__char_file_system_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_06_good();");
  CWE78_OS_Command_Injection__char_file_system_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_66_good();");
  CWE78_OS_Command_Injection__char_file_execl_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_05_good();");
  CWE78_OS_Command_Injection__char_file_popen_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_05_good();");
  CWE78_OS_Command_Injection__char_file_execl_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_16_good();");
  CWE78_OS_Command_Injection__char_file_popen_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_44_good();");
  CWE78_OS_Command_Injection__char_file_execl_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_18_good();");
  CWE78_OS_Command_Injection__char_file_system_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_45_good();");
  CWE78_OS_Command_Injection__char_file_popen_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_13_good();");
  CWE78_OS_Command_Injection__char_file_execl_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_42_good();");
  CWE78_OS_Command_Injection__char_file_system_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_45_good();");
  CWE78_OS_Command_Injection__char_file_system_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_13_good();");
  CWE78_OS_Command_Injection__char_file_execlp_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_13_good();");
  CWE78_OS_Command_Injection__char_file_system_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_11_good();");
  CWE78_OS_Command_Injection__char_file_execl_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_34_good();");
  CWE78_OS_Command_Injection__char_file_execl_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_31_good();");
  CWE78_OS_Command_Injection__char_file_popen_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_53_good();");
  CWE78_OS_Command_Injection__char_file_system_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_31_good();");
  CWE78_OS_Command_Injection__char_file_execl_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_63_good();");
  CWE78_OS_Command_Injection__char_file_system_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_01_good();");
  CWE78_OS_Command_Injection__char_file_system_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_15_good();");
  CWE78_OS_Command_Injection__char_file_system_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_51_good();");
  CWE78_OS_Command_Injection__char_file_execl_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_11_good();");
  CWE78_OS_Command_Injection__char_file_popen_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_04_good();");
  CWE78_OS_Command_Injection__char_file_system_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_16_good();");
  CWE78_OS_Command_Injection__char_file_execlp_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_17_good();");
  CWE78_OS_Command_Injection__char_file_system_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_32_good();");
  CWE78_OS_Command_Injection__char_file_execl_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_04_good();");
  CWE78_OS_Command_Injection__char_file_execlp_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_52_good();");
  CWE78_OS_Command_Injection__char_file_system_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_11_good();");
  CWE78_OS_Command_Injection__char_file_system_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_18_good();");
  CWE78_OS_Command_Injection__char_file_execlp_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_02_good();");
  CWE78_OS_Command_Injection__char_file_system_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_64_good();");
  CWE78_OS_Command_Injection__char_file_popen_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_53_good();");
  CWE78_OS_Command_Injection__char_file_popen_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_09_good();");
  CWE78_OS_Command_Injection__char_file_execlp_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_22_good();");
  CWE78_OS_Command_Injection__char_file_execlp_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_06_good();");
  CWE78_OS_Command_Injection__char_file_execl_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_34_good();");
  CWE78_OS_Command_Injection__char_file_popen_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_44_good();");
  CWE78_OS_Command_Injection__char_file_popen_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_14_good();");
  CWE78_OS_Command_Injection__char_file_system_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_09_good();");
  CWE78_OS_Command_Injection__char_file_execl_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_41_good();");
  CWE78_OS_Command_Injection__char_file_execl_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_67_good();");
  CWE78_OS_Command_Injection__char_file_system_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_01_good();");
  CWE78_OS_Command_Injection__char_file_execlp_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_42_good();");
  CWE78_OS_Command_Injection__char_file_popen_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_11_good();");
  CWE78_OS_Command_Injection__char_file_execlp_11_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_67_good();");
  CWE78_OS_Command_Injection__char_file_popen_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_52_good();");
  CWE78_OS_Command_Injection__char_file_popen_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_10_good();");
  CWE78_OS_Command_Injection__char_file_execl_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_63_good();");
  CWE78_OS_Command_Injection__char_file_execlp_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_63_good();");
  CWE78_OS_Command_Injection__char_file_execl_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_06_good();");
  CWE78_OS_Command_Injection__char_file_popen_06_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_03_good();");
  CWE78_OS_Command_Injection__char_file_execl_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_64_good();");
  CWE78_OS_Command_Injection__char_file_system_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_01_good();");
  CWE78_OS_Command_Injection__char_file_popen_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_65_good();");
  CWE78_OS_Command_Injection__char_file_execl_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_44_good();");
  CWE78_OS_Command_Injection__char_file_execlp_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_08_good();");
  CWE78_OS_Command_Injection__char_file_popen_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_21_good();");
  CWE78_OS_Command_Injection__char_file_execl_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_09_good();");
  CWE78_OS_Command_Injection__char_file_system_09_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_51_good();");
  CWE78_OS_Command_Injection__char_file_system_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_08_good();");
  CWE78_OS_Command_Injection__char_file_system_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_04_good();");
  CWE78_OS_Command_Injection__char_file_popen_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_41_good();");
  CWE78_OS_Command_Injection__char_file_execlp_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_31_good();");
  CWE78_OS_Command_Injection__char_file_execlp_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_68_good();");
  CWE78_OS_Command_Injection__char_file_execlp_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_52_good();");
  CWE78_OS_Command_Injection__char_file_execl_52_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_45_good();");
  CWE78_OS_Command_Injection__char_file_execl_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_61_good();");
  CWE78_OS_Command_Injection__char_file_execlp_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_67_good();");
  CWE78_OS_Command_Injection__char_file_execlp_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_14_good();");
  CWE78_OS_Command_Injection__char_file_popen_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_07_good();");
  CWE78_OS_Command_Injection__char_file_execl_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_41_good();");
  CWE78_OS_Command_Injection__char_file_system_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_45_good();");
  CWE78_OS_Command_Injection__char_file_execlp_45_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_63_good();");
  CWE78_OS_Command_Injection__char_file_popen_63_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_12_good();");
  CWE78_OS_Command_Injection__char_file_popen_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_53_good();");
  CWE78_OS_Command_Injection__char_file_execl_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_34_good();");
  CWE78_OS_Command_Injection__char_file_system_34_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_51_good();");
  CWE78_OS_Command_Injection__char_file_popen_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_03_good();");
  CWE78_OS_Command_Injection__char_file_execlp_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_15_good();");
  CWE78_OS_Command_Injection__char_file_execlp_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_54_good();");
  CWE78_OS_Command_Injection__char_file_execlp_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_02_good();");
  CWE78_OS_Command_Injection__char_file_execlp_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_53_good();");
  CWE78_OS_Command_Injection__char_file_execlp_53_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_31_good();");
  CWE78_OS_Command_Injection__char_file_system_31_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_68_good();");
  CWE78_OS_Command_Injection__char_file_system_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_17_good();");
  CWE78_OS_Command_Injection__char_file_popen_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_68_good();");
  CWE78_OS_Command_Injection__char_file_execl_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_01_good();");
  CWE78_OS_Command_Injection__char_file_execl_01_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_15_good();");
  CWE78_OS_Command_Injection__char_file_execl_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_17_good();");
  CWE78_OS_Command_Injection__char_file_execlp_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_02_good();");
  CWE78_OS_Command_Injection__char_file_popen_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_21_good();");
  CWE78_OS_Command_Injection__char_file_popen_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_42_good();");
  CWE78_OS_Command_Injection__char_file_execlp_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_07_good();");
  CWE78_OS_Command_Injection__char_file_popen_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_18_good();");
  CWE78_OS_Command_Injection__char_file_popen_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_61_good();");
  CWE78_OS_Command_Injection__char_file_system_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_12_good();");
  CWE78_OS_Command_Injection__char_file_execl_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_12_good();");
  CWE78_OS_Command_Injection__char_file_execlp_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_08_good();");
  CWE78_OS_Command_Injection__char_file_execl_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_32_good();");
  CWE78_OS_Command_Injection__char_file_popen_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_68_good();");
  CWE78_OS_Command_Injection__char_file_popen_68_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_44_good();");
  CWE78_OS_Command_Injection__char_file_system_44_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_07_good();");
  CWE78_OS_Command_Injection__char_file_system_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_15_good();");
  CWE78_OS_Command_Injection__char_file_popen_15_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_17_good();");
  CWE78_OS_Command_Injection__char_file_execl_17_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_21_good();");
  CWE78_OS_Command_Injection__char_file_system_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_51_good();");
  CWE78_OS_Command_Injection__char_file_execlp_51_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_65_good();");
  CWE78_OS_Command_Injection__char_file_execlp_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_65_good();");
  CWE78_OS_Command_Injection__char_file_popen_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_05_good();");
  CWE78_OS_Command_Injection__char_file_execlp_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_14_good();");
  CWE78_OS_Command_Injection__char_file_execlp_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_64_good();");
  CWE78_OS_Command_Injection__char_file_execl_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_04_good();");
  CWE78_OS_Command_Injection__char_file_execl_04_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_16_good();");
  CWE78_OS_Command_Injection__char_file_execl_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_21_good();");
  CWE78_OS_Command_Injection__char_file_execlp_21_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_66_good();");
  CWE78_OS_Command_Injection__char_file_popen_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_03_good();");
  CWE78_OS_Command_Injection__char_file_popen_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_12_good();");
  CWE78_OS_Command_Injection__char_file_system_12_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_61_good();");
  CWE78_OS_Command_Injection__char_file_popen_61_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_05_good();");
  CWE78_OS_Command_Injection__char_file_system_05_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_66_good();");
  CWE78_OS_Command_Injection__char_file_execlp_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_64_good();");
  CWE78_OS_Command_Injection__char_file_execlp_64_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_22_good();");
  CWE78_OS_Command_Injection__char_file_system_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_08_good();");
  CWE78_OS_Command_Injection__char_file_execlp_08_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_65_good();");
  CWE78_OS_Command_Injection__char_file_system_65_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_07_good();");
  CWE78_OS_Command_Injection__char_file_execlp_07_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_10_good();");
  CWE78_OS_Command_Injection__char_file_system_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_18_good();");
  CWE78_OS_Command_Injection__char_file_execl_18_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_10_good();");
  CWE78_OS_Command_Injection__char_file_popen_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_22_good();");
  CWE78_OS_Command_Injection__char_file_popen_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_16_good();");
  CWE78_OS_Command_Injection__char_file_system_16_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_03_good();");
  CWE78_OS_Command_Injection__char_file_system_03_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_32_good();");
  CWE78_OS_Command_Injection__char_file_execlp_32_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_66_good();");
  CWE78_OS_Command_Injection__char_file_system_66_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_02_good();");
  CWE78_OS_Command_Injection__char_file_execl_02_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_22_good();");
  CWE78_OS_Command_Injection__char_file_execl_22_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_14_good();");
  CWE78_OS_Command_Injection__char_file_execl_14_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_54_good();");
  CWE78_OS_Command_Injection__char_file_system_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_54_good();");
  CWE78_OS_Command_Injection__char_file_popen_54_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_10_good();");
  CWE78_OS_Command_Injection__char_file_execlp_10_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_41_good();");
  CWE78_OS_Command_Injection__char_file_popen_41_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_13_good();");
  CWE78_OS_Command_Injection__char_file_popen_13_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_67_good();");
  CWE78_OS_Command_Injection__char_file_execl_67_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_42_good();");
  CWE78_OS_Command_Injection__char_file_execl_42_good();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_09_bad();");
  CWE78_OS_Command_Injection__char_file_popen_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_34_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_54_bad();");
  CWE78_OS_Command_Injection__char_file_execl_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_61_bad();");
  CWE78_OS_Command_Injection__char_file_execl_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_52_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_06_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_32_bad();");
  CWE78_OS_Command_Injection__char_file_system_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_06_bad();");
  CWE78_OS_Command_Injection__char_file_system_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_66_bad();");
  CWE78_OS_Command_Injection__char_file_execl_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_05_bad();");
  CWE78_OS_Command_Injection__char_file_popen_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_05_bad();");
  CWE78_OS_Command_Injection__char_file_execl_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_16_bad();");
  CWE78_OS_Command_Injection__char_file_popen_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_44_bad();");
  CWE78_OS_Command_Injection__char_file_execl_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_18_bad();");
  CWE78_OS_Command_Injection__char_file_system_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_45_bad();");
  CWE78_OS_Command_Injection__char_file_popen_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_13_bad();");
  CWE78_OS_Command_Injection__char_file_execl_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_42_bad();");
  CWE78_OS_Command_Injection__char_file_system_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_45_bad();");
  CWE78_OS_Command_Injection__char_file_system_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_13_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_13_bad();");
  CWE78_OS_Command_Injection__char_file_system_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_11_bad();");
  CWE78_OS_Command_Injection__char_file_execl_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_34_bad();");
  CWE78_OS_Command_Injection__char_file_execl_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_31_bad();");
  CWE78_OS_Command_Injection__char_file_popen_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_53_bad();");
  CWE78_OS_Command_Injection__char_file_system_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_31_bad();");
  CWE78_OS_Command_Injection__char_file_execl_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_63_bad();");
  CWE78_OS_Command_Injection__char_file_system_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_01_bad();");
  CWE78_OS_Command_Injection__char_file_system_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_15_bad();");
  CWE78_OS_Command_Injection__char_file_system_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_51_bad();");
  CWE78_OS_Command_Injection__char_file_execl_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_11_bad();");
  CWE78_OS_Command_Injection__char_file_popen_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_04_bad();");
  CWE78_OS_Command_Injection__char_file_system_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_16_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_17_bad();");
  CWE78_OS_Command_Injection__char_file_system_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_32_bad();");
  CWE78_OS_Command_Injection__char_file_execl_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_04_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_52_bad();");
  CWE78_OS_Command_Injection__char_file_system_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_11_bad();");
  CWE78_OS_Command_Injection__char_file_system_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_18_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_02_bad();");
  CWE78_OS_Command_Injection__char_file_system_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_64_bad();");
  CWE78_OS_Command_Injection__char_file_popen_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_53_bad();");
  CWE78_OS_Command_Injection__char_file_popen_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_09_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_22_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_06_bad();");
  CWE78_OS_Command_Injection__char_file_execl_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_34_bad();");
  CWE78_OS_Command_Injection__char_file_popen_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_44_bad();");
  CWE78_OS_Command_Injection__char_file_popen_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_14_bad();");
  CWE78_OS_Command_Injection__char_file_system_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_09_bad();");
  CWE78_OS_Command_Injection__char_file_execl_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_41_bad();");
  CWE78_OS_Command_Injection__char_file_execl_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_67_bad();");
  CWE78_OS_Command_Injection__char_file_system_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_01_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_42_bad();");
  CWE78_OS_Command_Injection__char_file_popen_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_11_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_11_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_67_bad();");
  CWE78_OS_Command_Injection__char_file_popen_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_52_bad();");
  CWE78_OS_Command_Injection__char_file_popen_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_10_bad();");
  CWE78_OS_Command_Injection__char_file_execl_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_63_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_63_bad();");
  CWE78_OS_Command_Injection__char_file_execl_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_06_bad();");
  CWE78_OS_Command_Injection__char_file_popen_06_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_03_bad();");
  CWE78_OS_Command_Injection__char_file_execl_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_64_bad();");
  CWE78_OS_Command_Injection__char_file_system_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_01_bad();");
  CWE78_OS_Command_Injection__char_file_popen_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_65_bad();");
  CWE78_OS_Command_Injection__char_file_execl_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_44_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_08_bad();");
  CWE78_OS_Command_Injection__char_file_popen_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_21_bad();");
  CWE78_OS_Command_Injection__char_file_execl_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_09_bad();");
  CWE78_OS_Command_Injection__char_file_system_09_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_51_bad();");
  CWE78_OS_Command_Injection__char_file_system_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_08_bad();");
  CWE78_OS_Command_Injection__char_file_system_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_04_bad();");
  CWE78_OS_Command_Injection__char_file_popen_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_41_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_31_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_68_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_52_bad();");
  CWE78_OS_Command_Injection__char_file_execl_52_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_45_bad();");
  CWE78_OS_Command_Injection__char_file_execl_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_61_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_67_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_14_bad();");
  CWE78_OS_Command_Injection__char_file_popen_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_07_bad();");
  CWE78_OS_Command_Injection__char_file_execl_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_41_bad();");
  CWE78_OS_Command_Injection__char_file_system_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_45_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_45_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_63_bad();");
  CWE78_OS_Command_Injection__char_file_popen_63_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_12_bad();");
  CWE78_OS_Command_Injection__char_file_popen_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_53_bad();");
  CWE78_OS_Command_Injection__char_file_execl_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_34_bad();");
  CWE78_OS_Command_Injection__char_file_system_34_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_51_bad();");
  CWE78_OS_Command_Injection__char_file_popen_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_03_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_15_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_54_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_02_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_53_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_53_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_31_bad();");
  CWE78_OS_Command_Injection__char_file_system_31_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_68_bad();");
  CWE78_OS_Command_Injection__char_file_system_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_17_bad();");
  CWE78_OS_Command_Injection__char_file_popen_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_68_bad();");
  CWE78_OS_Command_Injection__char_file_execl_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_01_bad();");
  CWE78_OS_Command_Injection__char_file_execl_01_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_15_bad();");
  CWE78_OS_Command_Injection__char_file_execl_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_17_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_02_bad();");
  CWE78_OS_Command_Injection__char_file_popen_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_21_bad();");
  CWE78_OS_Command_Injection__char_file_popen_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_42_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_42_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_07_bad();");
  CWE78_OS_Command_Injection__char_file_popen_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_18_bad();");
  CWE78_OS_Command_Injection__char_file_popen_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_61_bad();");
  CWE78_OS_Command_Injection__char_file_system_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_12_bad();");
  CWE78_OS_Command_Injection__char_file_execl_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_12_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_08_bad();");
  CWE78_OS_Command_Injection__char_file_execl_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_32_bad();");
  CWE78_OS_Command_Injection__char_file_popen_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_68_bad();");
  CWE78_OS_Command_Injection__char_file_popen_68_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_44_bad();");
  CWE78_OS_Command_Injection__char_file_system_44_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_07_bad();");
  CWE78_OS_Command_Injection__char_file_system_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_15_bad();");
  CWE78_OS_Command_Injection__char_file_popen_15_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_17_bad();");
  CWE78_OS_Command_Injection__char_file_execl_17_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_21_bad();");
  CWE78_OS_Command_Injection__char_file_system_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_51_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_51_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_65_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_65_bad();");
  CWE78_OS_Command_Injection__char_file_popen_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_05_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_14_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_64_bad();");
  CWE78_OS_Command_Injection__char_file_execl_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_04_bad();");
  CWE78_OS_Command_Injection__char_file_execl_04_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_16_bad();");
  CWE78_OS_Command_Injection__char_file_execl_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_21_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_21_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_66_bad();");
  CWE78_OS_Command_Injection__char_file_popen_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_03_bad();");
  CWE78_OS_Command_Injection__char_file_popen_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_12_bad();");
  CWE78_OS_Command_Injection__char_file_system_12_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_61_bad();");
  CWE78_OS_Command_Injection__char_file_popen_61_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_05_bad();");
  CWE78_OS_Command_Injection__char_file_system_05_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_66_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_64_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_64_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_22_bad();");
  CWE78_OS_Command_Injection__char_file_system_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_08_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_08_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_65_bad();");
  CWE78_OS_Command_Injection__char_file_system_65_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_07_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_07_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_10_bad();");
  CWE78_OS_Command_Injection__char_file_system_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_18_bad();");
  CWE78_OS_Command_Injection__char_file_execl_18_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_10_bad();");
  CWE78_OS_Command_Injection__char_file_popen_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_22_bad();");
  CWE78_OS_Command_Injection__char_file_popen_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_16_bad();");
  CWE78_OS_Command_Injection__char_file_system_16_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_03_bad();");
  CWE78_OS_Command_Injection__char_file_system_03_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_32_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_32_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_66_bad();");
  CWE78_OS_Command_Injection__char_file_system_66_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_02_bad();");
  CWE78_OS_Command_Injection__char_file_execl_02_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_22_bad();");
  CWE78_OS_Command_Injection__char_file_execl_22_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_14_bad();");
  CWE78_OS_Command_Injection__char_file_execl_14_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_system_54_bad();");
  CWE78_OS_Command_Injection__char_file_system_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_54_bad();");
  CWE78_OS_Command_Injection__char_file_popen_54_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execlp_10_bad();");
  CWE78_OS_Command_Injection__char_file_execlp_10_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_41_bad();");
  CWE78_OS_Command_Injection__char_file_popen_41_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_popen_13_bad();");
  CWE78_OS_Command_Injection__char_file_popen_13_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_67_bad();");
  CWE78_OS_Command_Injection__char_file_execl_67_bad();
  printLine("Calling CWE78_OS_Command_Injection__char_file_execl_42_bad();");
  CWE78_OS_Command_Injection__char_file_execl_42_bad();
  return 0;
}


void CWE78_OS_Command_Injection__char_file_execlp_13_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execlp("sh","sh",&DAT_0041abad,local_10,0);
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
    uStack128 = 0x402726;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x40277d;
  execlp("sh","sh",&DAT_0041abad,local_10,0);
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
  uStack128 = 0x402814;
  execlp("sh","sh",&DAT_0041abad,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_file_popen_65b_badSink;
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
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
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
  
  local_10 = CWE78_OS_Command_Injection__char_file_popen_65b_goodG2BSink;
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
  uStack144 = 0x402989;
  CWE78_OS_Command_Injection__char_file_popen_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_file_execl_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_execl_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_0041abe7,local_10,0);
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
  CWE78_OS_Command_Injection__char_file_execl_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_execl_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_0041abe7,local_10,0);
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
  CWE78_OS_Command_Injection__char_file_execl_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_execl_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_0041abe7,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_17_bad(void)

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
      local_28 = fopen("/tmp/file.txt","r");
      if (local_28 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_20 + (long)local_18) = 0;
        }
        fclose(local_28);
      }
    }
    local_c = local_c + 1;
  }
  execl("/bin/sh","/bin/sh",&DAT_0041ac11,local_18,0);
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
      uStack144 = 0x402cc2;
      execl("/bin/sh","/bin/sh",&DAT_0041ac11,local_18,0);
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


void CWE78_OS_Command_Injection__char_file_execl_17_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_file_popen_42_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_file_popen_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_15_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041ac5c,local_10,0);
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
  uStack128 = 0x40300a;
  execl("/bin/sh","/bin/sh",&DAT_0041ac5c,local_10,0);
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
  uStack128 = 0x403097;
  execl("/bin/sh","/bin/sh",&DAT_0041ac5c,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_file_system_22_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (CWE78_OS_Command_Injection__char_file_system_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_file_system_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_file_system_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_file_system_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_file_system_22_goodG2B2Global != 0) {
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


void CWE78_OS_Command_Injection__char_file_execl_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_16_bad(void)

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
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
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
  uStack128 = 0x403382;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x403390;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40339a;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_68b_badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_file_popen_68_badData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_68b_goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_file_popen_68_goodG2BData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_54_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_system_54b_badSink(local_10);
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
  uStack128 = 0x403561;
  CWE78_OS_Command_Injection__char_file_system_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_03_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execlp("sh","sh",&DAT_0041ad14,local_10,0);
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
  uStack128 = 0x4036e2;
  execlp("sh","sh",&DAT_0041ad14,local_10,0);
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
  uStack128 = 0x40376e;
  execlp("sh","sh",&DAT_0041ad14,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_13_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041ad39,local_10,0);
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
    uStack128 = 0x4038c8;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x40391f;
  execl("/bin/sh","/bin/sh",&DAT_0041ad39,local_10,0);
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
  uStack128 = 0x4039b6;
  execl("/bin/sh","/bin/sh",&DAT_0041ad39,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_63_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  FILE *local_18;
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
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  if (1 < 100 - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),100 - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE78_OS_Command_Injection__char_file_execlp_63b_badSink(&local_20);
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
  uStack128 = 0x403b0c;
  CWE78_OS_Command_Injection__char_file_execlp_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_63b_badSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041ad78,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_63b_goodG2BSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041ad78,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_06_bad(void)

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
  if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  execl("/bin/sh","/bin/sh",&DAT_0041ada7,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403cce) */

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
  uStack128 = 0x403d2f;
  execl("/bin/sh","/bin/sh",&DAT_0041ada7,local_10,0);
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
  uStack128 = 0x403dc5;
  execl("/bin/sh","/bin/sh",&DAT_0041ada7,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_51_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execlp_51b_badSink(local_10);
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
  uStack128 = 0x403f1c;
  CWE78_OS_Command_Injection__char_file_execlp_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_41_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_41_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_popen_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_41_goodG2BSink(char *pcParm1)

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
  uStack128 = 0x4040d5;
  CWE78_OS_Command_Injection__char_file_popen_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_file_system_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_system_22_badSource
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
  CWE78_OS_Command_Injection__char_file_system_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_system_22_goodG2B1Source
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
  CWE78_OS_Command_Injection__char_file_system_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_system_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_52c_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_52c_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_file_execlp_32_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  FILE *local_30;
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
    local_30 = fopen("/tmp/file.txt","r");
    if (local_30 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_28),100 - (int)local_28,local_30);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_28 + (long)local_20) = 0;
      }
      fclose(local_30);
    }
  }
  *local_10 = local_20;
  local_38 = *local_18;
  execlp("sh","sh",&DAT_0041ae42,local_38,0);
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
  execlp("sh","sh",&DAT_0041ae42,local_30,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_09_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
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
    uStack144 = 0x404645;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x404687;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40469e;
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
  uStack144 = 0x40471f;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x404736;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_66_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_file_execlp_66b_badSink(local_48);
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
  uStack176 = 0x4048b5;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_file_execlp_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_51_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_system_51b_badSink(local_10);
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
  uStack128 = 0x404a02;
  CWE78_OS_Command_Injection__char_file_system_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_67b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041aebc,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_67b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041aebc,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_64_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  FILE *local_18;
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
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  if (1 < 100 - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),100 - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE78_OS_Command_Injection__char_file_execlp_64b_badSink(&local_20);
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
  uStack128 = 0x404bc6;
  CWE78_OS_Command_Injection__char_file_execlp_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_64b_badSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041aee1,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_64b_goodG2BSink(undefined8 *puParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041aee1,*puParm1,0);
  return;
}


void badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_file_system_45_badData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_45_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_system_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_file_system_45_goodG2BData);
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
  CWE78_OS_Command_Injection__char_file_system_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_file_system_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_file_system_45_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x404e25;
  local_10 = CWE78_OS_Command_Injection__char_file_system_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_14_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041af44,local_10,0);
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
    uStack128 = 0x404f75;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x404fcc;
  execl("/bin/sh","/bin/sh",&DAT_0041af44,local_10,0);
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
  uStack128 = 0x405063;
  execl("/bin/sh","/bin/sh",&DAT_0041af44,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_31_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_28 = local_10;
  local_30 = local_10;
  execlp("sh","sh",&DAT_0041af83,local_10,0);
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
  uStack144 = 0x40521a;
  local_18 = local_20;
  local_10 = local_20;
  execlp("sh","sh",&DAT_0041af83,local_20,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_54c_goodG2BSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_file_execl_32_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  FILE *local_30;
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
    local_30 = fopen("/tmp/file.txt","r");
    if (local_30 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_28),100 - (int)local_28,local_30);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_28 + (long)local_20) = 0;
      }
      fclose(local_30);
    }
  }
  *local_10 = local_20;
  local_38 = *local_18;
  execl("/bin/sh","/bin/sh",&DAT_0041afa8,local_38,0);
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
  execl("/bin/sh","/bin/sh",&DAT_0041afa8,local_30,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_67b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041afb3,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_67b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041afb3,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_67_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_file_execlp_67b_badSink(local_10);
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
  uStack144 = 0x40562a;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_file_execlp_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_64_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  FILE *local_18;
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
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  if (1 < 100 - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),100 - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE78_OS_Command_Injection__char_file_execl_64b_badSink(&local_20);
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
  uStack128 = 0x405776;
  CWE78_OS_Command_Injection__char_file_execl_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_64_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_file_execlp_22_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (CWE78_OS_Command_Injection__char_file_execlp_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_file_execlp_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_file_execlp_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_file_execlp_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_file_execlp_22_goodG2B2Global != 0) {
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


void CWE78_OS_Command_Injection__char_file_execl_04_bad(void)

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
  if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  execl("/bin/sh","/bin/sh",&DAT_0041b057,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004059fe) */

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
  uStack128 = 0x405a5f;
  execl("/bin/sh","/bin/sh",&DAT_0041b057,local_10,0);
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
  uStack128 = 0x405af4;
  execl("/bin/sh","/bin/sh",&DAT_0041b057,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_popen_54b_badSink(local_10);
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
  uStack128 = 0x405c4b;
  CWE78_OS_Command_Injection__char_file_popen_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_64b_badSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_64b_goodG2BSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_14_bad(void)

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
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
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
    uStack128 = 0x405e23;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x405e60;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x405e6e;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405e78;
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
  uStack128 = 0x405ef5;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x405f03;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405f0d;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_file_system_32_bad(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  FILE *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_40;
  local_18 = &local_40;
  local_a8 = 0x20736c;
  lVar3 = 0xb;
  puVar4 = local_a0;
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = 0;
  local_40 = &local_a8;
  local_20 = local_40;
  local_28 = strlen((char *)local_40);
  if (1 < 100 - local_28) {
    local_30 = fopen("/tmp/file.txt","r");
    if (local_30 != (FILE *)0x0) {
      pcVar2 = fgets((char *)((long)local_20 + local_28),100 - (int)local_28,local_30);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_28 + (long)local_20) = 0;
      }
      fclose(local_30);
    }
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


void CWE78_OS_Command_Injection__char_file_system_32_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_65b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_65b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_02_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041b158,local_10,0);
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
  uStack128 = 0x4062fb;
  execl("/bin/sh","/bin/sh",&DAT_0041b158,local_10,0);
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
  uStack128 = 0x406387;
  execl("/bin/sh","/bin/sh",&DAT_0041b158,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_file_execl_22_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (CWE78_OS_Command_Injection__char_file_execl_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_file_execl_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_file_execl_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_file_execl_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_file_execl_22_goodG2B2Global != 0) {
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


void CWE78_OS_Command_Injection__char_file_system_67b_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_67b_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_64_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  FILE *local_18;
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
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  if (1 < 100 - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),100 - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE78_OS_Command_Injection__char_file_system_64b_badSink(&local_20);
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
  uStack128 = 0x406697;
  CWE78_OS_Command_Injection__char_file_system_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_52c_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_52c_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_04_bad(void)

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
  local_18 = strlen((char *)local_10);
  if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x004068a3) */

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
  uStack128 = 0x4068ea;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x4068f8;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x406902;
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
  uStack128 = 0x40697d;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x40698b;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x406995;
  exit(1);
}


void CWE78_OS_Command_Injection__char_file_system_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_31_bad(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack144 = 0x406b30;
  local_18 = local_20;
  local_10 = local_20;
  iVar2 = system(local_20);
  if (iVar2 != 0) {
    uStack144 = 0x406b3e;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack144 = 0x406b48;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_file_execlp_65b_badSink;
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
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
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
  
  local_10 = CWE78_OS_Command_Injection__char_file_execlp_65b_goodG2BSink;
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
  uStack144 = 0x406cb3;
  CWE78_OS_Command_Injection__char_file_execlp_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_65b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b29a,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_65b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b29a,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_15_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execlp("sh","sh",&DAT_0041b2c4,local_10,0);
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
  uStack128 = 0x406e9e;
  execlp("sh","sh",&DAT_0041b2c4,local_10,0);
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
  uStack128 = 0x406f2b;
  execlp("sh","sh",&DAT_0041b2c4,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_17_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [12];
  FILE *local_30;
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
      local_28 = fopen("/tmp/file.txt","r");
      if (local_28 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_20 + (long)local_18) = 0;
        }
        fclose(local_28);
      }
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
      uStack144 = 0x4070dc;
      local_20 = popen(local_18,"w");
      if (local_20 != (FILE *)0x0) {
        uStack144 = 0x4070f3;
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


void CWE78_OS_Command_Injection__char_file_popen_17_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_34_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  FILE *local_30;
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack160 = 0x407299;
  local_18 = local_28;
  local_10 = local_28;
  local_20 = popen(local_28,"w");
  if (local_20 != (FILE *)0x0) {
    uStack160 = 0x4072b0;
    pclose(local_20);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_34_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_file_execlp_42_bad(undefined8 uParm1,undefined8 uParm2)

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
  execlp("sh","sh",&DAT_0041b32b,local_10,0);
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
  execlp("sh","sh",&DAT_0041b32b,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_04_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004075c1) */

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
  uStack144 = 0x40760d;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x407624;
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
  uStack144 = 0x4076a4;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4076bb;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_31_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack160 = 0x40786b;
  local_18 = local_20;
  local_10 = local_20;
  local_28 = popen(local_20,"w");
  if (local_28 != (FILE *)0x0) {
    uStack160 = 0x407882;
    pclose(local_28);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_68b_badSink(void)

{
  execlp("sh","sh",&DAT_0041b393,CWE78_OS_Command_Injection__char_file_execlp_68_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_68b_goodG2BSink(void)

{
  execlp("sh","sh",&DAT_0041b393,CWE78_OS_Command_Injection__char_file_execlp_68_goodG2BData,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_07_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execlp("sh","sh",&DAT_0041b3b8,local_10,0);
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
    uStack128 = 0x407a7c;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x407ad3;
  execlp("sh","sh",&DAT_0041b3b8,local_10,0);
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
  uStack128 = 0x407b6a;
  execlp("sh","sh",&DAT_0041b3b8,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_67_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_file_popen_67b_badSink(local_10);
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
  uStack144 = 0x407cdd;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_file_popen_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_file_execl_65b_badSink;
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
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
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
  
  local_10 = CWE78_OS_Command_Injection__char_file_execl_65b_goodG2BSink;
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
  uStack144 = 0x407e48;
  CWE78_OS_Command_Injection__char_file_execl_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_65_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_file_popen_22_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (CWE78_OS_Command_Injection__char_file_popen_22_badGlobal != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_file_popen_22_goodG2B1Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_file_popen_22_goodG2B1Global == 0) {
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


char * CWE78_OS_Command_Injection__char_file_popen_22_goodG2B2Source(char *pcParm1)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (CWE78_OS_Command_Injection__char_file_popen_22_goodG2B2Global != 0) {
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


void CWE78_OS_Command_Injection__char_file_execlp_05_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execlp("sh","sh",&DAT_0041b464,local_10,0);
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
    uStack128 = 0x4080dc;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x408133;
  execlp("sh","sh",&DAT_0041b464,local_10,0);
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
  uStack128 = 0x4081c9;
  execlp("sh","sh",&DAT_0041b464,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_06_bad(void)

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
  if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  execlp("sh","sh",&DAT_0041b4a3,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408317) */

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
  uStack128 = 0x408378;
  execlp("sh","sh",&DAT_0041b4a3,local_10,0);
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
  uStack128 = 0x40840e;
  execlp("sh","sh",&DAT_0041b4a3,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_41_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041b4be,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_41_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execlp_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_41_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041b4be,uParm1,0);
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
  uStack128 = 0x4085cd;
  CWE78_OS_Command_Injection__char_file_execlp_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_65b_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_65b_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_execlp_52c_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041b4fd,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_52c_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041b4fd,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_68b_badSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b503,CWE78_OS_Command_Injection__char_file_execl_68_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_68b_goodG2BSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b503,CWE78_OS_Command_Injection__char_file_execl_68_goodG2BData
        ,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_68_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execlp_68_badData = local_10;
  CWE78_OS_Command_Injection__char_file_execlp_68b_badSink();
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
  CWE78_OS_Command_Injection__char_file_execlp_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_file_execlp_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_file_execlp_68_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x4088a2;
  local_10 = CWE78_OS_Command_Injection__char_file_execlp_68_goodG2BData;
  CWE78_OS_Command_Injection__char_file_execlp_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_18_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack144 = 0x408a1e;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x408a35;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_34_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_38 = local_10;
  local_28 = local_10;
  execlp("sh","sh",&DAT_0041b56d,local_10,0);
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
  uStack160 = 0x408bee;
  local_18 = local_28;
  local_10 = local_28;
  execlp("sh","sh",&DAT_0041b56d,local_28,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_53d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_66b_badSink(long lParm1)

{
  execlp("sh","sh",&DAT_0041b573,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_66b_goodG2BSink(long lParm1)

{
  execlp("sh","sh",&DAT_0041b573,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_file_popen_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_popen_22_badSource
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
  CWE78_OS_Command_Injection__char_file_popen_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_popen_22_goodG2B1Source
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
  CWE78_OS_Command_Injection__char_file_popen_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_popen_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_10_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execlp("sh","sh",&DAT_0041b59a,local_10,0);
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
    uStack128 = 0x408f75;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x408fcc;
  execlp("sh","sh",&DAT_0041b59a,local_10,0);
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
  uStack128 = 0x409062;
  execlp("sh","sh",&DAT_0041b59a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_05_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041b5d4,local_10,0);
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
    uStack128 = 0x4091ba;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x409211;
  execl("/bin/sh","/bin/sh",&DAT_0041b5d4,local_10,0);
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
  uStack128 = 0x4092a7;
  execl("/bin/sh","/bin/sh",&DAT_0041b5d4,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_53_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execlp_53b_badSink(local_10);
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
  uStack128 = 0x4093fe;
  CWE78_OS_Command_Injection__char_file_execlp_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_41_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b613,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_41_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execl_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_41_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b613,uParm1,0);
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
  uStack128 = 0x4095b3;
  CWE78_OS_Command_Injection__char_file_execl_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_65_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE78_OS_Command_Injection__char_file_system_65b_badSink;
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
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
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
  
  local_10 = CWE78_OS_Command_Injection__char_file_system_65b_goodG2BSink;
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
  uStack144 = 0x409752;
  CWE78_OS_Command_Injection__char_file_system_65b_goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_65_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_15_bad(void)

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
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
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
  uStack128 = 0x4098b9;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4098c7;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4098d1;
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
  uStack128 = 0x409944;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x409952;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40995c;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_54e_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041b695,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_54e_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041b695,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_22_bad(undefined8 uParm1,undefined8 uParm2)

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
  CWE78_OS_Command_Injection__char_file_execlp_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_execlp_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_0041b69b,local_10,0);
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
  CWE78_OS_Command_Injection__char_file_execlp_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_execlp_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_0041b69b,local_10,0);
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
  CWE78_OS_Command_Injection__char_file_execlp_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE78_OS_Command_Injection__char_file_execlp_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_0041b69b,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_66b_badSink(long lParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b6a1,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_66b_goodG2BSink(long lParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b6a1,*(undefined8 *)(lParm1 + 0x10),0);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_13_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
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
    uStack144 = 0x409d5f;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x409da1;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x409db8;
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
  uStack144 = 0x409e3a;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x409e51;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_68b_badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_file_system_68_badData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_68b_goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE78_OS_Command_Injection__char_file_system_68_goodG2BData);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_63b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_63b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_53_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execl_53b_badSink(local_10);
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
  uStack128 = 0x40a09c;
  CWE78_OS_Command_Injection__char_file_execl_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_52_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execlp_52b_badSink(local_10);
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
  uStack128 = 0x40a1e9;
  CWE78_OS_Command_Injection__char_file_execlp_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_41_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_41_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_system_41_badSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_41_goodG2BSink(char *pcParm1)

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
  uStack128 = 0x40a3ce;
  CWE78_OS_Command_Injection__char_file_system_41_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_41_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_53b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_53c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_53b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_53c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_54e_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b775,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_54e_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b775,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_66_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_file_execl_66b_badSink(local_48);
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
  uStack176 = 0x40a5df;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_file_execl_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_66_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_file_popen_21_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_file_popen_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_03_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack144 = 0x40aa24;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40aa3b;
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
  uStack144 = 0x40aab2;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40aac9;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_63_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  FILE *local_18;
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
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  if (1 < 100 - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),100 - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE78_OS_Command_Injection__char_file_popen_63b_badSink(&local_20);
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
  uStack128 = 0x40ac1f;
  CWE78_OS_Command_Injection__char_file_popen_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_68_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_system_68_badData = local_10;
  CWE78_OS_Command_Injection__char_file_system_68b_badSink();
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
  CWE78_OS_Command_Injection__char_file_system_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_file_system_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_file_system_68_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x40ad7e;
  local_10 = CWE78_OS_Command_Injection__char_file_system_68_goodG2BData;
  CWE78_OS_Command_Injection__char_file_system_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_63b_badSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_0041b834,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_63b_goodG2BSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_0041b834,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_66b_badSink(long lParm1)

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


void CWE78_OS_Command_Injection__char_file_system_66b_goodG2BSink(long lParm1)

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


void CWE78_OS_Command_Injection__char_file_execl_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_51b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041b854,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_51b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041b854,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_67_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_file_execl_67b_badSink(local_10);
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
  uStack144 = 0x40b07d;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_file_execl_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_16_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execlp("sh","sh",&DAT_0041b898,local_10,0);
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
  uStack128 = 0x40b200;
  execlp("sh","sh",&DAT_0041b898,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_53_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_system_53b_badSink(local_10);
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
  uStack128 = 0x40b34d;
  CWE78_OS_Command_Injection__char_file_system_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
  size_t local_18;
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
    local_18 = strlen((char *)local_10);
    if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
      pcVar3 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar3 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
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


void CWE78_OS_Command_Injection__char_file_popen_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_64_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  FILE *local_18;
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
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  if (1 < 100 - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),100 - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE78_OS_Command_Injection__char_file_popen_64b_badSink(&local_20);
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
  uStack128 = 0x40b6ae;
  CWE78_OS_Command_Injection__char_file_popen_64b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_64_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_14_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execlp("sh","sh",&DAT_0041b91c,local_10,0);
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
    uStack128 = 0x40b7fe;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x40b855;
  execlp("sh","sh",&DAT_0041b91c,local_10,0);
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
  uStack128 = 0x40b8ec;
  execlp("sh","sh",&DAT_0041b91c,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_54e_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_54e_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_66_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_file_system_66b_badSink(local_48);
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
  uStack176 = 0x40bacf;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_file_system_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_51b_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b970,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_51b_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041b970,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_16_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041b99a,local_10,0);
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
  uStack128 = 0x40bcba;
  execl("/bin/sh","/bin/sh",&DAT_0041b99a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_16_good(void)

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


void CWE78_OS_Command_Injection__char_file_popen_44_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
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
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
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
  uStack144 = 0x40be91;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_44_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_file_system_42_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_file_system_42_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_05_bad(void)

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
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
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
    uStack128 = 0x40c19a;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40c1d7;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40c1e5;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40c1ef;
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
  uStack128 = 0x40c26b;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40c279;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40c283;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  iVar1 = globalReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
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


void CWE78_OS_Command_Injection__char_file_popen_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_02_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack144 = 0x40c66a;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40c681;
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
  uStack144 = 0x40c6f8;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40c70f;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_09_bad(void)

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
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
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
    uStack128 = 0x40c899;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40c8d6;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40c8e4;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40c8ee;
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
  uStack128 = 0x40c96a;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40c978;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40c982;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  execlp("sh","sh",&DAT_0041baf2,CWE78_OS_Command_Injection__char_file_execlp_45_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_45_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execlp_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  execlp("sh","sh",&DAT_0041baf2,CWE78_OS_Command_Injection__char_file_execlp_45_goodG2BData,0);
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
  CWE78_OS_Command_Injection__char_file_execlp_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_file_execlp_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_file_execlp_45_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x40cb61;
  local_10 = CWE78_OS_Command_Injection__char_file_execlp_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_45_good(void)

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


void CWE78_OS_Command_Injection__char_file_popen_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  iVar1 = staticReturnsTrue(puVar4,uParm2,(undefined4 *)((long)puVar4 + 4));
  if (iVar1 != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
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


void CWE78_OS_Command_Injection__char_file_popen_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_file_popen_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_file_popen_61b_goodG2BSource(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_popen_10_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
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
    uStack144 = 0x40d00d;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x40d04f;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40d066;
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
  uStack144 = 0x40d0e7;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40d0fe;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_51_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execl_51b_badSink(local_10);
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
  uStack128 = 0x40d255;
  CWE78_OS_Command_Injection__char_file_execl_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_68_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execl_68_badData = local_10;
  CWE78_OS_Command_Injection__char_file_execl_68b_badSink();
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
  CWE78_OS_Command_Injection__char_file_execl_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_file_execl_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_file_execl_68_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x40d3e8;
  local_10 = CWE78_OS_Command_Injection__char_file_execl_68_goodG2BData;
  CWE78_OS_Command_Injection__char_file_execl_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_01_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack144 = 0x40d562;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40d579;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_52_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_system_52b_badSink(local_10);
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
  uStack128 = 0x40d6c6;
  CWE78_OS_Command_Injection__char_file_system_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_53d_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_53d_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_51b_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_51b_goodG2BSink(char *pcParm1)

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
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_file_execl_42_bad(undefined8 uParm1,undefined8 uParm2)

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
  execl("/bin/sh","/bin/sh",&DAT_0041bc5b,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_0041bc5b,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_42_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_0041bc66,CWE78_OS_Command_Injection__char_file_execl_45_badData,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_45_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execl_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  execl("/bin/sh","/bin/sh",&DAT_0041bc66,CWE78_OS_Command_Injection__char_file_execl_45_goodG2BData
        ,0);
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
  CWE78_OS_Command_Injection__char_file_execl_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_file_execl_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_file_execl_45_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x40db2c;
  local_10 = CWE78_OS_Command_Injection__char_file_execl_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_07_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
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
    uStack144 = 0x40dc8a;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x40dccc;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40dce3;
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
  uStack144 = 0x40dd65;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x40dd7c;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_file_popen_61b_badSource
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
             CWE78_OS_Command_Injection__char_file_popen_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"w");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_04_bad(void)

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
  if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  execlp("sh","sh",&DAT_0041bcef,local_10,0);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040dfb6) */

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
  uStack128 = 0x40e017;
  execlp("sh","sh",&DAT_0041bcef,local_10,0);
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
  uStack128 = 0x40e0ac;
  execlp("sh","sh",&DAT_0041bcef,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_34_bad(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  undefined8 *local_28;
  FILE *local_20;
  size_t local_18;
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
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack160 = 0x40e253;
  local_18 = local_28;
  local_10 = local_28;
  iVar2 = system(local_28);
  if (iVar2 != 0) {
    uStack160 = 0x40e261;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack160 = 0x40e26b;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_68_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_popen_68_badData = local_10;
  CWE78_OS_Command_Injection__char_file_popen_68b_badSink();
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
  CWE78_OS_Command_Injection__char_file_popen_68_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_file_popen_68_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_file_popen_68_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x40e3ca;
  local_10 = CWE78_OS_Command_Injection__char_file_popen_68_goodG2BData;
  CWE78_OS_Command_Injection__char_file_popen_68b_goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_68_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_12_bad(undefined8 uParm1,undefined8 uParm2)

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
    if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
      pcVar3 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar3 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execlp("sh","sh",&DAT_0041bd81,local_10,0);
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
  execlp("sh","sh",&DAT_0041bd81,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_12_good(void)

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


void CWE78_OS_Command_Injection__char_file_system_08_bad(undefined8 uParm1,undefined8 uParm2)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
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


void CWE78_OS_Command_Injection__char_file_system_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_03_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041bdf4,local_10,0);
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
  uStack128 = 0x40e9b1;
  execl("/bin/sh","/bin/sh",&DAT_0041bdf4,local_10,0);
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
  uStack128 = 0x40ea3d;
  execl("/bin/sh","/bin/sh",&DAT_0041bdf4,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_66b_badSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_66b_goodG2BSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_54d_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_54e_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_54d_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_54e_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_63_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  FILE *local_18;
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
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  if (1 < 100 - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),100 - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE78_OS_Command_Injection__char_file_execl_63b_badSink(&local_20);
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
  uStack128 = 0x40ec4b;
  CWE78_OS_Command_Injection__char_file_execl_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_18_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041be3f,local_10,0);
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
  uStack128 = 0x40edce;
  execl("/bin/sh","/bin/sh",&DAT_0041be3f,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_53_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_popen_53b_badSink(local_10);
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
  uStack128 = 0x40ef1b;
  CWE78_OS_Command_Injection__char_file_popen_53b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_53_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_13_bad(void)

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
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
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
    uStack128 = 0x40f069;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x40f0a6;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40f0b4;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40f0be;
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
  uStack128 = 0x40f13b;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x40f149;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40f153;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_17_bad(void)

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
      local_28 = fopen("/tmp/file.txt","r");
      if (local_28 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_20 + (long)local_18) = 0;
        }
        fclose(local_28);
      }
    }
    local_c = local_c + 1;
  }
  execlp("sh","sh",&DAT_0041bed6,local_18,0);
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
      uStack144 = 0x40f317;
      execlp("sh","sh",&DAT_0041bed6,local_18,0);
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


void CWE78_OS_Command_Injection__char_file_execlp_17_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_63b_badSink(char **ppcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_63b_goodG2BSink(char **ppcParm1)

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
  execlp("sh","sh",&DAT_0041bef6,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_44_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
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
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041bef6,uParm1,0);
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
  uStack144 = 0x40f564;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_34_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_38 = local_10;
  local_28 = local_10;
  execl("/bin/sh","/bin/sh",&DAT_0041bf3a,local_10,0);
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
  uStack160 = 0x40f71d;
  local_18 = local_28;
  local_10 = local_28;
  execl("/bin/sh","/bin/sh",&DAT_0041bf3a,local_28,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_34_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_67_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_28 = local_10;
  CWE78_OS_Command_Injection__char_file_system_67b_badSink(local_10);
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
  uStack144 = 0x40f886;
  local_10 = local_18;
  CWE78_OS_Command_Injection__char_file_system_67b_goodG2BSink(local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_67_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_11_bad(undefined8 uParm1,undefined8 uParm2)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execlp("sh","sh",&DAT_0041bf83,local_10,0);
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
  execlp("sh","sh",&DAT_0041bf83,local_10,0);
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
  execlp("sh","sh",&DAT_0041bf83,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_02_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execlp("sh","sh",&DAT_0041bfbd,local_10,0);
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
  uStack128 = 0x40fc58;
  execlp("sh","sh",&DAT_0041bfbd,local_10,0);
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
  uStack128 = 0x40fce4;
  execlp("sh","sh",&DAT_0041bfbd,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_file_execl_21_bad(undefined8 uParm1,undefined8 uParm2)

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
  execl("/bin/sh","/bin/sh",&DAT_0041bfe2,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_0041bfe2,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_0041bfe2,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_12_bad(undefined8 uParm1,undefined8 uParm2)

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
    if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
      pcVar3 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar3 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041c021,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_0041c021,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_66_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_38 = local_10;
  CWE78_OS_Command_Injection__char_file_popen_66b_badSink(local_48);
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
  uStack176 = 0x41032d;
  local_10 = local_28;
  CWE78_OS_Command_Injection__char_file_popen_66b_goodG2BSink(local_38);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_66_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_52b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_52c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_52b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_popen_52c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54e_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_54e_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


char * CWE78_OS_Command_Injection__char_file_execlp_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_file_execlp_61b_goodG2BSource(char *pcParm1)

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
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_file_system_21_bad(undefined8 uParm1,undefined8 uParm2)

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


void CWE78_OS_Command_Injection__char_file_system_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_03_bad(void)

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
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
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
  uStack128 = 0x4108c8;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4108d6;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4108e0;
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
  uStack128 = 0x410952;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x410960;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41096a;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_63_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  FILE *local_18;
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
  local_20 = &local_88;
  local_10 = strlen((char *)local_20);
  if (1 < 100 - local_10) {
    local_18 = fopen("/tmp/file.txt","r");
    if (local_18 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_10),100 - (int)local_10,local_18);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_10 + (long)local_20) = 0;
      }
      fclose(local_18);
    }
  }
  CWE78_OS_Command_Injection__char_file_system_63b_badSink(&local_20);
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
  uStack128 = 0x410ac0;
  CWE78_OS_Command_Injection__char_file_system_63b_goodG2BSink(&local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_63_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_01_bad(void)

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
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
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
  uStack128 = 0x410c25;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x410c33;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x410c3d;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_18_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execlp("sh","sh",&DAT_0041c16a,local_10,0);
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
  uStack128 = 0x410df4;
  execlp("sh","sh",&DAT_0041c16a,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_06_bad(void)

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
  local_18 = strlen((char *)local_10);
  if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
    if (pcVar2 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  iVar1 = system((char *)local_10);
  if (iVar1 == 0) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x00410f36) */

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
  uStack128 = 0x410f7d;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x410f8b;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x410f95;
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
  uStack128 = 0x411011;
  iVar2 = system(local_10);
  if (iVar2 == 0) {
    return;
  }
  uStack128 = 0x41101f;
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x411029;
  exit(1);
}


void CWE78_OS_Command_Injection__char_file_system_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041c1c2,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_44_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
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
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
    }
  }
  (*local_10)(local_18);
  return;
}


void goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041c1c2,uParm1,0);
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
  uStack144 = 0x411206;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_01_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execlp("sh","sh",&DAT_0041c20b,local_10,0);
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
  uStack128 = 0x411387;
  execlp("sh","sh",&DAT_0041c20b,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_18_bad(void)

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
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
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
  uStack128 = 0x4114ee;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4114fc;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x411506;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_18_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_53d_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041c24a,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_53d_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041c24a,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_11_bad(undefined8 uParm1,undefined8 uParm2)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041c26f,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_0041c26f,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_0041c26f,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_file_execlp_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_0041c28f,local_10,0);
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
             CWE78_OS_Command_Injection__char_file_execlp_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execlp("sh","sh",&DAT_0041c28f,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_61_good(void)

{
  goodG2B();
  return;
}


char * CWE78_OS_Command_Injection__char_file_execl_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_file_execl_61b_goodG2BSource(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_execl_10_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041c2d3,local_10,0);
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
    uStack128 = 0x411ace;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x411b25;
  execl("/bin/sh","/bin/sh",&DAT_0041c2d3,local_10,0);
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
  uStack128 = 0x411bbb;
  execl("/bin/sh","/bin/sh",&DAT_0041c2d3,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_64b_badSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_0041c2f3,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_64b_goodG2BSink(undefined8 *puParm1)

{
  execlp("sh","sh",&DAT_0041c2f3,*puParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_12_bad(undefined8 uParm1,undefined8 uParm2)

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
    if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
      pcVar3 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar3 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
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


void CWE78_OS_Command_Injection__char_file_system_12_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_15_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack144 = 0x411fd0;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x411fe7;
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
  uStack144 = 0x41205f;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x412076;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_15_good(void)

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


void CWE78_OS_Command_Injection__char_file_execl_08_bad(undefined8 uParm1,undefined8 uParm2)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041c372,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_0041c372,local_10,0);
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
  execl("/bin/sh","/bin/sh",&DAT_0041c372,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_52_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_popen_52b_badSink(local_10);
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
  uStack128 = 0x412434;
  CWE78_OS_Command_Injection__char_file_popen_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_51b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_51b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_54d_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_09_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execlp("sh","sh",&DAT_0041c3d2,local_10,0);
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
    uStack128 = 0x412622;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x412679;
  execlp("sh","sh",&DAT_0041c3d2,local_10,0);
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
  uStack128 = 0x41270f;
  execlp("sh","sh",&DAT_0041c3d2,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_16_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
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
  uStack144 = 0x412895;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x4128ac;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_16_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_01_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041c42d,local_10,0);
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
  uStack128 = 0x412a2d;
  execl("/bin/sh","/bin/sh",&DAT_0041c42d,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_01_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_53d_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041c438,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_53d_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041c438,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_31_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  FILE *local_20;
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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  local_28 = local_10;
  local_30 = local_10;
  execl("/bin/sh","/bin/sh",&DAT_0041c462,local_10,0);
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
  uStack144 = 0x412c42;
  local_18 = local_20;
  local_10 = local_20;
  execl("/bin/sh","/bin/sh",&DAT_0041c462,local_20,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_31_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_17_bad(void)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
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
  local_18 = &local_98;
  local_c = 0;
  while (local_c < 1) {
    local_20 = strlen((char *)local_18);
    if (1 < 100 - local_20) {
      local_28 = fopen("/tmp/file.txt","r");
      if (local_28 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_20 + (long)local_18) = 0;
        }
        fclose(local_28);
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
      uStack144 = 0x412de0;
      iVar2 = system(local_18);
      if (iVar2 != 0) {
        uStack144 = 0x412dee;
        printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
        uStack144 = 0x412df8;
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


void CWE78_OS_Command_Injection__char_file_system_17_good(void)

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


void CWE78_OS_Command_Injection__char_file_system_44_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  size_t local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
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
  local_20 = strlen((char *)local_18);
  if (1 < 100 - local_20) {
    local_28 = fopen("/tmp/file.txt","r");
    if (local_28 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_18 + local_20),100 - (int)local_20,local_28);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_20 + (long)local_18) = 0;
      }
      fclose(local_28);
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
  uStack144 = 0x412fc7;
  goodG2BSink(local_18,uParm2,local_18);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_44_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_file_execl_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_0041c4df,local_10,0);
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
             CWE78_OS_Command_Injection__char_file_execl_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  execl("/bin/sh","/bin/sh",&DAT_0041c4df,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_61_good(void)

{
  goodG2B();
  return;
}


char * badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  if (badStatic != 0) {
    sVar1 = strlen(pcParm1);
    if (1 < 100 - sVar1) {
      __stream = fopen("/tmp/file.txt","r");
      if (__stream != (FILE *)0x0) {
        pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          pcParm1[sVar1] = 0;
        }
        fclose(__stream);
      }
    }
  }
  return pcParm1;
}


void CWE78_OS_Command_Injection__char_file_execlp_21_bad(undefined8 uParm1,undefined8 uParm2)

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
  execlp("sh","sh",&DAT_0041c509,local_10,0);
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
  execlp("sh","sh",&DAT_0041c509,local_10,0);
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
  execlp("sh","sh",&DAT_0041c509,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_11_bad(undefined8 uParm1,undefined8 uParm2)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
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


void CWE78_OS_Command_Injection__char_file_system_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_02_bad(void)

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
  local_18 = strlen((char *)local_10);
  if (1 < 100 - local_18) {
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
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
  uStack128 = 0x413726;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x413734;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x41373e;
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
  uStack128 = 0x4137b0;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x4137be;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4137c8;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_51_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_popen_51b_badSink(local_10);
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
  uStack128 = 0x41391f;
  CWE78_OS_Command_Injection__char_file_popen_51b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_51_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_09_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041c5e9,local_10,0);
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
    uStack128 = 0x413aa1;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x413af8;
  execl("/bin/sh","/bin/sh",&DAT_0041c5e9,local_10,0);
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
  uStack128 = 0x413b8e;
  execl("/bin/sh","/bin/sh",&DAT_0041c5e9,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


char * CWE78_OS_Command_Injection__char_file_system_61b_badSource(char *pcParm1)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  sVar1 = strlen(pcParm1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets(pcParm1 + sVar1,100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        printLine("fgets() failed");
        pcParm1[sVar1] = 0;
      }
      fclose(__stream);
    }
  }
  return pcParm1;
}


char * CWE78_OS_Command_Injection__char_file_system_61b_goodG2BSource(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_10_bad(void)

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
  if (globalTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
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
    uStack128 = 0x413dbb;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x413df8;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x413e06;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x413e10;
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
  uStack128 = 0x413e8c;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x413e9a;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x413ea4;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_54c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_54d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_54c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_54d_goodG2BSink(uParm1);
  return;
}


void badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_file_popen_45_badData,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_45_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_popen_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE78_OS_Command_Injection__char_file_popen_45_goodG2BData,"w");
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
  CWE78_OS_Command_Injection__char_file_popen_45_goodG2BData = &uStack128 + 8;
  uVar3 = 0xffffffffffffffff;
  pcVar5 = CWE78_OS_Command_Injection__char_file_popen_45_goodG2BData;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != 0);
  *(undefined4 *)(CWE78_OS_Command_Injection__char_file_popen_45_goodG2BData + (~uVar3 - 1)) =
       0x2a2e2a;
  uStack128 = 0x4140bb;
  local_10 = CWE78_OS_Command_Injection__char_file_popen_45_goodG2BData;
  goodG2BSink();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_45_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_06_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  if ((1 < 100 - local_18) && (local_20 = fopen("/tmp/file.txt","r"), local_20 != (FILE *)0x0)) {
    pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
    if (pcVar1 == (char *)0x0) {
      printLine("fgets() failed");
      *(undefined *)(local_18 + (long)local_10) = 0;
    }
    fclose(local_20);
  }
  local_28 = popen((char *)local_10,"w");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041420d) */

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
  uStack144 = 0x414259;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x414270;
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
  uStack144 = 0x4142f1;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x414308;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_52_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execl_52b_badSink(local_10);
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
  uStack128 = 0x41445f;
  CWE78_OS_Command_Injection__char_file_execl_52b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_52_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_53d_badSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_system_53d_goodG2BSink(char *pcParm1)

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


void CWE78_OS_Command_Injection__char_file_execlp_54_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execlp_54b_badSink(local_10);
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
  uStack128 = 0x414610;
  CWE78_OS_Command_Injection__char_file_execlp_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_07_bad(void)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execl("/bin/sh","/bin/sh",&DAT_0041c749,local_10,0);
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
    uStack128 = 0x414760;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack128 = 0x4147b7;
  execl("/bin/sh","/bin/sh",&DAT_0041c749,local_10,0);
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
  uStack128 = 0x41484e;
  execl("/bin/sh","/bin/sh",&DAT_0041c749,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execl_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_61_bad(undefined8 uParm1,undefined8 uParm2)

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
             CWE78_OS_Command_Injection__char_file_system_61b_badSource
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
             CWE78_OS_Command_Injection__char_file_system_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 != 0) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_61_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_05_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  if (staticTrue != 0) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
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
    uStack144 = 0x414ace;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x414b10;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x414b27;
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
  uStack144 = 0x414ba8;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x414bbf;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_07_bad(void)

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
  if (staticFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
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
    uStack128 = 0x414d17;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar5 + 4));
  }
  uStack128 = 0x414d54;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x414d62;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x414d6c;
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
  uStack128 = 0x414de9;
  iVar2 = system(local_10);
  if (iVar2 != 0) {
    uStack128 = 0x414df7;
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x414e01;
    exit(1);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_system_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_65b_badSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041c807,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_65b_goodG2BSink(undefined8 uParm1)

{
  execlp("sh","sh",&DAT_0041c807,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_64b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_64b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_52c_badSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041c80f,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_52c_goodG2BSink(undefined8 uParm1)

{
  execl("/bin/sh","/bin/sh",&DAT_0041c80f,uParm1,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_54_bad(void)

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
    local_20 = fopen("/tmp/file.txt","r");
    if (local_20 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_18 + (long)local_10) = 0;
      }
      fclose(local_20);
    }
  }
  CWE78_OS_Command_Injection__char_file_execl_54b_badSink(local_10);
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
  uStack128 = 0x4150ba;
  CWE78_OS_Command_Injection__char_file_execl_54b_goodG2BSink(local_10);
  return;
}


void CWE78_OS_Command_Injection__char_file_execl_54_good(void)

{
  goodG2B();
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_14_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  FILE *local_20;
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
  if (globalFive == 5) {
    local_18 = strlen((char *)local_10);
    if (1 < 100 - local_18) {
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar1 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar1 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
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
    uStack144 = 0x415218;
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar4 + 4));
  }
  uStack144 = 0x41525a;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x415271;
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
  uStack144 = 0x4152f3;
  local_18 = popen(local_10,"w");
  if (local_18 != (FILE *)0x0) {
    uStack144 = 0x41530a;
    pclose(local_18);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_53c_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_53d_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_53c_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_execlp_53d_goodG2BSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE78_OS_Command_Injection__char_file_popen_32_bad(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined8 *local_48;
  FILE *local_40;
  undefined8 *local_38;
  FILE *local_30;
  size_t local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_48;
  local_18 = &local_48;
  local_b8 = 0x20736c;
  lVar2 = 0xb;
  puVar3 = local_b0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_48 = &local_b8;
  local_20 = local_48;
  local_28 = strlen((char *)local_48);
  if (1 < 100 - local_28) {
    local_30 = fopen("/tmp/file.txt","r");
    if (local_30 != (FILE *)0x0) {
      pcVar1 = fgets((char *)((long)local_20 + local_28),100 - (int)local_28,local_30);
      if (pcVar1 == (char *)0x0) {
        printLine("fgets() failed");
        *(undefined *)(local_28 + (long)local_20) = 0;
      }
      fclose(local_30);
    }
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


void CWE78_OS_Command_Injection__char_file_popen_32_good(void)

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


void CWE78_OS_Command_Injection__char_file_execlp_08_bad(undefined8 uParm1,undefined8 uParm2)

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
      local_20 = fopen("/tmp/file.txt","r");
      if (local_20 != (FILE *)0x0) {
        pcVar2 = fgets((char *)((long)local_10 + local_18),100 - (int)local_18,local_20);
        if (pcVar2 == (char *)0x0) {
          printLine("fgets() failed");
          *(undefined *)(local_18 + (long)local_10) = 0;
        }
        fclose(local_20);
      }
    }
  }
  execlp("sh","sh",&DAT_0041c8af,local_10,0);
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
  execlp("sh","sh",&DAT_0041c8af,local_10,0);
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
  execlp("sh","sh",&DAT_0041c8af,local_10,0);
  return;
}


void CWE78_OS_Command_Injection__char_file_execlp_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE78_OS_Command_Injection__char_file_system_54b_badSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_54c_badSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_system_54b_goodG2BSink(undefined8 uParm1)

{
  CWE78_OS_Command_Injection__char_file_system_54c_goodG2BSink(uParm1);
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_67b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE78_OS_Command_Injection__char_file_popen_67b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"w");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
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
  printf((char *)(double)fParm1,&DAT_0041c8e9);
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
  printf(pcParm1,&DAT_0041c906);
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
    __isoc99_sscanf(lVar1,&DAT_0041c914,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0041c91c,&local_14);
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

