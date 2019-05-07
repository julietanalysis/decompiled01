
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00627ff8;
  if (PTR___gmon_start___00627ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400900(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00628010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00628018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00628020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00628028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00628030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00628038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00628040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00628048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00628050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00628058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00628060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00628068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00628070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00628078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00628080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00628088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00628090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00628098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006280a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006280a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006280b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006280b8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00627ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400ab7) */
/* WARNING: Removing unreachable block (ram,0x00400ac1) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400af4) */
/* WARNING: Removing unreachable block (ram,0x00400afe) */

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


/* WARNING: Removing unreachable block (ram,0x00400b44) */
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
  printLine("Calling CWE415_Double_Free__malloc_free_char_66_good();");
  CWE415_Double_Free__malloc_free_char_66_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_32_good();");
  CWE415_Double_Free__malloc_free_int_32_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_17_good();");
  CWE415_Double_Free__malloc_free_long_17_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_09_good();");
  CWE415_Double_Free__malloc_free_char_09_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_13_good();");
  CWE415_Double_Free__malloc_free_struct_13_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_09_good();");
  CWE415_Double_Free__malloc_free_long_09_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_05_good();");
  CWE415_Double_Free__malloc_free_char_05_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_14_good();");
  CWE415_Double_Free__malloc_free_int64_t_14_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_63_good();");
  CWE415_Double_Free__malloc_free_struct_63_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_16_good();");
  CWE415_Double_Free__malloc_free_struct_16_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_04_good();");
  CWE415_Double_Free__malloc_free_struct_04_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_17_good();");
  CWE415_Double_Free__malloc_free_char_17_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_41_good();");
  CWE415_Double_Free__malloc_free_long_41_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_21_good();");
  CWE415_Double_Free__malloc_free_char_21_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_16_good();");
  CWE415_Double_Free__malloc_free_long_16_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_44_good();");
  CWE415_Double_Free__malloc_free_int64_t_44_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_03_good();");
  CWE415_Double_Free__malloc_free_struct_03_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_64_good();");
  CWE415_Double_Free__malloc_free_struct_64_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_22_good();");
  CWE415_Double_Free__malloc_free_char_22_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_21_good();");
  CWE415_Double_Free__malloc_free_struct_21_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_31_good();");
  CWE415_Double_Free__malloc_free_char_31_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_64_good();");
  CWE415_Double_Free__malloc_free_long_64_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_64_good();");
  CWE415_Double_Free__malloc_free_char_64_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_07_good();");
  CWE415_Double_Free__malloc_free_long_07_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_04_good();");
  CWE415_Double_Free__malloc_free_int_04_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_63_good();");
  CWE415_Double_Free__malloc_free_char_63_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_22_good();");
  CWE415_Double_Free__malloc_free_struct_22_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_64_good();");
  CWE415_Double_Free__malloc_free_int_64_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_45_good();");
  CWE415_Double_Free__malloc_free_int64_t_45_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_68_good();");
  CWE415_Double_Free__malloc_free_int_68_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_03_good();");
  CWE415_Double_Free__malloc_free_char_03_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_13_good();");
  CWE415_Double_Free__malloc_free_long_13_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_22_good();");
  CWE415_Double_Free__malloc_free_long_22_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_11_good();");
  CWE415_Double_Free__malloc_free_int64_t_11_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_64_good();");
  CWE415_Double_Free__malloc_free_int64_t_64_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_06_good();");
  CWE415_Double_Free__malloc_free_struct_06_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_34_good();");
  CWE415_Double_Free__malloc_free_int_34_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_63_good();");
  CWE415_Double_Free__malloc_free_int_63_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_34_good();");
  CWE415_Double_Free__malloc_free_char_34_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_67_good();");
  CWE415_Double_Free__malloc_free_char_67_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_68_good();");
  CWE415_Double_Free__malloc_free_char_68_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_01_good();");
  CWE415_Double_Free__malloc_free_int_01_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_15_good();");
  CWE415_Double_Free__malloc_free_int64_t_15_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_12_good();");
  CWE415_Double_Free__malloc_free_char_12_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_08_good();");
  CWE415_Double_Free__malloc_free_int64_t_08_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_09_good();");
  CWE415_Double_Free__malloc_free_int64_t_09_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_11_good();");
  CWE415_Double_Free__malloc_free_char_11_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_18_good();");
  CWE415_Double_Free__malloc_free_char_18_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_61_good();");
  CWE415_Double_Free__malloc_free_long_61_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_08_good();");
  CWE415_Double_Free__malloc_free_long_08_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_02_good();");
  CWE415_Double_Free__malloc_free_struct_02_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_65_good();");
  CWE415_Double_Free__malloc_free_int64_t_65_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_31_good();");
  CWE415_Double_Free__malloc_free_int64_t_31_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_44_good();");
  CWE415_Double_Free__malloc_free_long_44_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_18_good();");
  CWE415_Double_Free__malloc_free_long_18_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_17_good();");
  CWE415_Double_Free__malloc_free_int_17_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_68_good();");
  CWE415_Double_Free__malloc_free_int64_t_68_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_53_good();");
  CWE415_Double_Free__malloc_free_int64_t_53_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_54_good();");
  CWE415_Double_Free__malloc_free_int64_t_54_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_34_good();");
  CWE415_Double_Free__malloc_free_long_34_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_44_good();");
  CWE415_Double_Free__malloc_free_struct_44_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_08_good();");
  CWE415_Double_Free__malloc_free_char_08_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_06_good();");
  CWE415_Double_Free__malloc_free_int_06_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_67_good();");
  CWE415_Double_Free__malloc_free_long_67_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_05_good();");
  CWE415_Double_Free__malloc_free_int_05_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_21_good();");
  CWE415_Double_Free__malloc_free_int64_t_21_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_31_good();");
  CWE415_Double_Free__malloc_free_struct_31_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_52_good();");
  CWE415_Double_Free__malloc_free_char_52_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_14_good();");
  CWE415_Double_Free__malloc_free_int_14_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_65_good();");
  CWE415_Double_Free__malloc_free_int_65_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_67_good();");
  CWE415_Double_Free__malloc_free_int_67_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_10_good();");
  CWE415_Double_Free__malloc_free_int_10_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_68_good();");
  CWE415_Double_Free__malloc_free_long_68_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_54_good();");
  CWE415_Double_Free__malloc_free_struct_54_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_01_good();");
  CWE415_Double_Free__malloc_free_struct_01_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_04_good();");
  CWE415_Double_Free__malloc_free_char_04_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_42_good();");
  CWE415_Double_Free__malloc_free_long_42_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_54_good();");
  CWE415_Double_Free__malloc_free_char_54_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_03_good();");
  CWE415_Double_Free__malloc_free_long_03_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_52_good();");
  CWE415_Double_Free__malloc_free_long_52_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_13_good();");
  CWE415_Double_Free__malloc_free_int64_t_13_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_67_good();");
  CWE415_Double_Free__malloc_free_int64_t_67_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_16_good();");
  CWE415_Double_Free__malloc_free_int_16_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_45_good();");
  CWE415_Double_Free__malloc_free_int_45_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_65_good();");
  CWE415_Double_Free__malloc_free_long_65_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_12_good();");
  CWE415_Double_Free__malloc_free_long_12_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_41_good();");
  CWE415_Double_Free__malloc_free_int64_t_41_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_52_good();");
  CWE415_Double_Free__malloc_free_int64_t_52_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_34_good();");
  CWE415_Double_Free__malloc_free_struct_34_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_12_good();");
  CWE415_Double_Free__malloc_free_struct_12_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_42_good();");
  CWE415_Double_Free__malloc_free_struct_42_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_01_good();");
  CWE415_Double_Free__malloc_free_long_01_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_52_good();");
  CWE415_Double_Free__malloc_free_int_52_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_02_good();");
  CWE415_Double_Free__malloc_free_int_02_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_04_good();");
  CWE415_Double_Free__malloc_free_long_04_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_07_good();");
  CWE415_Double_Free__malloc_free_struct_07_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_02_good();");
  CWE415_Double_Free__malloc_free_int64_t_02_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_16_good();");
  CWE415_Double_Free__malloc_free_char_16_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_41_good();");
  CWE415_Double_Free__malloc_free_int_41_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_14_good();");
  CWE415_Double_Free__malloc_free_long_14_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_09_good();");
  CWE415_Double_Free__malloc_free_struct_09_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_22_good();");
  CWE415_Double_Free__malloc_free_int_22_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_66_good();");
  CWE415_Double_Free__malloc_free_int64_t_66_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_42_good();");
  CWE415_Double_Free__malloc_free_int_42_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_31_good();");
  CWE415_Double_Free__malloc_free_long_31_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_02_good();");
  CWE415_Double_Free__malloc_free_long_02_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_51_good();");
  CWE415_Double_Free__malloc_free_int64_t_51_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_51_good();");
  CWE415_Double_Free__malloc_free_struct_51_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_66_good();");
  CWE415_Double_Free__malloc_free_long_66_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_63_good();");
  CWE415_Double_Free__malloc_free_long_63_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_54_good();");
  CWE415_Double_Free__malloc_free_int_54_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_07_good();");
  CWE415_Double_Free__malloc_free_char_07_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_53_good();");
  CWE415_Double_Free__malloc_free_struct_53_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_61_good();");
  CWE415_Double_Free__malloc_free_struct_61_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_06_good();");
  CWE415_Double_Free__malloc_free_long_06_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_41_good();");
  CWE415_Double_Free__malloc_free_struct_41_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_42_good();");
  CWE415_Double_Free__malloc_free_char_42_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_03_good();");
  CWE415_Double_Free__malloc_free_int64_t_03_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_13_good();");
  CWE415_Double_Free__malloc_free_int_13_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_18_good();");
  CWE415_Double_Free__malloc_free_struct_18_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_32_good();");
  CWE415_Double_Free__malloc_free_long_32_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_32_good();");
  CWE415_Double_Free__malloc_free_int64_t_32_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_66_good();");
  CWE415_Double_Free__malloc_free_int_66_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_10_good();");
  CWE415_Double_Free__malloc_free_char_10_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_44_good();");
  CWE415_Double_Free__malloc_free_int_44_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_08_good();");
  CWE415_Double_Free__malloc_free_struct_08_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_03_good();");
  CWE415_Double_Free__malloc_free_int_03_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_01_good();");
  CWE415_Double_Free__malloc_free_char_01_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_04_good();");
  CWE415_Double_Free__malloc_free_int64_t_04_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_07_good();");
  CWE415_Double_Free__malloc_free_int64_t_07_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_10_good();");
  CWE415_Double_Free__malloc_free_struct_10_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_22_good();");
  CWE415_Double_Free__malloc_free_int64_t_22_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_15_good();");
  CWE415_Double_Free__malloc_free_struct_15_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_61_good();");
  CWE415_Double_Free__malloc_free_int64_t_61_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_61_good();");
  CWE415_Double_Free__malloc_free_char_61_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_09_good();");
  CWE415_Double_Free__malloc_free_int_09_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_11_good();");
  CWE415_Double_Free__malloc_free_struct_11_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_10_good();");
  CWE415_Double_Free__malloc_free_int64_t_10_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_51_good();");
  CWE415_Double_Free__malloc_free_char_51_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_66_good();");
  CWE415_Double_Free__malloc_free_struct_66_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_08_good();");
  CWE415_Double_Free__malloc_free_int_08_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_32_good();");
  CWE415_Double_Free__malloc_free_struct_32_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_15_good();");
  CWE415_Double_Free__malloc_free_char_15_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_16_good();");
  CWE415_Double_Free__malloc_free_int64_t_16_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_65_good();");
  CWE415_Double_Free__malloc_free_struct_65_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_63_good();");
  CWE415_Double_Free__malloc_free_int64_t_63_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_11_good();");
  CWE415_Double_Free__malloc_free_int_11_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_68_good();");
  CWE415_Double_Free__malloc_free_struct_68_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_21_good();");
  CWE415_Double_Free__malloc_free_long_21_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_52_good();");
  CWE415_Double_Free__malloc_free_struct_52_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_05_good();");
  CWE415_Double_Free__malloc_free_struct_05_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_41_good();");
  CWE415_Double_Free__malloc_free_char_41_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_53_good();");
  CWE415_Double_Free__malloc_free_long_53_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_14_good();");
  CWE415_Double_Free__malloc_free_struct_14_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_42_good();");
  CWE415_Double_Free__malloc_free_int64_t_42_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_06_good();");
  CWE415_Double_Free__malloc_free_int64_t_06_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_17_good();");
  CWE415_Double_Free__malloc_free_struct_17_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_12_good();");
  CWE415_Double_Free__malloc_free_int_12_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_53_good();");
  CWE415_Double_Free__malloc_free_int_53_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_14_good();");
  CWE415_Double_Free__malloc_free_char_14_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_05_good();");
  CWE415_Double_Free__malloc_free_long_05_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_10_good();");
  CWE415_Double_Free__malloc_free_long_10_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_54_good();");
  CWE415_Double_Free__malloc_free_long_54_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_65_good();");
  CWE415_Double_Free__malloc_free_char_65_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_21_good();");
  CWE415_Double_Free__malloc_free_int_21_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_13_good();");
  CWE415_Double_Free__malloc_free_char_13_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_06_good();");
  CWE415_Double_Free__malloc_free_char_06_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_44_good();");
  CWE415_Double_Free__malloc_free_char_44_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_45_good();");
  CWE415_Double_Free__malloc_free_long_45_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_61_good();");
  CWE415_Double_Free__malloc_free_int_61_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_51_good();");
  CWE415_Double_Free__malloc_free_int_51_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_18_good();");
  CWE415_Double_Free__malloc_free_int64_t_18_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_01_good();");
  CWE415_Double_Free__malloc_free_int64_t_01_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_15_good();");
  CWE415_Double_Free__malloc_free_long_15_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_05_good();");
  CWE415_Double_Free__malloc_free_int64_t_05_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_02_good();");
  CWE415_Double_Free__malloc_free_char_02_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_12_good();");
  CWE415_Double_Free__malloc_free_int64_t_12_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_07_good();");
  CWE415_Double_Free__malloc_free_int_07_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_34_good();");
  CWE415_Double_Free__malloc_free_int64_t_34_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_11_good();");
  CWE415_Double_Free__malloc_free_long_11_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_53_good();");
  CWE415_Double_Free__malloc_free_char_53_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_15_good();");
  CWE415_Double_Free__malloc_free_int_15_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_67_good();");
  CWE415_Double_Free__malloc_free_struct_67_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_17_good();");
  CWE415_Double_Free__malloc_free_int64_t_17_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_31_good();");
  CWE415_Double_Free__malloc_free_int_31_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_45_good();");
  CWE415_Double_Free__malloc_free_char_45_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_32_good();");
  CWE415_Double_Free__malloc_free_char_32_good();
  printLine("Calling CWE415_Double_Free__malloc_free_long_51_good();");
  CWE415_Double_Free__malloc_free_long_51_good();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_45_good();");
  CWE415_Double_Free__malloc_free_struct_45_good();
  printLine("Calling CWE415_Double_Free__malloc_free_int_18_good();");
  CWE415_Double_Free__malloc_free_int_18_good();
  printLine("Calling CWE415_Double_Free__malloc_free_char_66_bad();");
  CWE415_Double_Free__malloc_free_char_66_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_32_bad();");
  CWE415_Double_Free__malloc_free_int_32_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_17_bad();");
  CWE415_Double_Free__malloc_free_long_17_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_09_bad();");
  CWE415_Double_Free__malloc_free_char_09_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_13_bad();");
  CWE415_Double_Free__malloc_free_struct_13_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_09_bad();");
  CWE415_Double_Free__malloc_free_long_09_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_05_bad();");
  CWE415_Double_Free__malloc_free_char_05_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_14_bad();");
  CWE415_Double_Free__malloc_free_int64_t_14_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_63_bad();");
  CWE415_Double_Free__malloc_free_struct_63_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_16_bad();");
  CWE415_Double_Free__malloc_free_struct_16_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_04_bad();");
  CWE415_Double_Free__malloc_free_struct_04_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_17_bad();");
  CWE415_Double_Free__malloc_free_char_17_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_41_bad();");
  CWE415_Double_Free__malloc_free_long_41_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_21_bad();");
  CWE415_Double_Free__malloc_free_char_21_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_16_bad();");
  CWE415_Double_Free__malloc_free_long_16_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_44_bad();");
  CWE415_Double_Free__malloc_free_int64_t_44_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_03_bad();");
  CWE415_Double_Free__malloc_free_struct_03_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_64_bad();");
  CWE415_Double_Free__malloc_free_struct_64_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_22_bad();");
  CWE415_Double_Free__malloc_free_char_22_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_21_bad();");
  CWE415_Double_Free__malloc_free_struct_21_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_31_bad();");
  CWE415_Double_Free__malloc_free_char_31_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_64_bad();");
  CWE415_Double_Free__malloc_free_long_64_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_64_bad();");
  CWE415_Double_Free__malloc_free_char_64_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_07_bad();");
  CWE415_Double_Free__malloc_free_long_07_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_04_bad();");
  CWE415_Double_Free__malloc_free_int_04_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_63_bad();");
  CWE415_Double_Free__malloc_free_char_63_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_22_bad();");
  CWE415_Double_Free__malloc_free_struct_22_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_64_bad();");
  CWE415_Double_Free__malloc_free_int_64_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_45_bad();");
  CWE415_Double_Free__malloc_free_int64_t_45_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_68_bad();");
  CWE415_Double_Free__malloc_free_int_68_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_03_bad();");
  CWE415_Double_Free__malloc_free_char_03_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_13_bad();");
  CWE415_Double_Free__malloc_free_long_13_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_22_bad();");
  CWE415_Double_Free__malloc_free_long_22_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_11_bad();");
  CWE415_Double_Free__malloc_free_int64_t_11_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_64_bad();");
  CWE415_Double_Free__malloc_free_int64_t_64_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_06_bad();");
  CWE415_Double_Free__malloc_free_struct_06_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_34_bad();");
  CWE415_Double_Free__malloc_free_int_34_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_63_bad();");
  CWE415_Double_Free__malloc_free_int_63_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_34_bad();");
  CWE415_Double_Free__malloc_free_char_34_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_67_bad();");
  CWE415_Double_Free__malloc_free_char_67_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_68_bad();");
  CWE415_Double_Free__malloc_free_char_68_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_01_bad();");
  CWE415_Double_Free__malloc_free_int_01_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_15_bad();");
  CWE415_Double_Free__malloc_free_int64_t_15_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_12_bad();");
  CWE415_Double_Free__malloc_free_char_12_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_08_bad();");
  CWE415_Double_Free__malloc_free_int64_t_08_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_09_bad();");
  CWE415_Double_Free__malloc_free_int64_t_09_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_11_bad();");
  CWE415_Double_Free__malloc_free_char_11_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_18_bad();");
  CWE415_Double_Free__malloc_free_char_18_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_61_bad();");
  CWE415_Double_Free__malloc_free_long_61_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_08_bad();");
  CWE415_Double_Free__malloc_free_long_08_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_02_bad();");
  CWE415_Double_Free__malloc_free_struct_02_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_65_bad();");
  CWE415_Double_Free__malloc_free_int64_t_65_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_31_bad();");
  CWE415_Double_Free__malloc_free_int64_t_31_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_44_bad();");
  CWE415_Double_Free__malloc_free_long_44_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_18_bad();");
  CWE415_Double_Free__malloc_free_long_18_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_17_bad();");
  CWE415_Double_Free__malloc_free_int_17_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_68_bad();");
  CWE415_Double_Free__malloc_free_int64_t_68_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_53_bad();");
  CWE415_Double_Free__malloc_free_int64_t_53_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_54_bad();");
  CWE415_Double_Free__malloc_free_int64_t_54_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_34_bad();");
  CWE415_Double_Free__malloc_free_long_34_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_44_bad();");
  CWE415_Double_Free__malloc_free_struct_44_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_08_bad();");
  CWE415_Double_Free__malloc_free_char_08_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_06_bad();");
  CWE415_Double_Free__malloc_free_int_06_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_67_bad();");
  CWE415_Double_Free__malloc_free_long_67_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_05_bad();");
  CWE415_Double_Free__malloc_free_int_05_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_21_bad();");
  CWE415_Double_Free__malloc_free_int64_t_21_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_31_bad();");
  CWE415_Double_Free__malloc_free_struct_31_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_52_bad();");
  CWE415_Double_Free__malloc_free_char_52_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_14_bad();");
  CWE415_Double_Free__malloc_free_int_14_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_65_bad();");
  CWE415_Double_Free__malloc_free_int_65_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_67_bad();");
  CWE415_Double_Free__malloc_free_int_67_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_10_bad();");
  CWE415_Double_Free__malloc_free_int_10_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_68_bad();");
  CWE415_Double_Free__malloc_free_long_68_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_54_bad();");
  CWE415_Double_Free__malloc_free_struct_54_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_01_bad();");
  CWE415_Double_Free__malloc_free_struct_01_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_04_bad();");
  CWE415_Double_Free__malloc_free_char_04_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_42_bad();");
  CWE415_Double_Free__malloc_free_long_42_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_54_bad();");
  CWE415_Double_Free__malloc_free_char_54_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_03_bad();");
  CWE415_Double_Free__malloc_free_long_03_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_52_bad();");
  CWE415_Double_Free__malloc_free_long_52_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_13_bad();");
  CWE415_Double_Free__malloc_free_int64_t_13_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_67_bad();");
  CWE415_Double_Free__malloc_free_int64_t_67_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_16_bad();");
  CWE415_Double_Free__malloc_free_int_16_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_45_bad();");
  CWE415_Double_Free__malloc_free_int_45_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_65_bad();");
  CWE415_Double_Free__malloc_free_long_65_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_12_bad();");
  CWE415_Double_Free__malloc_free_long_12_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_41_bad();");
  CWE415_Double_Free__malloc_free_int64_t_41_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_52_bad();");
  CWE415_Double_Free__malloc_free_int64_t_52_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_34_bad();");
  CWE415_Double_Free__malloc_free_struct_34_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_12_bad();");
  CWE415_Double_Free__malloc_free_struct_12_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_42_bad();");
  CWE415_Double_Free__malloc_free_struct_42_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_01_bad();");
  CWE415_Double_Free__malloc_free_long_01_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_52_bad();");
  CWE415_Double_Free__malloc_free_int_52_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_02_bad();");
  CWE415_Double_Free__malloc_free_int_02_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_04_bad();");
  CWE415_Double_Free__malloc_free_long_04_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_07_bad();");
  CWE415_Double_Free__malloc_free_struct_07_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_02_bad();");
  CWE415_Double_Free__malloc_free_int64_t_02_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_16_bad();");
  CWE415_Double_Free__malloc_free_char_16_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_41_bad();");
  CWE415_Double_Free__malloc_free_int_41_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_14_bad();");
  CWE415_Double_Free__malloc_free_long_14_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_09_bad();");
  CWE415_Double_Free__malloc_free_struct_09_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_22_bad();");
  CWE415_Double_Free__malloc_free_int_22_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_66_bad();");
  CWE415_Double_Free__malloc_free_int64_t_66_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_42_bad();");
  CWE415_Double_Free__malloc_free_int_42_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_31_bad();");
  CWE415_Double_Free__malloc_free_long_31_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_02_bad();");
  CWE415_Double_Free__malloc_free_long_02_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_51_bad();");
  CWE415_Double_Free__malloc_free_int64_t_51_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_51_bad();");
  CWE415_Double_Free__malloc_free_struct_51_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_66_bad();");
  CWE415_Double_Free__malloc_free_long_66_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_63_bad();");
  CWE415_Double_Free__malloc_free_long_63_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_54_bad();");
  CWE415_Double_Free__malloc_free_int_54_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_07_bad();");
  CWE415_Double_Free__malloc_free_char_07_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_53_bad();");
  CWE415_Double_Free__malloc_free_struct_53_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_61_bad();");
  CWE415_Double_Free__malloc_free_struct_61_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_06_bad();");
  CWE415_Double_Free__malloc_free_long_06_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_41_bad();");
  CWE415_Double_Free__malloc_free_struct_41_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_42_bad();");
  CWE415_Double_Free__malloc_free_char_42_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_03_bad();");
  CWE415_Double_Free__malloc_free_int64_t_03_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_13_bad();");
  CWE415_Double_Free__malloc_free_int_13_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_18_bad();");
  CWE415_Double_Free__malloc_free_struct_18_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_32_bad();");
  CWE415_Double_Free__malloc_free_long_32_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_32_bad();");
  CWE415_Double_Free__malloc_free_int64_t_32_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_66_bad();");
  CWE415_Double_Free__malloc_free_int_66_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_10_bad();");
  CWE415_Double_Free__malloc_free_char_10_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_44_bad();");
  CWE415_Double_Free__malloc_free_int_44_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_08_bad();");
  CWE415_Double_Free__malloc_free_struct_08_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_03_bad();");
  CWE415_Double_Free__malloc_free_int_03_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_01_bad();");
  CWE415_Double_Free__malloc_free_char_01_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_04_bad();");
  CWE415_Double_Free__malloc_free_int64_t_04_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_07_bad();");
  CWE415_Double_Free__malloc_free_int64_t_07_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_10_bad();");
  CWE415_Double_Free__malloc_free_struct_10_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_22_bad();");
  CWE415_Double_Free__malloc_free_int64_t_22_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_15_bad();");
  CWE415_Double_Free__malloc_free_struct_15_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_61_bad();");
  CWE415_Double_Free__malloc_free_int64_t_61_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_61_bad();");
  CWE415_Double_Free__malloc_free_char_61_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_09_bad();");
  CWE415_Double_Free__malloc_free_int_09_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_11_bad();");
  CWE415_Double_Free__malloc_free_struct_11_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_10_bad();");
  CWE415_Double_Free__malloc_free_int64_t_10_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_51_bad();");
  CWE415_Double_Free__malloc_free_char_51_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_66_bad();");
  CWE415_Double_Free__malloc_free_struct_66_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_08_bad();");
  CWE415_Double_Free__malloc_free_int_08_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_32_bad();");
  CWE415_Double_Free__malloc_free_struct_32_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_15_bad();");
  CWE415_Double_Free__malloc_free_char_15_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_16_bad();");
  CWE415_Double_Free__malloc_free_int64_t_16_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_65_bad();");
  CWE415_Double_Free__malloc_free_struct_65_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_63_bad();");
  CWE415_Double_Free__malloc_free_int64_t_63_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_11_bad();");
  CWE415_Double_Free__malloc_free_int_11_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_68_bad();");
  CWE415_Double_Free__malloc_free_struct_68_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_21_bad();");
  CWE415_Double_Free__malloc_free_long_21_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_52_bad();");
  CWE415_Double_Free__malloc_free_struct_52_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_05_bad();");
  CWE415_Double_Free__malloc_free_struct_05_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_41_bad();");
  CWE415_Double_Free__malloc_free_char_41_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_53_bad();");
  CWE415_Double_Free__malloc_free_long_53_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_14_bad();");
  CWE415_Double_Free__malloc_free_struct_14_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_42_bad();");
  CWE415_Double_Free__malloc_free_int64_t_42_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_06_bad();");
  CWE415_Double_Free__malloc_free_int64_t_06_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_17_bad();");
  CWE415_Double_Free__malloc_free_struct_17_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_12_bad();");
  CWE415_Double_Free__malloc_free_int_12_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_53_bad();");
  CWE415_Double_Free__malloc_free_int_53_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_14_bad();");
  CWE415_Double_Free__malloc_free_char_14_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_05_bad();");
  CWE415_Double_Free__malloc_free_long_05_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_10_bad();");
  CWE415_Double_Free__malloc_free_long_10_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_54_bad();");
  CWE415_Double_Free__malloc_free_long_54_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_65_bad();");
  CWE415_Double_Free__malloc_free_char_65_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_21_bad();");
  CWE415_Double_Free__malloc_free_int_21_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_13_bad();");
  CWE415_Double_Free__malloc_free_char_13_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_06_bad();");
  CWE415_Double_Free__malloc_free_char_06_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_44_bad();");
  CWE415_Double_Free__malloc_free_char_44_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_45_bad();");
  CWE415_Double_Free__malloc_free_long_45_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_61_bad();");
  CWE415_Double_Free__malloc_free_int_61_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_51_bad();");
  CWE415_Double_Free__malloc_free_int_51_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_18_bad();");
  CWE415_Double_Free__malloc_free_int64_t_18_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_01_bad();");
  CWE415_Double_Free__malloc_free_int64_t_01_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_15_bad();");
  CWE415_Double_Free__malloc_free_long_15_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_05_bad();");
  CWE415_Double_Free__malloc_free_int64_t_05_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_02_bad();");
  CWE415_Double_Free__malloc_free_char_02_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_12_bad();");
  CWE415_Double_Free__malloc_free_int64_t_12_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_07_bad();");
  CWE415_Double_Free__malloc_free_int_07_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_34_bad();");
  CWE415_Double_Free__malloc_free_int64_t_34_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_11_bad();");
  CWE415_Double_Free__malloc_free_long_11_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_53_bad();");
  CWE415_Double_Free__malloc_free_char_53_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_15_bad();");
  CWE415_Double_Free__malloc_free_int_15_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_67_bad();");
  CWE415_Double_Free__malloc_free_struct_67_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int64_t_17_bad();");
  CWE415_Double_Free__malloc_free_int64_t_17_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_31_bad();");
  CWE415_Double_Free__malloc_free_int_31_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_45_bad();");
  CWE415_Double_Free__malloc_free_char_45_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_char_32_bad();");
  CWE415_Double_Free__malloc_free_char_32_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_long_51_bad();");
  CWE415_Double_Free__malloc_free_long_51_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_struct_45_bad();");
  CWE415_Double_Free__malloc_free_struct_45_bad();
  printLine("Calling CWE415_Double_Free__malloc_free_int_18_bad();");
  CWE415_Double_Free__malloc_free_int_18_bad();
  return 0;
}


