
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0065eff8;
  if (PTR___gmon_start___0065eff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400950(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0065f010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0065f018)();
  return iVar1;
}


void __isoc99_fscanf(void)

{
  (*(code *)PTR___isoc99_fscanf_0065f020)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0065f028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0065f030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0065f038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0065f040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0065f048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0065f050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0065f058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0065f060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0065f068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0065f070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0065f078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0065f080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0065f088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0065f090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0065f098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0065f0a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0065f0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0065f0b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0065f0b8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0065eff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400b07) */
/* WARNING: Removing unreachable block (ram,0x00400b11) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400b44) */
/* WARNING: Removing unreachable block (ram,0x00400b4e) */

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


/* WARNING: Removing unreachable block (ram,0x00400b94) */
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
  printLine("Calling CWE190_Integer_Overflow__char_max_square_67_good();");
  CWE190_Integer_Overflow__char_max_square_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_08_good();");
  CWE190_Integer_Overflow__char_max_square_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_02_good();");
  CWE190_Integer_Overflow__char_fscanf_add_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_17_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_14_good();");
  CWE190_Integer_Overflow__char_rand_add_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_32_good();");
  CWE190_Integer_Overflow__char_rand_add_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_09_good();");
  CWE190_Integer_Overflow__char_max_square_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_45_good();");
  CWE190_Integer_Overflow__char_max_square_45_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_14_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_14_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_13_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_01_good();");
  CWE190_Integer_Overflow__char_max_square_01_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_22_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_41_good();");
  CWE190_Integer_Overflow__char_rand_multiply_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_68_good();");
  CWE190_Integer_Overflow__char_rand_add_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_11_good();");
  CWE190_Integer_Overflow__char_fscanf_square_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_04_good();");
  CWE190_Integer_Overflow__char_rand_square_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_32_good();");
  CWE190_Integer_Overflow__char_max_multiply_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_08_good();");
  CWE190_Integer_Overflow__char_max_multiply_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_63_good();");
  CWE190_Integer_Overflow__char_fscanf_square_63_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_01_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_64_good();");
  CWE190_Integer_Overflow__char_fscanf_add_64_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_11_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_11_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_53_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_53_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_21_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_21_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_41_good();");
  CWE190_Integer_Overflow__char_rand_add_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_08_good();");
  CWE190_Integer_Overflow__char_rand_square_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_65_good();");
  CWE190_Integer_Overflow__char_fscanf_square_65_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_32_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_53_good();");
  CWE190_Integer_Overflow__char_max_multiply_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_42_good();");
  CWE190_Integer_Overflow__char_fscanf_square_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_03_good();");
  CWE190_Integer_Overflow__char_rand_multiply_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_12_good();");
  CWE190_Integer_Overflow__char_rand_add_12_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_08_good();");
  CWE190_Integer_Overflow__char_max_add_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_64_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_64_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_12_good();");
  CWE190_Integer_Overflow__char_fscanf_add_12_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_67_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_65_good();");
  CWE190_Integer_Overflow__char_rand_multiply_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_66_good();");
  CWE190_Integer_Overflow__char_rand_multiply_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_12_good();");
  CWE190_Integer_Overflow__char_rand_square_12_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_04_good();");
  CWE190_Integer_Overflow__char_max_multiply_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_52_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_44_good();");
  CWE190_Integer_Overflow__char_max_add_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_68_good();");
  CWE190_Integer_Overflow__char_rand_square_68_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_44_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_10_good();");
  CWE190_Integer_Overflow__char_max_add_10_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_45_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_11_good();");
  CWE190_Integer_Overflow__char_max_multiply_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_06_good();");
  CWE190_Integer_Overflow__char_max_multiply_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_34_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_02_good();");
  CWE190_Integer_Overflow__char_rand_multiply_02_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_42_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_44_good();");
  CWE190_Integer_Overflow__char_max_multiply_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_42_good();");
  CWE190_Integer_Overflow__char_rand_multiply_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_16_good();");
  CWE190_Integer_Overflow__char_rand_add_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_03_good();");
  CWE190_Integer_Overflow__char_fscanf_square_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_03_good();");
  CWE190_Integer_Overflow__char_max_add_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_04_good();");
  CWE190_Integer_Overflow__char_rand_multiply_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_02_good();");
  CWE190_Integer_Overflow__char_max_multiply_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_02_good();");
  CWE190_Integer_Overflow__char_rand_square_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_10_good();");
  CWE190_Integer_Overflow__char_rand_square_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_51_good();");
  CWE190_Integer_Overflow__char_max_multiply_51_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_17_good();");
  CWE190_Integer_Overflow__char_max_multiply_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_45_good();");
  CWE190_Integer_Overflow__char_rand_square_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_52_good();");
  CWE190_Integer_Overflow__char_rand_square_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_42_good();");
  CWE190_Integer_Overflow__char_max_multiply_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_52_good();");
  CWE190_Integer_Overflow__char_max_add_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_63_good();");
  CWE190_Integer_Overflow__char_rand_multiply_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_42_good();");
  CWE190_Integer_Overflow__char_max_square_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_08_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_44_good();");
  CWE190_Integer_Overflow__char_rand_add_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_14_good();");
  CWE190_Integer_Overflow__char_max_square_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_13_good();");
  CWE190_Integer_Overflow__char_fscanf_square_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_31_good();");
  CWE190_Integer_Overflow__char_max_add_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_52_good();");
  CWE190_Integer_Overflow__char_rand_multiply_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_17_good();");
  CWE190_Integer_Overflow__char_fscanf_add_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_18_good();");
  CWE190_Integer_Overflow__char_max_square_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_54_good();");
  CWE190_Integer_Overflow__char_max_add_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_42_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_66_good();");
  CWE190_Integer_Overflow__char_rand_add_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_07_good();");
  CWE190_Integer_Overflow__char_rand_add_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_63_good();");
  CWE190_Integer_Overflow__char_fscanf_add_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_17_good();");
  CWE190_Integer_Overflow__char_fscanf_square_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_01_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_21_good();");
  CWE190_Integer_Overflow__char_rand_multiply_21_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_18_good();");
  CWE190_Integer_Overflow__char_rand_add_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_67_good();");
  CWE190_Integer_Overflow__char_max_add_67_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_67_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_52_good();");
  CWE190_Integer_Overflow__char_fscanf_add_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_51_good();");
  CWE190_Integer_Overflow__char_max_square_51_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_06_good();");
  CWE190_Integer_Overflow__char_rand_square_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_17_good();");
  CWE190_Integer_Overflow__char_rand_multiply_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_12_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_12_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_14_good();");
  CWE190_Integer_Overflow__char_fscanf_add_14_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_06_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_02_good();");
  CWE190_Integer_Overflow__char_max_add_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_64_good();");
  CWE190_Integer_Overflow__char_max_add_64_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_32_good();");
  CWE190_Integer_Overflow__char_fscanf_square_32_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_42_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_42_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_31_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_03_good();");
  CWE190_Integer_Overflow__char_max_multiply_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_06_good();");
  CWE190_Integer_Overflow__char_max_square_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_54_good();");
  CWE190_Integer_Overflow__char_rand_square_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_06_good();");
  CWE190_Integer_Overflow__char_rand_add_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_21_good();");
  CWE190_Integer_Overflow__char_max_square_21_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_51_good();");
  CWE190_Integer_Overflow__char_max_add_51_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_11_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_66_good();");
  CWE190_Integer_Overflow__char_max_square_66_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_16_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_53_good();");
  CWE190_Integer_Overflow__char_max_square_53_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_53_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_44_good();");
  CWE190_Integer_Overflow__char_max_square_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_66_good();");
  CWE190_Integer_Overflow__char_max_multiply_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_42_good();");
  CWE190_Integer_Overflow__char_max_add_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_07_good();");
  CWE190_Integer_Overflow__char_max_multiply_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_05_good();");
  CWE190_Integer_Overflow__char_max_add_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_51_good();");
  CWE190_Integer_Overflow__char_rand_multiply_51_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_18_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_18_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_09_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_54_good();");
  CWE190_Integer_Overflow__char_fscanf_add_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_13_good();");
  CWE190_Integer_Overflow__char_max_multiply_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_64_good();");
  CWE190_Integer_Overflow__char_rand_square_64_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_02_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_52_good();");
  CWE190_Integer_Overflow__char_rand_add_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_13_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_10_good();");
  CWE190_Integer_Overflow__char_fscanf_square_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_68_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_11_good();");
  CWE190_Integer_Overflow__char_rand_square_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_12_good();");
  CWE190_Integer_Overflow__char_rand_multiply_12_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_34_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_11_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_11_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_65_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_15_good();");
  CWE190_Integer_Overflow__char_rand_add_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_10_good();");
  CWE190_Integer_Overflow__char_rand_add_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_10_good();");
  CWE190_Integer_Overflow__char_rand_multiply_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_34_good();");
  CWE190_Integer_Overflow__char_rand_square_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_54_good();");
  CWE190_Integer_Overflow__char_rand_multiply_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_53_good();");
  CWE190_Integer_Overflow__char_rand_square_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_32_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_05_good();");
  CWE190_Integer_Overflow__char_rand_square_05_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_65_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_02_good();");
  CWE190_Integer_Overflow__char_fscanf_square_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_34_good();");
  CWE190_Integer_Overflow__char_fscanf_square_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_07_good();");
  CWE190_Integer_Overflow__char_max_add_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_34_good();");
  CWE190_Integer_Overflow__char_rand_multiply_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_53_good();");
  CWE190_Integer_Overflow__char_fscanf_add_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_61_good();");
  CWE190_Integer_Overflow__char_rand_square_61_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_17_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_15_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_15_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_66_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_41_good();");
  CWE190_Integer_Overflow__char_max_multiply_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_02_good();");
  CWE190_Integer_Overflow__char_rand_add_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_67_good();");
  CWE190_Integer_Overflow__char_rand_multiply_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_05_good();");
  CWE190_Integer_Overflow__char_fscanf_add_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_63_good();");
  CWE190_Integer_Overflow__char_rand_square_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_63_good();");
  CWE190_Integer_Overflow__char_max_multiply_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_67_good();");
  CWE190_Integer_Overflow__char_fscanf_square_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_22_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_22_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_61_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_05_good();");
  CWE190_Integer_Overflow__char_fscanf_square_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_32_good();");
  CWE190_Integer_Overflow__char_rand_square_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_14_good();");
  CWE190_Integer_Overflow__char_fscanf_square_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_67_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_02_good();");
  CWE190_Integer_Overflow__char_max_square_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_16_good();");
  CWE190_Integer_Overflow__char_max_square_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_18_good();");
  CWE190_Integer_Overflow__char_max_add_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_05_good();");
  CWE190_Integer_Overflow__char_max_multiply_05_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_63_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_65_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_05_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_05_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_66_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_67_good();");
  CWE190_Integer_Overflow__char_rand_add_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_53_good();");
  CWE190_Integer_Overflow__char_rand_add_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_32_good();");
  CWE190_Integer_Overflow__char_fscanf_add_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_22_good();");
  CWE190_Integer_Overflow__char_rand_multiply_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_14_good();");
  CWE190_Integer_Overflow__char_rand_multiply_14_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_05_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_68_good();");
  CWE190_Integer_Overflow__char_rand_multiply_68_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_64_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_64_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_64_good();");
  CWE190_Integer_Overflow__char_max_multiply_64_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_41_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_17_good();");
  CWE190_Integer_Overflow__char_rand_add_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_65_good();");
  CWE190_Integer_Overflow__char_max_add_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_32_good();");
  CWE190_Integer_Overflow__char_max_square_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_41_good();");
  CWE190_Integer_Overflow__char_fscanf_square_41_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_18_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_03_good();");
  CWE190_Integer_Overflow__char_rand_add_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_18_good();");
  CWE190_Integer_Overflow__char_fscanf_square_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_09_good();");
  CWE190_Integer_Overflow__char_max_multiply_09_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_66_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_05_good();");
  CWE190_Integer_Overflow__char_max_square_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_65_good();");
  CWE190_Integer_Overflow__char_rand_square_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_05_good();");
  CWE190_Integer_Overflow__char_rand_multiply_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_03_good();");
  CWE190_Integer_Overflow__char_fscanf_add_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_45_good();");
  CWE190_Integer_Overflow__char_fscanf_add_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_21_good();");
  CWE190_Integer_Overflow__char_rand_square_21_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_61_good();");
  CWE190_Integer_Overflow__char_fscanf_add_61_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_16_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_67_good();");
  CWE190_Integer_Overflow__char_fscanf_add_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_11_good();");
  CWE190_Integer_Overflow__char_rand_add_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_21_good();");
  CWE190_Integer_Overflow__char_rand_add_21_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_09_good();");
  CWE190_Integer_Overflow__char_rand_square_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_44_good();");
  CWE190_Integer_Overflow__char_rand_multiply_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_01_good();");
  CWE190_Integer_Overflow__char_rand_multiply_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_22_good();");
  CWE190_Integer_Overflow__char_rand_add_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_42_good();");
  CWE190_Integer_Overflow__char_rand_add_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_41_good();");
  CWE190_Integer_Overflow__char_rand_square_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_51_good();");
  CWE190_Integer_Overflow__char_fscanf_add_51_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_15_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_01_good();");
  CWE190_Integer_Overflow__char_rand_add_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_41_good();");
  CWE190_Integer_Overflow__char_fscanf_add_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_17_good();");
  CWE190_Integer_Overflow__char_max_add_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_52_good();");
  CWE190_Integer_Overflow__char_max_multiply_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_16_good();");
  CWE190_Integer_Overflow__char_rand_square_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_01_good();");
  CWE190_Integer_Overflow__char_fscanf_add_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_09_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_12_good();");
  CWE190_Integer_Overflow__char_max_multiply_12_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_01_good();");
  CWE190_Integer_Overflow__char_max_add_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_51_good();");
  CWE190_Integer_Overflow__char_rand_square_51_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_16_good();");
  CWE190_Integer_Overflow__char_fscanf_add_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_31_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_18_good();");
  CWE190_Integer_Overflow__char_rand_square_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_68_good();");
  CWE190_Integer_Overflow__char_max_add_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_15_good();");
  CWE190_Integer_Overflow__char_max_add_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_15_good();");
  CWE190_Integer_Overflow__char_max_multiply_15_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_22_good();");
  CWE190_Integer_Overflow__char_fscanf_square_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_66_good();");
  CWE190_Integer_Overflow__char_rand_square_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_18_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_63_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_61_good();");
  CWE190_Integer_Overflow__char_max_add_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_08_good();");
  CWE190_Integer_Overflow__char_rand_multiply_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_68_good();");
  CWE190_Integer_Overflow__char_max_multiply_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_04_good();");
  CWE190_Integer_Overflow__char_fscanf_add_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_11_good();");
  CWE190_Integer_Overflow__char_fscanf_add_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_21_good();");
  CWE190_Integer_Overflow__char_max_multiply_21_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_04_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_06_good();");
  CWE190_Integer_Overflow__char_max_add_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_31_good();");
  CWE190_Integer_Overflow__char_max_multiply_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_07_good();");
  CWE190_Integer_Overflow__char_fscanf_add_07_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_61_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_06_good();");
  CWE190_Integer_Overflow__char_rand_multiply_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_01_good();");
  CWE190_Integer_Overflow__char_fscanf_square_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_45_good();");
  CWE190_Integer_Overflow__char_fscanf_square_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_09_good();");
  CWE190_Integer_Overflow__char_rand_multiply_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_51_good();");
  CWE190_Integer_Overflow__char_rand_add_51_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_09_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_08_good();");
  CWE190_Integer_Overflow__char_fscanf_add_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_18_good();");
  CWE190_Integer_Overflow__char_max_multiply_18_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_11_good();");
  CWE190_Integer_Overflow__char_rand_multiply_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_53_good();");
  CWE190_Integer_Overflow__char_fscanf_square_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_13_good();");
  CWE190_Integer_Overflow__char_fscanf_add_13_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_16_good();");
  CWE190_Integer_Overflow__char_fscanf_square_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_61_good();");
  CWE190_Integer_Overflow__char_rand_add_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_06_good();");
  CWE190_Integer_Overflow__char_fscanf_add_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_07_good();");
  CWE190_Integer_Overflow__char_rand_square_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_15_good();");
  CWE190_Integer_Overflow__char_rand_multiply_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_32_good();");
  CWE190_Integer_Overflow__char_rand_multiply_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_12_good();");
  CWE190_Integer_Overflow__char_max_square_12_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_51_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_51_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_41_good();");
  CWE190_Integer_Overflow__char_max_square_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_66_good();");
  CWE190_Integer_Overflow__char_fscanf_square_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_21_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_21_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_63_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_63_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_45_good();");
  CWE190_Integer_Overflow__char_max_add_45_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_05_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_04_good();");
  CWE190_Integer_Overflow__char_max_add_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_34_good();");
  CWE190_Integer_Overflow__char_fscanf_add_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_14_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_07_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_61_good();");
  CWE190_Integer_Overflow__char_rand_multiply_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_61_good();");
  CWE190_Integer_Overflow__char_max_multiply_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_17_good();");
  CWE190_Integer_Overflow__char_rand_square_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_15_good();");
  CWE190_Integer_Overflow__char_fscanf_square_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_22_good();");
  CWE190_Integer_Overflow__char_fscanf_add_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_14_good();");
  CWE190_Integer_Overflow__char_max_multiply_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_64_good();");
  CWE190_Integer_Overflow__char_rand_multiply_64_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_01_good();");
  CWE190_Integer_Overflow__char_rand_square_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_63_good();");
  CWE190_Integer_Overflow__char_max_add_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_54_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_64_good();");
  CWE190_Integer_Overflow__char_rand_add_64_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_12_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_12_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_22_good();");
  CWE190_Integer_Overflow__char_max_square_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_64_good();");
  CWE190_Integer_Overflow__char_max_square_64_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_64_good();");
  CWE190_Integer_Overflow__char_fscanf_square_64_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_51_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_51_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_07_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_44_good();");
  CWE190_Integer_Overflow__char_fscanf_square_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_32_good();");
  CWE190_Integer_Overflow__char_max_add_32_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_15_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_31_good();");
  CWE190_Integer_Overflow__char_rand_add_31_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_14_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_15_good();");
  CWE190_Integer_Overflow__char_max_square_15_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_04_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_12_good();");
  CWE190_Integer_Overflow__char_fscanf_square_12_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_54_good();");
  CWE190_Integer_Overflow__char_max_multiply_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_04_good();");
  CWE190_Integer_Overflow__char_fscanf_square_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_31_good();");
  CWE190_Integer_Overflow__char_rand_multiply_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_10_good();");
  CWE190_Integer_Overflow__char_max_square_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_42_good();");
  CWE190_Integer_Overflow__char_rand_square_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_09_good();");
  CWE190_Integer_Overflow__char_fscanf_square_09_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_51_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_51_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_52_good();");
  CWE190_Integer_Overflow__char_max_square_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_65_good();");
  CWE190_Integer_Overflow__char_max_square_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_45_good();");
  CWE190_Integer_Overflow__char_max_multiply_45_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_44_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_15_good();");
  CWE190_Integer_Overflow__char_fscanf_add_15_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_22_good();");
  CWE190_Integer_Overflow__char_max_add_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_03_good();");
  CWE190_Integer_Overflow__char_rand_square_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_34_good();");
  CWE190_Integer_Overflow__char_rand_add_34_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_12_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_12_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_08_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_04_good();");
  CWE190_Integer_Overflow__char_max_square_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_07_good();");
  CWE190_Integer_Overflow__char_max_square_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_09_good();");
  CWE190_Integer_Overflow__char_max_add_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_53_good();");
  CWE190_Integer_Overflow__char_max_add_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_34_good();");
  CWE190_Integer_Overflow__char_max_square_34_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_17_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_17_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_68_good();");
  CWE190_Integer_Overflow__char_max_square_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_08_good();");
  CWE190_Integer_Overflow__char_rand_add_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_68_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_11_good();");
  CWE190_Integer_Overflow__char_max_add_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_07_good();");
  CWE190_Integer_Overflow__char_rand_multiply_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_61_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_31_good();");
  CWE190_Integer_Overflow__char_fscanf_add_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_14_good();");
  CWE190_Integer_Overflow__char_rand_square_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_31_good();");
  CWE190_Integer_Overflow__char_max_square_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_44_good();");
  CWE190_Integer_Overflow__char_fscanf_add_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_52_good();");
  CWE190_Integer_Overflow__char_fscanf_square_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_04_good();");
  CWE190_Integer_Overflow__char_rand_add_04_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_52_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_53_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_67_good();");
  CWE190_Integer_Overflow__char_max_multiply_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_44_good();");
  CWE190_Integer_Overflow__char_rand_square_44_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_09_good();");
  CWE190_Integer_Overflow__char_fscanf_add_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_13_good();");
  CWE190_Integer_Overflow__char_max_add_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_07_good();");
  CWE190_Integer_Overflow__char_fscanf_square_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_16_good();");
  CWE190_Integer_Overflow__char_max_add_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_18_good();");
  CWE190_Integer_Overflow__char_fscanf_add_18_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_06_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_11_good();");
  CWE190_Integer_Overflow__char_max_square_11_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_68_good();");
  CWE190_Integer_Overflow__char_fscanf_square_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_45_good();");
  CWE190_Integer_Overflow__char_rand_multiply_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_68_good();");
  CWE190_Integer_Overflow__char_fscanf_add_68_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_54_good();");
  CWE190_Integer_Overflow__char_fscanf_square_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_14_good();");
  CWE190_Integer_Overflow__char_max_add_14_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_45_good();");
  CWE190_Integer_Overflow__char_rand_add_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_06_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_42_good();");
  CWE190_Integer_Overflow__char_fscanf_add_42_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_22_good();");
  CWE190_Integer_Overflow__char_max_multiply_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_05_good();");
  CWE190_Integer_Overflow__char_rand_add_05_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_31_good();");
  CWE190_Integer_Overflow__char_fscanf_square_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_63_good();");
  CWE190_Integer_Overflow__char_max_square_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_45_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_45_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_12_good();");
  CWE190_Integer_Overflow__char_max_add_12_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_04_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_04_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_16_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_66_good();");
  CWE190_Integer_Overflow__char_fscanf_add_66_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_41_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_41_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_41_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_54_good();");
  CWE190_Integer_Overflow__char_rand_add_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_53_good();");
  CWE190_Integer_Overflow__char_rand_multiply_53_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_13_good();");
  CWE190_Integer_Overflow__char_rand_add_13_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_52_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_52_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_61_good();");
  CWE190_Integer_Overflow__char_max_square_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_03_good();");
  CWE190_Integer_Overflow__char_max_square_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_34_good();");
  CWE190_Integer_Overflow__char_max_multiply_34_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_15_good();");
  CWE190_Integer_Overflow__char_rand_square_15_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_10_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_65_good();");
  CWE190_Integer_Overflow__char_fscanf_add_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_17_good();");
  CWE190_Integer_Overflow__char_max_square_17_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_07_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_07_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_61_good();");
  CWE190_Integer_Overflow__char_fscanf_square_61_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_08_good();");
  CWE190_Integer_Overflow__char_fscanf_square_08_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_41_good();");
  CWE190_Integer_Overflow__char_max_add_41_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_64_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_64_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_09_good();");
  CWE190_Integer_Overflow__char_rand_add_09_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_51_good();");
  CWE190_Integer_Overflow__char_fscanf_square_51_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_10_good();");
  CWE190_Integer_Overflow__char_fscanf_add_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_13_good();");
  CWE190_Integer_Overflow__char_rand_square_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_63_good();");
  CWE190_Integer_Overflow__char_rand_add_63_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_54_good();");
  CWE190_Integer_Overflow__char_max_square_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_06_good();");
  CWE190_Integer_Overflow__char_fscanf_square_06_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_01_good();");
  CWE190_Integer_Overflow__char_max_multiply_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_03_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_21_good();");
  CWE190_Integer_Overflow__char_max_add_21_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_31_good();");
  CWE190_Integer_Overflow__char_rand_square_31_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_02_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_02_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_16_good();");
  CWE190_Integer_Overflow__char_max_multiply_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_22_good();");
  CWE190_Integer_Overflow__char_rand_square_22_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_67_good();");
  CWE190_Integer_Overflow__char_rand_square_67_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_16_good();");
  CWE190_Integer_Overflow__char_rand_multiply_16_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_21_good();");
  CWE190_Integer_Overflow__char_fscanf_add_21_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_54_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_34_good();");
  CWE190_Integer_Overflow__char_max_add_34_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_54_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_18_good();");
  CWE190_Integer_Overflow__char_rand_multiply_18_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_21_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_21_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_32_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_32_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_44_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_44_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_13_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_13_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_03_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_03_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_31_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_31_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_10_good();");
  CWE190_Integer_Overflow__char_fscanf_multiply_10_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_08_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_08_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_03_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_03_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_10_good();");
  CWE190_Integer_Overflow__char_max_multiply_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_65_good();");
  CWE190_Integer_Overflow__char_max_multiply_65_good();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_10_good();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_10_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_65_good();");
  CWE190_Integer_Overflow__char_rand_add_65_good();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_13_good();");
  CWE190_Integer_Overflow__char_rand_multiply_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_21_good();");
  CWE190_Integer_Overflow__char_fscanf_square_21_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_13_good();");
  CWE190_Integer_Overflow__char_max_square_13_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_66_good();");
  CWE190_Integer_Overflow__char_max_add_66_good();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_67_bad();");
  CWE190_Integer_Overflow__char_max_square_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_08_bad();");
  CWE190_Integer_Overflow__char_max_square_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_02_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_17_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_14_bad();");
  CWE190_Integer_Overflow__char_rand_add_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_32_bad();");
  CWE190_Integer_Overflow__char_rand_add_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_09_bad();");
  CWE190_Integer_Overflow__char_max_square_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_45_bad();");
  CWE190_Integer_Overflow__char_max_square_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_14_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_13_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_01_bad();");
  CWE190_Integer_Overflow__char_max_square_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_22_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_41_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_68_bad();");
  CWE190_Integer_Overflow__char_rand_add_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_11_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_04_bad();");
  CWE190_Integer_Overflow__char_rand_square_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_32_bad();");
  CWE190_Integer_Overflow__char_max_multiply_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_08_bad();");
  CWE190_Integer_Overflow__char_max_multiply_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_63_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_01_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_64_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_11_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_53_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_21_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_21_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_41_bad();");
  CWE190_Integer_Overflow__char_rand_add_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_08_bad();");
  CWE190_Integer_Overflow__char_rand_square_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_65_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_32_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_53_bad();");
  CWE190_Integer_Overflow__char_max_multiply_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_42_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_03_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_12_bad();");
  CWE190_Integer_Overflow__char_rand_add_12_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_08_bad();");
  CWE190_Integer_Overflow__char_max_add_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_64_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_64_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_12_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_67_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_65_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_66_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_12_bad();");
  CWE190_Integer_Overflow__char_rand_square_12_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_04_bad();");
  CWE190_Integer_Overflow__char_max_multiply_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_52_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_44_bad();");
  CWE190_Integer_Overflow__char_max_add_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_68_bad();");
  CWE190_Integer_Overflow__char_rand_square_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_44_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_10_bad();");
  CWE190_Integer_Overflow__char_max_add_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_45_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_11_bad();");
  CWE190_Integer_Overflow__char_max_multiply_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_06_bad();");
  CWE190_Integer_Overflow__char_max_multiply_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_34_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_02_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_42_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_44_bad();");
  CWE190_Integer_Overflow__char_max_multiply_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_42_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_16_bad();");
  CWE190_Integer_Overflow__char_rand_add_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_03_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_03_bad();");
  CWE190_Integer_Overflow__char_max_add_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_04_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_02_bad();");
  CWE190_Integer_Overflow__char_max_multiply_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_02_bad();");
  CWE190_Integer_Overflow__char_rand_square_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_10_bad();");
  CWE190_Integer_Overflow__char_rand_square_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_51_bad();");
  CWE190_Integer_Overflow__char_max_multiply_51_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_17_bad();");
  CWE190_Integer_Overflow__char_max_multiply_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_45_bad();");
  CWE190_Integer_Overflow__char_rand_square_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_52_bad();");
  CWE190_Integer_Overflow__char_rand_square_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_42_bad();");
  CWE190_Integer_Overflow__char_max_multiply_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_52_bad();");
  CWE190_Integer_Overflow__char_max_add_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_63_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_42_bad();");
  CWE190_Integer_Overflow__char_max_square_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_08_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_44_bad();");
  CWE190_Integer_Overflow__char_rand_add_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_14_bad();");
  CWE190_Integer_Overflow__char_max_square_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_13_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_31_bad();");
  CWE190_Integer_Overflow__char_max_add_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_52_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_17_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_18_bad();");
  CWE190_Integer_Overflow__char_max_square_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_54_bad();");
  CWE190_Integer_Overflow__char_max_add_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_42_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_66_bad();");
  CWE190_Integer_Overflow__char_rand_add_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_07_bad();");
  CWE190_Integer_Overflow__char_rand_add_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_63_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_17_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_01_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_21_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_21_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_18_bad();");
  CWE190_Integer_Overflow__char_rand_add_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_67_bad();");
  CWE190_Integer_Overflow__char_max_add_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_67_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_52_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_51_bad();");
  CWE190_Integer_Overflow__char_max_square_51_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_06_bad();");
  CWE190_Integer_Overflow__char_rand_square_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_17_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_12_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_12_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_14_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_06_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_02_bad();");
  CWE190_Integer_Overflow__char_max_add_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_64_bad();");
  CWE190_Integer_Overflow__char_max_add_64_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_32_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_42_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_31_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_03_bad();");
  CWE190_Integer_Overflow__char_max_multiply_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_06_bad();");
  CWE190_Integer_Overflow__char_max_square_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_54_bad();");
  CWE190_Integer_Overflow__char_rand_square_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_06_bad();");
  CWE190_Integer_Overflow__char_rand_add_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_21_bad();");
  CWE190_Integer_Overflow__char_max_square_21_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_51_bad();");
  CWE190_Integer_Overflow__char_max_add_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_11_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_66_bad();");
  CWE190_Integer_Overflow__char_max_square_66_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_16_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_53_bad();");
  CWE190_Integer_Overflow__char_max_square_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_53_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_44_bad();");
  CWE190_Integer_Overflow__char_max_square_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_66_bad();");
  CWE190_Integer_Overflow__char_max_multiply_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_42_bad();");
  CWE190_Integer_Overflow__char_max_add_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_07_bad();");
  CWE190_Integer_Overflow__char_max_multiply_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_05_bad();");
  CWE190_Integer_Overflow__char_max_add_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_51_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_18_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_09_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_54_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_13_bad();");
  CWE190_Integer_Overflow__char_max_multiply_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_64_bad();");
  CWE190_Integer_Overflow__char_rand_square_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_02_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_52_bad();");
  CWE190_Integer_Overflow__char_rand_add_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_13_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_10_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_68_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_11_bad();");
  CWE190_Integer_Overflow__char_rand_square_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_12_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_34_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_11_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_65_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_15_bad();");
  CWE190_Integer_Overflow__char_rand_add_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_10_bad();");
  CWE190_Integer_Overflow__char_rand_add_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_10_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_34_bad();");
  CWE190_Integer_Overflow__char_rand_square_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_54_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_53_bad();");
  CWE190_Integer_Overflow__char_rand_square_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_32_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_05_bad();");
  CWE190_Integer_Overflow__char_rand_square_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_65_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_02_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_34_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_07_bad();");
  CWE190_Integer_Overflow__char_max_add_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_34_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_53_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_61_bad();");
  CWE190_Integer_Overflow__char_rand_square_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_17_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_15_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_66_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_41_bad();");
  CWE190_Integer_Overflow__char_max_multiply_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_02_bad();");
  CWE190_Integer_Overflow__char_rand_add_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_67_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_05_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_63_bad();");
  CWE190_Integer_Overflow__char_rand_square_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_63_bad();");
  CWE190_Integer_Overflow__char_max_multiply_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_67_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_22_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_61_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_05_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_32_bad();");
  CWE190_Integer_Overflow__char_rand_square_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_14_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_67_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_02_bad();");
  CWE190_Integer_Overflow__char_max_square_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_16_bad();");
  CWE190_Integer_Overflow__char_max_square_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_18_bad();");
  CWE190_Integer_Overflow__char_max_add_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_05_bad();");
  CWE190_Integer_Overflow__char_max_multiply_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_63_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_65_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_05_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_66_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_67_bad();");
  CWE190_Integer_Overflow__char_rand_add_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_53_bad();");
  CWE190_Integer_Overflow__char_rand_add_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_32_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_22_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_14_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_05_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_68_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_64_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_64_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_64_bad();");
  CWE190_Integer_Overflow__char_max_multiply_64_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_41_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_17_bad();");
  CWE190_Integer_Overflow__char_rand_add_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_65_bad();");
  CWE190_Integer_Overflow__char_max_add_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_32_bad();");
  CWE190_Integer_Overflow__char_max_square_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_41_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_18_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_03_bad();");
  CWE190_Integer_Overflow__char_rand_add_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_18_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_09_bad();");
  CWE190_Integer_Overflow__char_max_multiply_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_66_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_05_bad();");
  CWE190_Integer_Overflow__char_max_square_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_65_bad();");
  CWE190_Integer_Overflow__char_rand_square_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_05_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_03_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_45_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_21_bad();");
  CWE190_Integer_Overflow__char_rand_square_21_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_61_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_16_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_67_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_11_bad();");
  CWE190_Integer_Overflow__char_rand_add_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_21_bad();");
  CWE190_Integer_Overflow__char_rand_add_21_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_09_bad();");
  CWE190_Integer_Overflow__char_rand_square_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_44_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_01_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_22_bad();");
  CWE190_Integer_Overflow__char_rand_add_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_42_bad();");
  CWE190_Integer_Overflow__char_rand_add_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_41_bad();");
  CWE190_Integer_Overflow__char_rand_square_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_51_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_15_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_01_bad();");
  CWE190_Integer_Overflow__char_rand_add_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_41_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_17_bad();");
  CWE190_Integer_Overflow__char_max_add_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_52_bad();");
  CWE190_Integer_Overflow__char_max_multiply_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_16_bad();");
  CWE190_Integer_Overflow__char_rand_square_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_01_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_09_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_12_bad();");
  CWE190_Integer_Overflow__char_max_multiply_12_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_01_bad();");
  CWE190_Integer_Overflow__char_max_add_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_51_bad();");
  CWE190_Integer_Overflow__char_rand_square_51_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_16_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_31_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_18_bad();");
  CWE190_Integer_Overflow__char_rand_square_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_68_bad();");
  CWE190_Integer_Overflow__char_max_add_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_15_bad();");
  CWE190_Integer_Overflow__char_max_add_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_15_bad();");
  CWE190_Integer_Overflow__char_max_multiply_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_22_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_66_bad();");
  CWE190_Integer_Overflow__char_rand_square_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_18_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_63_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_61_bad();");
  CWE190_Integer_Overflow__char_max_add_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_08_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_68_bad();");
  CWE190_Integer_Overflow__char_max_multiply_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_04_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_11_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_21_bad();");
  CWE190_Integer_Overflow__char_max_multiply_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_04_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_06_bad();");
  CWE190_Integer_Overflow__char_max_add_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_31_bad();");
  CWE190_Integer_Overflow__char_max_multiply_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_07_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_61_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_06_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_01_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_45_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_09_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_51_bad();");
  CWE190_Integer_Overflow__char_rand_add_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_09_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_08_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_18_bad();");
  CWE190_Integer_Overflow__char_max_multiply_18_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_11_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_53_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_13_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_16_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_61_bad();");
  CWE190_Integer_Overflow__char_rand_add_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_06_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_07_bad();");
  CWE190_Integer_Overflow__char_rand_square_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_15_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_32_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_12_bad();");
  CWE190_Integer_Overflow__char_max_square_12_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_51_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_51_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_41_bad();");
  CWE190_Integer_Overflow__char_max_square_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_66_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_66_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_21_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_63_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_45_bad();");
  CWE190_Integer_Overflow__char_max_add_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_05_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_04_bad();");
  CWE190_Integer_Overflow__char_max_add_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_34_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_14_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_07_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_61_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_61_bad();");
  CWE190_Integer_Overflow__char_max_multiply_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_17_bad();");
  CWE190_Integer_Overflow__char_rand_square_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_15_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_22_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_14_bad();");
  CWE190_Integer_Overflow__char_max_multiply_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_64_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_64_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_01_bad();");
  CWE190_Integer_Overflow__char_rand_square_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_63_bad();");
  CWE190_Integer_Overflow__char_max_add_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_54_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_64_bad();");
  CWE190_Integer_Overflow__char_rand_add_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_12_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_12_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_22_bad();");
  CWE190_Integer_Overflow__char_max_square_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_64_bad();");
  CWE190_Integer_Overflow__char_max_square_64_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_64_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_51_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_07_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_44_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_32_bad();");
  CWE190_Integer_Overflow__char_max_add_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_15_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_31_bad();");
  CWE190_Integer_Overflow__char_rand_add_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_14_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_15_bad();");
  CWE190_Integer_Overflow__char_max_square_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_04_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_12_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_12_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_54_bad();");
  CWE190_Integer_Overflow__char_max_multiply_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_04_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_31_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_10_bad();");
  CWE190_Integer_Overflow__char_max_square_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_42_bad();");
  CWE190_Integer_Overflow__char_rand_square_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_09_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_51_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_51_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_52_bad();");
  CWE190_Integer_Overflow__char_max_square_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_65_bad();");
  CWE190_Integer_Overflow__char_max_square_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_45_bad();");
  CWE190_Integer_Overflow__char_max_multiply_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_44_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_15_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_15_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_22_bad();");
  CWE190_Integer_Overflow__char_max_add_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_03_bad();");
  CWE190_Integer_Overflow__char_rand_square_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_34_bad();");
  CWE190_Integer_Overflow__char_rand_add_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_12_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_08_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_04_bad();");
  CWE190_Integer_Overflow__char_max_square_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_07_bad();");
  CWE190_Integer_Overflow__char_max_square_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_09_bad();");
  CWE190_Integer_Overflow__char_max_add_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_53_bad();");
  CWE190_Integer_Overflow__char_max_add_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_34_bad();");
  CWE190_Integer_Overflow__char_max_square_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_17_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_17_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_68_bad();");
  CWE190_Integer_Overflow__char_max_square_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_08_bad();");
  CWE190_Integer_Overflow__char_rand_add_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_68_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_11_bad();");
  CWE190_Integer_Overflow__char_max_add_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_07_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_61_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_31_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_14_bad();");
  CWE190_Integer_Overflow__char_rand_square_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_31_bad();");
  CWE190_Integer_Overflow__char_max_square_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_44_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_52_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_04_bad();");
  CWE190_Integer_Overflow__char_rand_add_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_52_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_53_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_67_bad();");
  CWE190_Integer_Overflow__char_max_multiply_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_44_bad();");
  CWE190_Integer_Overflow__char_rand_square_44_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_09_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_13_bad();");
  CWE190_Integer_Overflow__char_max_add_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_07_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_16_bad();");
  CWE190_Integer_Overflow__char_max_add_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_18_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_06_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_11_bad();");
  CWE190_Integer_Overflow__char_max_square_11_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_68_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_45_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_68_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_68_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_54_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_14_bad();");
  CWE190_Integer_Overflow__char_max_add_14_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_45_bad();");
  CWE190_Integer_Overflow__char_rand_add_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_06_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_42_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_42_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_22_bad();");
  CWE190_Integer_Overflow__char_max_multiply_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_05_bad();");
  CWE190_Integer_Overflow__char_rand_add_05_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_31_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_63_bad();");
  CWE190_Integer_Overflow__char_max_square_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_45_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_45_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_12_bad();");
  CWE190_Integer_Overflow__char_max_add_12_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_04_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_04_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_16_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_66_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_66_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_41_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_41_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_54_bad();");
  CWE190_Integer_Overflow__char_rand_add_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_53_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_53_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_13_bad();");
  CWE190_Integer_Overflow__char_rand_add_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_52_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_52_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_61_bad();");
  CWE190_Integer_Overflow__char_max_square_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_03_bad();");
  CWE190_Integer_Overflow__char_max_square_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_34_bad();");
  CWE190_Integer_Overflow__char_max_multiply_34_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_15_bad();");
  CWE190_Integer_Overflow__char_rand_square_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_10_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_65_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_17_bad();");
  CWE190_Integer_Overflow__char_max_square_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_07_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_07_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_61_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_61_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_08_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_08_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_41_bad();");
  CWE190_Integer_Overflow__char_max_add_41_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_64_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_64_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_09_bad();");
  CWE190_Integer_Overflow__char_rand_add_09_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_51_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_51_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_10_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_13_bad();");
  CWE190_Integer_Overflow__char_rand_square_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_63_bad();");
  CWE190_Integer_Overflow__char_rand_add_63_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_54_bad();");
  CWE190_Integer_Overflow__char_max_square_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_06_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_06_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_01_bad();");
  CWE190_Integer_Overflow__char_max_multiply_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_03_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_21_bad();");
  CWE190_Integer_Overflow__char_max_add_21_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_31_bad();");
  CWE190_Integer_Overflow__char_rand_square_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_02_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_02_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_16_bad();");
  CWE190_Integer_Overflow__char_max_multiply_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_22_bad();");
  CWE190_Integer_Overflow__char_rand_square_22_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_square_67_bad();");
  CWE190_Integer_Overflow__char_rand_square_67_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_16_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_16_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_add_21_bad();");
  CWE190_Integer_Overflow__char_fscanf_add_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_54_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_34_bad();");
  CWE190_Integer_Overflow__char_max_add_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_54_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_18_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_21_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_32_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_32_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_44_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_13_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_03_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_31_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_31_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_multiply_10_bad();");
  CWE190_Integer_Overflow__char_fscanf_multiply_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_08_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_multiply_03_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_03_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_10_bad();");
  CWE190_Integer_Overflow__char_max_multiply_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_multiply_65_bad();");
  CWE190_Integer_Overflow__char_max_multiply_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int64_t_fscanf_add_10_bad();");
  CWE190_Integer_Overflow__int64_t_fscanf_add_10_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_add_65_bad();");
  CWE190_Integer_Overflow__char_rand_add_65_bad();
  printLine("Calling CWE190_Integer_Overflow__char_rand_multiply_13_bad();");
  CWE190_Integer_Overflow__char_rand_multiply_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_fscanf_square_21_bad();");
  CWE190_Integer_Overflow__char_fscanf_square_21_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_square_13_bad();");
  CWE190_Integer_Overflow__char_max_square_13_bad();
  printLine("Calling CWE190_Integer_Overflow__char_max_add_66_bad();");
  CWE190_Integer_Overflow__char_max_add_66_bad();
  return 0;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_02_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043b7b0,&local_18);
  local_10 = local_18 + 1;
  printLongLongLine(local_10);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043b7b0,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043b7b0,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_square_68_badData *
                                           CWE190_Integer_Overflow__char_rand_square_68_badData));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_square_68_goodG2BData
                                           * 
                                           CWE190_Integer_Overflow__char_rand_square_68_goodG2BData)
                  );
  return;
}


