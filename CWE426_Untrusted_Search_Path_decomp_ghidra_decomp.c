
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00610ff8;
  if (PTR___gmon_start___00610ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_004009b0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00611010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00611018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00611020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00611028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00611030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00611038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00611040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_00611048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00611050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00611058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00611060)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00611068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pclose_00611070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00611078)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00611080)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00611088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00611090)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00611098)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006110a0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006110a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006110b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006110b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_popen_006110c0)();
  return pFVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006110c8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006110d0)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00610ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400b97) */
/* WARNING: Removing unreachable block (ram,0x00400ba1) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400bd4) */
/* WARNING: Removing unreachable block (ram,0x00400bde) */

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


/* WARNING: Removing unreachable block (ram,0x00400c24) */
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
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_44_good();");
  CWE426_Untrusted_Search_Path__char_system_44_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_68_good();");
  CWE426_Untrusted_Search_Path__char_popen_68_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_15_good();");
  CWE426_Untrusted_Search_Path__char_popen_15_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_21_good();");
  CWE426_Untrusted_Search_Path__char_popen_21_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_08_good();");
  CWE426_Untrusted_Search_Path__char_system_08_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_09_good();");
  CWE426_Untrusted_Search_Path__char_popen_09_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_03_good();");
  CWE426_Untrusted_Search_Path__char_system_03_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_09_good();");
  CWE426_Untrusted_Search_Path__char_system_09_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_01_good();");
  CWE426_Untrusted_Search_Path__char_system_01_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_61_good();");
  CWE426_Untrusted_Search_Path__char_system_61_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_67_good();");
  CWE426_Untrusted_Search_Path__char_system_67_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_07_good();");
  CWE426_Untrusted_Search_Path__char_popen_07_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_22_good();");
  CWE426_Untrusted_Search_Path__char_system_22_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_07_good();");
  CWE426_Untrusted_Search_Path__char_system_07_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_11_good();");
  CWE426_Untrusted_Search_Path__char_system_11_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_15_good();");
  CWE426_Untrusted_Search_Path__char_system_15_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_05_good();");
  CWE426_Untrusted_Search_Path__char_popen_05_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_31_good();");
  CWE426_Untrusted_Search_Path__char_popen_31_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_04_good();");
  CWE426_Untrusted_Search_Path__char_system_04_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_61_good();");
  CWE426_Untrusted_Search_Path__char_popen_61_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_18_good();");
  CWE426_Untrusted_Search_Path__char_system_18_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_02_good();");
  CWE426_Untrusted_Search_Path__char_popen_02_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_11_good();");
  CWE426_Untrusted_Search_Path__char_popen_11_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_32_good();");
  CWE426_Untrusted_Search_Path__char_popen_32_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_53_good();");
  CWE426_Untrusted_Search_Path__char_system_53_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_12_good();");
  CWE426_Untrusted_Search_Path__char_popen_12_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_18_good();");
  CWE426_Untrusted_Search_Path__char_popen_18_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_06_good();");
  CWE426_Untrusted_Search_Path__char_system_06_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_05_good();");
  CWE426_Untrusted_Search_Path__char_system_05_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_08_good();");
  CWE426_Untrusted_Search_Path__char_popen_08_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_34_good();");
  CWE426_Untrusted_Search_Path__char_popen_34_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_42_good();");
  CWE426_Untrusted_Search_Path__char_popen_42_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_54_good();");
  CWE426_Untrusted_Search_Path__char_system_54_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_53_good();");
  CWE426_Untrusted_Search_Path__char_popen_53_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_42_good();");
  CWE426_Untrusted_Search_Path__char_system_42_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_64_good();");
  CWE426_Untrusted_Search_Path__char_system_64_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_14_good();");
  CWE426_Untrusted_Search_Path__char_popen_14_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_21_good();");
  CWE426_Untrusted_Search_Path__char_system_21_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_16_good();");
  CWE426_Untrusted_Search_Path__char_popen_16_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_66_good();");
  CWE426_Untrusted_Search_Path__char_popen_66_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_65_good();");
  CWE426_Untrusted_Search_Path__char_popen_65_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_65_good();");
  CWE426_Untrusted_Search_Path__char_system_65_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_04_good();");
  CWE426_Untrusted_Search_Path__char_popen_04_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_12_good();");
  CWE426_Untrusted_Search_Path__char_system_12_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_41_good();");
  CWE426_Untrusted_Search_Path__char_popen_41_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_13_good();");
  CWE426_Untrusted_Search_Path__char_popen_13_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_17_good();");
  CWE426_Untrusted_Search_Path__char_popen_17_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_17_good();");
  CWE426_Untrusted_Search_Path__char_system_17_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_67_good();");
  CWE426_Untrusted_Search_Path__char_popen_67_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_10_good();");
  CWE426_Untrusted_Search_Path__char_popen_10_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_52_good();");
  CWE426_Untrusted_Search_Path__char_system_52_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_45_good();");
  CWE426_Untrusted_Search_Path__char_popen_45_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_44_good();");
  CWE426_Untrusted_Search_Path__char_popen_44_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_64_good();");
  CWE426_Untrusted_Search_Path__char_popen_64_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_45_good();");
  CWE426_Untrusted_Search_Path__char_system_45_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_22_good();");
  CWE426_Untrusted_Search_Path__char_popen_22_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_34_good();");
  CWE426_Untrusted_Search_Path__char_system_34_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_66_good();");
  CWE426_Untrusted_Search_Path__char_system_66_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_63_good();");
  CWE426_Untrusted_Search_Path__char_popen_63_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_68_good();");
  CWE426_Untrusted_Search_Path__char_system_68_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_02_good();");
  CWE426_Untrusted_Search_Path__char_system_02_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_51_good();");
  CWE426_Untrusted_Search_Path__char_popen_51_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_41_good();");
  CWE426_Untrusted_Search_Path__char_system_41_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_10_good();");
  CWE426_Untrusted_Search_Path__char_system_10_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_32_good();");
  CWE426_Untrusted_Search_Path__char_system_32_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_06_good();");
  CWE426_Untrusted_Search_Path__char_popen_06_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_52_good();");
  CWE426_Untrusted_Search_Path__char_popen_52_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_16_good();");
  CWE426_Untrusted_Search_Path__char_system_16_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_14_good();");
  CWE426_Untrusted_Search_Path__char_system_14_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_13_good();");
  CWE426_Untrusted_Search_Path__char_system_13_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_31_good();");
  CWE426_Untrusted_Search_Path__char_system_31_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_03_good();");
  CWE426_Untrusted_Search_Path__char_popen_03_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_51_good();");
  CWE426_Untrusted_Search_Path__char_system_51_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_01_good();");
  CWE426_Untrusted_Search_Path__char_popen_01_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_54_good();");
  CWE426_Untrusted_Search_Path__char_popen_54_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_63_good();");
  CWE426_Untrusted_Search_Path__char_system_63_good();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_44_bad();");
  CWE426_Untrusted_Search_Path__char_system_44_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_68_bad();");
  CWE426_Untrusted_Search_Path__char_popen_68_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_15_bad();");
  CWE426_Untrusted_Search_Path__char_popen_15_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_21_bad();");
  CWE426_Untrusted_Search_Path__char_popen_21_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_08_bad();");
  CWE426_Untrusted_Search_Path__char_system_08_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_09_bad();");
  CWE426_Untrusted_Search_Path__char_popen_09_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_03_bad();");
  CWE426_Untrusted_Search_Path__char_system_03_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_09_bad();");
  CWE426_Untrusted_Search_Path__char_system_09_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_01_bad();");
  CWE426_Untrusted_Search_Path__char_system_01_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_61_bad();");
  CWE426_Untrusted_Search_Path__char_system_61_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_67_bad();");
  CWE426_Untrusted_Search_Path__char_system_67_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_07_bad();");
  CWE426_Untrusted_Search_Path__char_popen_07_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_22_bad();");
  CWE426_Untrusted_Search_Path__char_system_22_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_07_bad();");
  CWE426_Untrusted_Search_Path__char_system_07_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_11_bad();");
  CWE426_Untrusted_Search_Path__char_system_11_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_15_bad();");
  CWE426_Untrusted_Search_Path__char_system_15_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_05_bad();");
  CWE426_Untrusted_Search_Path__char_popen_05_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_31_bad();");
  CWE426_Untrusted_Search_Path__char_popen_31_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_04_bad();");
  CWE426_Untrusted_Search_Path__char_system_04_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_61_bad();");
  CWE426_Untrusted_Search_Path__char_popen_61_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_18_bad();");
  CWE426_Untrusted_Search_Path__char_system_18_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_02_bad();");
  CWE426_Untrusted_Search_Path__char_popen_02_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_11_bad();");
  CWE426_Untrusted_Search_Path__char_popen_11_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_32_bad();");
  CWE426_Untrusted_Search_Path__char_popen_32_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_53_bad();");
  CWE426_Untrusted_Search_Path__char_system_53_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_12_bad();");
  CWE426_Untrusted_Search_Path__char_popen_12_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_18_bad();");
  CWE426_Untrusted_Search_Path__char_popen_18_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_06_bad();");
  CWE426_Untrusted_Search_Path__char_system_06_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_05_bad();");
  CWE426_Untrusted_Search_Path__char_system_05_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_08_bad();");
  CWE426_Untrusted_Search_Path__char_popen_08_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_34_bad();");
  CWE426_Untrusted_Search_Path__char_popen_34_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_42_bad();");
  CWE426_Untrusted_Search_Path__char_popen_42_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_54_bad();");
  CWE426_Untrusted_Search_Path__char_system_54_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_53_bad();");
  CWE426_Untrusted_Search_Path__char_popen_53_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_42_bad();");
  CWE426_Untrusted_Search_Path__char_system_42_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_64_bad();");
  CWE426_Untrusted_Search_Path__char_system_64_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_14_bad();");
  CWE426_Untrusted_Search_Path__char_popen_14_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_21_bad();");
  CWE426_Untrusted_Search_Path__char_system_21_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_16_bad();");
  CWE426_Untrusted_Search_Path__char_popen_16_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_66_bad();");
  CWE426_Untrusted_Search_Path__char_popen_66_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_65_bad();");
  CWE426_Untrusted_Search_Path__char_popen_65_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_65_bad();");
  CWE426_Untrusted_Search_Path__char_system_65_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_04_bad();");
  CWE426_Untrusted_Search_Path__char_popen_04_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_12_bad();");
  CWE426_Untrusted_Search_Path__char_system_12_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_41_bad();");
  CWE426_Untrusted_Search_Path__char_popen_41_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_13_bad();");
  CWE426_Untrusted_Search_Path__char_popen_13_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_17_bad();");
  CWE426_Untrusted_Search_Path__char_popen_17_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_17_bad();");
  CWE426_Untrusted_Search_Path__char_system_17_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_67_bad();");
  CWE426_Untrusted_Search_Path__char_popen_67_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_10_bad();");
  CWE426_Untrusted_Search_Path__char_popen_10_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_52_bad();");
  CWE426_Untrusted_Search_Path__char_system_52_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_45_bad();");
  CWE426_Untrusted_Search_Path__char_popen_45_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_44_bad();");
  CWE426_Untrusted_Search_Path__char_popen_44_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_64_bad();");
  CWE426_Untrusted_Search_Path__char_popen_64_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_45_bad();");
  CWE426_Untrusted_Search_Path__char_system_45_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_22_bad();");
  CWE426_Untrusted_Search_Path__char_popen_22_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_34_bad();");
  CWE426_Untrusted_Search_Path__char_system_34_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_66_bad();");
  CWE426_Untrusted_Search_Path__char_system_66_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_63_bad();");
  CWE426_Untrusted_Search_Path__char_popen_63_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_68_bad();");
  CWE426_Untrusted_Search_Path__char_system_68_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_02_bad();");
  CWE426_Untrusted_Search_Path__char_system_02_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_51_bad();");
  CWE426_Untrusted_Search_Path__char_popen_51_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_41_bad();");
  CWE426_Untrusted_Search_Path__char_system_41_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_10_bad();");
  CWE426_Untrusted_Search_Path__char_system_10_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_32_bad();");
  CWE426_Untrusted_Search_Path__char_system_32_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_06_bad();");
  CWE426_Untrusted_Search_Path__char_popen_06_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_52_bad();");
  CWE426_Untrusted_Search_Path__char_popen_52_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_16_bad();");
  CWE426_Untrusted_Search_Path__char_system_16_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_14_bad();");
  CWE426_Untrusted_Search_Path__char_system_14_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_13_bad();");
  CWE426_Untrusted_Search_Path__char_system_13_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_31_bad();");
  CWE426_Untrusted_Search_Path__char_system_31_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_03_bad();");
  CWE426_Untrusted_Search_Path__char_popen_03_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_51_bad();");
  CWE426_Untrusted_Search_Path__char_system_51_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_01_bad();");
  CWE426_Untrusted_Search_Path__char_popen_01_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_popen_54_bad();");
  CWE426_Untrusted_Search_Path__char_popen_54_bad();
  printLine("Calling CWE426_Untrusted_Search_Path__char_system_63_bad();");
  CWE426_Untrusted_Search_Path__char_system_63_bad();
  return 0;
}