void CWE415_Double_Free__malloc_free_int64_t_53_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_53b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_53b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_53b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_54c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_54d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_54c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_54d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_54c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_54d_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_66b_badSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_struct_66b_goodG2BSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_struct_66b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_54b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_54b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_54b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_16_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_char_01_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_22_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_22_badGlobal = 1;
  CWE415_Double_Free__malloc_free_long_22_badSink(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_22_goodB2G1Global = 0;
  CWE415_Double_Free__malloc_free_long_22_goodB2G1Sink(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_22_goodB2G2Global = 1;
  CWE415_Double_Free__malloc_free_long_22_goodB2G2Sink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_22_goodG2BGlobal = 1;
  CWE415_Double_Free__malloc_free_long_22_goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_long_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_67b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_67b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_67b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54e_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54e_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54e_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_long_03_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_int64_t_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = local_28;
  CWE415_Double_Free__malloc_free_int64_t_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_int64_t_66b_goodB2GSink(local_38);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_61_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_char_61b_badSource(0);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_char_61b_goodG2BSource(0);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  CWE415_Double_Free__malloc_free_char_61b_goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_char_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_long_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_long_63b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_long_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_64b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_64b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_64b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_65b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_65b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_65b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_long_18_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_52b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_52c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_52b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_52c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_52b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_52c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_09_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FALSE != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_53b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_53c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_53b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_53c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_53b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_53c_goodB2GSink(uParm1);
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


void CWE415_Double_Free__malloc_free_int64_t_08_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  staticReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_67b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_67b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_67b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_struct_06_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00403be7) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00403c54) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_struct_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_int_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_int_64b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_int_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_65b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_65b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_65b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_54b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_54c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_54b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_54c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_54b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_54c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_52_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_52b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_52b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_52b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_04_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00404022) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040408d) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_int_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_51b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_51b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_51b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_53c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_53d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_53c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_53d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_53c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_53d_goodB2GSink(uParm1);
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_16_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_16_good(void)

