
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00663ff8;
  if (PTR___gmon_start___00663ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400950(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00664010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00664018)();
  return iVar1;
}


void __isoc99_fscanf(void)

{
  (*(code *)PTR___isoc99_fscanf_00664020)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00664028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00664030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00664038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00664040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00664048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00664050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00664058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00664060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00664068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00664070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00664078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00664080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00664088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00664090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00664098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006640a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006640a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006640b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006640b8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00663ff8)();
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
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_42_good();");
  CWE190_Integer_Overflow__short_fscanf_square_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_64_good();");
  CWE190_Integer_Overflow__short_fscanf_add_64_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_52_good();");
  CWE190_Integer_Overflow__short_rand_multiply_52_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_06_good();");
  CWE190_Integer_Overflow__int_rand_add_06_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_08_good();");
  CWE190_Integer_Overflow__short_fscanf_add_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_45_good();");
  CWE190_Integer_Overflow__short_max_multiply_45_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_41_good();");
  CWE190_Integer_Overflow__short_max_add_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_13_good();");
  CWE190_Integer_Overflow__short_fscanf_add_13_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_42_good();");
  CWE190_Integer_Overflow__short_max_multiply_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_16_good();");
  CWE190_Integer_Overflow__short_max_square_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_08_good();");
  CWE190_Integer_Overflow__short_max_square_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_44_good();");
  CWE190_Integer_Overflow__short_max_square_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_07_good();");
  CWE190_Integer_Overflow__short_max_multiply_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_63_good();");
  CWE190_Integer_Overflow__short_max_square_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_31_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_01_good();");
  CWE190_Integer_Overflow__short_max_add_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_09_good();");
  CWE190_Integer_Overflow__int_rand_square_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_03_good();");
  CWE190_Integer_Overflow__short_rand_add_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_12_good();");
  CWE190_Integer_Overflow__short_rand_add_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_68_good();");
  CWE190_Integer_Overflow__short_rand_add_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_52_good();");
  CWE190_Integer_Overflow__short_max_add_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_12_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_13_good();");
  CWE190_Integer_Overflow__int_rand_square_13_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_22_good();");
  CWE190_Integer_Overflow__int_rand_square_22_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_01_good();");
  CWE190_Integer_Overflow__int_rand_multiply_01_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_13_good();");
  CWE190_Integer_Overflow__short_rand_add_13_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_42_good();");
  CWE190_Integer_Overflow__short_fscanf_add_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_61_good();");
  CWE190_Integer_Overflow__short_max_add_61_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_05_good();");
  CWE190_Integer_Overflow__int_rand_add_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_11_good();");
  CWE190_Integer_Overflow__short_max_add_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_52_good();");
  CWE190_Integer_Overflow__short_max_multiply_52_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_41_good();");
  CWE190_Integer_Overflow__int_rand_add_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_68_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_22_good();");
  CWE190_Integer_Overflow__short_rand_multiply_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_22_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_02_good();");
  CWE190_Integer_Overflow__short_max_add_02_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_54_good();");
  CWE190_Integer_Overflow__short_rand_multiply_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_21_good();");
  CWE190_Integer_Overflow__short_fscanf_square_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_67_good();");
  CWE190_Integer_Overflow__short_max_square_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_04_good();");
  CWE190_Integer_Overflow__short_max_multiply_04_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_10_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_65_good();");
  CWE190_Integer_Overflow__short_max_multiply_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_68_good();");
  CWE190_Integer_Overflow__short_max_multiply_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_10_good();");
  CWE190_Integer_Overflow__short_max_multiply_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_63_good();");
  CWE190_Integer_Overflow__short_fscanf_square_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_03_good();");
  CWE190_Integer_Overflow__short_fscanf_add_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_32_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_52_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_15_good();");
  CWE190_Integer_Overflow__short_max_multiply_15_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_12_good();");
  CWE190_Integer_Overflow__int_rand_square_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_15_good();");
  CWE190_Integer_Overflow__short_rand_multiply_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_61_good();");
  CWE190_Integer_Overflow__short_max_multiply_61_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_45_good();");
  CWE190_Integer_Overflow__int_rand_square_45_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_04_good();");
  CWE190_Integer_Overflow__int_rand_add_04_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_67_good();");
  CWE190_Integer_Overflow__short_rand_multiply_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_01_good();");
  CWE190_Integer_Overflow__short_fscanf_square_01_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_15_good();");
  CWE190_Integer_Overflow__short_fscanf_add_15_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_54_good();");
  CWE190_Integer_Overflow__int_rand_add_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_22_good();");
  CWE190_Integer_Overflow__short_fscanf_square_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_63_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_53_good();");
  CWE190_Integer_Overflow__short_rand_add_53_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_15_good();");
  CWE190_Integer_Overflow__short_fscanf_square_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_44_good();");
  CWE190_Integer_Overflow__short_max_add_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_32_good();");
  CWE190_Integer_Overflow__short_fscanf_add_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_45_good();");
  CWE190_Integer_Overflow__int_rand_multiply_45_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_51_good();");
  CWE190_Integer_Overflow__short_max_add_51_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_09_good();");
  CWE190_Integer_Overflow__int_rand_multiply_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_65_good();");
  CWE190_Integer_Overflow__short_fscanf_square_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_45_good();");
  CWE190_Integer_Overflow__short_max_square_45_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_03_good();");
  CWE190_Integer_Overflow__short_fscanf_square_03_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_66_good();");
  CWE190_Integer_Overflow__int_rand_square_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_18_good();");
  CWE190_Integer_Overflow__short_rand_add_18_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_21_good();");
  CWE190_Integer_Overflow__short_max_square_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_14_good();");
  CWE190_Integer_Overflow__int_rand_add_14_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_13_good();");
  CWE190_Integer_Overflow__int_rand_multiply_13_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_22_good();");
  CWE190_Integer_Overflow__short_max_add_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_08_good();");
  CWE190_Integer_Overflow__short_max_multiply_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_05_good();");
  CWE190_Integer_Overflow__short_max_square_05_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_65_good();");
  CWE190_Integer_Overflow__int_rand_add_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_14_good();");
  CWE190_Integer_Overflow__int_rand_square_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_31_good();");
  CWE190_Integer_Overflow__short_rand_multiply_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_21_good();");
  CWE190_Integer_Overflow__short_fscanf_add_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_52_good();");
  CWE190_Integer_Overflow__short_fscanf_add_52_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_44_good();");
  CWE190_Integer_Overflow__int_rand_multiply_44_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_07_good();");
  CWE190_Integer_Overflow__int_rand_square_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_16_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_52_good();");
  CWE190_Integer_Overflow__short_fscanf_square_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_34_good();");
  CWE190_Integer_Overflow__short_fscanf_add_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_07_good();");
  CWE190_Integer_Overflow__int_rand_multiply_07_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_53_good();");
  CWE190_Integer_Overflow__int_rand_multiply_53_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_05_good();");
  CWE190_Integer_Overflow__short_fscanf_add_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_34_good();");
  CWE190_Integer_Overflow__short_max_square_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_07_good();");
  CWE190_Integer_Overflow__int_rand_add_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_51_good();");
  CWE190_Integer_Overflow__short_rand_multiply_51_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_01_good();");
  CWE190_Integer_Overflow__int_rand_add_01_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_04_good();");
  CWE190_Integer_Overflow__short_max_square_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_05_good();");
  CWE190_Integer_Overflow__int_rand_square_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_01_good();");
  CWE190_Integer_Overflow__short_rand_multiply_01_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_52_good();");
  CWE190_Integer_Overflow__short_max_square_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_04_good();");
  CWE190_Integer_Overflow__short_max_add_04_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_51_good();");
  CWE190_Integer_Overflow__short_max_multiply_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_04_good();");
  CWE190_Integer_Overflow__short_fscanf_square_04_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_05_good();");
  CWE190_Integer_Overflow__short_max_multiply_05_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_02_good();");
  CWE190_Integer_Overflow__int_rand_add_02_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_11_good();");
  CWE190_Integer_Overflow__short_rand_add_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_45_good();");
  CWE190_Integer_Overflow__short_fscanf_square_45_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_34_good();");
  CWE190_Integer_Overflow__short_max_multiply_34_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_02_good();");
  CWE190_Integer_Overflow__short_fscanf_add_02_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_17_good();");
  CWE190_Integer_Overflow__short_rand_multiply_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_51_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_51_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_32_good();");
  CWE190_Integer_Overflow__int_rand_multiply_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_44_good();");
  CWE190_Integer_Overflow__short_fscanf_add_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_34_good();");
  CWE190_Integer_Overflow__short_rand_add_34_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_02_good();");
  CWE190_Integer_Overflow__short_rand_multiply_02_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_08_good();");
  CWE190_Integer_Overflow__short_fscanf_square_08_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_42_good();");
  CWE190_Integer_Overflow__int_rand_add_42_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_15_good();");
  CWE190_Integer_Overflow__int_rand_add_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_41_good();");
  CWE190_Integer_Overflow__short_max_multiply_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_31_good();");
  CWE190_Integer_Overflow__short_max_add_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_44_good();");
  CWE190_Integer_Overflow__short_rand_multiply_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_44_good();");
  CWE190_Integer_Overflow__short_max_multiply_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_53_good();");
  CWE190_Integer_Overflow__short_max_multiply_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_06_good();");
  CWE190_Integer_Overflow__int_rand_square_06_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_14_good();");
  CWE190_Integer_Overflow__short_max_multiply_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_02_good();");
  CWE190_Integer_Overflow__short_max_multiply_02_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_22_good();");
  CWE190_Integer_Overflow__short_max_square_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_10_good();");
  CWE190_Integer_Overflow__short_fscanf_square_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_11_good();");
  CWE190_Integer_Overflow__short_max_square_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_65_good();");
  CWE190_Integer_Overflow__short_max_add_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_03_good();");
  CWE190_Integer_Overflow__int_rand_multiply_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_01_good();");
  CWE190_Integer_Overflow__short_max_square_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_67_good();");
  CWE190_Integer_Overflow__int_rand_multiply_67_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_34_good();");
  CWE190_Integer_Overflow__int_rand_add_34_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_41_good();");
  CWE190_Integer_Overflow__short_rand_add_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_13_good();");
  CWE190_Integer_Overflow__short_rand_multiply_13_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_53_good();");
  CWE190_Integer_Overflow__short_fscanf_add_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_41_good();");
  CWE190_Integer_Overflow__int_rand_multiply_41_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_42_good();");
  CWE190_Integer_Overflow__int_rand_square_42_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_41_good();");
  CWE190_Integer_Overflow__int_rand_square_41_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_65_good();");
  CWE190_Integer_Overflow__int_rand_square_65_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_11_good();");
  CWE190_Integer_Overflow__int_rand_square_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_01_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_01_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_18_good();");
  CWE190_Integer_Overflow__short_fscanf_square_18_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_45_good();");
  CWE190_Integer_Overflow__short_fscanf_add_45_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_52_good();");
  CWE190_Integer_Overflow__int_rand_multiply_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_05_good();");
  CWE190_Integer_Overflow__short_max_add_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_06_good();");
  CWE190_Integer_Overflow__short_fscanf_add_06_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_16_good();");
  CWE190_Integer_Overflow__short_max_add_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_31_good();");
  CWE190_Integer_Overflow__short_rand_add_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_17_good();");
  CWE190_Integer_Overflow__short_max_multiply_17_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_31_good();");
  CWE190_Integer_Overflow__int_rand_multiply_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_31_good();");
  CWE190_Integer_Overflow__int_rand_square_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_41_good();");
  CWE190_Integer_Overflow__short_max_square_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_51_good();");
  CWE190_Integer_Overflow__short_fscanf_square_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_07_good();");
  CWE190_Integer_Overflow__short_rand_multiply_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_54_good();");
  CWE190_Integer_Overflow__short_max_add_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_45_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_45_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_05_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_08_good();");
  CWE190_Integer_Overflow__short_rand_multiply_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_21_good();");
  CWE190_Integer_Overflow__short_max_multiply_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_08_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_12_good();");
  CWE190_Integer_Overflow__short_fscanf_square_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_18_good();");
  CWE190_Integer_Overflow__int_rand_multiply_18_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_65_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_14_good();");
  CWE190_Integer_Overflow__short_max_add_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_17_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_02_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_02_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_67_good();");
  CWE190_Integer_Overflow__short_fscanf_add_67_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_22_good();");
  CWE190_Integer_Overflow__int_rand_add_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_09_good();");
  CWE190_Integer_Overflow__short_fscanf_square_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_53_good();");
  CWE190_Integer_Overflow__short_rand_multiply_53_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_66_good();");
  CWE190_Integer_Overflow__short_max_add_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_63_good();");
  CWE190_Integer_Overflow__short_rand_multiply_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_63_good();");
  CWE190_Integer_Overflow__short_max_multiply_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_32_good();");
  CWE190_Integer_Overflow__short_fscanf_square_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_67_good();");
  CWE190_Integer_Overflow__int_rand_square_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_41_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_09_good();");
  CWE190_Integer_Overflow__short_rand_multiply_09_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_16_good();");
  CWE190_Integer_Overflow__int_rand_multiply_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_16_good();");
  CWE190_Integer_Overflow__int_rand_square_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_02_good();");
  CWE190_Integer_Overflow__short_fscanf_square_02_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_11_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_11_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_54_good();");
  CWE190_Integer_Overflow__int_rand_square_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_13_good();");
  CWE190_Integer_Overflow__short_max_add_13_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_14_good();");
  CWE190_Integer_Overflow__short_fscanf_add_14_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_53_good();");
  CWE190_Integer_Overflow__int_rand_square_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_32_good();");
  CWE190_Integer_Overflow__int_rand_add_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_66_good();");
  CWE190_Integer_Overflow__int_rand_multiply_66_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_63_good();");
  CWE190_Integer_Overflow__int_rand_add_63_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_16_good();");
  CWE190_Integer_Overflow__int_rand_add_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_15_good();");
  CWE190_Integer_Overflow__short_max_add_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_67_good();");
  CWE190_Integer_Overflow__short_rand_add_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_65_good();");
  CWE190_Integer_Overflow__short_fscanf_add_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_51_good();");
  CWE190_Integer_Overflow__short_rand_add_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_34_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_01_good();");
  CWE190_Integer_Overflow__int_rand_square_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_64_good();");
  CWE190_Integer_Overflow__int_rand_multiply_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_68_good();");
  CWE190_Integer_Overflow__int_rand_add_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_34_good();");
  CWE190_Integer_Overflow__int_rand_square_34_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_18_good();");
  CWE190_Integer_Overflow__short_max_multiply_18_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_22_good();");
  CWE190_Integer_Overflow__short_max_multiply_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_03_good();");
  CWE190_Integer_Overflow__short_max_multiply_03_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_44_good();");
  CWE190_Integer_Overflow__int_rand_add_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_44_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_44_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_52_good();");
  CWE190_Integer_Overflow__int_rand_add_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_18_good();");
  CWE190_Integer_Overflow__short_max_add_18_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_66_good();");
  CWE190_Integer_Overflow__int_rand_add_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_09_good();");
  CWE190_Integer_Overflow__short_max_add_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_10_good();");
  CWE190_Integer_Overflow__short_max_add_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_09_good();");
  CWE190_Integer_Overflow__short_fscanf_add_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_31_good();");
  CWE190_Integer_Overflow__short_fscanf_add_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_17_good();");
  CWE190_Integer_Overflow__short_fscanf_add_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_04_good();");
  CWE190_Integer_Overflow__short_fscanf_add_04_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_53_good();");
  CWE190_Integer_Overflow__short_fscanf_square_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_17_good();");
  CWE190_Integer_Overflow__int_rand_add_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_42_good();");
  CWE190_Integer_Overflow__short_max_square_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_51_good();");
  CWE190_Integer_Overflow__short_max_square_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_68_good();");
  CWE190_Integer_Overflow__short_fscanf_add_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_68_good();");
  CWE190_Integer_Overflow__int_rand_multiply_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_10_good();");
  CWE190_Integer_Overflow__short_rand_add_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_68_good();");
  CWE190_Integer_Overflow__short_max_add_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_66_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_42_good();");
  CWE190_Integer_Overflow__short_rand_add_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_14_good();");
  CWE190_Integer_Overflow__short_rand_multiply_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_02_good();");
  CWE190_Integer_Overflow__short_max_square_02_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_21_good();");
  CWE190_Integer_Overflow__int_rand_add_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_11_good();");
  CWE190_Integer_Overflow__short_fscanf_square_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_44_good();");
  CWE190_Integer_Overflow__short_rand_add_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_45_good();");
  CWE190_Integer_Overflow__short_rand_add_45_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_53_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_53_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_06_good();");
  CWE190_Integer_Overflow__short_rand_add_06_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_16_good();");
  CWE190_Integer_Overflow__short_fscanf_square_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_45_good();");
  CWE190_Integer_Overflow__short_rand_multiply_45_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_21_good();");
  CWE190_Integer_Overflow__short_max_add_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_54_good();");
  CWE190_Integer_Overflow__short_fscanf_square_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_44_good();");
  CWE190_Integer_Overflow__short_fscanf_square_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_10_good();");
  CWE190_Integer_Overflow__short_rand_multiply_10_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_21_good();");
  CWE190_Integer_Overflow__int_rand_multiply_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_13_good();");
  CWE190_Integer_Overflow__short_max_multiply_13_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_01_good();");
  CWE190_Integer_Overflow__short_max_multiply_01_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_14_good();");
  CWE190_Integer_Overflow__short_fscanf_square_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_66_good();");
  CWE190_Integer_Overflow__short_max_square_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_10_good();");
  CWE190_Integer_Overflow__short_max_square_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_31_good();");
  CWE190_Integer_Overflow__short_fscanf_square_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_63_good();");
  CWE190_Integer_Overflow__short_fscanf_add_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_67_good();");
  CWE190_Integer_Overflow__short_max_multiply_67_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_15_good();");
  CWE190_Integer_Overflow__int_rand_square_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_07_good();");
  CWE190_Integer_Overflow__short_max_add_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_64_good();");
  CWE190_Integer_Overflow__short_max_add_64_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_08_good();");
  CWE190_Integer_Overflow__short_max_add_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_03_good();");
  CWE190_Integer_Overflow__short_rand_multiply_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_11_good();");
  CWE190_Integer_Overflow__short_rand_multiply_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_22_good();");
  CWE190_Integer_Overflow__short_fscanf_add_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_68_good();");
  CWE190_Integer_Overflow__short_fscanf_square_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_61_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_61_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_14_good();");
  CWE190_Integer_Overflow__int_rand_multiply_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_09_good();");
  CWE190_Integer_Overflow__short_rand_add_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_66_good();");
  CWE190_Integer_Overflow__short_fscanf_add_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_16_good();");
  CWE190_Integer_Overflow__short_fscanf_add_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_65_good();");
  CWE190_Integer_Overflow__short_rand_add_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_34_good();");
  CWE190_Integer_Overflow__short_max_add_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_09_good();");
  CWE190_Integer_Overflow__int_rand_add_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_15_good();");
  CWE190_Integer_Overflow__short_rand_add_15_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_05_good();");
  CWE190_Integer_Overflow__int_rand_multiply_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_65_good();");
  CWE190_Integer_Overflow__short_max_square_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_66_good();");
  CWE190_Integer_Overflow__short_max_multiply_66_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_12_good();");
  CWE190_Integer_Overflow__int_rand_add_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_64_good();");
  CWE190_Integer_Overflow__short_rand_multiply_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_04_good();");
  CWE190_Integer_Overflow__int_rand_square_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_18_good();");
  CWE190_Integer_Overflow__int_rand_add_18_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_22_good();");
  CWE190_Integer_Overflow__int_rand_multiply_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_15_good();");
  CWE190_Integer_Overflow__short_max_square_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_45_good();");
  CWE190_Integer_Overflow__short_max_add_45_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_52_good();");
  CWE190_Integer_Overflow__int_rand_square_52_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_64_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_17_good();");
  CWE190_Integer_Overflow__int_rand_multiply_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_18_good();");
  CWE190_Integer_Overflow__short_rand_multiply_18_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_18_good();");
  CWE190_Integer_Overflow__int_rand_square_18_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_51_good();");
  CWE190_Integer_Overflow__int_rand_multiply_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_42_good();");
  CWE190_Integer_Overflow__short_rand_multiply_42_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_08_good();");
  CWE190_Integer_Overflow__int_rand_add_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_10_good();");
  CWE190_Integer_Overflow__short_fscanf_add_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_05_good();");
  CWE190_Integer_Overflow__short_rand_multiply_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_53_good();");
  CWE190_Integer_Overflow__short_max_add_53_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_12_good();");
  CWE190_Integer_Overflow__short_fscanf_add_12_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_34_good();");
  CWE190_Integer_Overflow__int_rand_multiply_34_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_05_good();");
  CWE190_Integer_Overflow__short_rand_add_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_21_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_12_good();");
  CWE190_Integer_Overflow__int_rand_multiply_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_13_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_13_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_14_good();");
  CWE190_Integer_Overflow__short_max_square_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_06_good();");
  CWE190_Integer_Overflow__short_rand_multiply_06_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_66_good();");
  CWE190_Integer_Overflow__short_rand_multiply_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_32_good();");
  CWE190_Integer_Overflow__short_rand_add_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_64_good();");
  CWE190_Integer_Overflow__short_max_multiply_64_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_17_good();");
  CWE190_Integer_Overflow__short_fscanf_square_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_17_good();");
  CWE190_Integer_Overflow__short_rand_add_17_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_06_good();");
  CWE190_Integer_Overflow__int_rand_multiply_06_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_16_good();");
  CWE190_Integer_Overflow__short_rand_add_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_41_good();");
  CWE190_Integer_Overflow__short_fscanf_square_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_03_good();");
  CWE190_Integer_Overflow__short_max_square_03_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_42_good();");
  CWE190_Integer_Overflow__int_rand_multiply_42_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_02_good();");
  CWE190_Integer_Overflow__short_rand_add_02_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_05_good();");
  CWE190_Integer_Overflow__short_fscanf_square_05_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_54_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_51_good();");
  CWE190_Integer_Overflow__short_fscanf_add_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_12_good();");
  CWE190_Integer_Overflow__short_max_add_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_61_good();");
  CWE190_Integer_Overflow__short_fscanf_square_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_14_good();");
  CWE190_Integer_Overflow__short_rand_add_14_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_61_good();");
  CWE190_Integer_Overflow__int_rand_square_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_07_good();");
  CWE190_Integer_Overflow__short_fscanf_add_07_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_63_good();");
  CWE190_Integer_Overflow__int_rand_multiply_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_06_good();");
  CWE190_Integer_Overflow__short_fscanf_square_06_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_13_good();");
  CWE190_Integer_Overflow__short_fscanf_square_13_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_11_good();");
  CWE190_Integer_Overflow__int_rand_add_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_34_good();");
  CWE190_Integer_Overflow__short_fscanf_square_34_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_21_good();");
  CWE190_Integer_Overflow__short_rand_multiply_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_67_good();");
  CWE190_Integer_Overflow__short_fscanf_square_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_17_good();");
  CWE190_Integer_Overflow__short_max_add_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_16_good();");
  CWE190_Integer_Overflow__short_rand_multiply_16_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_02_good();");
  CWE190_Integer_Overflow__int_rand_square_02_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_13_good();");
  CWE190_Integer_Overflow__int_rand_add_13_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_13_good();");
  CWE190_Integer_Overflow__short_max_square_13_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_68_good();");
  CWE190_Integer_Overflow__int_rand_square_68_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_31_good();");
  CWE190_Integer_Overflow__int_rand_add_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_32_good();");
  CWE190_Integer_Overflow__short_rand_multiply_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_68_good();");
  CWE190_Integer_Overflow__short_rand_multiply_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_06_good();");
  CWE190_Integer_Overflow__short_max_square_06_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_08_good();");
  CWE190_Integer_Overflow__int_rand_multiply_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_11_good();");
  CWE190_Integer_Overflow__short_max_multiply_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_42_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_42_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_63_good();");
  CWE190_Integer_Overflow__int_rand_square_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_17_good();");
  CWE190_Integer_Overflow__short_max_square_17_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_10_good();");
  CWE190_Integer_Overflow__int_rand_add_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_18_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_18_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_07_good();");
  CWE190_Integer_Overflow__short_fscanf_square_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_53_good();");
  CWE190_Integer_Overflow__short_max_square_53_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_51_good();");
  CWE190_Integer_Overflow__int_rand_add_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_63_good();");
  CWE190_Integer_Overflow__short_max_add_63_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_12_good();");
  CWE190_Integer_Overflow__short_max_multiply_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_32_good();");
  CWE190_Integer_Overflow__short_max_add_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_16_good();");
  CWE190_Integer_Overflow__short_max_multiply_16_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_14_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_14_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_04_good();");
  CWE190_Integer_Overflow__short_rand_add_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_10_good();");
  CWE190_Integer_Overflow__int_rand_multiply_10_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_34_good();");
  CWE190_Integer_Overflow__short_rand_multiply_34_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_64_good();");
  CWE190_Integer_Overflow__int_rand_square_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_21_good();");
  CWE190_Integer_Overflow__int_rand_square_21_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_06_good();");
  CWE190_Integer_Overflow__short_max_multiply_06_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_11_good();");
  CWE190_Integer_Overflow__int_rand_multiply_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_54_good();");
  CWE190_Integer_Overflow__short_rand_add_54_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_51_good();");
  CWE190_Integer_Overflow__int_rand_square_51_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_64_good();");
  CWE190_Integer_Overflow__short_max_square_64_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_45_good();");
  CWE190_Integer_Overflow__int_rand_add_45_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_41_good();");
  CWE190_Integer_Overflow__short_fscanf_add_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_63_good();");
  CWE190_Integer_Overflow__short_rand_add_63_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_64_good();");
  CWE190_Integer_Overflow__int_rand_add_64_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_68_good();");
  CWE190_Integer_Overflow__short_max_square_68_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_09_good();");
  CWE190_Integer_Overflow__short_max_multiply_09_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_65_good();");
  CWE190_Integer_Overflow__int_rand_multiply_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_04_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_02_good();");
  CWE190_Integer_Overflow__int_rand_multiply_02_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_18_good();");
  CWE190_Integer_Overflow__short_max_square_18_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_42_good();");
  CWE190_Integer_Overflow__short_max_add_42_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_04_good();");
  CWE190_Integer_Overflow__int_rand_multiply_04_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_22_good();");
  CWE190_Integer_Overflow__short_rand_add_22_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_12_good();");
  CWE190_Integer_Overflow__short_max_square_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_52_good();");
  CWE190_Integer_Overflow__short_rand_add_52_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_44_good();");
  CWE190_Integer_Overflow__int_rand_square_44_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_01_good();");
  CWE190_Integer_Overflow__short_fscanf_add_01_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_53_good();");
  CWE190_Integer_Overflow__int_rand_add_53_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_03_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_31_good();");
  CWE190_Integer_Overflow__short_max_square_31_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_32_good();");
  CWE190_Integer_Overflow__int_rand_square_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_67_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_67_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_08_good();");
  CWE190_Integer_Overflow__int_rand_square_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_66_good();");
  CWE190_Integer_Overflow__short_rand_add_66_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_61_good();");
  CWE190_Integer_Overflow__int_rand_add_61_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_61_good();");
  CWE190_Integer_Overflow__int_rand_multiply_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_65_good();");
  CWE190_Integer_Overflow__short_rand_multiply_65_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_08_good();");
  CWE190_Integer_Overflow__short_rand_add_08_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_41_good();");
  CWE190_Integer_Overflow__short_rand_multiply_41_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_61_good();");
  CWE190_Integer_Overflow__short_fscanf_add_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_32_good();");
  CWE190_Integer_Overflow__short_max_multiply_32_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_07_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_67_good();");
  CWE190_Integer_Overflow__short_max_add_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_09_good();");
  CWE190_Integer_Overflow__short_max_square_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_11_good();");
  CWE190_Integer_Overflow__short_fscanf_add_11_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_06_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_06_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_67_good();");
  CWE190_Integer_Overflow__int_rand_add_67_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_01_good();");
  CWE190_Integer_Overflow__short_rand_add_01_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_66_good();");
  CWE190_Integer_Overflow__short_fscanf_square_66_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_04_good();");
  CWE190_Integer_Overflow__short_rand_multiply_04_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_10_good();");
  CWE190_Integer_Overflow__int_rand_square_10_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_17_good();");
  CWE190_Integer_Overflow__int_rand_square_17_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_15_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_54_good();");
  CWE190_Integer_Overflow__short_fscanf_add_54_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_03_good();");
  CWE190_Integer_Overflow__int_rand_square_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_64_good();");
  CWE190_Integer_Overflow__short_rand_add_64_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_06_good();");
  CWE190_Integer_Overflow__short_max_add_06_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_61_good();");
  CWE190_Integer_Overflow__short_rand_multiply_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_07_good();");
  CWE190_Integer_Overflow__short_rand_add_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_61_good();");
  CWE190_Integer_Overflow__short_max_square_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_21_good();");
  CWE190_Integer_Overflow__short_rand_add_21_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_15_good();");
  CWE190_Integer_Overflow__int_rand_multiply_15_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_54_good();");
  CWE190_Integer_Overflow__short_max_multiply_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_12_good();");
  CWE190_Integer_Overflow__short_rand_multiply_12_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_03_good();");
  CWE190_Integer_Overflow__short_max_add_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_32_good();");
  CWE190_Integer_Overflow__short_max_square_32_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_03_good();");
  CWE190_Integer_Overflow__int_rand_add_03_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_09_good();");
  CWE190_Integer_Overflow__short_fscanf_multiply_09_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_64_good();");
  CWE190_Integer_Overflow__short_fscanf_square_64_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_18_good();");
  CWE190_Integer_Overflow__short_fscanf_add_18_good();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_54_good();");
  CWE190_Integer_Overflow__int_rand_multiply_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_07_good();");
  CWE190_Integer_Overflow__short_max_square_07_good();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_61_good();");
  CWE190_Integer_Overflow__short_rand_add_61_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_31_good();");
  CWE190_Integer_Overflow__short_max_multiply_31_good();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_54_good();");
  CWE190_Integer_Overflow__short_max_square_54_good();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_42_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_64_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_64_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_52_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_06_bad();");
  CWE190_Integer_Overflow__int_rand_add_06_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_08_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_45_bad();");
  CWE190_Integer_Overflow__short_max_multiply_45_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_41_bad();");
  CWE190_Integer_Overflow__short_max_add_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_13_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_13_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_42_bad();");
  CWE190_Integer_Overflow__short_max_multiply_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_16_bad();");
  CWE190_Integer_Overflow__short_max_square_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_08_bad();");
  CWE190_Integer_Overflow__short_max_square_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_44_bad();");
  CWE190_Integer_Overflow__short_max_square_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_07_bad();");
  CWE190_Integer_Overflow__short_max_multiply_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_63_bad();");
  CWE190_Integer_Overflow__short_max_square_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_31_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_01_bad();");
  CWE190_Integer_Overflow__short_max_add_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_09_bad();");
  CWE190_Integer_Overflow__int_rand_square_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_03_bad();");
  CWE190_Integer_Overflow__short_rand_add_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_12_bad();");
  CWE190_Integer_Overflow__short_rand_add_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_68_bad();");
  CWE190_Integer_Overflow__short_rand_add_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_52_bad();");
  CWE190_Integer_Overflow__short_max_add_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_12_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_13_bad();");
  CWE190_Integer_Overflow__int_rand_square_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_22_bad();");
  CWE190_Integer_Overflow__int_rand_square_22_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_01_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_01_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_13_bad();");
  CWE190_Integer_Overflow__short_rand_add_13_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_42_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_61_bad();");
  CWE190_Integer_Overflow__short_max_add_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_05_bad();");
  CWE190_Integer_Overflow__int_rand_add_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_11_bad();");
  CWE190_Integer_Overflow__short_max_add_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_52_bad();");
  CWE190_Integer_Overflow__short_max_multiply_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_41_bad();");
  CWE190_Integer_Overflow__int_rand_add_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_68_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_22_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_22_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_02_bad();");
  CWE190_Integer_Overflow__short_max_add_02_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_54_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_21_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_67_bad();");
  CWE190_Integer_Overflow__short_max_square_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_04_bad();");
  CWE190_Integer_Overflow__short_max_multiply_04_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_10_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_65_bad();");
  CWE190_Integer_Overflow__short_max_multiply_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_68_bad();");
  CWE190_Integer_Overflow__short_max_multiply_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_10_bad();");
  CWE190_Integer_Overflow__short_max_multiply_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_63_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_03_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_32_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_52_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_15_bad();");
  CWE190_Integer_Overflow__short_max_multiply_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_12_bad();");
  CWE190_Integer_Overflow__int_rand_square_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_15_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_61_bad();");
  CWE190_Integer_Overflow__short_max_multiply_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_45_bad();");
  CWE190_Integer_Overflow__int_rand_square_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_04_bad();");
  CWE190_Integer_Overflow__int_rand_add_04_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_67_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_01_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_01_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_15_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_54_bad();");
  CWE190_Integer_Overflow__int_rand_add_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_22_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_63_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_53_bad();");
  CWE190_Integer_Overflow__short_rand_add_53_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_15_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_44_bad();");
  CWE190_Integer_Overflow__short_max_add_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_32_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_45_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_45_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_51_bad();");
  CWE190_Integer_Overflow__short_max_add_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_09_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_65_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_45_bad();");
  CWE190_Integer_Overflow__short_max_square_45_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_03_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_66_bad();");
  CWE190_Integer_Overflow__int_rand_square_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_18_bad();");
  CWE190_Integer_Overflow__short_rand_add_18_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_21_bad();");
  CWE190_Integer_Overflow__short_max_square_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_14_bad();");
  CWE190_Integer_Overflow__int_rand_add_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_13_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_13_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_22_bad();");
  CWE190_Integer_Overflow__short_max_add_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_08_bad();");
  CWE190_Integer_Overflow__short_max_multiply_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_05_bad();");
  CWE190_Integer_Overflow__short_max_square_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_65_bad();");
  CWE190_Integer_Overflow__int_rand_add_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_14_bad();");
  CWE190_Integer_Overflow__int_rand_square_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_31_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_21_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_52_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_44_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_07_bad();");
  CWE190_Integer_Overflow__int_rand_square_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_16_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_52_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_34_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_07_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_53_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_53_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_05_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_34_bad();");
  CWE190_Integer_Overflow__short_max_square_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_07_bad();");
  CWE190_Integer_Overflow__int_rand_add_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_51_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_01_bad();");
  CWE190_Integer_Overflow__int_rand_add_01_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_04_bad();");
  CWE190_Integer_Overflow__short_max_square_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_05_bad();");
  CWE190_Integer_Overflow__int_rand_square_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_01_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_01_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_52_bad();");
  CWE190_Integer_Overflow__short_max_square_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_04_bad();");
  CWE190_Integer_Overflow__short_max_add_04_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_51_bad();");
  CWE190_Integer_Overflow__short_max_multiply_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_04_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_04_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_05_bad();");
  CWE190_Integer_Overflow__short_max_multiply_05_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_02_bad();");
  CWE190_Integer_Overflow__int_rand_add_02_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_11_bad();");
  CWE190_Integer_Overflow__short_rand_add_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_45_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_45_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_34_bad();");
  CWE190_Integer_Overflow__short_max_multiply_34_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_02_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_02_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_17_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_51_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_51_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_32_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_44_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_34_bad();");
  CWE190_Integer_Overflow__short_rand_add_34_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_02_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_02_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_08_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_08_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_42_bad();");
  CWE190_Integer_Overflow__int_rand_add_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_15_bad();");
  CWE190_Integer_Overflow__int_rand_add_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_41_bad();");
  CWE190_Integer_Overflow__short_max_multiply_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_31_bad();");
  CWE190_Integer_Overflow__short_max_add_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_44_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_44_bad();");
  CWE190_Integer_Overflow__short_max_multiply_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_53_bad();");
  CWE190_Integer_Overflow__short_max_multiply_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_06_bad();");
  CWE190_Integer_Overflow__int_rand_square_06_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_14_bad();");
  CWE190_Integer_Overflow__short_max_multiply_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_02_bad();");
  CWE190_Integer_Overflow__short_max_multiply_02_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_22_bad();");
  CWE190_Integer_Overflow__short_max_square_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_10_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_11_bad();");
  CWE190_Integer_Overflow__short_max_square_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_65_bad();");
  CWE190_Integer_Overflow__short_max_add_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_03_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_01_bad();");
  CWE190_Integer_Overflow__short_max_square_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_67_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_34_bad();");
  CWE190_Integer_Overflow__int_rand_add_34_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_41_bad();");
  CWE190_Integer_Overflow__short_rand_add_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_13_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_13_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_53_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_41_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_42_bad();");
  CWE190_Integer_Overflow__int_rand_square_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_41_bad();");
  CWE190_Integer_Overflow__int_rand_square_41_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_65_bad();");
  CWE190_Integer_Overflow__int_rand_square_65_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_11_bad();");
  CWE190_Integer_Overflow__int_rand_square_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_01_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_01_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_18_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_18_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_45_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_52_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_05_bad();");
  CWE190_Integer_Overflow__short_max_add_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_06_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_06_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_16_bad();");
  CWE190_Integer_Overflow__short_max_add_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_31_bad();");
  CWE190_Integer_Overflow__short_rand_add_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_17_bad();");
  CWE190_Integer_Overflow__short_max_multiply_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_31_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_31_bad();");
  CWE190_Integer_Overflow__int_rand_square_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_41_bad();");
  CWE190_Integer_Overflow__short_max_square_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_51_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_07_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_54_bad();");
  CWE190_Integer_Overflow__short_max_add_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_45_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_45_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_05_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_08_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_21_bad();");
  CWE190_Integer_Overflow__short_max_multiply_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_08_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_12_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_18_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_18_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_65_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_14_bad();");
  CWE190_Integer_Overflow__short_max_add_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_17_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_02_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_02_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_67_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_22_bad();");
  CWE190_Integer_Overflow__int_rand_add_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_09_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_53_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_53_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_66_bad();");
  CWE190_Integer_Overflow__short_max_add_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_63_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_63_bad();");
  CWE190_Integer_Overflow__short_max_multiply_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_32_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_67_bad();");
  CWE190_Integer_Overflow__int_rand_square_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_41_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_09_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_16_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_16_bad();");
  CWE190_Integer_Overflow__int_rand_square_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_02_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_02_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_11_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_11_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_54_bad();");
  CWE190_Integer_Overflow__int_rand_square_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_13_bad();");
  CWE190_Integer_Overflow__short_max_add_13_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_14_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_53_bad();");
  CWE190_Integer_Overflow__int_rand_square_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_32_bad();");
  CWE190_Integer_Overflow__int_rand_add_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_66_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_66_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_63_bad();");
  CWE190_Integer_Overflow__int_rand_add_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_16_bad();");
  CWE190_Integer_Overflow__int_rand_add_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_15_bad();");
  CWE190_Integer_Overflow__short_max_add_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_67_bad();");
  CWE190_Integer_Overflow__short_rand_add_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_65_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_51_bad();");
  CWE190_Integer_Overflow__short_rand_add_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_34_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_01_bad();");
  CWE190_Integer_Overflow__int_rand_square_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_64_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_68_bad();");
  CWE190_Integer_Overflow__int_rand_add_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_34_bad();");
  CWE190_Integer_Overflow__int_rand_square_34_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_18_bad();");
  CWE190_Integer_Overflow__short_max_multiply_18_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_22_bad();");
  CWE190_Integer_Overflow__short_max_multiply_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_03_bad();");
  CWE190_Integer_Overflow__short_max_multiply_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_44_bad();");
  CWE190_Integer_Overflow__int_rand_add_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_44_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_44_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_52_bad();");
  CWE190_Integer_Overflow__int_rand_add_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_18_bad();");
  CWE190_Integer_Overflow__short_max_add_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_66_bad();");
  CWE190_Integer_Overflow__int_rand_add_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_09_bad();");
  CWE190_Integer_Overflow__short_max_add_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_10_bad();");
  CWE190_Integer_Overflow__short_max_add_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_09_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_31_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_17_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_04_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_04_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_53_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_17_bad();");
  CWE190_Integer_Overflow__int_rand_add_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_42_bad();");
  CWE190_Integer_Overflow__short_max_square_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_51_bad();");
  CWE190_Integer_Overflow__short_max_square_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_68_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_68_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_10_bad();");
  CWE190_Integer_Overflow__short_rand_add_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_68_bad();");
  CWE190_Integer_Overflow__short_max_add_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_66_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_42_bad();");
  CWE190_Integer_Overflow__short_rand_add_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_14_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_02_bad();");
  CWE190_Integer_Overflow__short_max_square_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_21_bad();");
  CWE190_Integer_Overflow__int_rand_add_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_11_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_44_bad();");
  CWE190_Integer_Overflow__short_rand_add_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_45_bad();");
  CWE190_Integer_Overflow__short_rand_add_45_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_53_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_53_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_06_bad();");
  CWE190_Integer_Overflow__short_rand_add_06_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_16_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_45_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_45_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_21_bad();");
  CWE190_Integer_Overflow__short_max_add_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_54_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_44_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_10_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_21_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_13_bad();");
  CWE190_Integer_Overflow__short_max_multiply_13_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_01_bad();");
  CWE190_Integer_Overflow__short_max_multiply_01_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_14_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_66_bad();");
  CWE190_Integer_Overflow__short_max_square_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_10_bad();");
  CWE190_Integer_Overflow__short_max_square_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_31_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_63_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_67_bad();");
  CWE190_Integer_Overflow__short_max_multiply_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_15_bad();");
  CWE190_Integer_Overflow__int_rand_square_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_07_bad();");
  CWE190_Integer_Overflow__short_max_add_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_64_bad();");
  CWE190_Integer_Overflow__short_max_add_64_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_08_bad();");
  CWE190_Integer_Overflow__short_max_add_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_03_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_11_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_22_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_68_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_61_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_14_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_09_bad();");
  CWE190_Integer_Overflow__short_rand_add_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_66_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_16_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_65_bad();");
  CWE190_Integer_Overflow__short_rand_add_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_34_bad();");
  CWE190_Integer_Overflow__short_max_add_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_09_bad();");
  CWE190_Integer_Overflow__int_rand_add_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_15_bad();");
  CWE190_Integer_Overflow__short_rand_add_15_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_05_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_65_bad();");
  CWE190_Integer_Overflow__short_max_square_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_66_bad();");
  CWE190_Integer_Overflow__short_max_multiply_66_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_12_bad();");
  CWE190_Integer_Overflow__int_rand_add_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_64_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_04_bad();");
  CWE190_Integer_Overflow__int_rand_square_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_18_bad();");
  CWE190_Integer_Overflow__int_rand_add_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_22_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_15_bad();");
  CWE190_Integer_Overflow__short_max_square_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_45_bad();");
  CWE190_Integer_Overflow__short_max_add_45_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_52_bad();");
  CWE190_Integer_Overflow__int_rand_square_52_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_64_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_17_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_18_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_18_bad();");
  CWE190_Integer_Overflow__int_rand_square_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_51_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_42_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_08_bad();");
  CWE190_Integer_Overflow__int_rand_add_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_10_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_05_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_53_bad();");
  CWE190_Integer_Overflow__short_max_add_53_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_12_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_12_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_34_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_34_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_05_bad();");
  CWE190_Integer_Overflow__short_rand_add_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_21_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_12_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_13_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_13_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_14_bad();");
  CWE190_Integer_Overflow__short_max_square_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_06_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_06_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_66_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_32_bad();");
  CWE190_Integer_Overflow__short_rand_add_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_64_bad();");
  CWE190_Integer_Overflow__short_max_multiply_64_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_17_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_17_bad();");
  CWE190_Integer_Overflow__short_rand_add_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_06_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_06_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_16_bad();");
  CWE190_Integer_Overflow__short_rand_add_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_41_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_03_bad();");
  CWE190_Integer_Overflow__short_max_square_03_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_42_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_42_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_02_bad();");
  CWE190_Integer_Overflow__short_rand_add_02_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_05_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_05_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_54_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_51_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_12_bad();");
  CWE190_Integer_Overflow__short_max_add_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_61_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_14_bad();");
  CWE190_Integer_Overflow__short_rand_add_14_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_61_bad();");
  CWE190_Integer_Overflow__int_rand_square_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_07_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_07_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_63_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_06_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_06_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_13_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_11_bad();");
  CWE190_Integer_Overflow__int_rand_add_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_34_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_34_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_21_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_67_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_17_bad();");
  CWE190_Integer_Overflow__short_max_add_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_16_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_16_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_02_bad();");
  CWE190_Integer_Overflow__int_rand_square_02_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_13_bad();");
  CWE190_Integer_Overflow__int_rand_add_13_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_13_bad();");
  CWE190_Integer_Overflow__short_max_square_13_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_68_bad();");
  CWE190_Integer_Overflow__int_rand_square_68_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_31_bad();");
  CWE190_Integer_Overflow__int_rand_add_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_32_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_68_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_06_bad();");
  CWE190_Integer_Overflow__short_max_square_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_08_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_11_bad();");
  CWE190_Integer_Overflow__short_max_multiply_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_42_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_63_bad();");
  CWE190_Integer_Overflow__int_rand_square_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_17_bad();");
  CWE190_Integer_Overflow__short_max_square_17_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_10_bad();");
  CWE190_Integer_Overflow__int_rand_add_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_18_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_18_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_07_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_53_bad();");
  CWE190_Integer_Overflow__short_max_square_53_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_51_bad();");
  CWE190_Integer_Overflow__int_rand_add_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_63_bad();");
  CWE190_Integer_Overflow__short_max_add_63_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_12_bad();");
  CWE190_Integer_Overflow__short_max_multiply_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_32_bad();");
  CWE190_Integer_Overflow__short_max_add_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_16_bad();");
  CWE190_Integer_Overflow__short_max_multiply_16_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_14_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_14_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_04_bad();");
  CWE190_Integer_Overflow__short_rand_add_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_10_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_10_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_34_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_34_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_64_bad();");
  CWE190_Integer_Overflow__int_rand_square_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_21_bad();");
  CWE190_Integer_Overflow__int_rand_square_21_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_06_bad();");
  CWE190_Integer_Overflow__short_max_multiply_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_11_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_54_bad();");
  CWE190_Integer_Overflow__short_rand_add_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_51_bad();");
  CWE190_Integer_Overflow__int_rand_square_51_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_64_bad();");
  CWE190_Integer_Overflow__short_max_square_64_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_45_bad();");
  CWE190_Integer_Overflow__int_rand_add_45_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_41_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_63_bad();");
  CWE190_Integer_Overflow__short_rand_add_63_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_64_bad();");
  CWE190_Integer_Overflow__int_rand_add_64_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_68_bad();");
  CWE190_Integer_Overflow__short_max_square_68_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_09_bad();");
  CWE190_Integer_Overflow__short_max_multiply_09_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_65_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_04_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_02_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_02_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_18_bad();");
  CWE190_Integer_Overflow__short_max_square_18_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_42_bad();");
  CWE190_Integer_Overflow__short_max_add_42_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_04_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_04_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_22_bad();");
  CWE190_Integer_Overflow__short_rand_add_22_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_12_bad();");
  CWE190_Integer_Overflow__short_max_square_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_52_bad();");
  CWE190_Integer_Overflow__short_rand_add_52_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_44_bad();");
  CWE190_Integer_Overflow__int_rand_square_44_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_01_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_01_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_53_bad();");
  CWE190_Integer_Overflow__int_rand_add_53_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_03_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_31_bad();");
  CWE190_Integer_Overflow__short_max_square_31_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_32_bad();");
  CWE190_Integer_Overflow__int_rand_square_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_67_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_67_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_08_bad();");
  CWE190_Integer_Overflow__int_rand_square_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_66_bad();");
  CWE190_Integer_Overflow__short_rand_add_66_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_61_bad();");
  CWE190_Integer_Overflow__int_rand_add_61_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_61_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_65_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_65_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_08_bad();");
  CWE190_Integer_Overflow__short_rand_add_08_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_41_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_41_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_61_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_32_bad();");
  CWE190_Integer_Overflow__short_max_multiply_32_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_07_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_67_bad();");
  CWE190_Integer_Overflow__short_max_add_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_09_bad();");
  CWE190_Integer_Overflow__short_max_square_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_11_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_11_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_06_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_06_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_67_bad();");
  CWE190_Integer_Overflow__int_rand_add_67_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_01_bad();");
  CWE190_Integer_Overflow__short_rand_add_01_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_66_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_66_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_04_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_04_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_10_bad();");
  CWE190_Integer_Overflow__int_rand_square_10_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_17_bad();");
  CWE190_Integer_Overflow__int_rand_square_17_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_15_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_54_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_54_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_square_03_bad();");
  CWE190_Integer_Overflow__int_rand_square_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_64_bad();");
  CWE190_Integer_Overflow__short_rand_add_64_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_06_bad();");
  CWE190_Integer_Overflow__short_max_add_06_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_61_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_07_bad();");
  CWE190_Integer_Overflow__short_rand_add_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_61_bad();");
  CWE190_Integer_Overflow__short_max_square_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_21_bad();");
  CWE190_Integer_Overflow__short_rand_add_21_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_15_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_15_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_54_bad();");
  CWE190_Integer_Overflow__short_max_multiply_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_multiply_12_bad();");
  CWE190_Integer_Overflow__short_rand_multiply_12_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_add_03_bad();");
  CWE190_Integer_Overflow__short_max_add_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_32_bad();");
  CWE190_Integer_Overflow__short_max_square_32_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_add_03_bad();");
  CWE190_Integer_Overflow__int_rand_add_03_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_multiply_09_bad();");
  CWE190_Integer_Overflow__short_fscanf_multiply_09_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_square_64_bad();");
  CWE190_Integer_Overflow__short_fscanf_square_64_bad();
  printLine("Calling CWE190_Integer_Overflow__short_fscanf_add_18_bad();");
  CWE190_Integer_Overflow__short_fscanf_add_18_bad();
  printLine("Calling CWE190_Integer_Overflow__int_rand_multiply_54_bad();");
  CWE190_Integer_Overflow__int_rand_multiply_54_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_07_bad();");
  CWE190_Integer_Overflow__short_max_square_07_bad();
  printLine("Calling CWE190_Integer_Overflow__short_rand_add_61_bad();");
  CWE190_Integer_Overflow__short_rand_add_61_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_multiply_31_bad();");
  CWE190_Integer_Overflow__short_max_multiply_31_bad();
  printLine("Calling CWE190_Integer_Overflow__short_max_square_54_bad();");
  CWE190_Integer_Overflow__short_max_square_54_bad();
  return 0;
}