undefined4 * badSource(undefined4 *puParm1)

{
  *puParm1 = 0x2d20736c;
  *(undefined2 *)(puParm1 + 1) = 0x616c;
  *(undefined *)((long)puParm1 + 6) = 0;
  return puParm1;
}


void CWE426_Untrusted_Search_Path__char_system_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
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
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


undefined8 * goodG2BSource(undefined8 *puParm1)

{
  *puParm1 = 0x6e69622f7273752f;
  puParm1[1] = 0x616c2d20736c2f;
  return puParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
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
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_42_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (staticFalse == 0) {
    local_90[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar2 + 4));
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (staticTrue != 0) {
    local_90[0] = 0x616c2d20736c2f;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_41_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_41_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_popen_41_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_41_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_popen_41_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_41_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_53b_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_53c_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_53b_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_53c_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_22_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE426_Untrusted_Search_Path__char_system_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE426_Untrusted_Search_Path__char_system_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE426_Untrusted_Search_Path__char_system_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (GLOBAL_CONST_FIVE == 5) {
    local_90[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar2 + 4));
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (GLOBAL_CONST_FIVE == 5) {
    local_90[0] = 0x616c2d20736c2f;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_52c_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_52c_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_68b_badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE426_Untrusted_Search_Path__char_system_68_badData);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_68b_goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE426_Untrusted_Search_Path__char_system_68_goodG2BData);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_63b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_63b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_68_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  CWE426_Untrusted_Search_Path__char_popen_68_badData = &local_78;
  local_10 = CWE426_Untrusted_Search_Path__char_popen_68_badData;
  CWE426_Untrusted_Search_Path__char_popen_68b_badSink
            (puVar2,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  CWE426_Untrusted_Search_Path__char_popen_68_goodG2BData = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  local_20 = CWE426_Untrusted_Search_Path__char_popen_68_goodG2BData;
  CWE426_Untrusted_Search_Path__char_popen_68b_goodG2BSink
            (puVar2,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_68_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  FILE *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_98;
  local_18 = local_28;
  local_10 = local_28;
  local_20 = popen((char *)local_28,"wb");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  FILE *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_a8 = 0;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_38 = &local_a8;
  local_a0[0] = 0x616c2d20736c2f;
  local_28 = local_38;
  local_20 = local_38;
  local_30 = popen((char *)local_38,"wb");
  if (local_30 != (FILE *)0x0) {
    pclose(local_30);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_34_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_66b_badSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_66b_goodG2BSink(long lParm1)

{
  FILE *__stream;
  
  __stream = popen(*(char **)(lParm1 + 0x10),"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54d_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_54e_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54d_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_54e_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_53_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_53b_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_system_53b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_53_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_05_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (staticFalse == 0) {
    local_80[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar3 + 4));
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (staticTrue != 0) {
    local_80[0] = 0x616c2d20736c2f;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_41_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_41_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_41_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_41_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_system_41_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_41_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_53b_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_53c_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_53b_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_53c_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_53_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_popen_53b_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_popen_53b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_53_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_13_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (GLOBAL_CONST_FIVE == 5) {
    local_80[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar3 + 4));
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (GLOBAL_CONST_FIVE == 5) {
    local_80[0] = 0x616c2d20736c2f;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_52c_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_52c_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


undefined4 * badSource(undefined4 *puParm1)

{
  if (badStatic != 0) {
    *puParm1 = 0x2d20736c;
    *(undefined2 *)(puParm1 + 1) = 0x616c;
    *(undefined *)((long)puParm1 + 6) = 0;
  }
  return puParm1;
}


void CWE426_Untrusted_Search_Path__char_popen_21_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
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
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


undefined8 * goodG2B1Source(undefined8 *puParm1)

{
  if (goodG2B1Static == 0) {
    *puParm1 = 0x6e69622f7273752f;
    puParm1[1] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string");
  }
  return puParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
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
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


undefined8 * goodG2B2Source(undefined8 *puParm1)

{
  if (goodG2B2Static != 0) {
    *puParm1 = 0x6e69622f7273752f;
    puParm1[1] = 0x616c2d20736c2f;
  }
  return puParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
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
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_63b_badSink(char **ppcParm1)

{
  int iVar1;
  
  iVar1 = system(*ppcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_63b_goodG2BSink(char **ppcParm1)

{
  int iVar1;
  
  iVar1 = system(*ppcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_63_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_popen_63b_badSink
            (&local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20 [2];
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20[0] = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_popen_63b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_63_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_68_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  CWE426_Untrusted_Search_Path__char_system_68_badData = &local_78;
  local_10 = CWE426_Untrusted_Search_Path__char_system_68_badData;
  CWE426_Untrusted_Search_Path__char_system_68b_badSink
            (puVar2,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  CWE426_Untrusted_Search_Path__char_system_68_goodG2BData = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  local_20 = CWE426_Untrusted_Search_Path__char_system_68_goodG2BData;
  CWE426_Untrusted_Search_Path__char_system_68b_goodG2BSink
            (puVar2,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_68_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_34_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_28 = &local_98;
  local_18 = local_28;
  local_10 = local_28;
  iVar1 = system((char *)local_28);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_a8 = 0;
  lVar2 = 0xb;
  puVar3 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_38 = &local_a8;
  local_a0[0] = 0x616c2d20736c2f;
  local_28 = local_38;
  local_20 = local_38;
  iVar1 = system((char *)local_38);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_34_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_66_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined local_38 [16];
  undefined8 *local_28;
  undefined8 *local_10;
  
  local_a8 = 0;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_a8;
  local_10 = local_28;
  CWE426_Untrusted_Search_Path__char_system_66b_badSink
            (local_38,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  undefined8 *local_20;
  
  local_b8 = 0;
  lVar1 = 0xb;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_38 = &local_b8;
  local_b0[0] = 0x616c2d20736c2f;
  local_20 = local_38;
  CWE426_Untrusted_Search_Path__char_system_66b_goodG2BSink
            (local_48,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_66_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_18_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_66b_badSink(long lParm1)

{
  int iVar1;
  
  iVar1 = system(*(char **)(lParm1 + 0x10));
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_66b_goodG2BSink(long lParm1)

{
  int iVar1;
  
  iVar1 = system(*(char **)(lParm1 + 0x10));
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54e_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54e_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_66_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined local_38 [16];
  undefined8 *local_28;
  undefined8 *local_10;
  
  local_a8 = 0;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_a8;
  local_10 = local_28;
  CWE426_Untrusted_Search_Path__char_popen_66b_badSink
            (local_38,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined local_48 [16];
  undefined8 *local_38;
  undefined8 *local_20;
  
  local_b8 = 0;
  lVar1 = 0xb;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_38 = &local_b8;
  local_b0[0] = 0x616c2d20736c2f;
  local_20 = local_38;
  CWE426_Untrusted_Search_Path__char_popen_66b_goodG2BSink
            (local_48,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_66_good(void)

{
  goodG2B();
  return;
}


undefined4 * badSource(undefined4 *puParm1)

{
  if (badStatic != 0) {
    *puParm1 = 0x2d20736c;
    *(undefined2 *)(puParm1 + 1) = 0x616c;
    *(undefined *)((long)puParm1 + 6) = 0;
  }
  return puParm1;
}


void CWE426_Untrusted_Search_Path__char_system_21_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
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
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


undefined8 * goodG2B1Source(undefined8 *puParm1)

{
  if (goodG2B1Static == 0) {
    *puParm1 = 0x6e69622f7273752f;
    puParm1[1] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string");
  }
  return puParm1;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
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
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


undefined8 * goodG2B2Source(undefined8 *puParm1)

{
  if (goodG2B2Static != 0) {
    *puParm1 = 0x6e69622f7273752f;
    puParm1[1] = 0x616c2d20736c2f;
  }
  return puParm1;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
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
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_03_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_65b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_65b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_52b_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_52c_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_52b_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_52c_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_63_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_63b_badSink
            (&local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20 [2];
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20[0] = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_system_63b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_63_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  iVar1 = globalReturnsTrueOrFalse(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  else {
    *(undefined4 *)local_20 = 0x2d20736c;
    *(undefined2 *)((long)local_20 + 4) = 0x616c;
    *(undefined *)((long)local_20 + 6) = 0;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  iVar1 = globalReturnsTrueOrFalse(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  else {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_12_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_18_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_18_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_54b_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_system_54b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = globalReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    *(undefined4 *)local_10 = 0x2d20736c;
    *(undefined2 *)((long)local_10 + 4) = 0x616c;
    *(undefined *)((long)local_10 + 6) = 0;
  }
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  iVar1 = globalReturnsFalse(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  iVar1 = globalReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_02_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_01_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_52_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_52b_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_system_52b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_52_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_51_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_popen_51b_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_popen_51b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_51_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_16_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_16_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_10_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (globalFalse == 0) {
    local_80[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar3 + 4));
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (globalTrue != 0) {
    local_80[0] = 0x616c2d20736c2f;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
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
             CWE426_Untrusted_Search_Path__char_popen_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"wb");
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
  
  local_88 = 0;
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
             CWE426_Untrusted_Search_Path__char_popen_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_61_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_67_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_88;
  local_10 = local_18;
  CWE426_Untrusted_Search_Path__char_system_67b_badSink
            (local_18,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_20 = local_28;
  CWE426_Untrusted_Search_Path__char_system_67b_goodG2BSink
            (local_28,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_67_good(void)

{
  goodG2B();
  return;
}


undefined4 * CWE426_Untrusted_Search_Path__char_system_22_badSource(undefined4 *puParm1)

{
  if (CWE426_Untrusted_Search_Path__char_system_22_badGlobal != 0) {
    *puParm1 = 0x2d20736c;
    *(undefined2 *)(puParm1 + 1) = 0x616c;
    *(undefined *)((long)puParm1 + 6) = 0;
  }
  return puParm1;
}


undefined8 * CWE426_Untrusted_Search_Path__char_system_22_goodG2B1Source(undefined8 *puParm1)

{
  if (CWE426_Untrusted_Search_Path__char_system_22_goodG2B1Global == 0) {
    *puParm1 = 0x6e69622f7273752f;
    puParm1[1] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string");
  }
  return puParm1;
}


undefined8 * CWE426_Untrusted_Search_Path__char_system_22_goodG2B2Source(undefined8 *puParm1)

{
  if (CWE426_Untrusted_Search_Path__char_system_22_goodG2B2Global != 0) {
    *puParm1 = 0x6e69622f7273752f;
    puParm1[1] = 0x616c2d20736c2f;
  }
  return puParm1;
}


void CWE426_Untrusted_Search_Path__char_popen_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_98;
  iVar1 = globalReturnsTrueOrFalse(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  else {
    *(undefined4 *)local_20 = 0x2d20736c;
    *(undefined2 *)((long)local_20 + 4) = 0x616c;
    *(undefined *)((long)local_20 + 6) = 0;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_98;
  iVar1 = globalReturnsTrueOrFalse(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  else {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_12_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_01_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_01_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (staticFive == 5) {
    local_90[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar2 + 4));
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (staticFive == 5) {
    local_90[0] = 0x616c2d20736c2f;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_53d_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_53d_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54c_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_54d_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54c_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_54d_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_51_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_51b_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_system_51b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_51_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_51b_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_51b_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (globalFalse == 0) {
    local_90[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar2 + 4));
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (globalTrue != 0) {
    local_90[0] = 0x616c2d20736c2f;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_61_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
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
             CWE426_Untrusted_Search_Path__char_system_61b_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  
  local_78 = 0;
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
             CWE426_Untrusted_Search_Path__char_system_61b_goodG2BSource
                       (local_10,uParm2,(undefined4 *)((long)puVar3 + 4));
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_61_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (GLOBAL_CONST_FALSE == 0) {
    local_90[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar2 + 4));
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (GLOBAL_CONST_TRUE != 0) {
    local_90[0] = 0x616c2d20736c2f;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE426_Untrusted_Search_Path__char_system_45_badData);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_45_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  CWE426_Untrusted_Search_Path__char_system_45_badData = &local_78;
  local_10 = CWE426_Untrusted_Search_Path__char_system_45_badData;
  badSink(puVar2,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2BSink(void)

{
  int iVar1;
  
  iVar1 = system(CWE426_Untrusted_Search_Path__char_system_45_goodG2BData);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  CWE426_Untrusted_Search_Path__char_system_45_goodG2BData = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  local_20 = CWE426_Untrusted_Search_Path__char_system_45_goodG2BData;
  goodG2BSink(puVar2,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_45_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_06_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (0 < iVar1) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x004056dc) */

void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (0 < iVar1) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (0 < iVar1) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE426_Untrusted_Search_Path__char_system_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54b_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_54c_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54b_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_54c_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_64b_badSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_64b_goodG2BSink(char **ppcParm1)

{
  FILE *__stream;
  
  __stream = popen(*ppcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_53c_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_53d_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_53c_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_53d_goodG2BSink(uParm1);
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


void CWE426_Untrusted_Search_Path__char_popen_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
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
    *(undefined4 *)local_10 = 0x2d20736c;
    *(undefined2 *)((long)local_10 + 4) = 0x616c;
    *(undefined *)((long)local_10 + 6) = 0;
  }
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_98;
  iVar1 = staticReturnsFalse(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_98;
  iVar1 = staticReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (globalFive == 5) {
    local_90[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar2 + 4));
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  if (globalFive == 5) {
    local_90[0] = 0x616c2d20736c2f;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined4 * CWE426_Untrusted_Search_Path__char_system_61b_badSource(undefined4 *puParm1)

{
  *puParm1 = 0x2d20736c;
  *(undefined2 *)(puParm1 + 1) = 0x616c;
  *(undefined *)((long)puParm1 + 6) = 0;
  return puParm1;
}


undefined8 * CWE426_Untrusted_Search_Path__char_system_61b_goodG2BSource(undefined8 *puParm1)

{
  *puParm1 = 0x6e69622f7273752f;
  puParm1[1] = 0x616c2d20736c2f;
  return puParm1;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE426_Untrusted_Search_Path__char_popen_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  undefined8 *local_38;
  FILE *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_a8 = 0;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_38 = &local_a8;
  local_28 = local_38;
  local_20 = local_38;
  local_30 = popen((char *)local_38,"wb");
  if (local_30 != (FILE *)0x0) {
    pclose(local_30);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
  undefined8 local_b0 [13];
  undefined8 *local_48;
  FILE *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 **local_28;
  undefined8 **local_20;
  
  local_20 = &local_48;
  local_28 = &local_48;
  local_b8 = 0;
  lVar1 = 0xb;
  puVar2 = local_b0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_48 = &local_b8;
  local_b0[0] = 0x616c2d20736c2f;
  local_38 = local_48;
  local_30 = local_48;
  local_40 = popen((char *)local_48,"wb");
  if (local_40 != (FILE *)0x0) {
    pclose(local_40);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_32_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54b_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_54c_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54b_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_54c_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_67b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_67b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_popen_54b_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_popen_54b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_64b_badSink(char **ppcParm1)

{
  int iVar1;
  
  iVar1 = system(*ppcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_64b_goodG2BSink(char **ppcParm1)

{
  int iVar1;
  
  iVar1 = system(*ppcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_64_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_popen_64b_badSink
            (&local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20 [2];
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20[0] = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_popen_64b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_64_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_51b_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_51b_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_14_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (globalFive == 5) {
    local_80[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar3 + 4));
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (globalFive == 5) {
    local_80[0] = 0x616c2d20736c2f;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE426_Untrusted_Search_Path__char_system_32_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_30 = &local_98;
  local_28 = local_30;
  local_20 = local_30;
  iVar1 = system((char *)local_30);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined8 local_a0 [12];
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 **local_28;
  undefined8 **local_20;
  
  local_20 = &local_40;
  local_28 = &local_40;
  local_a8 = 0;
  lVar2 = 0xb;
  puVar3 = local_a0;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_40 = &local_a8;
  local_a0[0] = 0x616c2d20736c2f;
  local_38 = local_40;
  local_30 = local_40;
  iVar1 = system((char *)local_40);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_32_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004065bf) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_18 = local_20;
  local_10 = local_20;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_a8;
  undefined8 local_a0 [13];
  FILE *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_a8 = 0;
  lVar1 = 0xb;
  puVar2 = local_a0;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_30 = &local_a8;
  local_a0[0] = 0x616c2d20736c2f;
  local_28 = local_30;
  local_20 = local_30;
  local_38 = popen((char *)local_30,"wb");
  if (local_38 != (FILE *)0x0) {
    pclose(local_38);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_31_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_53d_badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_53d_goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


undefined4 * CWE426_Untrusted_Search_Path__char_popen_61b_badSource(undefined4 *puParm1)

{
  *puParm1 = 0x2d20736c;
  *(undefined2 *)(puParm1 + 1) = 0x616c;
  *(undefined *)((long)puParm1 + 6) = 0;
  return puParm1;
}


undefined8 * CWE426_Untrusted_Search_Path__char_popen_61b_goodG2BSource(undefined8 *puParm1)

{
  *puParm1 = 0x6e69622f7273752f;
  puParm1[1] = 0x616c2d20736c2f;
  return puParm1;
}


void CWE426_Untrusted_Search_Path__char_system_67b_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_67b_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_67_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_88;
  local_10 = local_18;
  CWE426_Untrusted_Search_Path__char_popen_67b_badSink
            (local_18,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_20 = local_28;
  CWE426_Untrusted_Search_Path__char_popen_67b_goodG2BSink
            (local_28,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_67_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_64_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_system_64b_badSink
            (&local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20 [2];
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20[0] = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_system_64b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_system_64_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_16_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406ce1) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined4 * CWE426_Untrusted_Search_Path__char_popen_22_badSource(undefined4 *puParm1)

{
  if (CWE426_Untrusted_Search_Path__char_popen_22_badGlobal != 0) {
    *puParm1 = 0x2d20736c;
    *(undefined2 *)(puParm1 + 1) = 0x616c;
    *(undefined *)((long)puParm1 + 6) = 0;
  }
  return puParm1;
}


undefined8 * CWE426_Untrusted_Search_Path__char_popen_22_goodG2B1Source(undefined8 *puParm1)

{
  if (CWE426_Untrusted_Search_Path__char_popen_22_goodG2B1Global == 0) {
    *puParm1 = 0x6e69622f7273752f;
    puParm1[1] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string");
  }
  return puParm1;
}


undefined8 * CWE426_Untrusted_Search_Path__char_popen_22_goodG2B2Source(undefined8 *puParm1)

{
  if (CWE426_Untrusted_Search_Path__char_popen_22_goodG2B2Global != 0) {
    *puParm1 = 0x6e69622f7273752f;
    puParm1[1] = 0x616c2d20736c2f;
  }
  return puParm1;
}


void badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE426_Untrusted_Search_Path__char_popen_45_badData,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_45_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  CWE426_Untrusted_Search_Path__char_popen_45_badData = &local_78;
  local_10 = CWE426_Untrusted_Search_Path__char_popen_45_badData;
  badSink(puVar2,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE426_Untrusted_Search_Path__char_popen_45_goodG2BData,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  CWE426_Untrusted_Search_Path__char_popen_45_goodG2BData = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  local_20 = CWE426_Untrusted_Search_Path__char_popen_45_goodG2BData;
  goodG2BSink(puVar2,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_45_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_04_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (0 < iVar1) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x004070b1) */

void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (0 < iVar1) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (0 < iVar1) {
    return;
  }
  printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE426_Untrusted_Search_Path__char_system_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE426_Untrusted_Search_Path__char_popen_65b_badSink;
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_88;
  CWE426_Untrusted_Search_Path__char_popen_65b_badSink(local_18,uParm2,local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  code *local_20;
  
  local_20 = CWE426_Untrusted_Search_Path__char_popen_65b_goodG2BSink;
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_popen_65b_goodG2BSink(local_28,0x6e69622f7273752f,local_28);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_65_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined4 * badSource(undefined4 *puParm1)

{
  *puParm1 = 0x2d20736c;
  *(undefined2 *)(puParm1 + 1) = 0x616c;
  *(undefined *)((long)puParm1 + 6) = 0;
  return puParm1;
}


void CWE426_Untrusted_Search_Path__char_popen_42_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
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
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


undefined8 * goodG2BSource(undefined8 *puParm1)

{
  *puParm1 = 0x6e69622f7273752f;
  puParm1[1] = 0x616c2d20736c2f;
  return puParm1;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
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
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_42_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_22_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  CWE426_Untrusted_Search_Path__char_popen_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE426_Untrusted_Search_Path__char_popen_22_badSource
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"wb");
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
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  CWE426_Untrusted_Search_Path__char_popen_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE426_Untrusted_Search_Path__char_popen_22_goodG2B1Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"wb");
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
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  CWE426_Untrusted_Search_Path__char_popen_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE426_Untrusted_Search_Path__char_popen_22_goodG2B2Source
                       (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  code *local_10;
  
  local_10 = CWE426_Untrusted_Search_Path__char_system_65b_badSink;
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_88;
  CWE426_Untrusted_Search_Path__char_system_65b_badSink(local_18,uParm2,local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  code *local_20;
  
  local_20 = CWE426_Untrusted_Search_Path__char_system_65b_goodG2BSink;
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_system_65b_goodG2BSink(local_28,0x6e69622f7273752f,local_28);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_65_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_15_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54d_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_54e_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54d_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_54e_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54e_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_54e_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_88;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  code *local_20;
  
  local_20 = goodG2BSink;
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  goodG2BSink(local_28,0x6e69622f7273752f,local_28);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_44_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_09_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (GLOBAL_CONST_FALSE == 0) {
    local_80[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar3 + 4));
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (GLOBAL_CONST_TRUE != 0) {
    local_80[0] = 0x616c2d20736c2f;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_53c_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_53d_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_53c_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_53d_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  FILE *local_20;
  undefined8 *local_18;
  int local_c;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_88;
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  local_20 = popen((char *)local_18,"wb");
  if (local_20 != (FILE *)0x0) {
    pclose(local_20);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [12];
  FILE *local_30;
  undefined8 *local_28;
  int local_1c;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_98;
  local_1c = 0;
  while (local_1c < 1) {
    local_90[0] = 0x616c2d20736c2f;
    local_1c = local_1c + 1;
  }
  local_30 = popen((char *)local_28,"wb");
  if (local_30 != (FILE *)0x0) {
    pclose(local_30);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_17_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  code *local_10;
  
  local_10 = badSink;
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_18 = &local_88;
  badSink(local_18,uParm2,local_18);
  return;
}


void goodG2BSink(char *pcParm1)

{
  FILE *__stream;
  
  __stream = popen(pcParm1,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  code *local_20;
  
  local_20 = goodG2BSink;
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_28 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  goodG2BSink(local_28,0x6e69622f7273752f,local_28);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_44_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
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
    *(undefined4 *)local_10 = 0x2d20736c;
    *(undefined2 *)((long)local_10 + 4) = 0x616c;
    *(undefined *)((long)local_10 + 6) = 0;
  }
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_98;
  iVar1 = globalReturnsFalse(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string");
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_98;
  iVar1 = globalReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [13];
  FILE *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_88;
  local_18 = popen((char *)local_10,"wb");
  if (local_18 != (FILE *)0x0) {
    pclose(local_18);
  }
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined8 local_90 [13];
  FILE *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar1 = 0xb;
  puVar2 = local_90;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = popen((char *)local_20,"wb");
  if (local_28 != (FILE *)0x0) {
    pclose(local_28);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_52b_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_52c_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_system_52b_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_system_52c_goodG2BSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_52_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar1 = 0xb;
  puVar2 = local_70;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_10 = &local_78;
  CWE426_Untrusted_Search_Path__char_popen_52b_badSink
            (local_10,uParm2,(undefined4 *)((long)puVar2 + 4));
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar1 = 0xb;
  puVar2 = local_80;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = 0;
  local_20 = &local_88;
  local_80[0] = 0x616c2d20736c2f;
  CWE426_Untrusted_Search_Path__char_popen_52b_goodG2BSink
            (local_20,0x6e69622f7273752f,(undefined4 *)((long)puVar2 + 4));
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_52_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_65b_badSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_65b_goodG2BSink(char *pcParm1)

{
  int iVar1;
  
  iVar1 = system(pcParm1);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_31_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  local_18 = local_20;
  local_10 = local_20;
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [12];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_30 = &local_98;
  local_90[0] = 0x616c2d20736c2f;
  local_28 = local_30;
  local_20 = local_30;
  iVar1 = system((char *)local_30);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_31_good(void)

{
  goodG2B();
  return;
}


void CWE426_Untrusted_Search_Path__char_system_17_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [13];
  undefined8 *local_18;
  int local_c;
  
  local_88 = 0;
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
    local_c = local_c + 1;
  }
  iVar1 = system((char *)local_18);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined8 local_90 [13];
  undefined8 *local_28;
  int local_1c;
  
  local_98 = 0;
  lVar2 = 0xb;
  puVar3 = local_90;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_28 = &local_98;
  local_1c = 0;
  while (local_1c < 1) {
    local_90[0] = 0x616c2d20736c2f;
    local_1c = local_1c + 1;
  }
  iVar1 = system((char *)local_28);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_17_good(void)

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


void CWE426_Untrusted_Search_Path__char_system_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = staticReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    *(undefined4 *)local_10 = 0x2d20736c;
    *(undefined2 *)((long)local_10 + 4) = 0x616c;
    *(undefined *)((long)local_10 + 6) = 0;
  }
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  iVar1 = staticReturnsFalse(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 == 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  iVar1 = staticReturnsTrue(puVar3,uParm2,(undefined4 *)((long)puVar3 + 4));
  if (iVar1 != 0) {
    *local_20 = 0x6e69622f7273752f;
    local_20[1] = 0x616c2d20736c2f;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_68b_badSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE426_Untrusted_Search_Path__char_popen_68_badData,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_68b_goodG2BSink(void)

{
  FILE *__stream;
  
  __stream = popen(CWE426_Untrusted_Search_Path__char_popen_68_goodG2BData,"wb");
  if (__stream != (FILE *)0x0) {
    pclose(__stream);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_07_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 local_70 [12];
  undefined8 *local_10;
  
  local_78 = 0;
  lVar2 = 0xb;
  puVar3 = local_70;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_10 = &local_78;
  iVar1 = system((char *)local_10);
  if (iVar1 < 1) {
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
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (staticFive == 5) {
    local_80[0] = 0x616c2d20736c2f;
  }
  else {
    printLine("Benign, fixed string",uParm2,(undefined4 *)((long)puVar3 + 4));
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80 [12];
  undefined8 *local_20;
  
  local_88 = 0;
  lVar2 = 0xb;
  puVar3 = local_80;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = 0;
  local_20 = &local_88;
  if (staticFive == 5) {
    local_80[0] = 0x616c2d20736c2f;
  }
  iVar1 = system((char *)local_20);
  if (iVar1 < 1) {
    printLine("command execution failed!");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}


void CWE426_Untrusted_Search_Path__char_system_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54c_badSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_54d_badSink(uParm1);
  return;
}


void CWE426_Untrusted_Search_Path__char_popen_54c_goodG2BSink(undefined8 uParm1)

{
  CWE426_Untrusted_Search_Path__char_popen_54d_goodG2BSink(uParm1);
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
  printf((char *)(double)fParm1,&DAT_0040bf2d);
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
  printf(pcParm1,&DAT_0040bf4a);
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
    __isoc99_sscanf(lVar1,&DAT_0040bf58,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0040bf60,&local_14);
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