void CWE190_Integer_Overflow__char_rand_square_68b_goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__char_rand_square_68_goodB2GData < -0xb) ||
     ('\v' < CWE190_Integer_Overflow__char_rand_square_68_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_rand_square_68_goodB2GData
                                             * 
                                             CWE190_Integer_Overflow__char_rand_square_68_goodB2GData
                                             ));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_52c_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_17_bad(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_0043b860,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (0 < local_20) {
      local_18 = local_20 * 2;
      printLongLongLine(local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_0043b860,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (0 < local_20) {
      if (local_20 < 0x3fffffffffffffff) {
        local_18 = local_20 * 2;
        printLongLongLine(local_18);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_18 != 0) {
      printLongLongLine(local_18 * 2);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043b89e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_54b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_add_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043b89e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_54b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_10_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043b8a8,&local_18);
  }
  if (globalTrue != 0) {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043b8a8,&local_18);
  }
  if (globalFalse == 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043b8a8,&local_18);
  }
  if (globalTrue != 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFalse == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_44_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043b900,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2BSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(long lParm1)

{
  if (0 < lParm1) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043b900,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_68_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043b93e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_68_badData = local_9;
  CWE190_Integer_Overflow__char_fscanf_square_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_square_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_fscanf_square_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043b93e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_68_goodB2GData = local_9;
  CWE190_Integer_Overflow__char_fscanf_square_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_fscanf_add_32_bad(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043b948,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  local_1a = local_19 + 1;
  printHexCharLine((ulong)(uint)(int)local_1a);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 2;
  local_1a = 2;
  local_1b = 3;
  printHexCharLine(3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043b948,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  if (local_19 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1a = local_19 + 1;
    printHexCharLine((ulong)(uint)(int)local_1a);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_51_bad(void)

{
  CWE190_Integer_Overflow__char_max_add_51b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_add_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_add_51b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_add_51_good(void)

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


void CWE190_Integer_Overflow__char_rand_multiply_08_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < (char)local_9)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < (char)local_9)) {
    if ((char)local_9 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54c_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54d_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54c_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54d_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54c_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54d_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_64b_badSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_64b_goodG2BSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_64b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_54b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_square_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_54b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_01_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043ba10,&local_18);
  local_10 = local_18 + 1;
  printLongLongLine(local_10);
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043ba10,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53d_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53d_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53d_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_05_bad(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xffffff80);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticTrue != 0) {
    local_9 = 0x7f;
  }
  if (staticFalse == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405f89) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


undefined8 CWE190_Integer_Overflow__int64_t_fscanf_multiply_61b_badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043bb0e,&local_10);
  return local_10;
}


undefined8 CWE190_Integer_Overflow__int64_t_fscanf_multiply_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__int64_t_fscanf_multiply_61b_goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043bb0e,&local_10);
  return local_10;
}