void CWE190_Integer_Overflow__short_max_square_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_53d_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < (int)local_1c)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < (int)local_1c)) {
    if ((int)local_1c < 0x3fffffff) {
      printIntLine((ulong)(local_1c * 2));
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
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_square_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_52c_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_52c_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_52c_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_09_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00440358,&local_c);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < local_c)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00440358,&local_c);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (0 < local_c) {
      if (local_c < 0x3fff) {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00440358,&local_c);
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < local_c)) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004403ae,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_fscanf_multiply_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004403ae,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_64b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(1);
  }
  return;
}


void goodB2G1(void)

{
  ushort local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = 0x7fff;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (((short)local_a < -0xb5) || (0xb5 < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405884) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_square_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_square_22_goodB2G1Global == 0) {
    if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * iParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_square_22_goodB2G2Global != 0) {
    if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * iParm1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_square_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_15_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405bb4) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405bf6) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_add_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_rand_add_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_rand_add_68_goodG2BData + 1)
              );
  return;
}


void CWE190_Integer_Overflow__short_rand_add_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_rand_add_68_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_rand_add_68_goodB2GData +
                                          1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_34_bad(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00440538,&local_e);
  local_a = local_e;
  local_c = local_e * local_e;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00440538,&local_e);
  local_a = local_e;
  if ((local_e < -0xb5) || (0xb5 < local_e)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_e * local_e;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_add_61b_badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_add_61b_goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_add_61b_goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_15_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_15_good(void)

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


void CWE190_Integer_Overflow__short_max_square_08_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ushort local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (((short)local_a < -0xb5) || (0xb5 < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
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
  ushort local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (((short)local_a < -0xb5) || (0xb5 < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_16_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440638,&local_c);
  local_a = local_c + 1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440638,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_68_bad(void)

{
  CWE190_Integer_Overflow__short_max_multiply_68_badData = 0x7fff;
  CWE190_Integer_Overflow__short_max_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_multiply_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_max_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_multiply_68_goodB2GData = 0x7fff;
  CWE190_Integer_Overflow__short_max_multiply_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53d_badSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53d_goodG2BSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53d_goodB2GSink(int iParm1)

{
  if (0 < iParm1) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


ulong badSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void CWE190_Integer_Overflow__short_rand_multiply_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


ulong goodB2GSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_add_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_1c + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_1c + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_22_badGlobal = 1;
  CWE190_Integer_Overflow__int_rand_square_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int_rand_square_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int_rand_square_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_square_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int_rand_square_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_add_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x7fff;
  local_14 = 0x7fff;
  CWE190_Integer_Overflow__short_max_add_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_max_add_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x7fff;
  local_14 = 0x7fff;
  CWE190_Integer_Overflow__short_max_add_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__short_max_add_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53_bad(void)

{
  CWE190_Integer_Overflow__short_max_multiply_53b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_multiply_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_multiply_53b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_68_bad(void)

{
  CWE190_Integer_Overflow__short_max_square_68_badData = 0x7fff;
  CWE190_Integer_Overflow__short_max_square_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_square_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_max_square_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_square_68_goodB2GData = 0x7fff;
  CWE190_Integer_Overflow__short_max_square_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_max_square_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_51_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044082e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_51b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_add_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044082e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_51b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_add_68_badData = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_add_68_badData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_add_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_rand_add_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_add_68_goodB2GData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_add_68_goodB2GData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_14_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00440838,&local_c);
  }
  if (globalFive == 5) {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00440838,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00440838,&local_c);
  }
  if (globalFive == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < (int)local_1c)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < (int)local_1c)) {
    if ((int)local_1c < 0x3fffffff) {
      printIntLine((ulong)(local_1c * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54d_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_54e_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54d_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54d_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_12_bad(void)

{
  int iVar1;
  ushort local_a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((short)local_a < -0xb5) || (0xb5 < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
    }
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407b9f) */
/* WARNING: Removing unreachable block (ram,0x00407bde) */

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
    printIntLine(4);
  }
  else {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_41_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_15_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440950,&local_c);
  local_a = local_c * local_c;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440950,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440950,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_square_67_bad(void)

{
  CWE190_Integer_Overflow__short_max_square_67b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_square_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_square_67b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_square_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_add_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_45_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440990,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_45_badData = local_a;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_add_45_goodG2BData +
                                        1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_add_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_fscanf_add_45_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_add_45_goodB2GData
                                          + 1));
  }
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440990,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_45_goodB2GData = local_a;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_53c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(local_1c * local_1c));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_53b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_add_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_53b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_06_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440a5c,&local_c);
  local_a = local_c + 1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040888b) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440a5c,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440a5c,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040894a) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440ab0,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__short_fscanf_square_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  return;
}