{
  goodB2G();
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


void CWE415_Double_Free__malloc_free_char_08_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  staticReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_11_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_07_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_54e_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_54e_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_54e_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_long_14_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_64b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_64b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_64b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int_63b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_63b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_63b_goodB2GSink(void)

{
  return;
}


void * CWE415_Double_Free__malloc_free_long_61b_badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void * CWE415_Double_Free__malloc_free_long_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE415_Double_Free__malloc_free_long_61b_goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_long_10_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_22_badSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_int_22_badGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_22_goodB2G1Sink(void)

{
  if (CWE415_Double_Free__malloc_free_int_22_goodB2G1Global != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_22_goodB2G2Sink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int_22_goodG2BSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_int_22_goodG2BGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_54_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_54b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_54b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_54b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_14_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_51_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_51b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_51b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_51b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_52b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_52c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_52b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_52c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_52b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_52c_goodB2GSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE415_Double_Free__malloc_free_struct_32_bad(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30 [2];
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  return;
}


void CWE415_Double_Free__malloc_free_struct_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_54c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_54d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_54c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_54d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_54c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_54d_goodB2GSink(uParm1);
  return;
}


void badSink(void)

{
  free(CWE415_Double_Free__malloc_free_int64_t_45_badData);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_45_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_45_badData = __ptr;
  badSink();
  return;
}


void goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_int64_t_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_45_goodB2GData = __ptr;
  goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_struct_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_struct_64b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_struct_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_06_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004058af) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040591c) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_int64_t_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_52_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_52b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_52b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_52b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE415_Double_Free__malloc_free_char_32_bad(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30 [2];
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(100);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  return;
}