void CWE190_Integer_Overflow__char_rand_add_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_64b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043bb4e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_53b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_square_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043bb4e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_53b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_15_bad(void)

{
  printHexCharLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004062f8) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406343) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_square_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_add_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_45_bad(void)

{
  CWE190_Integer_Overflow__char_max_add_45_badData = 0x7f;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_add_45_goodG2BData + 1
                                           ));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_add_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_max_add_45_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_add_45_goodB2GData +
                                             1));
  }
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_add_45_goodB2GData = 0x7f;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_max_add_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_53c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_53c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_53c_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_06_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004065b9) */
/* WARNING: Removing unreachable block (ram,0x004065cb) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406618) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406651) */

void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_add_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0x7f;
}


void CWE190_Integer_Overflow__char_max_square_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x7f;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_09_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_65b_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_04_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043bce8,&local_a);
  local_9 = local_a + 1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406b62) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043bce8,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043bce8,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406c14) */

void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_31_bad(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043bd38,&local_c);
  local_9 = local_c;
  local_a = local_c;
  local_b = local_c + 1;
  printHexCharLine((ulong)(uint)(int)local_b);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void goodB2G(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043bd38,&local_c);
  local_9 = local_c;
  local_a = local_c;
  if (local_c == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_b = local_c + 1;
    printHexCharLine((ulong)(uint)(int)local_b);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_64_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_square_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_rand_square_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_square_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_15_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_52_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_52b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_multiply_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_52b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043bdae,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_fscanf_multiply_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043bdae,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_51b_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_51b_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_51b_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_67_bad(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043bdee,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_67b_badSink((ulong)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_add_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043bdee,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_67b_goodB2GSink((ulong)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_fscanf_multiply_61b_badSource(0);
  if (0 < lVar1) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_fscanf_multiply_61b_goodG2BSource(0);
  if (0 < lVar1) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_fscanf_multiply_61b_goodB2GSource(0);
  if (0 < lVar1) {
    if (lVar1 < 0x3fffffffffffffff) {
      printLongLongLine(lVar1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_16_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_22_badSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_add_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_add_22_goodB2G1Global == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_22_goodB2G2Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_add_22_goodB2G2Global != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_22_goodG2BSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_add_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_05_bad(void)

{
  if (staticTrue != 0) {
    printHexCharLine(1);
  }
  return;
}


void goodB2G1(void)

{
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    local_9 = 0x7f;
  }
  if (staticFalse == 0) {
    if (((char)local_9 < -0xb) || (0xb < local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040773a) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_41_bad(void)

{
  badSink(0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_square_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_07_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043bf40,&local_18);
  }
  if ((staticFive == 5) && (0 < local_18)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043bf40,&local_18);
  }
  if (staticFive == 5) {
    if (0 < local_18) {
      if (local_18 < 0x3fffffffffffffff) {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043bf40,&local_18);
  }
  if ((staticFive == 5) && (0 < local_18)) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_add_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_64b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_65b_badSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_rand_square_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_65b_goodB2GSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_51_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_51b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_multiply_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_51b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54e_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54e_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54e_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_34_bad(void)

{
  printHexCharLine(1);
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407f00) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_square_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * *(char *)(lParm1 + 2)));
  return;
}


void CWE190_Integer_Overflow__char_max_square_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * *(char *)(lParm1 + 2)));
  return;
}


void CWE190_Integer_Overflow__char_max_square_66b_goodB2GSink(long lParm1)

{
  char cVar1;
  
  cVar1 = *(char *)(lParm1 + 2);
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_52_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c076,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_52b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_square_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c076,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_52b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_51b_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_67_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_67b_badSink((ulong)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_square_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_67b_goodB2GSink((ulong)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_22_badSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_rand_square_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_rand_square_22_goodB2G1Global == 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_22_goodB2G2Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_rand_square_22_goodB2G2Global != 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_22_goodG2BSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_rand_square_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_10_bad(void)

{
  if (globalTrue != 0) {
    printHexCharLine(1);
  }
  return;
}


void goodB2G1(void)

{
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    local_9 = 0x7f;
  }
  if (globalFalse == 0) {
    if (((char)local_9 < -0xb) || (0xb < local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408402) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_rand_multiply_45_badData) {
    printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_multiply_45_badData
                                             * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_45_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_multiply_45_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_multiply_45_badData = (byte)iVar2;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_rand_multiply_45_goodG2BData) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_rand_multiply_45_goodG2BData
                                             * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_multiply_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_rand_multiply_45_goodB2GData) {
    if (CWE190_Integer_Overflow__char_rand_multiply_45_goodB2GData < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE190_Integer_Overflow__char_rand_multiply_45_goodB2GData
                                               * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_multiply_45_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_multiply_45_goodB2GData = (byte)iVar2;
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_16_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c190,&local_a);
  local_9 = local_a * local_a;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c190,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_14_bad(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xfffffffe);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004087da) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040882e) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_add_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_add_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_max_add_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_add_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_max_add_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_06_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408a40) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408b0f) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_max_multiply_32_bad(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x7f;
  local_1a = 0x7f;
  local_1b = 0xfe;
  printHexCharLine(0xfffffffe);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 2;
  local_1a = 2;
  local_1b = 4;
  printHexCharLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408cb1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined local_1c [2];
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = local_1c;
  local_18 = local_1c;
  local_1c[0] = 0x20;
  local_19 = 0x7f;
  local_1a = 0x7f;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c2ae,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c2ae,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_54b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_68_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_add_68_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_add_68_badData = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_add_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_add_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_rand_add_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_add_68_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_add_68_goodB2GData = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_add_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_12_bad(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_b = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_0043c2b8,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((local_b < -0xb) || ('\v' < local_b)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_b * local_b;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    local_9 = local_b * local_b;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_0043c2b8,&local_b);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_0043c2b8,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((local_b < -0xb) || ('\v' < local_b)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_b * local_b;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    if ((local_b < -0xb) || ('\v' < local_b)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_b * local_b;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(4);
  }
  else {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_10_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((globalTrue != 0) && (0 < (char)local_9)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFalse == 0) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((globalTrue != 0) && (0 < (char)local_9)) {
    if ((char)local_9 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  if (0 < CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_badData) {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_badData * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c348,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_goodG2BData) {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_goodG2BData * 2);
  }
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_goodB2GData) {
    if (CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_goodB2GData < 0x3fffffffffffffff) {
      printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_goodB2GData * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c348,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_goodB2GData = local_10;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_66b_badSink(long lParm1)

{
  if (0 < *(char *)(lParm1 + 2)) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_66b_goodG2BSink(long lParm1)

{
  if (0 < *(char *)(lParm1 + 2)) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_66b_goodB2GSink(long lParm1)

{
  char cVar1;
  
  cVar1 = *(char *)(lParm1 + 2);
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_06_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c3c4,&local_18);
  if (0 < local_18) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004095e7) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c3c4,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c3c4,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004096d0) */

void goodG2B1(void)

{
  printLongLongLine(4);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(4);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_67_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_67b_badSink((ulong)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_add_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_67b_goodB2GSink((ulong)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_63b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53d_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53d_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53d_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_15_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c488,&local_a);
  local_9 = local_a + 1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c488,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c488,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53d_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_06_bad(void)

{
  printHexCharLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409c43) */
/* WARNING: Removing unreachable block (ram,0x00409c61) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409cbe) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00409cfb) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_square_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_07_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 CWE190_Integer_Overflow__char_max_multiply_61b_badSource(void)

{
  return 0x7f;
}


undefined8 CWE190_Integer_Overflow__char_max_multiply_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__char_max_multiply_61b_goodB2GSource(void)

{
  return 0x7f;
}


ulong badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0043c5a8,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__char_fscanf_add_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


ulong goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0043c5a8,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_11_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043c5e8,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043c5e8,&local_a);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043c5e8,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_02_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c638,&local_a);
  local_9 = local_a * local_a;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c638,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c638,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_22_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_rand_square_22_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_rand_square_22_goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_rand_square_22_goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_square_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_rand_square_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_14_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043c678,&local_18);
  }
  if (globalFive == 5) {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043c678,&local_18);
  }
  if (globalFive == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043c678,&local_18);
  }
  if (globalFive == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int64_t_fscanf_add_32_bad(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c6d0,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  local_28 = local_20 + 1;
  printLongLongLine(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 2;
  local_28 = 2;
  local_30 = 3;
  printLongLongLine(3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c6d0,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  if (local_20 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_28 = local_20 + 1;
    printLongLongLine(local_28);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_65_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__char_fscanf_multiply_65b_badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c70e,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__char_fscanf_multiply_65b_goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c70e,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_64b_badSink(long *plParm1)

{
  if (0 < *plParm1) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_64b_goodG2BSink(long *plParm1)

{
  if (0 < *plParm1) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_64b_goodB2GSink(long *plParm1)

{
  long lVar1;
  
  lVar1 = *plParm1;
  if (0 < lVar1) {
    if (lVar1 < 0x3fffffffffffffff) {
      printLongLongLine(lVar1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_10_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043c750,&local_a);
  }
  if (globalTrue != 0) {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043c750,&local_a);
  }
  if (globalFalse == 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043c750,&local_a);
  }
  if (globalTrue != 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_67b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_67b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_67b_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_05_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043c810,&local_a);
  }
  if (staticTrue != 0) {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043c810,&local_a);
  }
  if (staticFalse == 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043c810,&local_a);
  }
  if (staticTrue != 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_01_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c860,&local_a);
  local_9 = local_a * local_a;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c860,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_68b_badSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_fscanf_multiply_68_badData) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_multiply_68_badData
                                             * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_68b_goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_fscanf_multiply_68_goodG2BData) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_multiply_68_goodG2BData
                                             * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_68b_goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_fscanf_multiply_68_goodB2GData) {
    if (CWE190_Integer_Overflow__char_fscanf_multiply_68_goodB2GData < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE190_Integer_Overflow__char_fscanf_multiply_68_goodB2GData
                                               * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_41_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c8d8,&local_9);
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043c8d8,&local_9);
  goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_13_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_04_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c970,&local_18);
  local_10 = local_18 + 1;
  printLongLongLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b696) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c970,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c970,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b76c) */

void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_31_bad(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c9c8,&local_28);
  local_10 = local_28;
  local_18 = local_28;
  local_20 = local_28 + 1;
  printLongLongLine(local_20);
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void goodB2G(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_0043c9c8,&local_28);
  local_10 = local_28;
  local_18 = local_28;
  if (local_28 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_20 = local_28 + 1;
    printLongLongLine(local_20);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_68_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043ca06,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_68_badData = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_add_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_add_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043ca06,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_68_goodB2GData = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_add_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_34_bad(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ca10,&local_b);
  local_9 = local_b;
  local_a = local_b + 1;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void goodB2G(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ca10,&local_b);
  local_9 = local_b;
  if (local_b == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_b + 1;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043ca4e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043ca4e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_64b_goodB2GSink(&local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_67b_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_67b_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_67b_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_67_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043cac6,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043cac6,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_67b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_12_bad(void)

{
  int iVar1;
  char local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040bf5c) */
/* WARNING: Removing unreachable block (ram,0x0040bf85) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(3);
  }
  else {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_52c_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_52c_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_52c_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_add_65b_badSink(0x7f,uParm2,0x7f);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_add_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_add_65b_goodB2GSink(0x7f,uParm2,0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_add_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_03_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_68_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043cb76,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_68_badData = local_9;
  CWE190_Integer_Overflow__char_fscanf_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_fscanf_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043cb76,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_68_goodB2GData = local_9;
  CWE190_Integer_Overflow__char_fscanf_multiply_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_17_bad(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 0x7f;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 * local_11));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    local_11 = 0x7f;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (((char)local_11 < -0xb) || (0xb < local_11)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * local_11));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 * local_11));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x7f,uParm2,0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x7f,uParm2,0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_add_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xffffff80);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = 0x7f;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c6b4) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x7f,uParm2,0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x7f,uParm2,0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_square_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_15_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043cc78,&local_18);
  local_10 = local_18 + 1;
  printLongLongLine(local_10);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043cc78,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043cc78,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_18_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_54b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_multiply_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_54b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_add_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_add_68_goodG2BData + 1
                                           ));
  return;
}


void CWE190_Integer_Overflow__char_max_add_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_max_add_68_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_add_68_goodB2GData +
                                             1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043cd5e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_53b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043cd5e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_53b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


undefined8 CWE190_Integer_Overflow__char_max_square_61b_badSource(void)

{
  return 0x7f;
}


undefined8 CWE190_Integer_Overflow__char_max_square_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__char_max_square_61b_goodB2GSource(void)

{
  return 0x7f;
}


void CWE190_Integer_Overflow__char_rand_square_12_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(4);
  }
  else {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_22_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043cd9e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_badGlobal = 1;
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_badSink(local_10);
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043cd9e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodB2G1Sink(local_10);
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043cd9e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodB2G2Sink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


undefined8 badSource(void)

{
  return 0x7f;
}


void CWE190_Integer_Overflow__char_max_multiply_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x7f;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_65b_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_65b_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_65b_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_68_bad(void)

{
  CWE190_Integer_Overflow__char_max_add_68_badData = 0x7f;
  CWE190_Integer_Overflow__char_max_add_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_add_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_max_add_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_add_68_goodB2GData = 0x7f;
  CWE190_Integer_Overflow__char_max_add_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_max_add_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_15_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54d_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54e_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54d_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54e_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54d_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54e_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_51b_badSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_51b_goodG2BSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_51b_goodB2GSink(long lParm1)

{
  if (0 < lParm1) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_max_square_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_max_square_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_max_square_61b_goodB2GSource(0x20);
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043cef6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_54b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_square_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043cef6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_54b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE190_Integer_Overflow__char_rand_add_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


ulong goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_11_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_02_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_13_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043cfc0,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043cfc0,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043cfc0,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_05_bad(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0xfffffffe);
  }
  return;
}


void goodB2G1(void)

{
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    local_9 = 0x7f;
  }
  if (staticFalse == 0) {
    if (local_9 != 0) {
      if (local_9 < 0x3f) {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e20a) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_41_bad(void)

{
  badSink(0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_add_22_badSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_add_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_add_22_goodB2G1Global == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_22_goodB2G2Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_add_22_goodB2G2Global != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_22_goodG2BSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_add_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_65b_badSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_rand_multiply_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_65b_goodB2GSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_07_bad(void)

{
  if (staticFive == 5) {
    printHexCharLine(1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e637) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e696) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_10_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFalse == 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalTrue != 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_add_53_bad(void)

{
  CWE190_Integer_Overflow__char_max_add_53b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_add_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_add_53b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_add_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_65b_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_34_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040eb62) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_52c_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_52c_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_52c_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_63b_badSink(long *plParm1)

{
  if (0 < *plParm1) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_63b_goodG2BSink(long *plParm1)

{
  if (0 < *plParm1) {
    printLongLongLine(*plParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_63b_goodB2GSink(long *plParm1)

{
  long lVar1;
  
  lVar1 = *plParm1;
  if (0 < lVar1) {
    if (lVar1 < 0x3fffffffffffffff) {
      printLongLongLine(lVar1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_52_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043d26e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_52b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043d26e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_52b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_05_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFalse == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticTrue != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_01_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_68b_badSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_rand_multiply_68_badData) {
    printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_multiply_68_badData
                                             * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_68b_goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_rand_multiply_68_goodG2BData) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_rand_multiply_68_goodG2BData
                                             * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_68b_goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_rand_multiply_68_goodB2GData) {
    if (CWE190_Integer_Overflow__char_rand_multiply_68_goodB2GData < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE190_Integer_Overflow__char_rand_multiply_68_goodB2GData
                                               * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_41_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_51b_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_51b_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_51b_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53d_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void badSink(long lParm1)

{
  if (badStatic != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_21_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d3e0,&local_10);
  badStatic = 1;
  badSink(local_10);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d3e0,&local_10);
  goodB2G1Static = 0;
  goodB2G1Sink(local_10);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if (goodB2G2Static != 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d3e0,&local_10);
  goodB2G2Static = 1;
  goodB2G2Sink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  if (goodG2BStatic != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_03_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d438,&local_18);
  local_10 = local_18 + 1;
  printLongLongLine(local_10);
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d438,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d438,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_16_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043d478,&local_a);
  if (0 < local_a) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043d478,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_18_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d4b8,&local_18);
  local_10 = local_18 + 1;
  printLongLongLine(local_10);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d4b8,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_34_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54e_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54e_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54e_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x7f;
  local_16 = 0x7f;
  CWE190_Integer_Overflow__char_max_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_max_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x7f;
  local_16 = 0x7f;
  CWE190_Integer_Overflow__char_max_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_52c_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_52c_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_52c_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
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


void CWE190_Integer_Overflow__char_rand_square_08_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_51_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043d626,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_51b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043d626,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_51b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_12_bad(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_0043d630,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_20 + 1;
      printLongLongLine(local_18);
    }
  }
  else {
    local_10 = local_20 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_0043d630,&local_20);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_0043d630,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_20 + 1;
      printLongLongLine(local_18);
    }
  }
  else {
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_20 + 1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLongLine(3);
  }
  else {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_add_10_bad(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xffffff80);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalTrue != 0) {
    local_9 = 0x7f;
  }
  if (globalFalse == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410413) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_68_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_multiply_68_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_multiply_68_badData = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_multiply_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_rand_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_multiply_68_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_multiply_68_goodB2GData = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_multiply_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_05_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043d6c0,&local_18);
  }
  if (staticTrue != 0) {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043d6c0,&local_18);
  }
  if (staticFalse == 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043d6c0,&local_18);
  }
  if (staticTrue != 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_16_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d718,&local_18);
  local_10 = local_18 + 1;
  printLongLongLine(local_10);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043d718,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_fscanf_square_68_badData *
                                           CWE190_Integer_Overflow__char_fscanf_square_68_badData));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(
                                           CWE190_Integer_Overflow__char_fscanf_square_68_goodG2BData
                                           * 
                                           CWE190_Integer_Overflow__char_fscanf_square_68_goodG2BData
                                           ));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_68b_goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__char_fscanf_square_68_goodB2GData < -0xb) ||
     ('\v' < CWE190_Integer_Overflow__char_fscanf_square_68_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_square_68_goodB2GData
                                             * 
                                             CWE190_Integer_Overflow__char_fscanf_square_68_goodB2GData
                                             ));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_63_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_add_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_rand_add_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_add_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_fscanf_multiply_45_badData) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_multiply_45_badData
                                             * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_45_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043d790,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_45_badData = local_9;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_fscanf_multiply_45_goodG2BData) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_multiply_45_goodG2BData
                                             * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_fscanf_multiply_45_goodB2GData) {
    if (CWE190_Integer_Overflow__char_fscanf_multiply_45_goodB2GData < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE190_Integer_Overflow__char_fscanf_multiply_45_goodB2GData
                                               * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043d790,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_45_goodB2GData = local_9;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_52_bad(void)

{
  CWE190_Integer_Overflow__char_max_add_52b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_add_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_add_52b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_add_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_66_bad(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE190_Integer_Overflow__char_rand_add_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_rand_add_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE190_Integer_Overflow__char_rand_add_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_53b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_multiply_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_53b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_06_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043d80c,&local_a);
  if (0 < local_a) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410eee) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043d80c,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043d80c,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410fb1) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_16_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004110e3) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_add_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_11_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043d898,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043d898,&local_18);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043d898,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 badSource(void)

{
  return 0x7f;
}


void CWE190_Integer_Overflow__char_max_add_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x7f;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (cVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_square_11_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (((char)local_9 < -0xb) || (0xb < local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (((char)local_9 < -0xb) || (0xb < local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_square_02_bad(void)

{
  printHexCharLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004116bd) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411706) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_square_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_65b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043d9e6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_fscanf_square_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043d9e6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_12_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < (char)local_9) {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(4);
  }
  else {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_13_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043da28,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043da28,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043da28,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_multiply_65b_badSink(0x7f,uParm2,0x7f);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_multiply_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_multiply_65b_goodB2GSink(0x7f,uParm2,0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_badSink(long lParm1)

{
  if ((CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_badGlobal != 0) && (0 < lParm1)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodB2G1Sink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodB2G1Global == 0) {
    if (0 < lParm1) {
      if (lParm1 < 0x3fffffffffffffff) {
        printLongLongLine(lParm1 * 2);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodB2G2Sink(long lParm1)

{
  if ((CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodB2G2Global != 0) && (0 < lParm1)) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodG2BSink(long lParm1)

{
  if ((CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodG2BGlobal != 0) && (0 < lParm1)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_09_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < (char)local_9)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < (char)local_9)) {
    if ((char)local_9 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_square_68_bad(void)

{
  CWE190_Integer_Overflow__char_max_square_68_badData = 0x7f;
  CWE190_Integer_Overflow__char_max_square_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_square_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_max_square_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_square_68_goodB2GData = 0x7f;
  CWE190_Integer_Overflow__char_max_square_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_max_square_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54e_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54e_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54e_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_01_bad(void)

{
  printHexCharLine(1);
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412328) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_square_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_41_bad(void)

{
  badSink(0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_add_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_square_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_53d_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_34_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_17_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 * local_11));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (((char)local_11 < -0xb) || ('\v' < (char)local_11)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * local_11));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 * local_11));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043dc66,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_badGlobal = 1;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_badSink(local_10);
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043dc66,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodB2G1Sink(local_10);
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043dc66,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodB2G2Sink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_14_bad(void)

{
  if (globalFive == 5) {
    printHexCharLine(1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412ad4) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412b33) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_64b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_64b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_64b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_66b_goodB2GSink(long lParm1)

{
  if (*(char *)(lParm1 + 2) == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_52_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043dd66,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_52b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_add_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043dd66,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_52b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_add_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_add_68_goodG2BData +
                                           1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_rand_add_68_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_add_68_goodB2GData
                                             + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54d_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54e_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54d_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54e_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54d_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54e_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_51b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_52c_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_52c_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_52c_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
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


void CWE190_Integer_Overflow__char_max_square_08_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (((char)local_9 < -0xb) || (0xb < local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (((char)local_9 < -0xb) || (0xb < local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_16_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043de68,&local_a);
  local_9 = local_a + 1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043de68,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_68_bad(void)

{
  CWE190_Integer_Overflow__char_max_multiply_68_badData = 0x7f;
  CWE190_Integer_Overflow__char_max_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_multiply_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_max_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_multiply_68_goodB2GData = 0x7f;
  CWE190_Integer_Overflow__char_max_multiply_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE190_Integer_Overflow__char_rand_multiply_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


ulong goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_14_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_13_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043df30,&local_18);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < local_18)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043df30,&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (0 < local_18) {
      if (local_18 < 0x3fffffffffffffff) {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043df30,&local_18);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < local_18)) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_67_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_67b_badSink((ulong)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_multiply_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_67b_goodB2GSink((ulong)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54e_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_68b_badSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_add_68_badData + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_68b_goodG2BSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_add_68_goodG2BData + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_add_68_goodB2GData == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_add_68_goodB2GData + 1);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_54e_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e02e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_add_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e02e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_63b_goodB2GSink(&local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x7f;
  local_16 = 0x7f;
  CWE190_Integer_Overflow__char_max_add_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_max_add_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x7f;
  local_16 = 0x7f;
  CWE190_Integer_Overflow__char_max_add_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_max_add_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53_bad(void)

{
  CWE190_Integer_Overflow__char_max_multiply_53b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_multiply_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_multiply_53b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_51_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e06e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_51b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_add_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e06e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_51b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_square_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_square_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_square_61b_goodB2GSource(0x20);
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_63b_badSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_63b_goodG2BSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_63b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_05_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((staticTrue != 0) && (0 < (char)local_9)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFalse == 0) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((staticTrue != 0) && (0 < (char)local_9)) {
    if ((char)local_9 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1)

{
  if ((badStatic != 0) && (0 < lParm1)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_21_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e138,&local_10);
  badStatic = 1;
  badSink(local_10);
  return;
}


void goodB2G1Sink(long lParm1)

{
  if (goodB2G1Static == 0) {
    if (0 < lParm1) {
      if (lParm1 < 0x3fffffffffffffff) {
        printLongLongLine(lParm1 * 2);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e138,&local_10);
  goodB2G1Static = 0;
  goodB2G1Sink(local_10);
  return;
}


void goodB2G2Sink(long lParm1)

{
  if ((goodB2G2Static != 0) && (0 < lParm1)) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e138,&local_10);
  goodB2G2Static = 1;
  goodB2G2Sink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  if ((goodG2BStatic != 0) && (0 < lParm1)) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_03_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e190,&local_18);
  if (0 < local_18) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e190,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e190,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(4);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(4);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_15_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e1d0,&local_a);
  local_9 = local_a * local_a;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e1d0,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e1d0,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_17_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (0 < (char)local_11) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (0 < (char)local_11) {
      if ((char)local_11 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 != 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_fscanf_add_45_badData + 1)
                  );
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_45_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043e248,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_45_badData = local_9;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_fscanf_add_45_goodG2BData
                                           + 1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_add_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_fscanf_add_45_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_add_45_goodB2GData
                                             + 1));
  }
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043e248,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_45_goodB2GData = local_9;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_07_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_53b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_add_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_53b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_06_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e2dc,&local_a);
  local_9 = local_a + 1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414f67) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e2dc,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e2dc,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041501c) */

void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0043e330,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__char_fscanf_square_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


ulong goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0043e330,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_18_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e370,&local_18);
  if (0 < local_18) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e370,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(4);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_34_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0043e3e8,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__char_fscanf_multiply_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


ulong goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0043e3e8,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e426,&local_10);
  local_28 = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 2;
  local_28 = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e426,&local_10);
  local_28 = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_66b_goodB2GSink(local_38);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_66b_badSink(long lParm1)

{
  if (0 < *(char *)(lParm1 + 2)) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_66b_goodG2BSink(long lParm1)

{
  if (0 < *(char *)(lParm1 + 2)) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_66b_goodB2GSink(long lParm1)

{
  char cVar1;
  
  cVar1 = *(char *)(lParm1 + 2);
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_54_bad(void)

{
  CWE190_Integer_Overflow__char_max_square_54b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_square_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_square_54b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_square_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_09_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e468,&local_18);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e468,&local_18);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e468,&local_18);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_17_bad(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_0043e4c0,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = local_20 + 1;
    printLongLongLine(local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_0043e4c0,&local_20);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_20 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_18 = local_20 + 1;
      printLongLongLine(local_18);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  long local_18;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_18 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLongLine(local_18 + 1);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_11_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e538,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < local_18)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e538,&local_18);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (0 < local_18) {
      if (local_18 < 0x3fffffffffffffff) {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e538,&local_18);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < local_18)) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_44_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e590,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e590,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_68b_badSink(void)

{
  if (0 < CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_badData) {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_badData * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_68b_goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_goodG2BData) {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_goodG2BData * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_68b_goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_goodB2GData) {
    if (CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_goodB2GData < 0x3fffffffffffffff) {
      printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_goodB2GData * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_65b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_65b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_65b_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_05_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e640,&local_a);
  }
  if (staticTrue != 0) {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e640,&local_a);
  }
  if (staticFalse == 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e640,&local_a);
  }
  if (staticTrue != 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_41_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e690,&local_9);
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e690,&local_9);
  goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_01_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_64b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_52_bad(void)

{
  CWE190_Integer_Overflow__char_max_multiply_52b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_multiply_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_multiply_52b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_51b_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_51b_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_51b_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


undefined8 CWE190_Integer_Overflow__int64_t_fscanf_add_61b_badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043e776,&local_10);
  return local_10;
}


undefined8 CWE190_Integer_Overflow__int64_t_fscanf_add_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__int64_t_fscanf_add_61b_goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043e776,&local_10);
  return local_10;
}


void CWE190_Integer_Overflow__char_max_square_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_44_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e780,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e780,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_09_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e7c0,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e7c0,&local_a);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e7c0,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_34_bad(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e810,&local_b);
  local_9 = local_b;
  local_a = local_b * local_b;
  printHexCharLine((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_0043e810,&local_b);
  local_9 = local_b;
  if ((local_b < -0xb) || ('\v' < local_b)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_b * local_b;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_16_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416c93) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e888,&local_18);
  if (0 < local_18) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e888,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043e888,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(4);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(4);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
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


void CWE190_Integer_Overflow__int64_t_fscanf_add_08_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e8c8,&local_18);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e8c8,&local_18);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e8c8,&local_18);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_multiply_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_max_multiply_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_multiply_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * *(char *)(lParm1 + 2)));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * *(char *)(lParm1 + 2)));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_66b_goodB2GSink(long lParm1)