ulong goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440ab0,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_34_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_66b_badSink(long lParm1)

{
  if (0 < *(short *)(lParm1 + 4)) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_66b_goodG2BSink(long lParm1)

{
  if (0 < *(short *)(lParm1 + 4)) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_66b_goodB2GSink(long lParm1)

{
  short sVar1;
  
  sVar1 = *(short *)(lParm1 + 4);
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


undefined8 badSource(void)

{
  return 0x7fff;
}


void CWE190_Integer_Overflow__short_max_square_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x7fff;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_54_bad(void)

{
  CWE190_Integer_Overflow__short_max_square_54b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_square_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_square_54b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_square_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_52_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_52b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_multiply_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_52b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_54c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_54c_goodB2GSink((ulong)uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_max_multiply_32_bad(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0x7fff;
  local_1c = 0x7fff;
  local_1e = 0xfffe;
  printIntLine(0xfffffffe);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 2;
  local_1c = 2;
  local_1e = 4;
  printIntLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004091c8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = local_20;
  local_18 = local_20;
  local_20[0] = 0;
  local_1a = 0x7fff;
  local_1c = 0x7fff;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_65b_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_05_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00440c08,&local_c);
  }
  if (staticTrue != 0) {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00440c08,&local_c);
  }
  if (staticFalse == 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00440c08,&local_c);
  }
  if (staticTrue != 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * iParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(iParm1 * iParm1));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_41_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440ce8,&local_a);
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00440ce8,&local_a);
  goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE190_Integer_Overflow__int_rand_square_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(uint)(iVar1 * iVar1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(iVar1 * iVar1));
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (((iVar1 == -0x80000000) || (iVar1 < -0xb503)) || (0xb503 < iVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iVar1 * iVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_01_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440d60,&local_c);
  local_a = local_c + 1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00440d60,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_rand_multiply_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_64b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_53c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_53c_goodB2GSink((ulong)uParm1);
  return;
}