void CWE415_Double_Free__malloc_free_char_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_51b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_51b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_51b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_54d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_54d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_54d_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_16_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_long_54b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_54c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_54b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_54c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_54b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_54c_goodB2GSink(uParm1);
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_41_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_11_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53d_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53d_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53d_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_51b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_51b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_51b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_char_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_char_64b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_char_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_65b_badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_65b_goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_15_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_31_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_17_bad(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    free(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  void *__ptr;
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) break;
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_long_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_long_51_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_51b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_51b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_51b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_04_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004068f5) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00406960) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_char_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_31_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_54_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_54b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_54b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_54b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void * badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_int_42_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)badSource(0);
  free(__ptr);
  return;
}


void * goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)goodG2BSource(0);
  free(__ptr);
  return;
}


void * goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void goodB2G(void)

{
  goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_int_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void * CWE415_Double_Free__malloc_free_char_61b_badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void * CWE415_Double_Free__malloc_free_char_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE415_Double_Free__malloc_free_char_61b_goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_int64_t_09_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FALSE != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_65b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_65b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_65b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int_68b_badSink(void)

{
  free(CWE415_Double_Free__malloc_free_int_68_badData);
  return;
}


void CWE415_Double_Free__malloc_free_int_68b_goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_int_68_goodG2BData);
  return;
}