{
  char cVar1;
  
  cVar1 = *(char *)(lParm1 + 2);
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_square_65b_badSink(0x7f,uParm2,0x7f);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_square_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_max_square_65b_goodB2GSink(0x7f,uParm2,0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_square_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_10_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e958,&local_18);
  }
  if ((globalTrue != 0) && (0 < local_18)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e958,&local_18);
  }
  if (globalFalse == 0) {
    if (0 < local_18) {
      if (local_18 < 0x3fffffffffffffff) {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_0043e958,&local_18);
  }
  if ((globalTrue != 0) && (0 < local_18)) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFalse == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_52_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_52b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_add_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_52b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_14_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043e9b0,&local_a);
  }
  if ((globalFive == 5) && (0 < local_a)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043e9b0,&local_a);
  }
  if (globalFive == 5) {
    if (0 < local_a) {
      if (local_a < '?') {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043e9b0,&local_a);
  }
  if ((globalFive == 5) && (0 < local_a)) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043e9fe,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_fscanf_add_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043e9fe,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_51b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_fscanf_multiply_32_bad(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ea40,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  if (0 < local_19) {
    local_1a = local_19 * 2;
    printHexCharLine((ulong)(uint)(int)local_1a);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 2;
  local_1a = 2;
  local_1b = 4;
  printHexCharLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ea40,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  if (0 < local_19) {
    if (local_19 < '?') {
      local_1a = local_19 * 2;
      printHexCharLine((ulong)(uint)(int)local_1a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_51_bad(void)

{
  CWE190_Integer_Overflow__char_max_multiply_51b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_multiply_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_multiply_51b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_61_bad(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_fscanf_add_61b_badSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_fscanf_add_61b_goodG2BSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = CWE190_Integer_Overflow__int64_t_fscanf_add_61b_goodB2GSource(0);
  if (lVar1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_16_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54c_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54d_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54c_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54d_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54c_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54d_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_22_badSink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_add_22_badGlobal != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodB2G1Sink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodB2G1Global == 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodB2G2Sink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodB2G2Global != 0) {
    if (lParm1 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printLongLongLine(lParm1 + 1);
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodG2BSink(long lParm1)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_add_22_goodG2BGlobal != 0) {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_54e_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043eb78,&local_18);
  if (0 < local_18) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(4);
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043eb78,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53d_badSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53d_goodG2BSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53d_goodB2GSink(long lParm1)

{
  if (0 < lParm1) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043ebee,&local_9);
  local_16 = local_9;
  CWE190_Integer_Overflow__char_fscanf_square_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_fscanf_square_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043ebee,&local_9);
  local_16 = local_9;
  CWE190_Integer_Overflow__char_fscanf_square_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_07_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043ebf8,&local_18);
  }
  if (staticFive == 5) {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043ebf8,&local_18);
  }
  if (staticFive == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043ebf8,&local_18);
  }
  if (staticFive == 5) {
    if (local_18 == 0x7fffffffffffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_10 = local_18 + 1;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFive == 5) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(local_10 + 1);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_max_multiply_45_badData) {
    printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_multiply_45_badData
                                             * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_45_bad(void)

{
  CWE190_Integer_Overflow__char_max_multiply_45_badData = 0x7f;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_max_multiply_45_goodG2BData) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_max_multiply_45_goodG2BData
                                             * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_multiply_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_max_multiply_45_goodB2GData) {
    if (CWE190_Integer_Overflow__char_max_multiply_45_goodB2GData < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE190_Integer_Overflow__char_max_multiply_45_goodB2GData
                                               * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_multiply_45_goodB2GData = 0x7f;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54c_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_06_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00418530) */
/* WARNING: Removing unreachable block (ram,0x00418548) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041859a) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004185d2) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_31_bad(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ece0,&local_c);
  local_9 = local_c;
  local_a = local_c;
  local_b = local_c * local_c;
  printHexCharLine((ulong)(uint)(int)local_b);
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ece0,&local_c);
  local_9 = local_c;
  local_a = local_c;
  if ((local_c < -0xb) || ('\v' < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_b = local_c * local_c;
    printHexCharLine((ulong)(uint)(int)local_b);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_51_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_51b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_add_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_51b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_04_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ed28,&local_a);
  if (0 < local_a) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004188ea) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ed28,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ed28,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004189aa) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_31_bad(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ed78,&local_c);
  local_9 = local_c;
  local_a = local_c;
  if (0 < local_c) {
    local_b = local_c * 2;
    printHexCharLine((ulong)(uint)(int)local_b);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  local_c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ed78,&local_c);
  local_9 = local_c;
  local_a = local_c;
  if (0 < local_c) {
    if (local_c < '?') {
      local_b = local_c * 2;
      printHexCharLine((ulong)(uint)(int)local_b);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_15_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_67_bad(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043edee,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_67b_badSink((ulong)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043edee,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_67b_goodB2GSink((ulong)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_add_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_45_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_add_45_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_add_45_badData = (byte)iVar2;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_add_45_goodG2BData +
                                           1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_add_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_rand_add_45_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_add_45_goodB2GData
                                             + 1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_add_45_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_add_45_goodB2GData = (byte)iVar2;
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_14_bad(void)

{
  if (globalFive == 5) {
    printHexCharLine(0xffffff80);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419065) */

void goodB2G1(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004190b4) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_06_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419244) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419309) */

void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_max_add_32_bad(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x7f;
  local_1a = 0x7f;
  local_1b = 0x80;
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 2;
  local_1a = 2;
  local_1b = 3;
  printHexCharLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419491) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined local_1c [2];
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = local_1c;
  local_18 = local_1c;
  local_1c[0] = 0x20;
  local_19 = 0x7f;
  local_1a = 0x7f;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_add_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_22_badSink(char cParm1)

{
  if ((CWE190_Integer_Overflow__char_fscanf_multiply_22_badGlobal != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_multiply_22_goodB2G1Global == 0) {
    if (0 < cParm1) {
      if (cParm1 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_22_goodB2G2Sink(char cParm1)

{
  if ((CWE190_Integer_Overflow__char_fscanf_multiply_22_goodB2G2Global != 0) && (0 < cParm1)) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_22_goodG2BSink(char cParm1)

{
  if ((CWE190_Integer_Overflow__char_fscanf_multiply_22_goodG2BGlobal != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_64b_badSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_64b_goodG2BSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_64b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_53_bad(void)

{
  CWE190_Integer_Overflow__char_max_square_53b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_square_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_square_53b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_square_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_05_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFalse == 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticTrue != 0) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_add_04_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419a2a) */
/* WARNING: Removing unreachable block (ram,0x00419a3c) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419a87) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419abf) */

void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_add_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_add_31_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419be4) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_add_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_22_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f0ae,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_fscanf_multiply_22_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f0ae,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_fscanf_multiply_22_goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f0ae,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_fscanf_multiply_22_goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_fscanf_multiply_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_68b_badSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_max_multiply_68_badData) {
    printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_multiply_68_badData
                                             * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_68b_goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_max_multiply_68_goodG2BData) {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_max_multiply_68_goodG2BData
                                             * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_68b_goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__char_max_multiply_68_goodB2GData) {
    if (CWE190_Integer_Overflow__char_max_multiply_68_goodB2GData < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(
                                               CWE190_Integer_Overflow__char_max_multiply_68_goodB2GData
                                               * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_18_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f0f0,&local_a);
  local_9 = local_a * local_a;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f0f0,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_10_bad(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0xfffffffe);
  }
  return;
}


void goodB2G1(void)

{
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    local_9 = 0x7f;
  }
  if (globalFalse == 0) {
    if (local_9 != 0) {
      if (local_9 < 0x3f) {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419f96) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_67_bad(void)

{
  CWE190_Integer_Overflow__char_max_add_67b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_add_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_add_67b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_add_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_square_45_badData *
                                           CWE190_Integer_Overflow__char_rand_square_45_badData));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_45_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_square_45_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_square_45_badData = (byte)iVar2;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_rand_square_45_goodG2BData
                                           * 
                                           CWE190_Integer_Overflow__char_rand_square_45_goodG2BData)
                  );
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_square_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__char_rand_square_45_goodB2GData < -0xb) ||
     ('\v' < CWE190_Integer_Overflow__char_rand_square_45_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_rand_square_45_goodB2GData
                                             * 
                                             CWE190_Integer_Overflow__char_rand_square_45_goodB2GData
                                             ));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_square_45_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_square_45_goodB2GData = (byte)iVar2;
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_63_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_multiply_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_rand_multiply_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_multiply_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_fscanf_add_68_badData + 1)
                  );
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_fscanf_add_68_goodG2BData
                                           + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__char_fscanf_add_68_goodB2GData == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_add_68_goodB2GData
                                             + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f226,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f226,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_54b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_13_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043f230,&local_a);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < local_a)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043f230,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (0 < local_a) {
      if (local_a < '?') {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043f230,&local_a);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < local_a)) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_66b_badSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_66b_goodG2BSink(long lParm1)

{
  printLongLongLine(*(long *)(lParm1 + 0x10) + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_66b_goodB2GSink(long lParm1)

{
  if (*(long *)(lParm1 + 0x10) == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*(long *)(lParm1 + 0x10) + 1);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_14_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((globalFive == 5) && (0 < (char)local_9)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((globalFive == 5) && (0 < (char)local_9)) {
    if ((char)local_9 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_64_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_add_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_rand_add_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_add_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_22_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f306,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_fscanf_add_22_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f306,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_fscanf_add_22_goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f306,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_fscanf_add_22_goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_add_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_fscanf_add_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_65b_badSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_65b_goodG2BSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_65b_goodB2GSink(long lParm1)

{
  if (0 < lParm1) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_rand_multiply_32_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  if (0 < (char)local_1a) {
    local_1b = local_1a * 2;
    printHexCharLine((ulong)(uint)(int)local_1b);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 2;
  local_1a = 2;
  local_1b = 4;
  printHexCharLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  if (0 < (char)local_1a) {
    if ((char)local_1a < '?') {
      local_1b = local_1a * 2;
      printHexCharLine((ulong)(uint)(int)local_1b);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_31_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041af73) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043f3b6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_fscanf_add_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043f3b6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_67b_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_67b_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_67b_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_63b_badSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_63b_goodG2BSink(long *plParm1)

{
  printLongLongLine(*plParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_63b_goodB2GSink(long *plParm1)

{
  if (*plParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(*plParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_52_bad(void)

{
  CWE190_Integer_Overflow__char_max_square_52b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_square_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_square_52b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_square_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54e_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54e_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54e_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_66_bad(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE190_Integer_Overflow__char_rand_square_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_rand_square_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE190_Integer_Overflow__char_rand_square_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_22_bad(void)

{
  CWE190_Integer_Overflow__char_max_add_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_max_add_22_badSink(0x7f);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__char_max_add_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_max_add_22_goodB2G1Sink(0x7f);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__char_max_add_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_max_add_22_goodB2G2Sink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_add_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_max_add_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_max_add_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_square_16_bad(void)

{
  printHexCharLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041b49d) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_square_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined8 badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f4a0,&local_10);
  return local_10;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  printLongLongLine(lVar1 + 1);
  return;
}


undefined8 goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_0043f4a0,&local_10);
  return local_10;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (lVar1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lVar1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  if ((badStatic != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_21_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f4e0,&local_9);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (0 < cParm1) {
      if (cParm1 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f4e0,&local_9);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if ((goodB2G2Static != 0) && (0 < cParm1)) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f4e0,&local_9);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  if ((goodG2BStatic != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_03_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f530,&local_a);
  if (0 < local_a) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f530,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f530,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_13_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53c_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53d_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53c_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53d_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53c_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53d_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_04_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041bd21) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041bded) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_31_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_65_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__int64_t_fscanf_multiply_65b_badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f64e,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__int64_t_fscanf_multiply_65b_goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f64e,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_18_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f658,&local_a);
  if (0 < local_a) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f658,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_65b_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_65b_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_65b_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_13_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043f6d0,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043f6d0,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_0043f6d0,&local_a);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_14_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043f720,&local_a);
  }
  if (globalFive == 5) {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043f720,&local_a);
  }
  if (globalFive == 5) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043f720,&local_a);
  }
  if (globalFive == 5) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_fscanf_square_32_bad(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f770,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  local_1a = local_19 * local_19;
  printHexCharLine((ulong)(uint)(int)local_1a);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 2;
  local_1a = 2;
  local_1b = 4;
  printHexCharLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  
  local_10 = &local_1b;
  local_18 = &local_1b;
  local_1b = ' ';
  local_1c = ' ';
  __isoc99_fscanf(stdin,&DAT_0043f770,&local_1c);
  *local_10 = local_1c;
  local_19 = *local_18;
  if ((local_19 < -0xb) || ('\v' < local_19)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1a = local_19 * local_19;
    printHexCharLine((ulong)(uint)(int)local_1a);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_63b_badSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_63b_goodG2BSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_63b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_51_bad(void)

{
  CWE190_Integer_Overflow__char_max_square_51b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_square_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_square_51b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_square_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_64_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_multiply_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_rand_multiply_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_multiply_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xffffff80);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ca69) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041cab8) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


ulong CWE190_Integer_Overflow__char_rand_add_61b_badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


undefined8 CWE190_Integer_Overflow__char_rand_add_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__char_rand_add_61b_goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE190_Integer_Overflow__char_fscanf_add_17_bad(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_0043f838,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_11 = local_12 + 1;
    printHexCharLine((ulong)(uint)(int)local_11);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_0043f838,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_11 = local_12 + 1;
      printHexCharLine((ulong)(uint)(int)local_11);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_12_bad(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_b = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_0043f878,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < local_b) {
      if (local_b < '?') {
        local_a = local_b * 2;
        printHexCharLine((ulong)(uint)(int)local_a);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < local_b) {
      local_9 = local_b * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_0043f878,&local_b);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_0043f878,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < local_b) {
      if (local_b < '?') {
        local_a = local_b * 2;
        printHexCharLine((ulong)(uint)(int)local_a);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < local_b) {
      if (local_b < '?') {
        local_9 = local_b * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(4);
  }
  else {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_41_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f8b8,&local_10);
  badSink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043f8b8,&local_10);
  goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_67b_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_22_badSink(char cParm1)

{
  if ((CWE190_Integer_Overflow__char_rand_multiply_22_badGlobal != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_rand_multiply_22_goodB2G1Global == 0) {
    if (0 < cParm1) {
      if (cParm1 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_22_goodB2G2Sink(char cParm1)

{
  if ((CWE190_Integer_Overflow__char_rand_multiply_22_goodB2G2Global != 0) && (0 < cParm1)) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_22_goodG2BSink(char cParm1)

{
  if ((CWE190_Integer_Overflow__char_rand_multiply_22_goodG2BGlobal != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_09_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f980,&local_18);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < local_18)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f980,&local_18);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (0 < local_18) {
      if (local_18 < 0x3fffffffffffffff) {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043f980,&local_18);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < local_18)) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_square_68b_badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_square_68_badData *
                                           CWE190_Integer_Overflow__char_max_square_68_badData));
  return;
}


void CWE190_Integer_Overflow__char_max_square_68b_goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_square_68_goodG2BData
                                           * CWE190_Integer_Overflow__char_max_square_68_goodG2BData
                                           ));
  return;
}


void CWE190_Integer_Overflow__char_max_square_68b_goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__char_max_square_68_goodB2GData < -0xb) ||
     ('\v' < CWE190_Integer_Overflow__char_max_square_68_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_max_square_68_goodB2GData
                                             * 
                                             CWE190_Integer_Overflow__char_max_square_68_goodB2GData
                                             ));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_51b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_square_45_badData *
                                           CWE190_Integer_Overflow__char_max_square_45_badData));
  return;
}


void CWE190_Integer_Overflow__char_max_square_45_bad(void)

{
  CWE190_Integer_Overflow__char_max_square_45_badData = 0x7f;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_max_square_45_goodG2BData
                                           * CWE190_Integer_Overflow__char_max_square_45_goodG2BData
                                           ));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_square_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__char_max_square_45_goodB2GData < -0xb) ||
     ('\v' < CWE190_Integer_Overflow__char_max_square_45_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_max_square_45_goodB2GData
                                             * 
                                             CWE190_Integer_Overflow__char_max_square_45_goodB2GData
                                             ));
  }
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_square_45_goodB2GData = 0x7f;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_max_square_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_34_bad(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fa80,&local_20);
  local_10 = local_20;
  local_18 = local_20 + 1;
  printLongLongLine(local_18);
  return;
}