ulong CWE190_Integer_Overflow__short_fscanf_multiply_61b_badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440dee,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE190_Integer_Overflow__short_fscanf_multiply_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__short_fscanf_multiply_61b_goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00440dee,local_c);
  return (ulong)local_c[0];
}


void badSink(short sParm1)

{
  if ((badStatic != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_21_bad(void)

{
  badStatic = 1;
  badSink(0x7fff);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (0 < sParm1) {
      if (sParm1 < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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
  goodB2G1Sink(0x7fff);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if ((goodB2G2Static != 0) && (0 < sParm1)) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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
  goodB2G2Sink(0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  if ((goodG2BStatic != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_03_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a458) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a49e) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x7fff;
  local_14 = 0x7fff;
  CWE190_Integer_Overflow__short_max_square_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_max_square_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x7fff;
  local_14 = 0x7fff;
  CWE190_Integer_Overflow__short_max_square_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__short_max_square_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_18_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a7bd) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_rand_add_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_64b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_1c * local_1c));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_max_square_32_bad(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0x7fff;
  local_1c = 0x7fff;
  local_1e = 1;
  printIntLine(1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 2;
  local_1c = 2;
  local_1e = 4;
  printIntLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ad0d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = local_20;
  local_18 = local_20;
  local_20[0] = 0;
  local_1a = 0x7fff;
  local_1c = 0x7fff;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_square_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_63b_badSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_63b_goodG2BSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_63b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
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


void CWE190_Integer_Overflow__short_fscanf_add_08_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440fb0,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440fb0,&local_c);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00440fb0,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_08_good(void)

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


void CWE190_Integer_Overflow__int_rand_multiply_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < (int)local_1c)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < (int)local_1c)) {
    if ((int)local_1c < 0x3fffffff) {
      printIntLine((ulong)(local_1c * 2));
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
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_15_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b369) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b3b1) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_03_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_multiply_61b_badSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_multiply_61b_goodG2BSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_multiply_61b_goodB2GSource(0);
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_52_bad(void)

{
  CWE190_Integer_Overflow__short_max_square_52b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_square_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_square_52b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_square_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_67b_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


ulong CWE190_Integer_Overflow__int_rand_square_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


undefined8 CWE190_Integer_Overflow__int_rand_square_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__int_rand_square_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x7fff,uParm2,0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x7fff,uParm2,0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_add_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * *(int *)(lParm1 + 8)));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * *(int *)(lParm1 + 8)));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_66b_goodB2GSink(long lParm1)