void CWE415_Double_Free__malloc_free_int_68b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int_54b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_54c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_54b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_54c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_54b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_54c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_67_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_67b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_67b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_67b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void *pvParm1)

{
  if (badStatic != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_21_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badStatic = 1;
  badSink(__ptr);
  return;
}


void goodB2G1Sink(void)

{
  if (goodB2G1Static != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G1Static = 0;
  goodB2G1Sink(__ptr);
  return;
}


void goodB2G2Sink(void)

{
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G2Static = 1;
  goodB2G2Sink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  if (goodG2BStatic != 0) {
    free(pvParm1);
  }
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BStatic = 1;
  goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_long_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(void)

{
  free(CWE415_Double_Free__malloc_free_long_45_badData);
  return;
}


void CWE415_Double_Free__malloc_free_long_45_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_45_badData = __ptr;
  badSink();
  return;
}


void goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_long_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_45_goodB2GData = __ptr;
  goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_long_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_68b_badSink(void)

{
  free(CWE415_Double_Free__malloc_free_long_68_badData);
  return;
}


void CWE415_Double_Free__malloc_free_long_68b_goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_long_68_goodG2BData);
  return;
}


void CWE415_Double_Free__malloc_free_long_68b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_struct_53c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_53d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_53c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_53d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_53c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_53d_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_06_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040763a) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004076a7) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_long_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_22_badSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_char_22_badGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_22_goodB2G1Sink(void)