void goodG2B(void)

{
  printLongLongLine(3);
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fa80,&local_20);
  local_10 = local_20;
  if (local_20 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_18 = local_20 + 1;
    printLongLongLine(local_18);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_09_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fac0,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fac0,&local_a);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fac0,&local_a);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_04_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fb18,&local_a);
  local_9 = local_a * local_a;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041daf2) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fb18,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fb18,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041dbcc) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53c_goodB2GSink(uParm1);
  return;
}


ulong CWE190_Integer_Overflow__char_fscanf_add_61b_badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0043fb66,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE190_Integer_Overflow__char_fscanf_add_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__char_fscanf_add_61b_goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_0043fb66,local_c);
  return (ulong)local_c[0];
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_21_bad(void)

{
  badStatic = 1;
  badSink(0x7f);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0x7f);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_max_add_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_add_03_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041df11) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041df4a) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_add_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_52c_badSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_52c_goodG2BSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_52c_goodB2GSink(long lParm1)

{
  if (0 < lParm1) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_11_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fc30,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < local_a)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fc30,&local_a);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (0 < local_a) {
      if (local_a < '?') {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043fc30,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < local_a)) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_02_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fc80,&local_a);
  if (0 < local_a) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fc80,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fc80,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_67_bad(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043fcbe,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_67b_badSink((ulong)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_square_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_0043fcbe,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_67b_goodB2GSink((ulong)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_18_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e52c) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_add_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_22_badSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_square_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_square_22_goodB2G1Global == 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_22_goodB2G2Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_square_22_goodB2G2Global != 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_22_goodG2BSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_fscanf_square_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_64b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_66_bad(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fdbe,&local_10);
  local_28 = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_add_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 2;
  local_28 = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_add_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fdbe,&local_10);
  local_28 = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_add_66b_goodB2GSink(local_38);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_add_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_add_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_add_61b_goodB2GSource(0x20);
  if (cVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fdfe,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0043fdfe,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_53b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_01_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fe08,&local_a);
  if (0 < local_a) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0043fe08,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53d_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53d_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_53d_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_07_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fe80,&local_a);
  }
  if (staticFive == 5) {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fe80,&local_a);
  }
  if (staticFive == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_0043fe80,&local_a);
  }
  if (staticFive == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_21_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_12_bad(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_0043ff20,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < local_20) {
      if (local_20 < 0x3fffffffffffffff) {
        local_18 = local_20 * 2;
        printLongLongLine(local_18);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < local_20) {
      local_10 = local_20 * 2;
      printLongLongLine(local_10);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_0043ff20,&local_20);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_0043ff20,&local_20);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < local_20) {
      if (local_20 < 0x3fffffffffffffff) {
        local_18 = local_20 * 2;
        printLongLongLine(local_18);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < local_20) {
      if (local_20 < 0x3fffffffffffffff) {
        local_10 = local_20 * 2;
        printLongLongLine(local_10);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLongLongLine(4);
  }
  else {
    printLongLongLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_22_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ff5e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_fscanf_square_22_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ff5e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_fscanf_square_22_goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_0043ff5e,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_fscanf_square_22_goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_square_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_fscanf_square_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_22_good(void)

{
  goodB2G1();
  goodB2G2();
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


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_08_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043ff68,&local_18);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < local_18)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043ff68,&local_18);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (0 < local_18) {
      if (local_18 < 0x3fffffffffffffff) {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_18 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_0043ff68,&local_18);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < local_18)) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long local_10;
  
  local_10 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_add_11_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_11_good(void)