{
  int iVar1;
  
  iVar1 = *(int *)(lParm1 + 8);
  if (((iVar1 == -0x80000000) || (iVar1 < -0xb503)) || (0xb503 < iVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iVar1 * iVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54e_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54e_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_1c + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_07_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441268,&local_c);
  }
  if ((staticFive == 5) && (0 < local_c)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441268,&local_c);
  }
  if (staticFive == 5) {
    if (0 < local_c) {
      if (local_c < 0x3fff) {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441268,&local_c);
  }
  if ((staticFive == 5) && (0 < local_c)) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_31_bad(void)

{
  printIntLine(1);
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c2d1) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_square_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((globalFive == 5) && (0 < (int)local_1c)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((globalFive == 5) && (0 < (int)local_1c)) {
    if ((int)local_1c < 0x3fffffff) {
      printIntLine((ulong)(local_1c * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_63b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_rand_multiply_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_63b_goodB2GSink(local_1a);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int_rand_multiply_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  if (0 < (int)local_30) {
    local_34 = local_30 * 2;
    printIntLine((ulong)local_34);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 2;
  local_20 = 2;
  local_24 = 4;
  printIntLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  if (0 < (int)local_30) {
    if ((int)local_30 < 0x3fffffff) {
      local_34 = local_30 * 2;
      printIntLine((ulong)local_34);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_21_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441380,&local_a);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441380,&local_a);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441380,&local_a);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1a = 2;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  else {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_rand_multiply_45_badData) {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_rand_multiply_45_badData *
                                          2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_multiply_45_badData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_multiply_45_badData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf)
    ;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_rand_multiply_45_goodG2BData) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_rand_multiply_45_goodG2BData
                                          * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_multiply_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_rand_multiply_45_goodB2GData) {
    if (CWE190_Integer_Overflow__short_rand_multiply_45_goodB2GData < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE190_Integer_Overflow__short_rand_multiply_45_goodB2GData
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
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_multiply_45_goodB2GData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_multiply_45_goodB2GData =
         (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_11_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ushort local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a != 0) {
      if (local_a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_a * 2));
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
  ushort local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    if (local_a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_a * 2));
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
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_02_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d165) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d1ab) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_51_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_51b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_add_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_51b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 * *psParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 * *psParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_63b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54e_badSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54e_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54e_goodB2GSink(int iParm1)

{
  if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE190_Integer_Overflow__int_rand_square_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 2;
  local_20 = 2;
  CWE190_Integer_Overflow__int_rand_square_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE190_Integer_Overflow__int_rand_square_66b_goodB2GSink(local_38);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_22_badSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_max_square_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_max_square_22_goodB2G1Global == 0) {
    if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_22_goodB2G2Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_max_square_22_goodB2G2Global != 0) {
    if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_22_goodG2BSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_max_square_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_max_add_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_max_add_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_max_add_61b_goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_02_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_01_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040dba3) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53d_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53d_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53d_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004416a6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_fscanf_square_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004416a6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_63b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004416aa,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_54b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_add_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004416aa,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_54b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(0xffff8000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040de53) */

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


/* WARNING: Removing unreachable block (ram,0x0040dea9) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_multiply_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFalse == 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalTrue != 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2GSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_22_bad(void)

{
  CWE190_Integer_Overflow__short_max_square_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_max_square_22_badSink(0x7fff);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__short_max_square_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_max_square_22_goodB2G1Sink(0x7fff);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__short_max_square_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_max_square_22_goodB2G2Sink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_square_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_max_square_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_max_square_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((globalTrue != 0) && (0 < (int)local_1c)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((globalTrue != 0) && (0 < (int)local_1c)) {
    if ((int)local_1c < 0x3fffffff) {
      printIntLine((ulong)(local_1c * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e9ad) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ea9a) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_22_badSink(int iParm1)

{
  if ((CWE190_Integer_Overflow__int_rand_multiply_22_badGlobal != 0) && (0 < iParm1)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_multiply_22_goodB2G1Global == 0) {
    if (0 < iParm1) {
      if (iParm1 < 0x3fffffff) {
        printIntLine((ulong)(uint)(iParm1 * 2));
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


void CWE190_Integer_Overflow__int_rand_multiply_22_goodB2G2Sink(int iParm1)

{
  if ((CWE190_Integer_Overflow__int_rand_multiply_22_goodB2G2Global != 0) && (0 < iParm1)) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_22_goodG2BSink(int iParm1)

{
  if ((CWE190_Integer_Overflow__int_rand_multiply_22_goodG2BGlobal != 0) && (0 < iParm1)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_01_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
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


void CWE190_Integer_Overflow__short_max_multiply_08_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ushort local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_a != 0) {
      if (local_a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_a * 2));
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
  ushort local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    if (local_a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_a * 2));
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
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


ulong CWE190_Integer_Overflow__short_rand_multiply_61b_badSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


undefined8 CWE190_Integer_Overflow__short_rand_multiply_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__short_rand_multiply_61b_goodB2GSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void CWE190_Integer_Overflow__short_max_square_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f39d) */

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


/* WARNING: Removing unreachable block (ram,0x0040f405) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE190_Integer_Overflow__short_rand_multiply_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_rand_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE190_Integer_Overflow__short_rand_multiply_66b_goodB2GSink(local_28);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_65_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__short_fscanf_add_65b_badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004419fe,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_fscanf_add_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__short_fscanf_add_65b_goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004419fe,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_22_badGlobal = 1;
  CWE190_Integer_Overflow__int_rand_multiply_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int_rand_multiply_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int_rand_multiply_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_multiply_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int_rand_multiply_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_17_bad(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441a08,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_12 = local_14 * local_14;
    printIntLine((ulong)(uint)(int)local_12);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00441a08,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if ((local_14 < -0xb5) || (0xb5 < local_14)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_12 = local_14 * local_14;
      printIntLine((ulong)(uint)(int)local_12);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 * local_12));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_44_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00441a48,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00441a48,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_rand_multiply_61b_badSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_rand_multiply_61b_goodG2BSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_rand_multiply_61b_goodB2GSource(0);
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_63b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_square_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54d_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_54e_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54d_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54d_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_54e_goodB2GSink((ulong)uParm1);
  return;
}


ulong CWE190_Integer_Overflow__short_fscanf_square_61b_badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00441af6,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE190_Integer_Overflow__short_fscanf_square_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__short_fscanf_square_61b_goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00441af6,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__short_rand_multiply_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((staticFive == 5) && (0 < (short)local_1a)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((staticFive == 5) && (0 < (short)local_1a)) {
    if ((short)local_1a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_21_bad(void)

{
  badStatic = 1;
  badSink(0x7fff);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
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
  goodB2G1Sink(0x7fff);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_max_square_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00441bd8,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__short_fscanf_multiply_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


ulong goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_00441bd8,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_18_bad(void)

{
  printIntLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004106e1) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_square_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_09_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00441c50,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00441c50,&local_c);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00441c50,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54_bad(void)

{
  CWE190_Integer_Overflow__short_max_multiply_54b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_multiply_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_multiply_54b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_68_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441cde,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_68_badData = local_a;
  CWE190_Integer_Overflow__short_fscanf_add_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_add_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_fscanf_add_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441cde,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_68_goodB2GData = local_a;
  CWE190_Integer_Overflow__short_fscanf_add_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_square_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_square_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_square_61b_goodB2GSource(0);
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_03_bad(void)

{
  printIntLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410caa) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410cfc) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_square_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_65b_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_65b_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_65b_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_05_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00441d90,&local_c);
  }
  if ((staticTrue != 0) && (0 < local_c)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00441d90,&local_c);
  }
  if (staticFalse == 0) {
    if (0 < local_c) {
      if (local_c < 0x3fff) {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00441d90,&local_c);
  }
  if ((staticTrue != 0) && (0 < local_c)) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if ((badStatic != 0) && (0 < iParm1)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (0 < iParm1) {
      if (iParm1 < 0x3fffffff) {
        printIntLine((ulong)(uint)(iParm1 * 2));
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
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if ((goodB2G2Static != 0) && (0 < iParm1)) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if ((goodG2BStatic != 0) && (0 < iParm1)) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_multiply_65b_badSink(0x7fff,uParm2,0x7fff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_multiply_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_multiply_65b_goodB2GSink(0x7fff,uParm2,0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_41_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441e70,&local_a);
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441e70,&local_a);
  goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_54b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_add_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_54b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_07_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441eb0,&local_c);
  }
  if (staticFive == 5) {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441eb0,&local_c);
  }
  if (staticFive == 5) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00441eb0,&local_c);
  }
  if (staticFive == 5) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441f3e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_53b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_add_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00441f3e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_53b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_53c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_34_bad(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00441f48,&local_e);
  local_a = local_e;
  if (0 < local_e) {
    local_c = local_e * 2;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00441f48,&local_e);
  local_a = local_e;
  if (0 < local_e) {
    if (local_e < 0x3fff) {
      local_c = local_e * 2;
      printIntLine((ulong)(uint)(int)local_c);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int_rand_square_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  local_34 = local_30 * local_30;
  printIntLine((ulong)local_34);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 2;
  local_20 = 2;
  local_24 = 4;
  printIntLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  if (((local_30 == 0x80000000) || ((int)local_30 < -0xb503)) || (0xb503 < (int)local_30)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_34 = local_30 * local_30;
    printIntLine((ulong)local_34);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_66b_badSink(long lParm1)

{
  if (0 < *(short *)(lParm1 + 4)) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_66b_goodG2BSink(long lParm1)

{
  if (0 < *(short *)(lParm1 + 4)) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_66b_goodB2GSink(long lParm1)

{
  short sVar1;
  
  sVar1 = *(short *)(lParm1 + 4);
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


undefined8 badSource(void)

{
  return 0x7fff;
}


void CWE190_Integer_Overflow__short_max_add_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x7fff;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_square_11_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  ushort local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (((short)local_a < -0xb5) || (0xb5 < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
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
  ushort local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (((short)local_a < -0xb5) || (0xb5 < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_square_02_bad(void)

{
  printIntLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004123a4) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004123f6) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_square_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    printIntLine((ulong)(local_24 + 1));
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (local_24 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_24 + 1));
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(local_14 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 2;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < (int)local_1c) {
      printIntLine((ulong)(local_1c * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
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
    printIntLine(4);
  }
  else {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_67b_badSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_67b_goodB2GSink(int iParm1)

{
  if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(1);
  }
  return;
}


void goodB2G1(void)

{
  ushort local_a;
  
  local_a = 0;
  if (globalTrue != 0) {
    local_a = 0x7fff;
  }
  if (globalFalse == 0) {
    if (((short)local_a < -0xb5) || (0xb5 < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412c8c) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_53c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_06_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412eb0) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412fa5) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413195) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004132a8) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_square_54c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_54c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_54c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


ulong CWE190_Integer_Overflow__int_rand_add_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


undefined8 CWE190_Integer_Overflow__int_rand_add_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__int_rand_add_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE190_Integer_Overflow__short_max_add_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(0xffff8000);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticTrue != 0) {
    local_a = 0x7fff;
  }
  if (staticFalse == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413538) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_square_01_bad(void)

{
  printIntLine(1);
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004136a0) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_square_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_68b_badSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_max_multiply_68_badData) {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_multiply_68_badData *
                                          2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_68b_goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_max_multiply_68_goodG2BData) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_max_multiply_68_goodG2BData
                                          * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_68b_goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_max_multiply_68_goodB2GData) {
    if (CWE190_Integer_Overflow__short_max_multiply_68_goodB2GData < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE190_Integer_Overflow__short_max_multiply_68_goodB2GData
                                            * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_41_bad(void)

{
  badSink(0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_add_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004423c6,&local_a);
  local_14 = local_a;
  CWE190_Integer_Overflow__short_fscanf_square_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_fscanf_square_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004423c6,&local_a);
  local_14 = local_a;
  CWE190_Integer_Overflow__short_fscanf_square_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_03_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004423d0,&local_c);
  local_a = local_c * local_c;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004423d0,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004423d0,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_rand_add_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_63b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_63_good(void)

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


void CWE190_Integer_Overflow__short_max_add_08_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE190_Integer_Overflow__short_rand_add_61b_badSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


undefined8 CWE190_Integer_Overflow__short_rand_add_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__short_rand_add_61b_goodB2GSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_44_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00442460,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00442460,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x7fff,uParm2,0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x7fff,uParm2,0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xfffffffe);
  }
  return;
}


void goodB2G1(void)

{
  ushort local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = 0x7fff;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a != 0) {
      if (local_a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_a * 2));
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


/* WARNING: Removing unreachable block (ram,0x00414234) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_18_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442528,&local_c);
  local_a = local_c * local_c;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442528,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00442566,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_54b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00442566,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_54b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_02_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_square_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_51b_badSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_51b_goodB2GSink(int iParm1)

{
  if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(0xfffffffe);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00414958) */

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


/* WARNING: Removing unreachable block (ram,0x004149b4) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_12_bad(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00442630,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((local_e < -0xb5) || (0xb5 < local_e)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_e * local_e;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    local_a = local_e * local_e;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00442630,&local_e);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00442630,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if ((local_e < -0xb5) || (0xb5 < local_e)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_e * local_e;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    if ((local_e < -0xb5) || (0xb5 < local_e)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_e * local_e;
      printIntLine((ulong)(uint)(int)local_a);
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
    printIntLine(4);
  }
  else {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((globalTrue != 0) && (0 < (short)local_1a)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFalse == 0) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((globalTrue != 0) && (0 < (short)local_1a)) {
    if ((short)local_1a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_65b_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_65b_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_65b_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_rand_add_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_rand_add_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_rand_add_61b_goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54d_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_54e_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54d_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_54e_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54d_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_01_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 * *psParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 * *psParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_63b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53d_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53d_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53d_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_15_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442810,&local_c);
  local_a = local_c + 1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442810,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442810,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFive == 5) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_square_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


ulong badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_004428a0,local_c);
  return (ulong)local_c[0];
}


void CWE190_Integer_Overflow__short_fscanf_add_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


ulong goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_004428a0,local_c);
  return (ulong)local_c[0];
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_add_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_11_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004428e0,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004428e0,&local_c);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004428e0,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_02_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442938,&local_c);
  local_a = local_c * local_c;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442938,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00442938,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_31_bad(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00442978,&local_10);
  local_a = local_10;
  local_c = local_10;
  local_e = local_10 * local_10;
  printIntLine((ulong)(uint)(int)local_e);
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00442978,&local_10);
  local_a = local_10;
  local_c = local_10;
  if ((local_10 < -0xb5) || (0xb5 < local_10)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_e = local_10 * local_10;
    printIntLine((ulong)(uint)(int)local_e);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_65_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__short_fscanf_multiply_65b_badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004429b6,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__short_fscanf_multiply_65b_goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004429b6,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_54_bad(void)

{
  CWE190_Integer_Overflow__short_max_add_54b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_add_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_add_54b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_add_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_1c * local_1c));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_22_badSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_add_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_add_22_goodB2G1Global == 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_22_goodB2G2Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_add_22_goodB2G2Global != 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_22_goodG2BSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_add_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_22_badSink(short sParm1)

{
  if ((CWE190_Integer_Overflow__short_max_multiply_22_badGlobal != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_max_multiply_22_goodB2G1Global == 0) {
    if (0 < sParm1) {
      if (sParm1 < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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


void CWE190_Integer_Overflow__short_max_multiply_22_goodB2G2Sink(short sParm1)

{
  if ((CWE190_Integer_Overflow__short_max_multiply_22_goodB2G2Global != 0) && (0 < sParm1)) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_22_goodG2BSink(short sParm1)

{
  if ((CWE190_Integer_Overflow__short_max_multiply_22_goodG2BGlobal != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_10_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00442ab0,&local_c);
  }
  if (globalTrue != 0) {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00442ab0,&local_c);
  }
  if (globalFalse == 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00442ab0,&local_c);
  }
  if (globalTrue != 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_square_45_badData *
                            CWE190_Integer_Overflow__int_rand_square_45_badData));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_square_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_square_45_badData = rand();
    CWE190_Integer_Overflow__int_rand_square_45_badData =
         CWE190_Integer_Overflow__int_rand_square_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_square_45_goodG2BData *
                            CWE190_Integer_Overflow__int_rand_square_45_goodG2BData));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_square_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (((CWE190_Integer_Overflow__int_rand_square_45_goodB2GData == -0x80000000) ||
      (CWE190_Integer_Overflow__int_rand_square_45_goodB2GData < -0xb503)) ||
     (0xb503 < CWE190_Integer_Overflow__int_rand_square_45_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_square_45_goodB2GData *
                              CWE190_Integer_Overflow__int_rand_square_45_goodB2GData));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_square_45_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_square_45_goodB2GData = rand();
    CWE190_Integer_Overflow__int_rand_square_45_goodB2GData =
         CWE190_Integer_Overflow__int_rand_square_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_square_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_max_square_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_square_63b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_max_square_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416dd0) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416ee6) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_63b_badSink(int *piParm1)

{
  if (0 < *piParm1) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_63b_goodG2BSink(int *piParm1)

{
  if (0 < *piParm1) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_63b_goodB2GSink(int *piParm1)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (0 < iVar1) {
    if (iVar1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_65b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void badSink(int iParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_21_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(int iParm1)

{
  if (goodB2G1Static == 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(int iParm1)

{
  if (goodB2G2Static != 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_03_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_68b_badSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_fscanf_multiply_68_badData) {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_multiply_68_badData
                                          * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_68b_goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_fscanf_multiply_68_goodG2BData) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_fscanf_multiply_68_goodG2BData
                                          * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_68b_goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_fscanf_multiply_68_goodB2GData) {
    if (CWE190_Integer_Overflow__short_fscanf_multiply_68_goodB2GData < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE190_Integer_Overflow__short_fscanf_multiply_68_goodB2GData
                                            * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_41_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00442cc8,&local_a);
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00442cc8,&local_a);
  goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53d_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_52_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_52b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_add_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_52b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_34_bad(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00442d78,&local_e);
  local_a = local_e;
  local_c = local_e + 1;
  printIntLine((ulong)(uint)(int)local_c);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  __isoc99_fscanf(stdin,&DAT_00442d78,&local_e);
  local_a = local_e;
  if (local_e == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_c = local_e + 1;
    printIntLine((ulong)(uint)(int)local_c);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_square_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_square_68_badData = rand();
    CWE190_Integer_Overflow__int_rand_square_68_badData =
         CWE190_Integer_Overflow__int_rand_square_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_square_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int_rand_square_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_square_68_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_square_68_goodB2GData = rand();
    CWE190_Integer_Overflow__int_rand_square_68_goodB2GData =
         CWE190_Integer_Overflow__int_rand_square_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_rand_multiply_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_63b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54e_badSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54e_goodG2BSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54e_goodB2GSink(int iParm1)

{
  if (0 < iParm1) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(uint)(*piParm1 * *piParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(uint)(*piParm1 * *piParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_64b_goodB2GSink(int *piParm1)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (((iVar1 == -0x80000000) || (iVar1 < -0xb503)) || (0xb503 < iVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iVar1 * iVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 2;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  else {
    printIntLine((ulong)(local_1c + 1));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  else {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_52c_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_52c_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_52c_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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


void CWE190_Integer_Overflow__short_fscanf_square_08_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00442ed0,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00442ed0,&local_c);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00442ed0,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_add_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_add_65b_badSink(0x7fff,uParm2,0x7fff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_add_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_add_65b_goodB2GSink(0x7fff,uParm2,0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_add_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_68_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00442f26,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_68_badData = local_a;
  CWE190_Integer_Overflow__short_fscanf_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_fscanf_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00442f26,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_68_goodB2GData = local_a;
  CWE190_Integer_Overflow__short_fscanf_multiply_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_17_bad(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 0x7fff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 * local_12));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  ushort local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 0x7fff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (((short)local_12 < -0xb5) || (0xb5 < local_12)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_12 * local_12));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 * local_12));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_add_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0xfffffffe);
  }
  return;
}


void goodB2G1(void)

{
  ushort local_a;
  
  local_a = 0;
  if (globalTrue != 0) {
    local_a = 0x7fff;
  }
  if (globalFalse == 0) {
    if (local_a != 0) {
      if (local_a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_a * 2));
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


/* WARNING: Removing unreachable block (ram,0x00418908) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  badSink(0x7fff,uParm2,0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  goodB2GSink(0x7fff,uParm2,0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_square_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_54b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_multiply_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_54b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443026,&local_a);
  local_14 = local_a;
  CWE190_Integer_Overflow__short_fscanf_add_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_fscanf_add_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443026,&local_a);
  local_14 = local_a;
  CWE190_Integer_Overflow__short_fscanf_add_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044302a,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_53b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044302a,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_53b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_64b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_rand_square_64b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_64b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 CWE190_Integer_Overflow__short_max_square_61b_badSource(void)

{
  return 0x7fff;
}


undefined8 CWE190_Integer_Overflow__short_max_square_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__short_max_square_61b_goodB2GSource(void)

{
  return 0x7fff;
}


void CWE190_Integer_Overflow__short_max_add_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE190_Integer_Overflow__int_rand_add_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  printIntLine((ulong)(iVar1 + 1));
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (iVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined8 badSource(void)

{
  return 0x7fff;
}


void CWE190_Integer_Overflow__short_max_multiply_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


undefined8 goodB2GSource(void)

{
  return 0x7fff;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_65b_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_65b_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_65b_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void badSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (0 < iParm1) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_15_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_54d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_04_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443188,&local_c);
  if (0 < local_c) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419a98) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443188,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443188,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419b64) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_68_bad(void)

{
  CWE190_Integer_Overflow__short_max_add_68_badData = 0x7fff;
  CWE190_Integer_Overflow__short_max_add_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_add_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_max_add_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_add_68_goodB2GData = 0x7fff;
  CWE190_Integer_Overflow__short_max_add_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_max_add_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_max_square_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_max_square_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_max_square_61b_goodB2GSource(0);
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53d_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53d_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


ulong badSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void CWE190_Integer_Overflow__short_rand_add_42_bad(void)

{
  short sVar1;
  
  sVar1 = badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


ulong goodB2GSource(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_04_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a223) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a31a) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE190_Integer_Overflow__int_rand_multiply_61b_badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


undefined8 CWE190_Integer_Overflow__int_rand_multiply_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__int_rand_multiply_61b_goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE190_Integer_Overflow__short_max_multiply_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(0xfffffffe);
  }
  return;
}


void goodB2G1(void)

{
  ushort local_a;
  
  local_a = 0;
  if (staticTrue != 0) {
    local_a = 0x7fff;
  }
  if (staticFalse == 0) {
    if (local_a != 0) {
      if (local_a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_a * 2));
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


/* WARNING: Removing unreachable block (ram,0x0041a574) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_41_bad(void)

{
  badSink(0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_65b_badSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_rand_multiply_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_65b_goodB2GSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a91c) */

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


/* WARNING: Removing unreachable block (ram,0x0041a984) */

void goodB2G2(void)

{
  if (staticFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_add_53_bad(void)

{
  CWE190_Integer_Overflow__short_max_add_53b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_add_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_add_53b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_add_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_63b_badSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_63b_goodG2BSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_63b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_65b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_65b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_65b_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_34_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041acf9) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_66b_badSink(long lParm1)

{
  if (0 < *(short *)(lParm1 + 4)) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_66b_goodG2BSink(long lParm1)

{
  if (0 < *(short *)(lParm1 + 4)) {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_66b_goodB2GSink(long lParm1)

{
  short sVar1;
  
  sVar1 = *(short *)(lParm1 + 4);
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
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


void CWE190_Integer_Overflow__int_rand_add_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_1c + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_52_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044351e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_52b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044351e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_52b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFalse == 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticTrue != 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_68b_badSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_rand_multiply_68_badData) {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_rand_multiply_68_badData *
                                          2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_68b_goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_rand_multiply_68_goodG2BData) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_rand_multiply_68_goodG2BData
                                          * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_68b_goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_rand_multiply_68_goodB2GData) {
    if (CWE190_Integer_Overflow__short_rand_multiply_68_goodB2GData < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE190_Integer_Overflow__short_rand_multiply_68_goodB2GData
                                            * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_41_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_51b_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_51b_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_51b_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_multiply_61b_badSource(0);
  if (0 < iVar1) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_multiply_61b_goodG2BSource(0);
  if (0 < iVar1) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_multiply_61b_goodB2GSource(0);
  if (0 < iVar1) {
    if (iVar1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_16_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443658,&local_c);
  if (0 < local_c) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443658,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_add_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_34_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((staticFive == 5) && (0 < (int)local_1c)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((staticFive == 5) && (0 < (int)local_1c)) {
    if ((int)local_1c < 0x3fffffff) {
      printIntLine((ulong)(local_1c * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticFive == 5) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_18_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_66b_goodB2GSink(long lParm1)

{
  if (*(short *)(lParm1 + 4) == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_65_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__short_fscanf_square_65b_badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004437fe,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_fscanf_square_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = CWE190_Integer_Overflow__short_fscanf_square_65b_goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_004437fe,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_54c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_54c_goodB2GSink((ulong)uParm1);
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54e_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54e_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54e_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x7fff;
  local_14 = 0x7fff;
  CWE190_Integer_Overflow__short_max_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_max_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0x7fff;
  local_14 = 0x7fff;
  CWE190_Integer_Overflow__short_max_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_52c_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_52c_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_52c_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_51_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004438ae,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_51b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004438ae,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_51b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_multiply_68_badData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_multiply_68_badData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf)
    ;
  }
  CWE190_Integer_Overflow__short_rand_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_multiply_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_rand_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_multiply_68_goodB2GData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_multiply_68_goodB2GData =
         (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_63b_badSink(int *piParm1)

{
  printIntLine((ulong)(uint)(*piParm1 * *piParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_63b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(uint)(*piParm1 * *piParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_63b_goodB2GSink(int *piParm1)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (((iVar1 == -0x80000000) || (iVar1 < -0xb503)) || (0xb503 < iVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iVar1 * iVar1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_multiply_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_max_multiply_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_multiply_64b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_64b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_67_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_add_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_square_68_badData *
                                        CWE190_Integer_Overflow__short_fscanf_square_68_badData));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_square_68_goodG2BData
                                        * 
                                        CWE190_Integer_Overflow__short_fscanf_square_68_goodG2BData)
              );
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_68b_goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__short_fscanf_square_68_goodB2GData < -0xb5) ||
     (0xb5 < CWE190_Integer_Overflow__short_fscanf_square_68_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_fscanf_square_68_goodB2GData
                                          * 
                                          CWE190_Integer_Overflow__short_fscanf_square_68_goodB2GData
                                          ));
  }
  return;
}


void badSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_fscanf_multiply_45_badData) {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_multiply_45_badData
                                          * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_45_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443960,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_45_badData = local_a;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_fscanf_multiply_45_goodG2BData) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_fscanf_multiply_45_goodG2BData
                                          * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_fscanf_multiply_45_goodB2GData) {
    if (CWE190_Integer_Overflow__short_fscanf_multiply_45_goodB2GData < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE190_Integer_Overflow__short_fscanf_multiply_45_goodB2GData
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
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443960,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_45_goodB2GData = local_a;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_52_bad(void)

{
  CWE190_Integer_Overflow__short_max_add_52b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_add_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_add_52b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_add_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54e_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE190_Integer_Overflow__short_rand_add_66b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_rand_add_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_28 [4];
  ushort local_24;
  ushort local_1a;
  
  local_1a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_24 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  local_1a = local_24;
  CWE190_Integer_Overflow__short_rand_add_66b_goodB2GSink(local_28);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_53b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_multiply_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_53b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_06_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004439dc,&local_c);
  if (0 < local_c) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041cf9c) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004439dc,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004439dc,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d06b) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_add_16_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041d164) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_add_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_63b_badSink(local_1c);
  return;
}


void goodG2B(void)

{
  undefined4 local_c;
  
  local_c = 2;
  CWE190_Integer_Overflow__int_rand_square_63b_goodG2BSink(&local_c);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c [3];
  
  local_1c[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_1c[0] = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_1c[0] = rand();
    local_1c[0] = local_1c[0] ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_63b_goodB2GSink(local_1c);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443a66,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_fscanf_add_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443a66,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_63b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_multiply_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_max_multiply_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_multiply_63b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_21_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_65b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_65b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_68_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443af6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_68_badData = local_a;
  CWE190_Integer_Overflow__short_fscanf_square_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_square_68_goodG2BData = 2;
  CWE190_Integer_Overflow__short_fscanf_square_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443af6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_68_goodB2GData = local_a;
  CWE190_Integer_Overflow__short_fscanf_square_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_fscanf_add_32_bad(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00443b00,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  local_1c = local_1a + 1;
  printIntLine((ulong)(uint)(int)local_1c);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 2;
  local_1c = 2;
  local_1e = 3;
  printIntLine(3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00443b00,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  if (local_1a == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_1a + 1;
    printIntLine((ulong)(uint)(int)local_1c);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_51_bad(void)

{
  CWE190_Integer_Overflow__short_max_add_51b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_add_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_add_51b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_add_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_64b_badSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_64b_goodG2BSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_64b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_53d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_53c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_67b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_04_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041dbd3) */
/* WARNING: Removing unreachable block (ram,0x0041dbe7) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041dc39) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041dc74) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_add_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_square_15_bad(void)

{
  printIntLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041dd70) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041ddc4) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_square_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_add_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_45_bad(void)

{
  CWE190_Integer_Overflow__short_max_add_45_badData = 0x7fff;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_add_45_goodG2BData + 1))
  ;
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_add_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_max_add_45_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_add_45_goodB2GData + 1
                                          ));
  }
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_add_45_goodB2GData = 0x7fff;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_max_add_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_06_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e017) */
/* WARNING: Removing unreachable block (ram,0x0041e02b) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e07f) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e0bb) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_add_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int_rand_add_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_04_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443cd8,&local_c);
  local_a = local_c + 1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e31a) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443cd8,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00443cd8,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041e3d6) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_31_bad(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443d30,&local_10);
  local_a = local_10;
  local_c = local_10;
  local_e = local_10 + 1;
  printIntLine((ulong)(uint)(int)local_e);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00443d30,&local_10);
  local_a = local_10;
  local_c = local_10;
  if (local_10 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_e = local_10 + 1;
    printIntLine((ulong)(uint)(int)local_e);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    printIntLine((ulong)(local_24 * local_24));
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (((local_24 == 0x80000000) || ((int)local_24 < -0xb503)) || (0xb503 < (int)local_24)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_24 * local_24));
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(local_14 * local_14));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2GSink((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_51b_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_51b_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_51b_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_16_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_68b_badSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_rand_add_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_68b_goodG2BSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_rand_add_68_goodG2BData + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int_rand_add_68_goodB2GData == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE190_Integer_Overflow__int_rand_add_68_goodB2GData + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_09_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00443f10,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00443f10,&local_c);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    __isoc99_fscanf(stdin,&DAT_00443f10,&local_c);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443f66,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_fscanf_square_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00443f66,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_64b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(1);
  }
  return;
}


void goodB2G1(void)

{
  ushort local_a;
  
  local_a = 0;
  if (staticTrue != 0) {
    local_a = 0x7fff;
  }
  if (staticFalse == 0) {
    if (((short)local_a < -0xb5) || (0xb5 < local_a)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041f396) */

void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_41_bad(void)

{
  badSink(0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void goodB2G(void)

{
  goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_square_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_add_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_64b_badSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_64b_goodG2BSink(int *piParm1)

{
  printIntLine((ulong)(*piParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_64b_goodB2GSink(int *piParm1)

{
  if (*piParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*piParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_51_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_51b_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_multiply_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_51b_goodB2GSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_51_good(void)

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


void CWE190_Integer_Overflow__short_rand_add_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_square_34_bad(void)

{
  printIntLine(1);
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041fbbb) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_square_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_52c_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_52c_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < (int)local_1c)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < (int)local_1c)) {
    if ((int)local_1c < 0x3fffffff) {
      printIntLine((ulong)(local_1c * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_52_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044413e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_52b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_square_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044413e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_52b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_add_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_add_68_badData = rand();
    CWE190_Integer_Overflow__int_rand_add_68_badData =
         CWE190_Integer_Overflow__int_rand_add_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_add_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int_rand_add_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_add_68_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_add_68_goodB2GData = rand();
    CWE190_Integer_Overflow__int_rand_add_68_goodB2GData =
         CWE190_Integer_Overflow__int_rand_add_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_51b_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_61_bad(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_square_61b_badSource(0);
  printIntLine((ulong)(uint)(iVar1 * iVar1));
  return;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_square_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(iVar1 * iVar1));
  return;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = CWE190_Integer_Overflow__int_rand_square_61b_goodB2GSource(0);
  if (((iVar1 == -0x80000000) || (iVar1 < -0xb503)) || (0xb503 < iVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iVar1 * iVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_22_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004441b6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_fscanf_add_22_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004441b6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_fscanf_add_22_goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004441b6,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_fscanf_add_22_goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_add_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_fscanf_add_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((staticTrue != 0) && (0 < (int)local_1c)) {
    printIntLine((ulong)(local_1c * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if (0 < (int)local_1c) {
      if ((int)local_1c < 0x3fffffff) {
        printIntLine((ulong)(local_1c * 2));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if ((staticTrue != 0) && (0 < (int)local_1c)) {
    if ((int)local_1c < 0x3fffffff) {
      printIntLine((ulong)(local_1c * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_c != 0)) {
    printIntLine((ulong)(uint)(local_c * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(0xfffffffe);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004206a8) */

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


/* WARNING: Removing unreachable block (ram,0x00420704) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_add_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_add_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_max_add_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_add_64b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_max_add_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54e_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54e_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54e_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * *(short *)(lParm1 + 4)));
  return;
}


void CWE190_Integer_Overflow__short_max_square_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * *(short *)(lParm1 + 4)));
  return;
}


void CWE190_Integer_Overflow__short_max_square_66b_goodB2GSink(long lParm1)

{
  short sVar1;
  
  sVar1 = *(short *)(lParm1 + 4);
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_52_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004442ce,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_52b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_add_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004442ce,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_52b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_07_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    printIntLine((ulong)(local_1c * local_1c));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFive == 5) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFive == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_square_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(1);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00420dbc) */

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


/* WARNING: Removing unreachable block (ram,0x00420e24) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_67b_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_67b_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_67b_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_54e_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_67_bad(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044446e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_67b_badSink((ulong)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_square_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044446e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_67b_goodB2GSink((ulong)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_17_bad(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 0x7fff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 0x7fff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_12 + 1));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_22_badSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_square_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_square_22_goodB2G1Global == 0) {
    if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_22_goodB2G2Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_square_22_goodB2G2Global != 0) {
    if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_22_goodG2BSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_square_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_66b_badSink(long lParm1)

{
  if (0 < *(int *)(lParm1 + 8)) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_66b_goodG2BSink(long lParm1)

{
  if (0 < *(int *)(lParm1 + 8)) {
    printIntLine((ulong)(uint)(*(int *)(lParm1 + 8) * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_66b_goodB2GSink(long lParm1)

{
  int iVar1;
  
  iVar1 = *(int *)(lParm1 + 8);
  if (0 < iVar1) {
    if (iVar1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_51_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444536,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_51b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_square_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444536,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_51b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((staticTrue != 0) && (0 < (short)local_1a)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (staticFalse == 0) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((staticTrue != 0) && (0 < (short)local_1a)) {
    if ((short)local_1a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((staticTrue != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFive == 5) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFive == 5) {
    if (local_1a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_1a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_rand_add_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2c = *local_28;
  local_2e = local_2c + 1;
  printIntLine((ulong)(uint)(int)local_2e);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 2;
  local_1c = 2;
  local_1e = 3;
  printIntLine(3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2c = *local_28;
  if (local_2c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_2e = local_2c + 1;
    printIntLine((ulong)(uint)(int)local_2e);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_13_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00444650,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00444650,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00444650,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_41_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink((ulong)uVar1);
  return;
}


void goodG2BSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BSink(2);
  return;
}


void goodB2GSink(int iParm1)

{
  if (0 < iParm1) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
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
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_04_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042255a) */
/* WARNING: Removing unreachable block (ram,0x00422575) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004225cd) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422607) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_64b_badSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_64b_goodG2BSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_64b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044476e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_fscanf_multiply_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044476e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_63b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_add_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_add_68_goodG2BData + 1))
  ;
  return;
}


void CWE190_Integer_Overflow__short_max_add_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_max_add_68_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_add_68_goodB2GData + 1
                                          ));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_67b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_02_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004447e8,&local_c);
  local_a = local_c + 1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004447e8,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004447e8,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_05_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00444828,&local_c);
  }
  if (staticTrue != 0) {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00444828,&local_c);
  }
  if (staticFalse == 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00444828,&local_c);
  }
  if (staticTrue != 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_06_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444884,&local_c);
  local_a = local_c * local_c;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422d66) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444884,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444884,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00422e4d) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_52b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_52c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_52b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_52b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_add_52c_goodB2GSink((ulong)uParm1);
  return;
}


undefined8 CWE190_Integer_Overflow__short_max_add_61b_badSource(void)

{
  return 0x7fff;
}


undefined8 CWE190_Integer_Overflow__short_max_add_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__short_max_add_61b_goodB2GSource(void)

{
  return 0x7fff;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_63b_badSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_63b_goodG2BSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_63b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_67_bad(void)

{
  CWE190_Integer_Overflow__short_max_multiply_67b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_multiply_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_multiply_67b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE190_Integer_Overflow__int_rand_multiply_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 2;
  local_20 = 2;
  CWE190_Integer_Overflow__int_rand_multiply_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE190_Integer_Overflow__int_rand_multiply_66b_goodB2GSink(local_38);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_21_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444910,&local_a);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444910,&local_a);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444910,&local_a);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_03_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444968,&local_c);
  local_a = local_c + 1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444968,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444968,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_04_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423654) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042373a) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_31_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423a2f) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00423b1f) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_add_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_18_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444a90,&local_c);
  local_a = local_c + 1;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444a90,&local_c);
  if (local_c == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_64b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_rand_multiply_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_64b_goodB2GSink(local_1a);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_square_45_badData *
                                        CWE190_Integer_Overflow__short_fscanf_square_45_badData));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_45_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444ad0,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_45_badData = local_a;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_square_45_goodG2BData
                                        * 
                                        CWE190_Integer_Overflow__short_fscanf_square_45_goodG2BData)
              );
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_square_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__short_fscanf_square_45_goodB2GData < -0xb5) ||
     (0xb5 < CWE190_Integer_Overflow__short_fscanf_square_45_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_fscanf_square_45_goodB2GData
                                          * 
                                          CWE190_Integer_Overflow__short_fscanf_square_45_goodB2GData
                                          ));
  }
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444ad0,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_45_goodB2GData = local_a;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (0 < (int)local_24) {
      printIntLine((ulong)(local_24 * 2));
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_24 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_24 = rand();
      local_24 = local_24 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (0 < (int)local_24) {
      if ((int)local_24 < 0x3fffffff) {
        printIntLine((ulong)(local_24 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_14 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 != 0) {
      printIntLine((ulong)(uint)(local_14 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_add_12_bad(void)

{
  int iVar1;
  short local_a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004241ec) */
/* WARNING: Removing unreachable block (ram,0x00424218) */

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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_square_04_bad(void)

{
  printIntLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424326) */
/* WARNING: Removing unreachable block (ram,0x00424348) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004243ac) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004243eb) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_square_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 * *psParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 * *psParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_64b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_51b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_51b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_51b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_12_bad(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00444c48,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_e == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_e + 1;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    local_a = local_e + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00444c48,&local_e);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00444c48,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_e == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_c = local_e + 1;
      printIntLine((ulong)(uint)(int)local_c);
    }
  }
  else {
    if (local_e == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_e + 1;
      printIntLine((ulong)(uint)(int)local_a);
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
    printIntLine(3);
  }
  else {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_66_bad(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444c86,&local_a);
  local_14 = local_a;
  CWE190_Integer_Overflow__short_fscanf_multiply_66b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 2;
  local_14 = 2;
  CWE190_Integer_Overflow__short_fscanf_multiply_66b_goodG2BSink(local_18);
  return;
}


void goodB2G(void)

{
  undefined local_18 [4];
  undefined2 local_14;
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444c86,&local_a);
  local_14 = local_a;
  CWE190_Integer_Overflow__short_fscanf_multiply_66b_goodB2GSink(local_18);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_22_badSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_rand_add_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_rand_add_22_goodB2G1Global == 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_22_goodB2G2Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_rand_add_22_goodB2G2Global != 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_22_goodG2BSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_rand_add_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_01_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444ce0,&local_c);
  local_a = local_c * local_c;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00444ce0,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_64b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(0xffff8000);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_a = 0x7fff;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00424bf6) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_22_bad(void)

{
  CWE190_Integer_Overflow__short_max_multiply_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_max_multiply_22_badSink(0x7fff);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__short_max_multiply_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_max_multiply_22_goodB2G1Sink(0x7fff);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__short_max_multiply_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_max_multiply_22_goodB2G2Sink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_multiply_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_max_multiply_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_multiply_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_max_multiply_61b_badSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_max_multiply_61b_goodG2BSource(0);
  if (0 < sVar1) {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_max_multiply_61b_goodB2GSource(0);
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_22_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444dde,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_fscanf_square_22_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444dde,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_fscanf_square_22_goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00444dde,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_fscanf_square_22_goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_square_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_fscanf_square_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_add_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_63b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_multiply_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_67b_badSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_67b_goodG2BSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_67b_goodB2GSink(int iParm1)

{
  if (0 < iParm1) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_66b_badSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_66b_goodB2GSink(long lParm1)

{
  if (*(int *)(lParm1 + 8) == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(*(int *)(lParm1 + 8) + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_11_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00444e90,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00444e90,&local_c);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00444e90,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_22_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_rand_add_22_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_rand_add_22_goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_rand_add_22_goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_add_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_rand_add_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xfffffffe);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00425705) */

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


/* WARNING: Removing unreachable block (ram,0x00425761) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_51_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_51b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_add_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_17_bad(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00444f38,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (0 < local_14) {
      local_12 = local_14 * 2;
      printIntLine((ulong)(uint)(int)local_12);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00444f38,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (0 < local_14) {
      if (local_14 < 0x3fff) {
        local_12 = local_14 * 2;
        printIntLine((ulong)(uint)(int)local_12);
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
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 != 0) {
      printIntLine((ulong)(uint)(int)(short)(local_12 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_rand_add_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_add_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_add_45_badData = rand();
    CWE190_Integer_Overflow__int_rand_add_45_badData =
         CWE190_Integer_Overflow__int_rand_add_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(CWE190_Integer_Overflow__int_rand_add_45_goodG2BData + 1));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_add_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__int_rand_add_45_goodB2GData == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(CWE190_Integer_Overflow__int_rand_add_45_goodB2GData + 1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_add_45_goodB2GData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_add_45_goodB2GData = rand();
    CWE190_Integer_Overflow__int_rand_add_45_goodB2GData =
         CWE190_Integer_Overflow__int_rand_add_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_63_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_add_63b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_max_add_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_add_63b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_max_add_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_63b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_64b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    printIntLine((ulong)(local_1c * local_1c));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFive == 5) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFive == 5) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_52_bad(void)

{
  CWE190_Integer_Overflow__short_max_multiply_52b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_multiply_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_multiply_52b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54e_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54e_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54e_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_18_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_51b_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_51b_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_51b_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_54d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_53c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_53c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_53c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_66b_badSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * *(short *)(lParm1 + 4)));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_66b_goodG2BSink(long lParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*(short *)(lParm1 + 4) * *(short *)(lParm1 + 4)));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_66b_goodB2GSink(long lParm1)

{
  short sVar1;
  
  sVar1 = *(short *)(lParm1 + 4);
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1c = 2;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  else {
    printIntLine((ulong)(local_1c * local_1c));
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  else {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
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
    printIntLine(4);
  }
  else {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_square_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_square_65b_badSink(0x7fff,uParm2,0x7fff);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_square_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_max_square_65b_goodB2GSink(0x7fff,uParm2,0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_square_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_65b_badSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_65b_goodG2BSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_65b_goodB2GSink(int iParm1)

{
  if (0 < iParm1) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_14_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004451c0,&local_c);
  }
  if ((globalFive == 5) && (0 < local_c)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004451c0,&local_c);
  }
  if (globalFive == 5) {
    if (0 < local_c) {
      if (local_c < 0x3fff) {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_004451c0,&local_c);
  }
  if ((globalFive == 5) && (0 < local_c)) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445216,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_fscanf_add_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445216,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_64b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_51b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_fscanf_multiply_32_bad(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00445258,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  if (0 < local_1a) {
    local_1c = local_1a * 2;
    printIntLine((ulong)(uint)(int)local_1c);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 2;
  local_1c = 2;
  local_1e = 4;
  printIntLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_00445258,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  if (0 < local_1a) {
    if (local_1a < 0x3fff) {
      local_1c = local_1a * 2;
      printIntLine((ulong)(uint)(int)local_1c);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_51_bad(void)

{
  CWE190_Integer_Overflow__short_max_multiply_51b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_multiply_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_multiply_51b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_16_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


ulong badSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void CWE190_Integer_Overflow__int_rand_multiply_42_bad(void)

{
  int iVar1;
  
  iVar1 = badSource(0);
  if (0 < iVar1) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


undefined8 goodG2BSource(void)

{
  return 2;
}


void goodG2B(void)

{
  int iVar1;
  
  iVar1 = goodG2BSource(0);
  if (0 < iVar1) {
    printIntLine((ulong)(uint)(iVar1 * 2));
  }
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  return (ulong)uVar1;
}


void goodB2G(void)

{
  int iVar1;
  
  iVar1 = goodB2GSource(0);
  if (0 < iVar1) {
    if (iVar1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_add_34_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004271f2) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_add_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_15_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 + 1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (uVar1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 + 1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_53d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_67b_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_67b_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_67b_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_square_68_badData *
                                        CWE190_Integer_Overflow__short_max_square_68_badData));
  return;
}


void CWE190_Integer_Overflow__short_max_square_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_square_68_goodG2BData *
                                        CWE190_Integer_Overflow__short_max_square_68_goodG2BData));
  return;
}


void CWE190_Integer_Overflow__short_max_square_68b_goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__short_max_square_68_goodB2GData < -0xb5) ||
     (0xb5 < CWE190_Integer_Overflow__short_max_square_68_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_square_68_goodB2GData
                                          * CWE190_Integer_Overflow__short_max_square_68_goodB2GData
                                          ));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_67b_badSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_67b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(iParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__int_rand_add_67b_goodB2GSink(int iParm1)

{
  if (iParm1 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_1c * local_1c));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_02_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_16_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004454a8,&local_c);
  local_a = local_c * local_c;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_004454a8,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_max_multiply_45_badData) {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_multiply_45_badData *
                                          2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_45_bad(void)

{
  CWE190_Integer_Overflow__short_max_multiply_45_badData = 0x7fff;
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_max_multiply_45_goodG2BData) {
    printIntLine((ulong)(uint)(int)(short)(
                                          CWE190_Integer_Overflow__short_max_multiply_45_goodG2BData
                                          * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_multiply_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__short_max_multiply_45_goodB2GData) {
    if (CWE190_Integer_Overflow__short_max_multiply_45_goodB2GData < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(
                                            CWE190_Integer_Overflow__short_max_multiply_45_goodB2GData
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
  CWE190_Integer_Overflow__short_max_multiply_45_goodB2GData = 0x7fff;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044551e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_54b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_square_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_0044551e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_54b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_06_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427ecd) */
/* WARNING: Removing unreachable block (ram,0x00427ee8) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427f42) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x00427f7d) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int_rand_multiply_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_31_bad(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445580,&local_10);
  local_a = local_10;
  local_c = local_10;
  if (0 < local_10) {
    local_e = local_10 * 2;
    printIntLine((ulong)(uint)(int)local_e);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_10 = 0;
  __isoc99_fscanf(stdin,&DAT_00445580,&local_10);
  local_a = local_10;
  local_c = local_10;
  if (0 < local_10) {
    if (local_10 < 0x3fff) {
      local_e = local_10 * 2;
      printIntLine((ulong)(uint)(int)local_e);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_13_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < (short)local_1a)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < (short)local_1a)) {
    if ((short)local_1a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_1c * local_1c));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_square_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_31_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004288c2) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_52c_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_67_bad(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004456ce,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_67b_badSink((ulong)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_004456ce,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_67b_goodB2GSink((ulong)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_1c + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (GLOBAL_CONST_TRUE != 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_rand_add_45_badData + 1));
  return;
}


void CWE190_Integer_Overflow__short_rand_add_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_add_45_badData = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_add_45_badData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_rand_add_45_goodG2BData + 1)
              );
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_add_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_rand_add_45_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_rand_add_45_goodB2GData +
                                          1));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_add_45_goodB2GData =
         ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__short_rand_add_45_goodB2GData = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_05_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_1c + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticFalse == 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (staticTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (staticTrue != 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (staticFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_01_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(0xffff8000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x004292ed) */

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


/* WARNING: Removing unreachable block (ram,0x00429343) */

void goodB2G2(void)

{
  if (globalFive == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_68b_badSink(void)

{
  if (0 < CWE190_Integer_Overflow__int_rand_multiply_68_badData) {
    printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_multiply_68_badData * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_68b_goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__int_rand_multiply_68_goodG2BData) {
    printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_multiply_68_goodG2BData * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_68b_goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__int_rand_multiply_68_goodB2GData) {
    if (CWE190_Integer_Overflow__int_rand_multiply_68_goodB2GData < 0x3fffffff) {
      printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_multiply_68_goodB2GData * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53d_badSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53d_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53d_goodB2GSink(int iParm1)

{
  if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_10_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004458a8,&local_c);
  }
  if (globalTrue != 0) {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004458a8,&local_c);
  }
  if (globalFalse == 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_004458a8,&local_c);
  }
  if (globalTrue != 0) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_max_add_32_bad(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 0x7fff;
  local_1c = 0x7fff;
  local_1e = 0x8000;
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 2;
  local_1c = 2;
  local_1e = 3;
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429843) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  undefined2 local_20 [2];
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = local_20;
  local_18 = local_20;
  local_20[0] = 0;
  local_1a = 0x7fff;
  local_1c = 0x7fff;
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_add_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_22_badSink(short sParm1)

{
  if ((CWE190_Integer_Overflow__short_fscanf_multiply_22_badGlobal != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_fscanf_multiply_22_goodB2G1Global == 0) {
    if (0 < sParm1) {
      if (sParm1 < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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


void CWE190_Integer_Overflow__short_fscanf_multiply_22_goodB2G2Sink(short sParm1)

{
  if ((CWE190_Integer_Overflow__short_fscanf_multiply_22_goodB2G2Global != 0) && (0 < sParm1)) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_22_goodG2BSink(short sParm1)

{
  if ((CWE190_Integer_Overflow__short_fscanf_multiply_22_goodG2BGlobal != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_34_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_64b_badSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_64b_goodG2BSink(short *psParm1)

{
  if (0 < *psParm1) {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_64b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if (0 < sVar1) {
    if (sVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_67b_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_16_bad(void)

{
  printIntLine(0xfffffffe);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00429cbb) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_square_53_bad(void)

{
  CWE190_Integer_Overflow__short_max_square_53b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_square_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_square_53b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_square_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_53c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_53c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_52c_badSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_52c_goodG2BSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_52c_goodB2GSink(int iParm1)

{
  if (0 < iParm1) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
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


void CWE190_Integer_Overflow__int_rand_square_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_1c * local_1c));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (((local_1c == 0x80000000) || ((int)local_1c < -0xb503)) || (0xb503 < (int)local_1c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c * local_1c));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 2;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(local_c * local_c));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_add_31_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042a201) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_add_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_68_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_multiply_68_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_multiply_68_badData = rand();
    CWE190_Integer_Overflow__int_rand_multiply_68_badData =
         CWE190_Integer_Overflow__int_rand_multiply_68_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_68b_badSink();
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_multiply_68_goodG2BData = 2;
  CWE190_Integer_Overflow__int_rand_multiply_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_multiply_68_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_multiply_68_goodB2GData = rand();
    CWE190_Integer_Overflow__int_rand_multiply_68_goodB2GData =
         CWE190_Integer_Overflow__int_rand_multiply_68_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_68b_goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_22_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445b26,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_fscanf_multiply_22_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445b26,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_fscanf_multiply_22_goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445b26,&local_a);
  CWE190_Integer_Overflow__short_fscanf_multiply_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_fscanf_multiply_22_goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_fscanf_multiply_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_31_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  printIntLine((ulong)(uVar1 * uVar1));
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (((uVar1 == 0x80000000) || ((int)uVar1 < -0xb503)) || (0xb503 < (int)uVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uVar1 * uVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_63b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_63b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_63b_goodB2GSink(short *psParm1)

{
  if (*psParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(*psParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_67_bad(void)

{
  CWE190_Integer_Overflow__short_max_add_67b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_add_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_add_67b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_add_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_66_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE190_Integer_Overflow__int_rand_add_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_28 [8];
  undefined4 local_20;
  undefined4 local_c;
  
  local_c = 2;
  local_20 = 2;
  CWE190_Integer_Overflow__int_rand_add_66b_goodG2BSink(local_28);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined local_38 [8];
  uint local_30;
  uint local_1c;
  
  local_1c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_30 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_30 = rand();
    local_30 = local_30 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_1c = local_30;
  CWE190_Integer_Overflow__int_rand_add_66b_goodB2GSink(local_38);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_multiply_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_52b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_52c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_52b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_52c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_52b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_square_52c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_54c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_54c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_22_badSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_max_add_22_badGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_max_add_22_goodB2G1Global == 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_22_goodB2G2Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_max_add_22_goodB2G2Global != 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_22_goodG2BSink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_max_add_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_67_bad(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445bee,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_67b_badSink((ulong)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_add_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445bee,&local_a);
  CWE190_Integer_Overflow__short_fscanf_add_67b_goodB2GSink((ulong)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_1c + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      iVar1 = rand();
      iVar3 = rand();
      uVar2 = rand();
      local_1c = ~(uVar2 ^ iVar1 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar1 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar1 << 0x1e ^ iVar3 << 0xf;
    }
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (0 < (short)local_22) {
      printIntLine((ulong)(uint)(int)(short)(local_22 * 2));
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (0 < (short)local_22) {
      if ((short)local_22 < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_22 * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 != 0) {
      printIntLine((ulong)(uint)(int)(short)(local_12 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_13_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00445c80,&local_c);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < local_c)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00445c80,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (0 < local_c) {
      if (local_c < 0x3fff) {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00445c80,&local_c);
  }
  if ((GLOBAL_CONST_FIVE == 5) && (0 < local_c)) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_FIVE == 5) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_14_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((globalFive == 5) && (0 < (short)local_1a)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (globalFive == 5) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (globalFive == 5) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((globalFive == 5) && (0 < (short)local_1a)) {
    if ((short)local_1a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalFive == 5) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_64_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_64b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_rand_add_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_64b_goodB2GSink(local_1a);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_65b_badSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__short_rand_add_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_65b_goodB2GSink
            ((ulong)(uint)(int)(short)uVar1,uParm2,(ulong)(uint)(int)(short)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_rand_multiply_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2c = *local_28;
  if (0 < (short)local_2c) {
    local_2e = local_2c * 2;
    printIntLine((ulong)(uint)(int)local_2e);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 2;
  local_1c = 2;
  local_1e = 4;
  printIntLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_30;
  short local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort *local_28;
  ushort *local_20;
  
  local_20 = &local_30;
  local_28 = &local_30;
  local_30 = 0;
  local_2a = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_2a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  *local_20 = local_2a;
  local_2c = *local_28;
  if (0 < (short)local_2c) {
    if ((short)local_2c < 0x3fff) {
      local_2e = local_2c * 2;
      printIntLine((ulong)(uint)(int)local_2e);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_67b_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_67b_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_67b_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_max_square_51b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_51b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_51b_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_52b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_52c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_52b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_52b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_multiply_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_22_bad(void)

{
  CWE190_Integer_Overflow__short_max_add_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_max_add_22_badSink(0x7fff);
  return;
}


void goodB2G1(void)

{
  CWE190_Integer_Overflow__short_max_add_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_max_add_22_goodB2G1Sink(0x7fff);
  return;
}


void goodB2G2(void)

{
  CWE190_Integer_Overflow__short_max_add_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_max_add_22_goodB2G2Sink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_add_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_max_add_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_max_add_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_square_16_bad(void)

{
  printIntLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042bbce) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_square_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_44_bad(void)

{
  short local_12;
  code *local_10;
  
  local_10 = badSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00445e08,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  goodG2BSink(2,uParm2,2);
  return;
}


void goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G(void)

{
  short local_12;
  code *local_10;
  
  local_10 = goodB2GSink;
  local_12 = 0;
  __isoc99_fscanf(stdin,&DAT_00445e08,&local_12);
  (*local_10)((ulong)(uint)(int)local_12);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(short sParm1)

{
  if ((badStatic != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_21_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445e48,&local_a);
  badStatic = 1;
  badSink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (0 < sParm1) {
      if (sParm1 < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445e48,&local_a);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_a);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if ((goodB2G2Static != 0) && (0 < sParm1)) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00445e48,&local_a);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_a);
  return;
}


void goodG2BSink(short sParm1)

{
  if ((goodG2BStatic != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_03_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00445ea0,&local_c);
  if (0 < local_c) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00445ea0,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00445ea0,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_04_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c24f) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042c341) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_31_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_18_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00445f70,&local_c);
  if (0 < local_c) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00445f70,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_add_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_52c_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_65b_badSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_65b_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_65b_goodB2GSink(int iParm1)

{
  if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_14_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00446020,&local_c);
  }
  if (globalFive == 5) {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00446020,&local_c);
  }
  if (globalFive == 5) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00446020,&local_c);
  }
  if (globalFive == 5) {
    if ((local_c < -0xb5) || (0xb5 < local_c)) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c * local_c;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a * local_a));
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_10_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_1c + 1));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalFalse == 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
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
  int iVar3;
  uint local_1c;
  
  local_1c = 0;
  if (globalTrue != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      iVar2 = rand();
      iVar3 = rand();
      uVar1 = rand();
      local_1c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
    }
    else {
      iVar2 = rand();
      iVar3 = rand();
      local_1c = rand();
      local_1c = local_1c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
    }
  }
  if (globalTrue != 0) {
    if (local_1c == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(local_1c + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int local_c;
  
  local_c = 0;
  if (globalFalse == 0) {
    local_c = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(local_c + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__short_fscanf_square_32_bad(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_004460c8,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  local_1c = local_1a * local_1a;
  printIntLine((ulong)(uint)(int)local_1c);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 *local_18;
  undefined2 *local_10;
  
  local_10 = &local_20;
  local_18 = &local_20;
  local_20 = 0;
  local_1a = 2;
  local_1c = 2;
  local_1e = 4;
  printIntLine(4);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short *local_18;
  short *local_10;
  
  local_10 = &local_1e;
  local_18 = &local_1e;
  local_1e = 0;
  local_20 = 0;
  __isoc99_fscanf(stdin,&DAT_004460c8,&local_20);
  *local_10 = local_20;
  local_1a = *local_18;
  if ((local_1a < -0xb5) || (0xb5 < local_1a)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_1c = local_1a * local_1a;
    printIntLine((ulong)(uint)(int)local_1c);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_67_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_multiply_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_square_51_bad(void)

{
  CWE190_Integer_Overflow__short_max_square_51b_badSink(0x7fff);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_square_51b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_square_51b_goodB2GSink(0x7fff);
  return;
}


void CWE190_Integer_Overflow__short_max_square_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(0xffff8000);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042d018) */

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


/* WARNING: Removing unreachable block (ram,0x0042d06e) */

void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_52_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_52b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_multiply_52b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_12_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_1a = 2;
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < (short)local_1a) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  else {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
    printIntLine(4);
  }
  else {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_13_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00446190,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00446190,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    __isoc99_fscanf(stdin,&DAT_00446190,&local_c);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_51b_badSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_51b_goodG2BSink(int iParm1)

{
  if (0 < iParm1) {
    printIntLine((ulong)(uint)(iParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_51b_goodB2GSink(int iParm1)

{
  if (0 < iParm1) {
    if (iParm1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_17_bad(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00446220,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_12 = local_14 + 1;
    printIntLine((ulong)(uint)(int)local_12);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  short local_14;
  short local_12;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    __isoc99_fscanf(stdin,&DAT_00446220,&local_14);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_14 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_12 = local_14 + 1;
      printIntLine((ulong)(uint)(int)local_12);
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_12_bad(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_e = 2;
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00446260,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < local_e) {
      if (local_e < 0x3fff) {
        local_c = local_e * 2;
        printIntLine((ulong)(uint)(int)local_c);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < local_e) {
      local_a = local_e * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  short local_e;
  short local_c;
  short local_a;
  
  local_e = 0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __isoc99_fscanf(stdin,&DAT_00446260,&local_e);
  }
  else {
    __isoc99_fscanf(stdin,&DAT_00446260,&local_e);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (0 < local_e) {
      if (local_e < 0x3fff) {
        local_c = local_e * 2;
        printIntLine((ulong)(uint)(int)local_c);
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (0 < local_e) {
      if (local_e < 0x3fff) {
        local_a = local_e * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
    printIntLine(4);
  }
  else {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_53d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_53d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_67b_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_67b_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_67b_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_22_badSink(short sParm1)

{
  if ((CWE190_Integer_Overflow__short_rand_multiply_22_badGlobal != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_22_goodB2G1Sink(short sParm1)

{
  if (CWE190_Integer_Overflow__short_rand_multiply_22_goodB2G1Global == 0) {
    if (0 < sParm1) {
      if (sParm1 < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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


void CWE190_Integer_Overflow__short_rand_multiply_22_goodB2G2Sink(short sParm1)

{
  if ((CWE190_Integer_Overflow__short_rand_multiply_22_goodB2G2Global != 0) && (0 < sParm1)) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_22_goodG2BSink(short sParm1)

{
  if ((CWE190_Integer_Overflow__short_rand_multiply_22_goodG2BGlobal != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_16_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_09_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < (short)local_1a)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if (GLOBAL_CONST_FALSE == 0) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
  }
  if ((GLOBAL_CONST_TRUE != 0) && (0 < (short)local_1a)) {
    if ((short)local_1a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((GLOBAL_CONST_TRUE != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_add_53c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_53d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_53c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_53d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_53c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_53d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_square_45_badData *
                                        CWE190_Integer_Overflow__short_max_square_45_badData));
  return;
}


void CWE190_Integer_Overflow__short_max_square_45_bad(void)

{
  CWE190_Integer_Overflow__short_max_square_45_badData = 0x7fff;
  badSink();
  return;
}


void goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_square_45_goodG2BData *
                                        CWE190_Integer_Overflow__short_max_square_45_goodG2BData));
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_max_square_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if ((CWE190_Integer_Overflow__short_max_square_45_goodB2GData < -0xb5) ||
     (0xb5 < CWE190_Integer_Overflow__short_max_square_45_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_max_square_45_goodB2GData
                                          * CWE190_Integer_Overflow__short_max_square_45_goodB2GData
                                          ));
  }
  return;
}


void goodB2G(void)

{
  CWE190_Integer_Overflow__short_max_square_45_goodB2GData = 0x7fff;
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__short_max_square_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_22_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_22_badGlobal = 1;
  CWE190_Integer_Overflow__int_rand_add_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__int_rand_add_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__int_rand_add_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_add_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__int_rand_add_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_square_06_bad(void)

{
  printIntLine(1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e441) */
/* WARNING: Removing unreachable block (ram,0x0042e463) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e4c9) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e509) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_max_square_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_65b_badSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  CWE190_Integer_Overflow__int_rand_square_65b_goodG2BSink(2,uParm2,2);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_65b_goodB2GSink((ulong)uVar1,uParm2,(ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_52c_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_52c_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_52c_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_04_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446480,&local_c);
  local_a = local_c * local_c;
  printIntLine((ulong)(uint)(int)local_a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e816) */

void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446480,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446480,&local_c);
  if ((local_c < -0xb5) || (0xb5 < local_c)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_a = local_c * local_c;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042e8fa) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


ulong CWE190_Integer_Overflow__short_fscanf_add_61b_badSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_004464d6,local_c);
  return (ulong)local_c[0];
}


undefined8 CWE190_Integer_Overflow__short_fscanf_add_61b_goodG2BSource(void)

{
  return 2;
}


ulong CWE190_Integer_Overflow__short_fscanf_add_61b_goodB2GSource(ushort uParm1)

{
  ushort local_c [2];
  
  local_c[0] = uParm1;
  __isoc99_fscanf(stdin,&DAT_004464d6,local_c);
  return (ulong)local_c[0];
}


void badSink(short sParm1)

{
  if (badStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_21_bad(void)

{
  badStatic = 1;
  badSink(0x7fff);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
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
  goodB2G1Sink(0x7fff);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if (goodB2G2Static != 0) {
    if (sParm1 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
    }
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x7fff);
  return;
}


void goodG2BSink(short sParm1)

{
  if (goodG2BStatic != 0) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_max_add_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_add_03_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042ec25) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042ec65) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_add_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_53c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_53c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_53c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_15_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446568,&local_c);
  if (0 < local_c) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446568,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446568,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_54b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_multiply_54b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_multiply_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_11_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004465a8,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < local_c)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004465a8,&local_c);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (0 < local_c) {
      if (local_c < 0x3fff) {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_004465a8,&local_c);
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < local_c)) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
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
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_02_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446600,&local_c);
  if (0 < local_c) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446600,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446600,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_22_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_22_badGlobal = 1;
  CWE190_Integer_Overflow__short_rand_multiply_22_badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_22_goodB2G1Global = 0;
  CWE190_Integer_Overflow__short_rand_multiply_22_goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_multiply_22_goodB2G2Global = 1;
  CWE190_Integer_Overflow__short_rand_multiply_22_goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_rand_multiply_22_goodG2BGlobal = 1;
  CWE190_Integer_Overflow__short_rand_multiply_22_goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_add_18_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042f5d7) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_add_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_68b_badSink(void)

{
  printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_square_68_badData *
                            CWE190_Integer_Overflow__int_rand_square_68_badData));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_square_68_goodG2BData *
                            CWE190_Integer_Overflow__int_rand_square_68_goodG2BData));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_68b_goodB2GSink(void)

{
  if (((CWE190_Integer_Overflow__int_rand_square_68_goodB2GData == -0x80000000) ||
      (CWE190_Integer_Overflow__int_rand_square_68_goodB2GData < -0xb503)) ||
     (0xb503 < CWE190_Integer_Overflow__int_rand_square_68_goodB2GData)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_square_68_goodB2GData *
                              CWE190_Integer_Overflow__int_rand_square_68_goodB2GData));
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


void CWE190_Integer_Overflow__short_rand_multiply_08_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < (short)local_1a)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < (short)local_1a)) {
    if ((short)local_1a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_10_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00446700,&local_c);
  }
  if ((globalTrue != 0) && (0 < local_c)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00446700,&local_c);
  }
  if (globalFalse == 0) {
    if (0 < local_c) {
      if (local_c < 0x3fff) {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  if (globalTrue != 0) {
    __isoc99_fscanf(stdin,&DAT_00446700,&local_c);
  }
  if ((globalTrue != 0) && (0 < local_c)) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if ((globalTrue != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  if (0 < CWE190_Integer_Overflow__int_rand_multiply_45_badData) {
    printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_multiply_45_badData * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_45_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_multiply_45_badData = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_multiply_45_badData = rand();
    CWE190_Integer_Overflow__int_rand_multiply_45_badData =
         CWE190_Integer_Overflow__int_rand_multiply_45_badData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  badSink();
  return;
}


void goodG2BSink(void)

{
  if (0 < CWE190_Integer_Overflow__int_rand_multiply_45_goodG2BData) {
    printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_multiply_45_goodG2BData * 2));
  }
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_multiply_45_goodG2BData = 2;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  if (0 < CWE190_Integer_Overflow__int_rand_multiply_45_goodB2GData) {
    if (CWE190_Integer_Overflow__int_rand_multiply_45_goodB2GData < 0x3fffffff) {
      printIntLine((ulong)(uint)(CWE190_Integer_Overflow__int_rand_multiply_45_goodB2GData * 2));
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
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    CWE190_Integer_Overflow__int_rand_multiply_45_goodB2GData =
         ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    CWE190_Integer_Overflow__int_rand_multiply_45_goodB2GData = rand();
    CWE190_Integer_Overflow__int_rand_multiply_45_goodB2GData =
         CWE190_Integer_Overflow__int_rand_multiply_45_goodB2GData ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  goodB2GSink();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_rand_multiply_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_square_64b_badSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 * *psParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_64b_goodG2BSink(short *psParm1)

{
  printIntLine((ulong)(uint)(int)(short)(*psParm1 * *psParm1));
  return;
}


void CWE190_Integer_Overflow__short_max_square_64b_goodB2GSink(short *psParm1)

{
  short sVar1;
  
  sVar1 = *psParm1;
  if ((sVar1 < -0xb5) || (0xb5 < sVar1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 * sVar1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_06_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    printIntLine((ulong)(uVar1 * 2));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0042ffa2) */

void goodB2G1(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 0x3fffffff) {
      printIntLine((ulong)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043009c) */

void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_61_bad(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_add_61b_badSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodG2B(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_add_61b_goodG2BSource(0);
  printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  return;
}


void goodB2G(void)

{
  short sVar1;
  
  sVar1 = CWE190_Integer_Overflow__short_fscanf_add_61b_goodB2GSource(0);
  if (sVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sVar1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_01_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446858,&local_c);
  if (0 < local_c) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void goodB2G(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  __isoc99_fscanf(stdin,&DAT_00446858,&local_c);
  if (0 < local_c) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53d_badSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53d_goodG2BSink(short sParm1)

{
  if (0 < sParm1) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_53d_goodB2GSink(short sParm1)

{
  if (0 < sParm1) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_square_52c_badSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_52c_goodG2BSink(int iParm1)

{
  printIntLine((ulong)(uint)(iParm1 * iParm1));
  return;
}


void CWE190_Integer_Overflow__int_rand_square_52c_goodB2GSink(int iParm1)

{
  if (((iParm1 == -0x80000000) || (iParm1 < -0xb503)) || (0xb503 < iParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(iParm1 * iParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_07_bad(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00446908,&local_c);
  }
  if (staticFive == 5) {
    local_a = local_c + 1;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00446908,&local_c);
  }
  if (staticFive == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  short local_c;
  short local_a;
  
  local_c = 0;
  if (staticFive == 5) {
    __isoc99_fscanf(stdin,&DAT_00446908,&local_c);
  }
  if (staticFive == 5) {
    if (local_c == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      local_a = local_c + 1;
      printIntLine((ulong)(uint)(int)local_a);
    }
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (staticFive == 5) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54c_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_54d_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54c_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_54d_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_54c_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54e_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54e_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54e_goodB2GSink(short sParm1)

{
  if ((sParm1 < -0xb5) || (0xb5 < sParm1)) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * sParm1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_11_bad(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < (short)local_1a)) {
    printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (0 < (short)local_1a) {
      if ((short)local_1a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  int iVar3;
  ushort local_1a;
  
  local_1a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    uVar2 = rand();
    if ((uVar2 & 1) == 0) {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = ~((ushort)iVar3 ^ (ushort)(iVar1 << 0xf));
    }
    else {
      rand();
      iVar1 = rand();
      iVar3 = rand();
      local_1a = (ushort)iVar3 ^ (ushort)(iVar1 << 0xf);
    }
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (0 < (short)local_1a)) {
    if ((short)local_1a < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(local_1a * 2));
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
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_rand_add_63_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_63b_badSink(local_1a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_rand_add_63b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1a [5];
  
  local_1a[0] = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
  }
  else {
    rand();
    iVar2 = rand();
    iVar3 = rand();
    local_1a[0] = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
  }
  CWE190_Integer_Overflow__short_rand_add_63b_goodB2GSink(local_1a);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE190_Integer_Overflow__int_rand_add_32_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  local_34 = local_30 + 1;
  printIntLine((ulong)local_34);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_10 = &local_28;
  local_18 = &local_28;
  local_28 = 0;
  local_1c = 2;
  local_20 = 2;
  local_24 = 3;
  printIntLine(3);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint *local_20;
  
  local_20 = &local_38;
  local_28 = &local_38;
  local_38 = 0;
  local_2c = 0;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_2c = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_2c = rand();
    local_2c = local_2c ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  *local_20 = local_2c;
  local_30 = *local_28;
  if (local_30 == 0x7fffffff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    local_34 = local_30 + 1;
    printIntLine((ulong)local_34);
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_17_bad(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 0x7fff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 != 0) {
      printIntLine((ulong)(uint)(int)(short)(local_12 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  ushort local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 0x7fff;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 != 0) {
      if (local_12 < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_12 * 2));
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
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    if (local_12 != 0) {
      printIntLine((ulong)(uint)(int)(short)(local_12 * 2));
    }
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_square_64_bad(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_square_64b_badSink(&local_a);
  return;
}


void goodG2B(void)

{
  undefined2 local_a;
  
  local_a = 2;
  CWE190_Integer_Overflow__short_max_square_64b_goodG2BSink(&local_a);
  return;
}


void goodB2G(void)

{
  undefined2 local_a;
  
  local_a = 0x7fff;
  CWE190_Integer_Overflow__short_max_square_64b_goodB2GSink(&local_a);
  return;
}


void CWE190_Integer_Overflow__short_max_square_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_11_bad(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
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
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_max_add_02_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004310ac) */

void goodB2G1(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


/* WARNING: Removing unreachable block (ram,0x004310ec) */

void goodB2G2(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_max_add_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_64b_badSink(int *piParm1)

{
  if (0 < *piParm1) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_64b_goodG2BSink(int *piParm1)

{
  if (0 < *piParm1) {
    printIntLine((ulong)(uint)(*piParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_multiply_64b_goodB2GSink(int *piParm1)

{
  int iVar1;
  
  iVar1 = *piParm1;
  if (0 < iVar1) {
    if (iVar1 < 0x3fffffff) {
      printIntLine((ulong)(uint)(iVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_06_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00431333) */

void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (uVar1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(uVar1 + 1));
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0043141c) */

void goodG2B1(void)

{
  printIntLine(3);
  return;
}


void goodG2B2(void)

{
  printIntLine(3);
  return;
}


void CWE190_Integer_Overflow__short_rand_add_06_good(void)

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


void CWE190_Integer_Overflow__short_fscanf_multiply_08_bad(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00446b70,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < local_c)) {
    local_a = local_c * 2;
    printIntLine((ulong)(uint)(int)local_a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00446b70,&local_c);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (0 < local_c) {
      if (local_c < 0x3fff) {
        local_a = local_c * 2;
        printIntLine((ulong)(uint)(int)local_a);
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
  short local_c;
  short local_a;
  
  local_c = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __isoc99_fscanf(stdin,&DAT_00446b70,&local_c);
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (0 < local_c)) {
    if (local_c < 0x3fff) {
      local_a = local_c * 2;
      printIntLine((ulong)(uint)(int)local_a);
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
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  short local_a;
  
  local_a = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_a = 2;
  }
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (local_a != 0)) {
    printIntLine((ulong)(uint)(int)(short)(local_a * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54d_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_54e_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54d_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_54e_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_54d_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_square_54e_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void badSink(short sParm1)

{
  if ((badStatic != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_21_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  badStatic = 1;
  badSink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G1Sink(short sParm1)

{
  if (goodB2G1Static == 0) {
    if (0 < sParm1) {
      if (sParm1 < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
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
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodB2G2Sink(short sParm1)

{
  if ((goodB2G2Static != 0) && (0 < sParm1)) {
    if (sParm1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)(short)uVar1);
  return;
}


void goodG2BSink(short sParm1)

{
  if ((goodG2BStatic != 0) && (0 < sParm1)) {
    printIntLine((ulong)(uint)(int)(short)(sParm1 * 2));
  }
  return;
}


void goodG2B(void)

{
  goodG2BStatic = 1;
  goodG2BSink(2);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_03_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G1(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodB2G2(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B1(void)

{
  printIntLine(4);
  return;
}


void goodG2B2(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_53b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_square_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_square_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(0xffff8000);
  }
  return;
}


void goodB2G1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalTrue != 0) {
    local_a = 0x7fff;
  }
  if (globalFalse == 0) {
    if (local_a == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_a + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00431df4) */

void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  return;
}


void goodG2B1(void)

{
  short local_a;
  
  local_a = 0;
  if (globalFalse == 0) {
    local_a = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine((ulong)(uint)(int)(short)(local_a + 1));
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(3);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_add_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_68b_badSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_add_68_badData + 1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_68b_goodG2BSink(void)

{
  printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_add_68_goodG2BData +
                                        1));
  return;
}


void CWE190_Integer_Overflow__short_fscanf_add_68b_goodB2GSink(void)

{
  if (CWE190_Integer_Overflow__short_fscanf_add_68_goodB2GData == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(CWE190_Integer_Overflow__short_fscanf_add_68_goodB2GData
                                          + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_18_bad(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
  }
  return;
}


void goodB2G(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = rand();
  if ((uVar2 & 1) == 0) {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = ~((ushort)iVar4 ^ (ushort)(iVar3 << 0xf));
  }
  else {
    rand();
    iVar3 = rand();
    iVar4 = rand();
    uVar1 = (ushort)iVar4 ^ (ushort)(iVar3 << 0xf);
  }
  if (0 < (short)uVar1) {
    if ((short)uVar1 < 0x3fff) {
      printIntLine((ulong)(uint)(int)(short)(uVar1 * 2));
    }
    else {
      printLine("data value is too large to perform arithmetic safely.");
    }
  }
  return;
}


void goodG2B(void)

{
  printIntLine(4);
  return;
}


void CWE190_Integer_Overflow__short_rand_multiply_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__short_max_add_54c_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_54d_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_54c_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_54d_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_max_add_54c_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_max_add_54d_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53_bad(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00446d0e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_53b_badSink((ulong)(uint)(int)local_a);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__short_fscanf_square_53b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  short local_a;
  
  local_a = 0;
  __isoc99_fscanf(stdin,&DAT_00446d0e,&local_a);
  CWE190_Integer_Overflow__short_fscanf_square_53b_goodB2GSink((ulong)(uint)(int)local_a);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_square_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_01_bad(void)

{
  printIntLine(0xffff8000);
  return;
}


void goodG2B(void)

{
  printIntLine(3);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00432223) */

void goodB2G(void)

{
  printLine("data value is too large to perform arithmetic safely.");
  return;
}


void CWE190_Integer_Overflow__short_max_add_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__short_max_add_53d_badSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_53d_goodG2BSink(short sParm1)

{
  printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  return;
}


void CWE190_Integer_Overflow__short_max_add_53d_goodB2GSink(short sParm1)

{
  if (sParm1 == 0x7fff) {
    printLine("data value is too large to perform arithmetic safely.");
  }
  else {
    printIntLine((ulong)(uint)(int)(short)(sParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54b_badSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54c_badSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54b_goodG2BSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54c_goodG2BSink((ulong)(uint)(int)sParm1);
  return;
}


void CWE190_Integer_Overflow__short_fscanf_multiply_54b_goodB2GSink(short sParm1)

{
  CWE190_Integer_Overflow__short_fscanf_multiply_54c_goodB2GSink((ulong)(uint)(int)sParm1);
  return;
}


undefined8 CWE190_Integer_Overflow__short_max_multiply_61b_badSource(void)

{
  return 0x7fff;
}


undefined8 CWE190_Integer_Overflow__short_max_multiply_61b_goodG2BSource(void)

{
  return 2;
}


undefined8 CWE190_Integer_Overflow__short_max_multiply_61b_goodB2GSource(void)

{
  return 0x7fff;
}


void CWE190_Integer_Overflow__short_rand_add_17_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_22 + 1));
    local_20 = local_20 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_22;
  int local_20;
  int local_1c;
  
  local_22 = 0;
  local_1c = 0;
  while (local_1c < 1) {
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = ~((ushort)iVar3 ^ (ushort)(iVar2 << 0xf));
    }
    else {
      rand();
      iVar2 = rand();
      iVar3 = rand();
      local_22 = (ushort)iVar3 ^ (ushort)(iVar2 << 0xf);
    }
    local_1c = local_1c + 1;
  }
  local_20 = 0;
  while (local_20 < 1) {
    if (local_22 == 0x7fff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(uint)(int)(short)(local_22 + 1));
    }
    local_20 = local_20 + 1;
  }
  return;
}


void goodG2B(void)

{
  short local_12;
  int local_10;
  int local_c;
  
  local_12 = 0;
  local_c = 0;
  while (local_c < 1) {
    local_12 = 2;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)(uint)(int)(short)(local_12 + 1));
    local_10 = local_10 + 1;
  }
  return;
}


void CWE190_Integer_Overflow__short_rand_add_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE190_Integer_Overflow__int_rand_add_67_bad(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_67b_badSink((ulong)uVar1);
  return;
}


void goodG2B(void)

{
  CWE190_Integer_Overflow__int_rand_add_67b_goodG2BSink(2);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    uVar1 = uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  CWE190_Integer_Overflow__int_rand_add_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE190_Integer_Overflow__int_rand_square_52b_badSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_52c_badSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_52b_goodG2BSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_52c_goodG2BSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_square_52b_goodB2GSink(uint uParm1)

{
  CWE190_Integer_Overflow__int_rand_square_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE190_Integer_Overflow__int_rand_add_22_badSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_add_22_badGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_22_goodB2G1Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_add_22_goodB2G1Global == 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_22_goodB2G2Sink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_add_22_goodB2G2Global != 0) {
    if (iParm1 == 0x7fffffff) {
      printLine("data value is too large to perform arithmetic safely.");
    }
    else {
      printIntLine((ulong)(iParm1 + 1));
    }
  }
  return;
}


void CWE190_Integer_Overflow__int_rand_add_22_goodG2BSink(int iParm1)

{
  if (CWE190_Integer_Overflow__int_rand_add_22_goodG2BGlobal != 0) {
    printIntLine((ulong)(iParm1 + 1));
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_12_bad(void)

{
  int iVar1;
  ushort local_a;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_a = 2;
  }
  else {
    local_a = 0x7fff;
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (local_a != 0) {
      if (local_a < 0x3fff) {
        printIntLine((ulong)(uint)(int)(short)(local_a * 2));
      }
      else {
        printLine("data value is too large to perform arithmetic safely.");
      }
    }
  }
  else {
    if (local_a != 0) {
      printIntLine((ulong)(uint)(int)(short)(local_a * 2));
    }
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00432832) */
/* WARNING: Removing unreachable block (ram,0x00432864) */

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
    printIntLine(4);
  }
  else {
    printIntLine(4);
  }
  return;
}


void CWE190_Integer_Overflow__short_max_multiply_12_good(void)

{
  goodB2G();
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
  printf((char *)(double)fParm1,&DAT_00446e65);
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
  printf(pcParm1,&DAT_00446e82);
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
    __isoc99_sscanf(lVar1,&DAT_00446e90,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00446e98,&local_14);
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