{
  if (CWE415_Double_Free__malloc_free_char_22_goodB2G1Global != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_22_goodB2G2Sink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_22_goodG2BSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_char_22_goodG2BGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_05_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_17_bad(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(400);
    if (local_18 == (void *)0x0) break;
    free(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  void *__ptr;
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) break;
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(400);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_int_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_54c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_54c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_54c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_67b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_67b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_67b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_int64_t_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_int64_t_64b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_52c_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_52c_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_52c_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int_68_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_68_badData = __ptr;
  CWE415_Double_Free__malloc_free_int_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_68_goodG2BData = pvVar1;
  CWE415_Double_Free__malloc_free_int_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_68_goodB2GData = __ptr;
  CWE415_Double_Free__malloc_free_int_68b_goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_int_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_34_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_65b_badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_65b_goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_22_badSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_struct_22_badGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_22_goodB2G1Sink(void)

{
  if (CWE415_Double_Free__malloc_free_struct_22_goodB2G1Global != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_22_goodB2G2Sink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_struct_22_goodG2BSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_struct_22_goodG2BGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_66b_badSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_int_66b_goodG2BSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_int_66b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_long_12_bad(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  else {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrueOrFalse();
  return;
}


void goodG2B(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_long_64b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_64b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_64b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_struct_15_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_07_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_51_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_51b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_51b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_51b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void * badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_struct_42_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)badSource(0);
  free(__ptr);
  return;
}


void * goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)goodG2BSource(0);
  free(__ptr);
  return;
}


void * goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void goodB2G(void)

{
  goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_struct_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int_53_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_53b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_53b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_53b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_01_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE415_Double_Free__malloc_free_long_32_bad(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30 [2];
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  return;
}


void CWE415_Double_Free__malloc_free_long_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_long_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_long_64b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_long_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_54d_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_54e_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_54d_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_54e_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_54d_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_54e_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_68b_badSink(void)

{
  free(CWE415_Double_Free__malloc_free_struct_68_badData);
  return;
}


void CWE415_Double_Free__malloc_free_struct_68b_goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_struct_68_goodG2BData);
  return;
}


void CWE415_Double_Free__malloc_free_struct_68b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int_54e_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_54e_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_54e_goodB2GSink(void)

{
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_41_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_char_34_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_63b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_63b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_63b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_13_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FIVE != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_05_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_41_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_struct_53b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_53c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_53b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_53c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_53b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_53c_goodB2GSink(uParm1);
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


void CWE415_Double_Free__malloc_free_long_08_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  staticReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_04_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004097f9) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00409864) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_long_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_09_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FALSE != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_52c_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_52c_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_52c_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_53d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_53d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_53d_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_18_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_struct_54d_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_54e_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54d_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_54e_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54d_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_54e_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_68_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_68_badData = __ptr;
  CWE415_Double_Free__malloc_free_struct_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_68_goodG2BData = pvVar1;
  CWE415_Double_Free__malloc_free_struct_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_68_goodB2GData = __ptr;
  CWE415_Double_Free__malloc_free_struct_68b_goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_struct_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_34_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_34_good(void)

{
  goodG2B();
  goodB2G();
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


void CWE415_Double_Free__malloc_free_struct_08_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  staticReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_02_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_67_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_67b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_67b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_67b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void *pvParm1)

{
  if (badStatic != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_21_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badStatic = 1;
  badSink(__ptr);
  return;
}


void goodB2G1Sink(void)

{
  if (goodB2G1Static != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G1Static = 0;
  goodB2G1Sink(__ptr);
  return;
}


void goodB2G2Sink(void)

{
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G2Static = 1;
  goodB2G2Sink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  if (goodG2BStatic != 0) {
    free(pvParm1);
  }
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BStatic = 1;
  goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_char_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_char_03_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_65b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_65b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_65b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_65b_badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_65b_goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_15_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_53b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_53c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_53b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_53c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_53b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_53c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_22_badSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_long_22_badGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_22_goodB2G1Sink(void)

{
  if (CWE415_Double_Free__malloc_free_long_22_goodB2G1Global != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_22_goodB2G2Sink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_long_22_goodG2BSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_long_22_goodG2BGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_18_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int_53c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_53d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_53c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_53d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_53c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_53d_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_53_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_53b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_53b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_53b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_52_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_52b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_52b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_52b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void * badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_int64_t_42_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)badSource(0);
  free(__ptr);
  return;
}


void * goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)goodG2BSource(0);
  free(__ptr);
  return;
}


void * goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void goodB2G(void)

{
  goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int_51b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_51b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_51b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int_16_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_68b_badSink(void)

{
  free(CWE415_Double_Free__malloc_free_int64_t_68_badData);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_68b_goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_int64_t_68_goodG2BData);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_68b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_12_bad(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  else {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrueOrFalse();
  return;
}


void goodG2B(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_struct_54e_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54e_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54e_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_struct_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_struct_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = local_28;
  CWE415_Double_Free__malloc_free_struct_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_struct_66b_goodB2GSink(local_38);
  return;
}


void CWE415_Double_Free__malloc_free_struct_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_67_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_67b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_67b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_67b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_05_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_51_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_51b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_51b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_51b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_17_bad(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) break;
    free(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  void *__ptr;
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) break;
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(100);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_char_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_53c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_53c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_53b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_53c_goodB2GSink(uParm1);
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_61_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_int64_t_61b_badSource(0);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_int64_t_61b_goodG2BSource(0);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  CWE415_Double_Free__malloc_free_int64_t_61b_goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_52c_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_52c_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_52c_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_11_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_02_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_68_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_68_badData = __ptr;
  CWE415_Double_Free__malloc_free_int64_t_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_68_goodG2BData = pvVar1;
  CWE415_Double_Free__malloc_free_int64_t_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_68_goodB2GData = __ptr;
  CWE415_Double_Free__malloc_free_int64_t_68b_goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_63b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_63b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_63b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_34_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_54d_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_54e_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_54d_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_54e_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_54d_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_54e_goodB2GSink(uParm1);
  return;
}


void badSink(void)

{
  free(CWE415_Double_Free__malloc_free_int_45_badData);
  return;
}


void CWE415_Double_Free__malloc_free_int_45_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_45_badData = __ptr;
  badSink();
  return;
}


void goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_int_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_45_goodB2GData = __ptr;
  goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_int_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_66b_badSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_66b_goodG2BSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_66b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_long_13_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FIVE != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_06_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040c4a9) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040c516) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_int_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_63b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_63b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_63b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_10_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_68b_badSink(void)