{
  goodB2G1();
  goodB2G2();
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


void CWE190_Integer_Overflow__char_fscanf_square_08_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440010,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440010,&local_a);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440010,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_53b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_square_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_53b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_52b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_52c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_52b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_52c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_52b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_52c_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_09_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00440060,&local_a);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < local_a)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00440060,&local_a);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (0 < local_a) {
      if (local_a < '?') {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00440060,&local_a);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < local_a)) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_square_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void badSink(char cParm1)

{
  if ((badStatic != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_21_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (0 < cParm1) {
      if (cParm1 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if ((goodB2G2Static != 0) && (0 < cParm1)) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if ((goodG2BStatic != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_03_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_multiply_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_max_multiply_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_multiply_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_17_bad(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 0x7f;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 != 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    local_11 = 0x7f;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 != 0) {
      if (local_11 < 0x3f) {
        printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 != 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x7f,uParm2,0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x7f,uParm2,0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004401a6,&local_9);
  local_16 = local_9;
  CWE190_Integer_Overflow__char_fscanf_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_fscanf_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004401a6,&local_9);
  local_16 = local_9;
  CWE190_Integer_Overflow__char_fscanf_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_14_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFive == 5) {
    if (((char)local_9 < -0xb) || ('\v' < (char)local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_add_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_add_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_add_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_rand_square_32_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  local_1b = local_1a * local_1a;
  printHexCharLine((ulong)(uint)(int)local_1b);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 2;
  local_1a = 2;
  local_1b = 4;
  printHexCharLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  if (((char)local_1a < -0xb) || ('\v' < (char)local_1a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1b = local_1a * local_1a;
    printHexCharLine((ulong)(uint)(int)local_1b);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_01_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004209b0) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_add_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_53d_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_52_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004402a6,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004402a6,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_52b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_54c_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_17_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_11;
  int local_10;
  int local_c;
  
  local_11 = 0x20;
  local_c = 0;
  while (local_c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_11 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_11 = (byte)iVar2;
    }
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 + 1));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_67b_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_16_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00440358,&local_18);
  if (0 < local_18) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00440358,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(4);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_16_good(void)

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


void CWE190_Integer_Overflow__char_max_multiply_08_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 != 0) {
      if (local_9 < 0x3f) {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    if (local_9 < 0x3f) {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_square_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_52c_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_52b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_52c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_52b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_52c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_52b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_52c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_21_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440420,&local_9);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440420,&local_9);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440420,&local_9);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_03_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440470,&local_a);
  local_9 = local_a * local_a;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440470,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440470,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_04_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042178c) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042186e) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_31_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_31_good(void)

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


void CWE190_Integer_Overflow__char_max_add_08_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_15_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421c64) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00421ca4) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_max_multiply_61b_badSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_max_multiply_61b_goodG2BSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_max_multiply_61b_goodB2GSource(0x20);
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_004405fe,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_54b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_004405fe,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_54b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_11_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < (char)local_9)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < (char)local_9)) {
    if ((char)local_9 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_02_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_51_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0044068e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0044068e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_51b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_66b_badSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * *(char *)(lParm1 + 2)));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_66b_goodG2BSink(long lParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * *(char *)(lParm1 + 2)));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_66b_goodB2GSink(long lParm1)