{
  free(CWE415_Double_Free__malloc_free_char_68_badData);
  return;
}


void CWE415_Double_Free__malloc_free_char_68b_goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_char_68_goodG2BData);
  return;
}


void CWE415_Double_Free__malloc_free_char_68b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_long_01_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_52_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_52b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_52b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_52b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_61_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_long_61b_badSource(0);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_long_61b_goodG2BSource(0);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  CWE415_Double_Free__malloc_free_long_61b_goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_long_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_22_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_22_badGlobal = 1;
  CWE415_Double_Free__malloc_free_int_22_badSink(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_22_goodB2G1Global = 0;
  CWE415_Double_Free__malloc_free_int_22_goodB2G1Sink(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_22_goodB2G2Global = 1;
  CWE415_Double_Free__malloc_free_int_22_goodB2G2Sink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_22_goodG2BGlobal = 1;
  CWE415_Double_Free__malloc_free_int_22_goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_int_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_struct_10_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54d_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_54e_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54d_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_54e_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_54d_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int64_t_54e_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_04_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040cef8) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040cf63) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_struct_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_31_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_09_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FALSE != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  free(CWE415_Double_Free__malloc_free_char_45_badData);
  return;
}


void CWE415_Double_Free__malloc_free_char_45_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_45_badData = __ptr;
  badSink();
  return;
}


void goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_char_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_45_goodB2GData = __ptr;
  goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_char_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_54d_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_54e_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_54d_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_54e_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_54d_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_54e_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_67_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_67b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_67b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_67b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_65b_badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_65b_goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_22_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_22_badGlobal = 1;
  CWE415_Double_Free__malloc_free_int64_t_22_badSink(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_22_goodB2G1Global = 0;
  CWE415_Double_Free__malloc_free_int64_t_22_goodB2G1Sink(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_22_goodB2G2Global = 1;
  CWE415_Double_Free__malloc_free_int64_t_22_goodB2G2Sink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_22_goodG2BGlobal = 1;
  CWE415_Double_Free__malloc_free_int64_t_22_goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_char_15_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_13_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FIVE != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_64b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_64b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_64b_goodB2GSink(void)

{
  return;
}


void * badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_char_42_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)badSource(0);
  free(__ptr);
  return;
}


void * goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)goodG2BSource(0);
  free(__ptr);
  return;
}


void * goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void goodB2G(void)

{
  goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_char_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_long_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_long_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = local_28;
  CWE415_Double_Free__malloc_free_long_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_long_66b_goodB2GSink(local_38);
  return;
}


void CWE415_Double_Free__malloc_free_long_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE415_Double_Free__malloc_free_int_32_bad(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(400);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(400);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30 [2];
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(400);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  return;
}