{
  char cVar1;
  
  cVar1 = *(char *)(lParm1 + 2);
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_multiply_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_07_bad(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xfffffffe);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042250e) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422562) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_41_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_multiply_61b_badSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_multiply_61b_goodG2BSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_multiply_61b_goodB2GSource(0x20);
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_67b_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_67b_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_67b_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x7f;
  local_16 = 0x7f;
  CWE190_Integer_Overflow__char_max_square_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_max_square_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x7f;
  local_16 = 0x7f;
  CWE190_Integer_Overflow__char_max_square_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_max_square_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_02_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422a69) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422aa2) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_add_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_52c_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_51_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440836,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_51b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_square_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440836,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_51b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_68_bad(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_square_68_badData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_square_68_badData = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_square_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_square_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_rand_square_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_square_68_goodB2GData = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    CWE190_Integer_Overflow__char_rand_square_68_goodB2GData = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_square_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_65b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_65b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_65b_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_rand_add_32_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  local_1b = local_1a + 1;
  printHexCharLine((ulong)(uint)(int)local_1b);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 2;
  local_1a = 2;
  local_1b = 3;
  printHexCharLine(3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_1c;
  char local_1b;
  byte local_1a;
  byte local_19;
  byte *local_18;
  byte *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_19 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_19 = (byte)iVar2;
  }
  *local_10 = local_19;
  local_1a = *local_18;
  if (local_1a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1b = local_1a + 1;
    printHexCharLine((ulong)(uint)(int)local_1b);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_21_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_64b_badSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_64b_goodG2BSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_64b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_67b_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53c_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_53d_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53c_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_53d_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53c_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_53d_goodB2GSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_67_bad(void)

{
  CWE190_Integer_Overflow__char_max_multiply_67b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_multiply_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_multiply_67b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_21_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440970,&local_9);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440970,&local_9);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00440970,&local_9);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_03_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004409c0,&local_a);
  local_9 = local_a + 1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004409c0,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_004409c0,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_22_badSink(char cParm1)