void CWE415_Double_Free__malloc_free_int_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_14_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_51b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_51b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_51b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_long_65b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_65b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_65b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_22_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_22_badGlobal = 1;
  CWE415_Double_Free__malloc_free_char_22_badSink(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_22_goodB2G1Global = 0;
  CWE415_Double_Free__malloc_free_char_22_goodB2G1Sink(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_22_goodB2G2Global = 1;
  CWE415_Double_Free__malloc_free_char_22_goodB2G2Sink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_22_goodG2BGlobal = 1;
  CWE415_Double_Free__malloc_free_char_22_goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_char_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_67b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_67b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_67b_goodB2GSink(void)

{
  return;
}


void badSink(void *pvParm1)

{
  if (badStatic != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_21_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badStatic = 1;
  badSink(__ptr);
  return;
}


void goodB2G1Sink(void)

{
  if (goodB2G1Static != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G1Static = 0;
  goodB2G1Sink(__ptr);
  return;
}


void goodB2G2Sink(void)

{
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G2Static = 1;
  goodB2G2Sink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  if (goodG2BStatic != 0) {
    free(pvParm1);
  }
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BStatic = 1;
  goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_int_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int_03_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_22_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_22_badGlobal = 1;
  CWE415_Double_Free__malloc_free_struct_22_badSink(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_22_goodB2G1Global = 0;
  CWE415_Double_Free__malloc_free_struct_22_goodB2G1Sink(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_22_goodB2G2Global = 1;
  CWE415_Double_Free__malloc_free_struct_22_goodB2G2Sink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_22_goodG2BGlobal = 1;
  CWE415_Double_Free__malloc_free_struct_22_goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_int_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_int_63b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_int_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_05_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_41_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int_18_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_18_good(void)

{
  goodB2G();
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


void CWE415_Double_Free__malloc_free_int_08_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  staticReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_54_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_54b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_54b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_54b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_int_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(400);
  if (local_28 == (void *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = local_28;
  CWE415_Double_Free__malloc_free_int_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_int_66b_goodB2GSink(local_38);
  return;
}


void CWE415_Double_Free__malloc_free_int_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_52c_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_52c_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_52c_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_04_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040f220) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040f28b) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_int64_t_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_14_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  free(CWE415_Double_Free__malloc_free_struct_45_badData);
  return;
}


void CWE415_Double_Free__malloc_free_struct_45_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_45_badData = __ptr;
  badSink();
  return;
}


void goodG2BSink(void)

{
  free(CWE415_Double_Free__malloc_free_struct_45_goodG2BData);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_45_goodB2GData = __ptr;
  goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_struct_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_68_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_68_badData = __ptr;
  CWE415_Double_Free__malloc_free_char_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_68_goodG2BData = pvVar1;
  CWE415_Double_Free__malloc_free_char_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_68_goodB2GData = __ptr;
  CWE415_Double_Free__malloc_free_char_68b_goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_char_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_52b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_52c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_52b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_52c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_52b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_52c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_31_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_53b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_53c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_53b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_53c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_53b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_53c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_66b_badSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_char_66b_goodG2BSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_char_66b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int_12_bad(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  else {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrueOrFalse();
  return;
}


void goodG2B(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_67_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_67b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_67b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int64_t_67b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_char_53d_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_53d_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_53d_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_22_badSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_int64_t_22_badGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_22_goodB2G1Sink(void)

{
  if (CWE415_Double_Free__malloc_free_int64_t_22_goodB2G1Global != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_22_goodB2G2Sink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_22_goodG2BSink(void *pvParm1)

{
  if (CWE415_Double_Free__malloc_free_int64_t_22_goodG2BGlobal != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_53_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_53b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_53b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_53b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_53c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_53d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_53c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_53d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_53c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_53d_goodB2GSink(uParm1);
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_11_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_02_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_54e_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_54e_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_54e_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_struct_51_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_51b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_51b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_struct_51b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_03_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_long_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_65b_badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_65b_goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_struct_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_struct_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_struct_63b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_struct_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_53d_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_53d_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_53d_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_long_15_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_07_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_10_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_18_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void * badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_long_42_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)badSource(0);
  free(__ptr);
  return;
}


void * goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)goodG2BSource(0);
  free(__ptr);
  return;
}


void * goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void goodB2G(void)

{
  goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_long_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int_54c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_54d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_54c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_54d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_54c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_int_54d_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_13_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FIVE != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_01_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_53d_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_53d_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_53d_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_struct_12_bad(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  else {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrueOrFalse();
  return;
}


void goodG2B(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_13_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FIVE != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int_61_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_int_61b_badSource(0);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_int_61b_goodG2BSource(0);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  CWE415_Double_Free__malloc_free_int_61b_goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_int_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_63b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_63b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_63b_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_52_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_52b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_52b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_char_52b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_05_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_41_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_struct_17_bad(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    free(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  void *__ptr;
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) break;
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_struct_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_char_16_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_char_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_long_52c_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_52c_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_52c_goodB2GSink(void)

{
  return;
}


void badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badSink(__ptr,uParm2,__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2GSink(void)

{
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2GSink(__ptr,uParm2,__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int_07_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(400);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_11_bad(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrue();
  return;
}


void goodG2B1(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_02_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_char_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_char_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_char_63b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_char_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_34_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_66b_badSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_long_66b_goodG2BSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE415_Double_Free__malloc_free_long_66b_goodB2GSink(void)

{
  return;
}


void badSink(void *pvParm1)

{
  if (badStatic != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_21_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badStatic = 1;
  badSink(__ptr);
  return;
}


void goodB2G1Sink(void)

{
  if (goodB2G1Static != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G1Static = 0;
  goodB2G1Sink(__ptr);
  return;
}


void goodB2G2Sink(void)

{
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G2Static = 1;
  goodB2G2Sink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  if (goodG2BStatic != 0) {
    free(pvParm1);
  }
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BStatic = 1;
  goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_03_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_int64_t_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int64_t_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  CWE415_Double_Free__malloc_free_int64_t_63b_goodB2GSink(&local_10);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void * CWE415_Double_Free__malloc_free_struct_61b_badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void * CWE415_Double_Free__malloc_free_struct_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE415_Double_Free__malloc_free_struct_61b_goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_long_53_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_53b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_53b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_53b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_long_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_54b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_54c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_54c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_54c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54c_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_54d_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54c_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_54d_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_54c_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_struct_54d_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_char_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(100);
  if (local_28 == (void *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = local_28;
  CWE415_Double_Free__malloc_free_char_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(100);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_10);
  local_28 = local_10;
  CWE415_Double_Free__malloc_free_char_66b_goodB2GSink(local_38);
  return;
}


void CWE415_Double_Free__malloc_free_char_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_01_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_struct_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_53d_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_53d_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_53d_goodB2GSink(void)

{
  return;
}


void CWE415_Double_Free__malloc_free_char_52b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_52c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_52b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_52c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_52b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_char_52c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_12_bad(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  void *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  else {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  globalReturnsTrueOrFalse();
  return;
}


void goodG2B(void)

{
  int iVar1;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE415_Double_Free__malloc_free_char_06_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041313c) */

void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004131a9) */

void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(100);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_char_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_61_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_struct_61b_badSource(0);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE415_Double_Free__malloc_free_struct_61b_goodG2BSource(0);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  CWE415_Double_Free__malloc_free_struct_61b_goodB2GSource(0);
  return;
}


void CWE415_Double_Free__malloc_free_struct_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_31_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_07_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (staticFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (staticFive == 5) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_long_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE415_Double_Free__malloc_free_int_61b_badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void * CWE415_Double_Free__malloc_free_int_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE415_Double_Free__malloc_free_int_61b_goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_long_52b_badSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_52c_badSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_52b_goodG2BSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_52c_goodG2BSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_long_52b_goodB2GSink(undefined8 uParm1)

{
  CWE415_Double_Free__malloc_free_long_52c_goodB2GSink(uParm1);
  return;
}


void CWE415_Double_Free__malloc_free_int_54_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_54b_badSink(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_int_54b_goodG2BSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_int_54b_goodB2GSink(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_long_68_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_68_badData = __ptr;
  CWE415_Double_Free__malloc_free_long_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE415_Double_Free__malloc_free_long_68_goodG2BData = pvVar1;
  CWE415_Double_Free__malloc_free_long_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  CWE415_Double_Free__malloc_free_long_68_goodB2GData = __ptr;
  CWE415_Double_Free__malloc_free_long_68b_goodB2GSink();
  return;
}


void CWE415_Double_Free__malloc_free_long_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_struct_09_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (GLOBAL_CONST_FALSE != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_17_bad(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    free(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  void *__ptr;
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) break;
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  void *local_18;
  int local_10;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE415_Double_Free__malloc_free_int64_t_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void *pvParm1)

{
  if (badStatic != 0) {
    free(pvParm1);
  }
  return;
}


void CWE415_Double_Free__malloc_free_struct_21_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  badStatic = 1;
  badSink(__ptr);
  return;
}


void goodB2G1Sink(void)

{
  if (goodB2G1Static != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G1Static = 0;
  goodB2G1Sink(__ptr);
  return;
}


void goodB2G2Sink(void)

{
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  goodB2G2Static = 1;
  goodB2G2Sink(__ptr);
  return;
}


void goodG2BSink(void *pvParm1)

{
  if (goodG2BStatic != 0) {
    free(pvParm1);
  }
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  goodG2BStatic = 1;
  goodG2BSink(pvVar1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE415_Double_Free__malloc_free_int64_t_32_bad(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  void *local_30;
  void *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30 [2];
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(local_20);
  *local_10 = local_20;
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_02_bad(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_64b_badSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_64b_goodG2BSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_char_64b_goodB2GSink(void)

{
  return;
}


void * CWE415_Double_Free__malloc_free_int64_t_61b_badSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void * CWE415_Double_Free__malloc_free_int64_t_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE415_Double_Free__malloc_free_int64_t_61b_goodB2GSource(void)

{
  void *__ptr;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  return __ptr;
}


void CWE415_Double_Free__malloc_free_int64_t_10_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFalse != 0) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalTrue != 0) {
    __ptr = malloc(800);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_int64_t_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_char_14_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodB2G1(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  if (globalFive != 5) {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  void *__ptr;
  
  if (globalFive == 5) {
    __ptr = malloc(100);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    free(__ptr);
  }
  return;
}


void goodG2B1(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void goodG2B2(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(100);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


void CWE415_Double_Free__malloc_free_char_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE415_Double_Free__malloc_free_struct_67b_badSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_67b_goodG2BSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE415_Double_Free__malloc_free_struct_67b_goodB2GSink(void)

{
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
  printf((char *)(double)fParm1,&DAT_0041aa3d);
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
  printf(pcParm1,&DAT_0041aa5a);
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
    __isoc99_sscanf(lVar1,&DAT_0041aa68,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0041aa70,&local_14);
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