{
  if ((CWE190_Integer_Overflow__char_max_multiply_22_badGlobal != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_multiply_22_goodB2G1Global == 0) {
    if (0 < cParm1) {
      if (cParm1 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_22_goodB2G2Sink(char cParm1)

{
  if ((CWE190_Integer_Overflow__char_max_multiply_22_goodB2G2Global != 0) && (0 < cParm1)) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_22_goodG2BSink(char cParm1)

{
  if ((CWE190_Integer_Overflow__char_max_multiply_22_goodG2BGlobal != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_04_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423905) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004239c7) */

void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_31_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_65_bad(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__int64_t_fscanf_add_65b_badSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00440ade,&local_18);
  (*local_10)(local_18);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__int64_t_fscanf_add_65b_goodB2GSink;
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00440ade,&local_18);
  (*local_10)(local_18);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_66_bad(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE190_Integer_Overflow__char_rand_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_rand_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  undefined local_18 [2];
  byte local_16;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_16 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_16 = (byte)iVar2;
  }
  local_9 = local_16;
  CWE190_Integer_Overflow__char_rand_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_12_bad(void)

{
  int iVar1;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((char)local_9 < -0xb) || (0xb < local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423e01) */
/* WARNING: Removing unreachable block (ram,0x00423e3b) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(4);
  }
  else {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_18_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440b20,&local_a);
  local_9 = local_a + 1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440b20,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_add_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_add_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_add_61b_goodB2GSource(0x20);
  if (cVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(1);
  }
  return;
}


void goodB2G1(void)

{
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = 0x7f;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (((char)local_9 < -0xb) || (0xb < local_9)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042415c) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00440be6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_fscanf_multiply_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00440be6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_multiply_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_64_bad(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_square_64b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_max_square_64b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_square_64b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_max_square_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_64b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440c26,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_badData = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00440c26,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_goodB2GData = local_10;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_12_bad(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_b = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00440c30,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_b + 1;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    local_9 = local_b + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00440c30,&local_b);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00440c30,&local_b);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_b == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_b + 1;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    if (local_b == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_b + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(3);
  }
  else {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_22_badSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_rand_add_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_rand_add_22_goodB2G1Global == 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_22_goodB2G2Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_rand_add_22_goodB2G2Global != 0) {
    if (cParm1 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_22_goodG2BSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_rand_add_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_15_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00440cc0,&local_18);
  if (0 < local_18) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00440cc0,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00440cc0,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printLongLongLine(4);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(4);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_22_bad(void)

{
  CWE190_Integer_Overflow__char_max_multiply_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_max_multiply_22_badSink(0x7f);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__char_max_multiply_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_max_multiply_22_goodB2G1Sink(0x7f);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__char_max_multiply_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_max_multiply_22_goodB2G2Sink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_multiply_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_max_multiply_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54e_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54e_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_54e_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


undefined8 badSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440d38,&local_10);
  return local_10;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_42_bad(void)

{
  long lVar1;
  
  lVar1 = badSource(0);
  if (0 < lVar1) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  long lVar1;
  
  lVar1 = goodG2BSource(0);
  if (0 < lVar1) {
    printLongLongLine(lVar1 * 2);
  }
  return;
}


undefined8 goodB2GSource(undefined8 uParm1)

{
  undefined8 local_10;
  
  local_10 = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440d38,&local_10);
  return local_10;
}


void goodB2G(void)

{
  long lVar1;
  
  lVar1 = goodB2GSource(0);
  if (0 < lVar1) {
    if (lVar1 < 0x3fffffffffffffff) {
      printLongLongLine(lVar1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_add_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_max_add_63b_goodB2GSink(char *pcParm1)

{
  if (*pcParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 + 1));
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


void CWE190_Integer_Overflow__char_fscanf_multiply_08_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440db0,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < local_a)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440db0,&local_a);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (0 < local_a) {
      if (local_a < '?') {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440db0,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < local_a)) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_52_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_52b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_square_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_52b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_11_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440e00,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440e00,&local_a);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440e00,&local_a);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_02_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440e50,&local_a);
  local_9 = local_a + 1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440e50,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00440e50,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_51b_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_22_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_rand_add_22_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_rand_add_22_goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_rand_add_22_goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_add_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_rand_add_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_66b_badSink(long lParm1)

{
  if (0 < *(char *)(lParm1 + 2)) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_66b_goodG2BSink(long lParm1)

{
  if (0 < *(char *)(lParm1 + 2)) {
    printHexCharLine((ulong)(uint)(int)(char)(*(char *)(lParm1 + 2) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_66b_goodB2GSink(long lParm1)

{
  char cVar1;
  
  cVar1 = *(char *)(lParm1 + 2);
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_16_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0xfffffffe);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042579f) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004257f3) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_14_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00440f88,&local_a);
  }
  if (globalFive == 5) {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00440f88,&local_a);
  }
  if (globalFive == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00440f88,&local_a);
  }
  if (globalFive == 5) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_05_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00440fd8,&local_18);
  }
  if ((staticTrue != 0) && (0 < local_18)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00440fd8,&local_18);
  }
  if (staticFalse == 0) {
    if (0 < local_18) {
      if (local_18 < 0x3fffffffffffffff) {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00440fd8,&local_18);
  }
  if ((staticTrue != 0) && (0 < local_18)) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (staticFalse == 0) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_17_bad(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441030,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (0 < local_12) {
      local_11 = local_12 * 2;
      printHexCharLine((ulong)(uint)(int)local_11);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441030,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (0 < local_12) {
      if (local_12 < '?') {
        local_11 = local_12 * 2;
        printHexCharLine((ulong)(uint)(int)local_11);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 != 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_41_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441070,&local_10);
  badSink(local_10);
  return;
}


void goodG2BSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(long lParm1)

{
  if (0 < lParm1) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441070,&local_10);
  goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_10_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004410b0,&local_a);
  }
  if (globalTrue != 0) {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004410b0,&local_a);
  }
  if (globalFalse == 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004410b0,&local_a);
  }
  if (globalTrue != 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_44_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441100,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441100,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined8 CWE190_Integer_Overflow__char_max_add_61b_badSource(void)

{
  return 0x7f;
}


undefined8 CWE190_Integer_Overflow__char_max_add_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__char_max_add_61b_goodB2GSource(void)

{
  return 0x7f;
}


void CWE190_Integer_Overflow__char_max_add_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_add_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_max_add_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_add_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_max_add_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_67_bad(void)

{
  CWE190_Integer_Overflow__char_max_square_67b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_square_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_square_67b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_square_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_multiply_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0044113e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_53b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0044113e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_53b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_54c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_54c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_54c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_bad(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00441148,&local_20);
  local_10 = local_20;
  if (0 < local_20) {
    local_18 = local_20 * 2;
    printLongLongLine(local_18);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(4);
  return;
}


void goodB2G(void)

{
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00441148,&local_20);
  local_10 = local_20;
  if (0 < local_20) {
    if (local_20 < 0x3fffffffffffffff) {
      local_18 = local_20 * 2;
      printLongLongLine(local_18);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_01_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00441188,&local_a);
  local_9 = local_a + 1;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void goodB2G(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00441188,&local_a);
  if (local_a == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_51_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_51b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_square_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_square_51b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_66b_badSink(long lParm1)

{
  if (0 < *(long *)(lParm1 + 0x10)) {
    printLongLongLine(*(long *)(lParm1 + 0x10) * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_66b_goodG2BSink(long lParm1)

{
  if (0 < *(long *)(lParm1 + 0x10)) {
    printLongLongLine(*(long *)(lParm1 + 0x10) * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_66b_goodB2GSink(long lParm1)

{
  long lVar1;
  
  lVar1 = *(long *)(lParm1 + 0x10);
  if (0 < lVar1) {
    if (lVar1 < 0x3fffffffffffffff) {
      printLongLongLine(lVar1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


ulong CWE190_Integer_Overflow__char_fscanf_multiply_61b_badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_004411fe,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE190_Integer_Overflow__char_fscanf_multiply_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__char_fscanf_multiply_61b_goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_004411fe,local_c);
  return (ulong)local_c[0];
}


void badSink(char cParm1)

{
  if ((badStatic != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_21_bad(void)

{
  badStatic = 1;
  badSink(0x7f);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if (0 < cParm1) {
      if (cParm1 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0x7f);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if ((goodB2G2Static != 0) && (0 < cParm1)) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  if ((goodG2BStatic != 0) && (0 < cParm1)) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_03_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426bc9) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426c07) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_09_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_18_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00426f13) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_06_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042703a) */

void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (((char)bVar1 < -0xb) || ('\v' < (char)bVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * bVar1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042711f) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__char_max_square_32_bad(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 0x7f;
  local_1a = 0x7f;
  local_1b = 1;
  printHexCharLine(1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = &local_1c;
  local_18 = &local_1c;
  local_1c = 0x20;
  local_19 = 2;
  local_1a = 2;
  local_1b = 4;
  printHexCharLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004272c3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined local_1c [2];
  undefined local_1a;
  undefined local_19;
  undefined *local_18;
  undefined *local_10;
  
  local_10 = local_1c;
  local_18 = local_1c;
  local_1c[0] = 0x20;
  local_19 = 0x7f;
  local_1a = 0x7f;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_square_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_63b_badSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_63b_goodG2BSink(char *pcParm1)

{
  if (0 < *pcParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_63b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_52b_badSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_52c_badSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_52b_goodG2BSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_52c_goodG2BSink(uParm1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_52b_goodB2GSink(undefined8 uParm1)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_52c_goodB2GSink(uParm1);
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


void CWE190_Integer_Overflow__char_fscanf_add_08_bad(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004413e0,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = local_a + 1;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004413e0,&local_a);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_a;
  char local_9;
  
  local_a = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004413e0,&local_a);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a + 1;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_03_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54e_badSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54e_goodG2BSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_54e_goodB2GSink(long lParm1)

{
  if (0 < lParm1) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_17_bad(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 0x7f;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 0x7f;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_11 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_11 + 1));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_12_bad(void)

{
  int iVar1;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 != 0) {
      if (local_9 < 0x3f) {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (local_9 != 0) {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427a21) */
/* WARNING: Removing unreachable block (ram,0x00427a4f) */

void goodB2G(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(4);
  }
  else {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_square_67b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_67b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_67b_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_18_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_04_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427cfe) */
/* WARNING: Removing unreachable block (ram,0x00427d16) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427d66) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427d9d) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_07_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004415d8,&local_a);
  }
  if ((staticFive == 5) && (0 < local_a)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004415d8,&local_a);
  }
  if (staticFive == 5) {
    if (0 < local_a) {
      if (local_a < '?') {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004415d8,&local_a);
  }
  if ((staticFive == 5) && (0 < local_a)) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_square_04_bad(void)

{
  printHexCharLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004280a6) */
/* WARNING: Removing unreachable block (ram,0x004280c4) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042811f) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042815b) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_square_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_square_31_bad(void)

{
  printHexCharLine(1);
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042829c) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_square_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_66_bad(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004416b6,&local_9);
  local_16 = local_9;
  CWE190_Integer_Overflow__char_fscanf_add_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 2;
  local_16 = 2;
  CWE190_Integer_Overflow__char_fscanf_add_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [2];
  undefined local_16;
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004416b6,&local_9);
  local_16 = local_9;
  CWE190_Integer_Overflow__char_fscanf_add_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_64b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_64b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_64b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_51b_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_51b_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_max_square_51b_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_52_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0044172e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_52b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0044172e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_52b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_12_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  globalReturnsTrueOrFalse();
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    printHexCharLine(3);
  }
  else {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_51b_badSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_51b_goodG2BSink(long lParm1)

{
  printLongLongLine(lParm1 + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_51b_goodB2GSink(long lParm1)

{
  if (lParm1 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(lParm1 + 1);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_11_bad(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 != 0) {
      if (local_9 < 0x3f) {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 0x7f;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    if (local_9 < 0x3f) {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_02_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428a4c) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428a8a) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_63b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_34_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00428c71) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_add_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong CWE190_Integer_Overflow__char_rand_square_61b_badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


undefined8 CWE190_Integer_Overflow__char_rand_square_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__char_rand_square_61b_goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE190_Integer_Overflow__char_rand_add_54_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_54b_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_add_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_54b_goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_22_badSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_square_22_badGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_22_goodB2G1Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_square_22_goodB2G1Global == 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_22_goodB2G2Sink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_square_22_goodB2G2Global != 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_22_goodG2BSink(char cParm1)

{
  if (CWE190_Integer_Overflow__char_max_square_22_goodG2BGlobal != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_max_add_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_max_add_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_max_add_61b_goodB2GSource(0x20);
  if (cVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_11_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_02_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_41_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_01_bad(void)

{
  printHexCharLine(0xfffffffe);
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004295e2) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_13_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < (char)local_9)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < (char)local_9)) {
    if ((char)local_9 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53d_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53d_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53d_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00441aa6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_fscanf_square_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00441aa6,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_07_bad(void)

{
  if (staticFive == 5) {
    printHexCharLine(0xffffff80);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429a01) */

void goodB2G1(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429a50) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_add_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_10_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalFalse == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (globalTrue != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  badSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  goodB2GSink((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_add_45_badData + 1);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_45_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441b88,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_45_badData = local_10;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_add_45_goodG2BData + 1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int64_t_fscanf_add_45_goodB2GData == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLongLongLine(CWE190_Integer_Overflow__int64_t_fscanf_add_45_goodB2GData + 1);
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441b88,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_45_goodB2GData = local_10;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_22_bad(void)

{
  CWE190_Integer_Overflow__char_max_square_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_max_square_22_badSink(0x7f);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__char_max_square_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_max_square_22_goodB2G1Sink(0x7f);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__char_max_square_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_max_square_22_goodB2G2Sink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_square_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_max_square_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_max_square_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_07_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441bc8,&local_a);
  }
  if (staticFive == 5) {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441bc8,&local_a);
  }
  if (staticFive == 5) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441bc8,&local_a);
  }
  if (staticFive == 5) {
    if ((local_a < -0xb) || ('\v' < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_9 = local_a * local_a;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_06_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00441c1c,&local_18);
  local_10 = local_18 + 1;
  printLongLongLine(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a3a0) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00441c1c,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_00441c1c,&local_18);
  if (local_18 == 0x7fffffffffffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_10 = local_18 + 1;
    printLongLongLine(local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a479) */

void goodG2B1(void)

{
  printLongLongLine(3);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(3);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_add_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_10_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00441c70,&local_a);
  }
  if ((globalTrue != 0) && (0 < local_a)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00441c70,&local_a);
  }
  if (globalFalse == 0) {
    if (0 < local_a) {
      if (local_a < '?') {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00441c70,&local_a);
  }
  if ((globalTrue != 0) && (0 < local_a)) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (globalFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_01_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  return;
}


void goodG2B(void)

{
  printHexCharLine(3);
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (bVar1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_rand_add_53d_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0xfffffffe);
  }
  return;
}


void goodB2G1(void)

{
  byte local_9;
  
  local_9 = 0x20;
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = 0x7f;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_9 != 0) {
      if (local_9 < 0x3f) {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a9b9) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FALSE == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


ulong CWE190_Integer_Overflow__char_rand_multiply_61b_badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


undefined8 CWE190_Integer_Overflow__char_rand_multiply_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__char_rand_multiply_61b_goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE190_Integer_Overflow__char_max_square_54d_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_54e_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_54d_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_54e_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_54d_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_square_54e_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042ac51) */

void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042acb0) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (GLOBAL_CONST_FIVE == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * local_9));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_65_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__char_fscanf_add_65b_badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441dce,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_fscanf_add_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__char_fscanf_add_65b_goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441dce,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_18_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  if (0 < (char)bVar1) {
    if ((char)bVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(bVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_17_bad(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441e10,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_11 = local_12 * local_12;
    printHexCharLine((ulong)(uint)(int)local_11);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_12;
  char local_11;
  int local_10;
  int local_c;
  
  local_12 = ' ';
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441e10,&local_12);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if ((local_12 < -0xb) || ('\v' < local_12)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_11 = local_12 * local_12;
      printHexCharLine((ulong)(uint)(int)local_11);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_11 = ' ';
  local_c = 0;
  while (local_c < 1) {
    local_11 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)(char)(local_11 * local_11));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53d_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53d_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_53d_goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
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


void CWE190_Integer_Overflow__char_rand_add_08_bad(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  local_9 = 0x20;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      rand();
      iVar1 = rand();
      local_9 = ~(byte)iVar1;
    }
    else {
      rand();
      rand();
      iVar1 = rand();
      local_9 = (byte)iVar1;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_9 == 0x7f) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  char local_9;
  
  local_9 = ' ';
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_add_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_44_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441ed8,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(char cParm1)

{
  if ((cParm1 < -0xb) || ('\v' < cParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00441ed8,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_multiply_61b_badSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_multiply_61b_goodG2BSource(0x20);
  if (0 < cVar1) {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_rand_multiply_61b_goodB2GSource(0x20);
  if (0 < cVar1) {
    if (cVar1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_22_bad(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_22_badGlobal = 1;
  CWE190_Integer_Overflow__char_rand_multiply_22_badSink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G1(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__char_rand_multiply_22_goodB2G1Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodB2G2(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_multiply_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__char_rand_multiply_22_goodB2G2Sink((ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_rand_multiply_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__char_rand_multiply_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_63_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441f4e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00441f4e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_63b_goodB2GSink(&local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_15_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00441f58,&local_a);
  if (0 < local_a) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00441f58,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_00441f58,&local_a);
  if (0 < local_a) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE190_Integer_Overflow__char_fscanf_square_61b_badSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00441f96,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE190_Integer_Overflow__char_fscanf_square_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__char_fscanf_square_61b_goodB2GSource(byte bParm1)

{
  byte local_c [4];
  
  local_c[0] = bParm1;
  __isoc99_fscanf(stdin,&DAT_00441f96,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__char_rand_multiply_07_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((staticFive == 5) && (0 < (char)local_9)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if (staticFive == 5) {
    if (0 < (char)local_9) {
      if ((char)local_9 < '?') {
        printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      rand();
      iVar2 = rand();
      local_9 = ~(byte)iVar2;
    }
    else {
      rand();
      rand();
      iVar2 = rand();
      local_9 = (byte)iVar2;
    }
  }
  if ((staticFive == 5) && (0 < (char)local_9)) {
    if ((char)local_9 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFive == 5) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (badStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_square_21_bad(void)

{
  badStatic = 1;
  badSink(0x7f);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0x7f);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    if ((cParm1 < -0xb) || ('\v' < cParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x7f);
  return;
}


void goodG2BSink(char cParm1)

{
  if (goodG2BStatic != 0) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * cParm1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__char_max_square_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__char_max_square_03_bad(void)

{
  printHexCharLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042be33) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042be7c) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_square_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_14_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00442078,&local_18);
  }
  if ((globalFive == 5) && (0 < local_18)) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00442078,&local_18);
  }
  if (globalFive == 5) {
    if (0 < local_18) {
      if (local_18 < 0x3fffffffffffffff) {
        local_10 = local_18 * 2;
        printLongLongLine(local_10);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00442078,&local_18);
  }
  if ((globalFive == 5) && (0 < local_18)) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  long local_10;
  
  local_10 = 0;
  if (globalFive == 5) {
    local_10 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_10 != 0)) {
    printLongLongLine(local_10 * 2);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_64_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004420ce,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 local_10;
  
  local_10 = 2;
  CWE190_Integer_Overflow__int64_t_fscanf_add_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004420ce,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_64b_goodB2GSink(&local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_54d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_54d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_54c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_rand_square_54d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_square_18_bad(void)

{
  printHexCharLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c2cb) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_max_square_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_51_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0044210e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_51b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_add_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_0044210e,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_add_51b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_add_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_06_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0044211c,&local_a);
  local_9 = local_a * local_a;
  printHexCharLine((ulong)(uint)(int)local_9);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c484) */

void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0044211c,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  __isoc99_fscanf(stdin,&DAT_0044211c,&local_a);
  if ((local_a < -0xb) || ('\v' < local_a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_9 = local_a * local_a;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c561) */

void goodG2B1(void)

{
  printHexCharLine(4);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(4);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int64_t_fscanf_multiply_32_bad(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_00442170,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  if (0 < local_20) {
    local_28 = local_20 * 2;
    printLongLongLine(local_28);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_38;
  local_18 = &local_38;
  local_38 = 0;
  local_20 = 2;
  local_28 = 2;
  local_30 = 4;
  printLongLongLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_38 = 0;
  __isoc99_fscanf(stdin,&DAT_00442170,&local_38);
  *local_10 = local_38;
  local_20 = *local_18;
  if (0 < local_20) {
    if (local_20 < 0x3fffffffffffffff) {
      local_28 = local_20 * 2;
      printLongLongLine(local_28);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_rand_add_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_65b_badSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_rand_add_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  CWE190_Integer_Overflow__char_rand_add_65b_goodB2GSink
            ((ulong)(uint)(int)(char)bVar1,uParm2,(ulong)(uint)(int)(char)bVar1);
  return;
}


void CWE190_Integer_Overflow__char_rand_add_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54_bad(void)

{
  CWE190_Integer_Overflow__char_max_multiply_54b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_multiply_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_multiply_54b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53b_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_53c_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53b_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_53c_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53b_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_fscanf_add_53c_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_63b_badSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_63b_goodG2BSink(char *pcParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(*pcParm1 * *pcParm1));
  return;
}


void CWE190_Integer_Overflow__char_rand_square_63b_goodB2GSink(char *pcParm1)

{
  char cVar1;
  
  cVar1 = *pcParm1;
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void badSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(CWE190_Integer_Overflow__char_fscanf_square_45_badData *
                                           CWE190_Integer_Overflow__char_fscanf_square_45_badData));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_45_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004421e8,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_45_badData = local_9;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printHexCharLine((ulong)(uint)(int)(char)(
                                           CWE190_Integer_Overflow__char_fscanf_square_45_goodG2BData
                                           * 
                                           CWE190_Integer_Overflow__char_fscanf_square_45_goodG2BData
                                           ));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_square_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__char_fscanf_square_45_goodB2GData < -0xb) ||
     ('\v' < CWE190_Integer_Overflow__char_fscanf_square_45_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(
                                             CWE190_Integer_Overflow__char_fscanf_square_45_goodB2GData
                                             * 
                                             CWE190_Integer_Overflow__char_fscanf_square_45_goodB2GData
                                             ));
  }
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_004421e8,&local_9);
  CWE190_Integer_Overflow__char_fscanf_square_45_goodB2GData = local_9;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_52c_badSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_52c_goodG2BSink(char cParm1)

{
  printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_52c_goodB2GSink(char cParm1)

{
  if (cParm1 == 0x7f) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_67b_badSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_67b_goodG2BSink(long lParm1)

{
  if (0 < lParm1) {
    printLongLongLine(lParm1 * 2);
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_67b_goodB2GSink(long lParm1)

{
  if (0 < lParm1) {
    if (lParm1 < 0x3fffffffffffffff) {
      printLongLongLine(lParm1 * 2);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_65_bad(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__char_fscanf_square_65b_badSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00442296,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__char_fscanf_square_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  char local_11;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__char_fscanf_square_65b_goodB2GSink;
  local_11 = ' ';
  __isoc99_fscanf(stdin,&DAT_00442296,&local_11);
  (*local_10)((ulong)(uint)(int)local_11);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_68_bad(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00442299,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_68_badData = local_9;
  CWE190_Integer_Overflow__char_fscanf_add_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_add_68_goodG2BData = 2;
  CWE190_Integer_Overflow__char_fscanf_add_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x20;
  __isoc99_fscanf(stdin,&DAT_00442299,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_68_goodB2GData = local_9;
  CWE190_Integer_Overflow__char_fscanf_add_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_61_bad(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_square_61b_badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_square_61b_goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = CWE190_Integer_Overflow__char_fscanf_square_61b_goodB2GSource(0x20);
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_square_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_square_63_bad(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_square_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_max_square_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  undefined local_9;
  
  local_9 = 0x7f;
  CWE190_Integer_Overflow__char_max_square_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_max_square_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_65b_badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_65b_goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_65b_goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_05_bad(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00442310,&local_a);
  }
  if ((staticTrue != 0) && (0 < local_a)) {
    local_9 = local_a * 2;
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodB2G1(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00442310,&local_a);
  }
  if (staticFalse == 0) {
    if (0 < local_a) {
      if (local_a < '?') {
        local_9 = local_a * 2;
        printHexCharLine((ulong)(uint)(int)local_9);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  char local_a;
  char local_9;
  
  local_a = ' ';
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00442310,&local_a);
  }
  if ((staticTrue != 0) && (0 < local_a)) {
    if (local_a < '?') {
      local_9 = local_a * 2;
      printHexCharLine((ulong)(uint)(int)local_9);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  char local_9;
  
  local_9 = ' ';
  if (staticFalse == 0) {
    local_9 = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_9 != 0)) {
    printHexCharLine((ulong)(uint)(int)(char)(local_9 * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_41_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00442360,&local_9);
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2BSink(char cParm1)

{
  if (0 < cParm1) {
    printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(char cParm1)

{
  if (0 < cParm1) {
    if (cParm1 < '?') {
      printHexCharLine((ulong)(uint)(int)(char)(cParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00442360,&local_9);
  goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong badSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void CWE190_Integer_Overflow__char_rand_square_42_bad(void)

{
  char cVar1;
  
  cVar1 = badSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  char cVar1;
  
  cVar1 = goodG2BSource(0x20);
  printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  return;
}


ulong goodB2GSource(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = ~(byte)iVar3;
  }
  else {
    rand();
    rand();
    iVar3 = rand();
    bVar1 = (byte)iVar3;
  }
  return (ulong)bVar1;
}


void goodB2G(void)

{
  char cVar1;
  
  cVar1 = goodB2GSource(0x20);
  if ((cVar1 < -0xb) || ('\v' < cVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printHexCharLine((ulong)(uint)(int)(char)(cVar1 * cVar1));
  }
  return;
}


void CWE190_Integer_Overflow__char_rand_square_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_04_bad(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004423e0,&local_18);
  if (0 < local_18) {
    local_10 = local_18 * 2;
    printLongLongLine(local_10);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d52e) */

void goodB2G1(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004423e0,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  long local_18;
  long local_10;
  
  local_18 = 0;
  __isoc99_fscanf(stdin,&DAT_004423e0,&local_18);
  if (0 < local_18) {
    if (local_18 < 0x3fffffffffffffff) {
      local_10 = local_18 * 2;
      printLongLongLine(local_10);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d614) */

void goodG2B1(void)

{
  printLongLongLine(4);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(4);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_31_bad(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00442438,&local_28);
  local_10 = local_28;
  local_18 = local_28;
  if (0 < local_28) {
    local_20 = local_28 * 2;
    printLongLongLine(local_20);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(4);
  return;
}


void goodB2G(void)

{
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = 0;
  __isoc99_fscanf(stdin,&DAT_00442438,&local_28);
  local_10 = local_28;
  local_18 = local_28;
  if (0 < local_28) {
    if (local_28 < 0x3fffffffffffffff) {
      local_20 = local_28 * 2;
      printLongLongLine(local_20);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_54_bad(void)

{
  CWE190_Integer_Overflow__char_max_add_54b_badSink(0x7f);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_max_add_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__char_max_add_54b_goodB2GSink(0x7f);
  return;
}


void CWE190_Integer_Overflow__char_max_add_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53_bad(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00442476,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_53b_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__char_fscanf_add_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  char local_9;
  
  local_9 = ' ';
  __isoc99_fscanf(stdin,&DAT_00442476,&local_9);
  CWE190_Integer_Overflow__char_fscanf_add_53b_goodB2GSink((ulong)(uint)(int)local_9);
  return;
}


void CWE190_Integer_Overflow__char_fscanf_add_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_max_add_15_bad(void)

{
  printHexCharLine(0xffffff80);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d95b) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d996) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printHexCharLine(3);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(3);
  return;
}


void CWE190_Integer_Overflow__char_max_add_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53c_badSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_53d_badSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53c_goodG2BSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_53d_goodG2BSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_max_multiply_53c_goodB2GSink(char cParm1)

{
  CWE190_Integer_Overflow__char_max_multiply_53d_goodB2GSink((ulong)(uint)(int)cParm1);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_63_bad(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_square_63b_badSink(&local_9);
  return;
}


void goodG2B(void)

{
  undefined local_9;
  
  local_9 = 2;
  CWE190_Integer_Overflow__char_rand_square_63b_goodG2BSink(&local_9);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  byte local_9;
  
  local_9 = 0x20;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    rand();
    iVar2 = rand();
    local_9 = ~(byte)iVar2;
  }
  else {
    rand();
    rand();
    iVar2 = rand();
    local_9 = (byte)iVar2;
  }
  CWE190_Integer_Overflow__char_rand_square_63b_goodB2GSink(&local_9);
  return;
}


void CWE190_Integer_Overflow__char_rand_square_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_34_bad(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_004424b8,&local_b);
  local_9 = local_b;
  if (0 < local_b) {
    local_a = local_b * 2;
    printHexCharLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(4);
  return;
}


void goodB2G(void)

{
  char local_b;
  char local_a;
  char local_9;
  
  local_b = ' ';
  __isoc99_fscanf(stdin,&DAT_004424b8,&local_b);
  local_9 = local_b;
  if (0 < local_b) {
    if (local_b < '?') {
      local_a = local_b * 2;
      printHexCharLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__char_fscanf_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_67_bad(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004424f6,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_67b_badSink(local_10);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  undefined8 local_10;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_004424f6,&local_10);
  CWE190_Integer_Overflow__int64_t_fscanf_multiply_67b_goodB2GSink(local_10);
  return;
}


void CWE190_Integer_Overflow__int64_t_fscanf_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
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
  printf((char *)(double)fParm1,&DAT_00442519);
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
  printf(pcParm1,&DAT_00442536);
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
    __isoc99_sscanf(lVar1,&DAT_00442544,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0044254c,&local_14);
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

