
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0064fff8;
  if (PTR___gmon_start___0064fff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400a00(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00650010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00650018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00650020)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00650028)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00650030)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00650038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00650040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00650048)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00650050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00650058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00650060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00650068)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00650070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00650078)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00650080)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00650088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00650090)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00650098)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_006500a0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_006500a8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006500b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006500b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006500c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006500c8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_006500d0)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006500d8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0064fff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400bf7) */
/* WARNING: Removing unreachable block (ram,0x00400c01) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400c34) */
/* WARNING: Removing unreachable block (ram,0x00400c3e) */

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


/* WARNING: Removing unreachable block (ram,0x00400c84) */
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
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_03_bad();
  return 0;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [51];
  uint *local_20;
  uint *local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_20 = (uint *)malloc(200);
  if (local_20 == (uint *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_20;
  local_10 = local_20;
  memcpy(local_20,local_1b8,400);
  printIntLine((ulong)*local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [51];
  uint *local_20;
  uint *local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_20 = (uint *)malloc(400);
  if (local_20 == (uint *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_20;
  local_10 = local_20;
  memcpy(local_20,local_1b8,400);
  printIntLine((ulong)*local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_badSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53_good(void)

{
  goodG2B();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_badGlobal != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_goodG2B1Global == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_goodG2B2Global != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [100];
  undefined8 *local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(400);
  if (local_28 == (undefined8 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_28;
  local_10 = local_28;
  memmove(local_28,local_348,800);
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [100];
  undefined8 *local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(800);
  if (local_28 == (undefined8 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_28;
  local_10 = local_28;
  memmove(local_28,local_348,800);
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_34_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  uint *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_badData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_badData;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(__dest,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_badData = pvVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  uint *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_goodG2BData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_goodG2BData;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(__dest,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66b_badSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  local_10 = *(undefined8 **)(lParm1 + 0x10);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66b_goodG2BSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  local_10 = *(undefined8 **)(lParm1 + 0x10);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040536c) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_badGlobal != 0) {
    local_10 = malloc(200);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_goodG2B1Global == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_goodG2B2Global != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_14_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_32_bad(void)

{
  undefined4 local_358 [200];
  void *local_38;
  void *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = (void *)0x0;
  local_28 = (void *)0x0;
  local_28 = malloc(400);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_18 = local_28;
  local_30 = *local_20;
  local_10 = 0;
  while (local_10 < 100) {
    local_358[local_10 * 2] = 0;
    local_358[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_30,local_358,800);
  printStructLine(local_30);
  free(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_358 [200];
  void *local_38;
  void *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = (void *)0x0;
  local_28 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_18 = local_28;
  local_30 = *local_20;
  local_10 = 0;
  while (local_10 < 100) {
    local_358[local_10 * 2] = 0;
    local_358[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_30,local_358,800);
  printStructLine(local_30);
  free(local_30);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(200);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_16_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_14_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFive == 5) {
    local_10 = (char *)malloc(0x32);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFive == 5) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFive == 5) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67b_badSink(void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memcpy(pvParm1,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memcpy(pvParm1,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_32_bad(void)

{
  undefined local_98 [99];
  undefined local_35;
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (char *)0x0;
  local_20 = (char *)0x0;
  local_20 = (char *)malloc(0x32);
  if (local_20 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  *local_10 = local_20;
  local_28 = *local_18;
  memset(local_98,0x43,99);
  local_35 = 0;
  snprintf(local_28,100,"%s",local_98);
  printLine(local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined local_98 [99];
  undefined local_35;
  char *local_30;
  char *local_28;
  char *local_20;
  char **local_18;
  char **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (char *)0x0;
  local_20 = (char *)0x0;
  local_20 = (char *)malloc(100);
  if (local_20 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  *local_10 = local_20;
  local_28 = *local_18;
  memset(local_98,0x43,99);
  local_35 = 0;
  snprintf(local_28,100,"%s",local_98);
  printLine(local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_32_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1c8 [50];
  uint *local_38;
  uint *local_30;
  uint *local_28;
  uint **local_20;
  uint **local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_28 = (uint *)malloc(200);
  if (local_28 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_18 = local_28;
  local_30 = *local_20;
  lVar1 = 0x32;
  puVar2 = local_1c8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_30[local_10] = *(uint *)((long)local_1c8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_30);
  free(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1c8 [50];
  uint *local_38;
  uint *local_30;
  uint *local_28;
  uint **local_20;
  uint **local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_28 = (uint *)malloc(400);
  if (local_28 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_18 = local_28;
  local_30 = *local_20;
  lVar1 = 0x32;
  puVar2 = local_1c8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_30[local_10] = *(uint *)((long)local_1c8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_30);
  free(local_30);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_32_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  undefined8 *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_badData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_badData;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(__dest,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_badData = pvVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_goodG2BData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_goodG2BData;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(__dest,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(200);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54e_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54e_goodG2BSink
               (undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66_bad(void)

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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66b_badSink(local_38);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00406ba6) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_badGlobal = 1;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_goodG2B1Global = 0;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_goodG2B1Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_goodG2B2Global = 1;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_goodG2B2Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64b_badSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  uint **local_10;
  
  local_18 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = ppuParm1;
  memmove(local_18,local_1a8,400);
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64b_goodG2BSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  uint **local_10;
  
  local_18 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = ppuParm1;
  memmove(local_18,local_1a8,400);
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67b_badSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67b_goodG2BSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = pcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67b_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  local_18 = puParm1;
  printIntLine((ulong)*puParm1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67b_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  local_18 = puParm1;
  printIntLine((ulong)*puParm1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_51_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_04_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memcpy(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040727a) */

void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memcpy(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memcpy(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_31_bad(void)

{
  undefined4 local_348 [200];
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_28 = malloc(400);
  if (local_28 == (void *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memcpy(local_28,local_348,800);
  printStructLine(local_28);
  free(local_28);
  return;
}


void goodG2B(void)

{
  undefined4 local_348 [200];
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memcpy(local_28,local_348,800);
  printStructLine(local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_31_good(void)

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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54e_goodG2BSink(uParm1);
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_badGlobal != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_goodG2B1Global == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_goodG2B2Global != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_04_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(0x32);
  if (local_10 != (char *)0x0) {
    *local_10 = 0;
    memset(local_78,0x43,99);
    local_15 = 0;
    snprintf(local_10,100,"%s",local_78);
    printLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004078c3) */

void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 != (char *)0x0) {
    *local_10 = 0;
    memset(local_78,0x43,99);
    local_15 = 0;
    snprintf(local_10,100,"%s",local_78);
    printLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 != (char *)0x0) {
    *local_10 = 0;
    memset(local_78,0x43,99);
    local_15 = 0;
    snprintf(local_10,100,"%s",local_78);
    printLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_31_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_20 = (char *)malloc(0x32);
  if (local_20 == (char *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_18 = local_20;
  local_10 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  snprintf(local_20,100,"%s",local_88);
  printLine(local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  char *local_20;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_20 = (char *)malloc(100);
  if (local_20 == (char *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_18 = local_20;
  local_10 = local_20;
  memset(local_88,0x43,99);
  local_25 = 0;
  snprintf(local_20,100,"%s",local_88);
  printLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
      local_18 = local_18 + 1;
    }
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00407c04) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
      local_18 = local_18 + 1;
    }
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
      local_18 = local_18 + 1;
    }
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51b_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51b_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_67_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_badData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_badData = pvVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_goodG2BData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  free(local_18);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_51_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(400);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(800);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_06_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memmove(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040850f) */

void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memmove(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memmove(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64b_badSink(void **ppvParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  void **local_10;
  
  local_18 = (undefined8 *)*ppvParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = ppvParm1;
  memcpy(local_18,local_338,800);
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64b_goodG2BSink(void **ppvParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  void **local_10;
  
  local_18 = (undefined8 *)*ppvParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = ppvParm1;
  memcpy(local_18,local_338,800);
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(200);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_64_good(void)

{
  goodG2B();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_badGlobal != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_goodG2B1Global == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_goodG2B2Global != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67_bad(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_badSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_11_bad(void)

{
  int iVar1;
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)malloc(0x32);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63_good(void)

{
  goodG2B();
  return;
}


void * badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (badStatic != 0) {
    local_10 = malloc(200);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_21_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  badStatic = 1;
  local_10 = (uint *)badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  goodG2B1Static = 0;
  local_10 = (uint *)goodG2B1Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (goodG2B2Static != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  goodG2B2Static = 1;
  local_10 = (uint *)goodG2B2Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_21_good(void)

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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_08_bad(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 100;
      puVar2 = local_338;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      memmove(local_18,local_338,800);
      printLongLongLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(400);
    if (local_18 == (undefined8 *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 100;
      puVar2 = local_338;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      memmove(local_18,local_338,800);
      printLongLongLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_17_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [100];
  undefined8 *local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(400);
  if (local_28 == (undefined8 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_28;
  local_10 = local_28;
  memcpy(local_28,local_348,800);
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [100];
  undefined8 *local_28;
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(800);
  if (local_28 == (undefined8 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_28;
  local_10 = local_28;
  memcpy(local_28,local_348,800);
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [50];
  uint *local_28;
  uint *local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_28 = (uint *)malloc(200);
  if (local_28 == (uint *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_28;
  local_10 = local_28;
  memcpy(local_28,local_1b8,400);
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [50];
  uint *local_28;
  uint *local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_28 = (uint *)malloc(400);
  if (local_28 == (uint *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_28;
  local_10 = local_28;
  memcpy(local_28,local_1b8,400);
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66b_badSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  local_10 = *(uint **)(lParm1 + 0x10);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66b_goodG2BSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  local_10 = *(uint **)(lParm1 + 0x10);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(400);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(800);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_15_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_42_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = (void *)badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
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
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = (void *)goodG2BSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_15_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(0x32);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(200);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(400);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(400);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53d_goodG2BSink(uParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_08_bad(void)

{
  int iVar1;
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined * badSource(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  return puVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_42_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


undefined * goodG2BSource(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  return puVar1;
}


void goodG2B(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)goodG2BSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54c_goodG2BSink(uParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54e_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54e_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(200);
  if (local_28 == (void *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66b_badSink(local_38);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65b_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65b_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65b_badSink(pvVar1,uParm2,pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61b_badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61b_goodG2BSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_05_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_badSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_10_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_05_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticTrue != 0) {
    local_10 = (char *)malloc(0x32);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFalse == 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticTrue != 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFalse == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_badSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_bad(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_badSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_goodG2BSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void goodG2B(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_badSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_34_bad(void)

{
  undefined4 local_348 [200];
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_28 = malloc(400);
  if (local_28 == (void *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memcpy(local_28,local_348,800);
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  undefined4 local_348 [200];
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memcpy(local_28,local_348,800);
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68b_badSink(void)

{
  uint *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_badData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_badData;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(__dest,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68b_goodG2BSink(void)

{
  uint *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_goodG2BData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_goodG2BData;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(__dest,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_03_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(0x32);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65b_badSink(pvVar1,uParm2,pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_65_good(void)

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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_34_bad(void)

{
  undefined local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_28 = (char *)malloc(0x32);
  if (local_28 == (char *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 0;
  local_18 = local_28;
  local_10 = local_28;
  memset(local_98,0x43,99);
  local_35 = 0;
  snprintf(local_18,100,"%s",local_98);
  printLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  undefined local_98 [99];
  undefined local_35;
  char *local_28;
  char *local_18;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_28 = (char *)malloc(100);
  if (local_28 == (char *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 0;
  local_18 = local_28;
  local_10 = local_28;
  memset(local_98,0x43,99);
  local_35 = 0;
  snprintf(local_18,100,"%s",local_98);
  printLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [50];
  uint *local_28;
  uint *local_20;
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_28 = (uint *)malloc(200);
  if (local_28 == (uint *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_28[local_10] = *(uint *)((long)local_1b8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  printIntLine((ulong)*local_28);
  free(local_20);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [50];
  uint *local_28;
  uint *local_20;
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_28 = (uint *)malloc(400);
  if (local_28 == (uint *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_28[local_10] = *(uint *)((long)local_1b8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  printIntLine((ulong)*local_28);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66b_badSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  local_18 = *(uint **)(lParm1 + 0x10);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66b_goodG2BSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  local_18 = *(uint **)(lParm1 + 0x10);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_15_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(400);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_10_bad(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52c_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52c_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_42_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = (void *)badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
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
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = (void *)goodG2BSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68b_badSink(void)

{
  undefined8 *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_badData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_badData;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(__dest,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68b_goodG2BSink(void)

{
  undefined8 *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_goodG2BData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_goodG2BData;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(__dest,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_badData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68b_badSink();
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_goodG2BData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54e_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54e_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65b_badSink(pvVar1,uParm2,pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54e_badSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54e_goodG2BSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54e_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54e_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66_bad(void)

{
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_10 = (undefined *)0x0;
  local_28 = (undefined *)malloc(0x32);
  if (local_28 == (undefined *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 0;
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined *local_28;
  undefined *local_10;
  
  local_10 = (undefined *)0x0;
  local_28 = (undefined *)malloc(100);
  if (local_28 == (undefined *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 0;
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68b_badSink(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68b_goodG2BSink(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(200);
  if (local_28 == (void *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66b_badSink(local_38);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53d_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53d_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63b_badSink(void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63b_goodG2BSink(void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61b_badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61b_goodG2BSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52c_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52c_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_05_bad(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_badSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_badSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_goodG2BSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_badData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68b_badSink();
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_goodG2BData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_34_bad(void)

{
  undefined8 auStack856 [100];
  void *local_38;
  void *local_28;
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_38 = malloc(400);
  if (local_38 == (void *)0x0) {
    local_20 = local_38;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack856 + local_10) = 0;
    *(undefined4 *)((long)auStack856 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_38) = auStack856[local_18];
    local_18 = local_18 + 1;
  }
  local_28 = local_38;
  local_20 = local_38;
  printStructLine(local_38);
  free(local_28);
  return;
}


void goodG2B(void)

{
  undefined8 auStack856 [100];
  void *local_38;
  void *local_28;
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_38 = malloc(800);
  if (local_38 == (void *)0x0) {
    local_20 = local_38;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack856 + local_10) = 0;
    *(undefined4 *)((long)auStack856 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_38) = auStack856[local_18];
    local_18 = local_18 + 1;
  }
  local_28 = local_38;
  local_20 = local_38;
  printStructLine(local_38);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66b_badSink(long lParm1)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66b_goodG2BSink(long lParm1)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = local_338[local_18];
      local_18 = local_18 + 1;
    }
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040e54b) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = local_338[local_18];
      local_18 = local_18 + 1;
    }
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = local_338[local_18];
      local_18 = local_18 + 1;
    }
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52c_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52c_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_09_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (char *)malloc(0x32);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65b_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_65b_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_badData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68b_badSink();
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_goodG2BData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_03_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54e_badSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54e_goodG2BSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66_bad(void)

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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66b_badSink(local_38);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_66_good(void)

{
  goodG2B();
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_42_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
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
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)goodG2BSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52c_goodG2BSink(uParm1);
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_42_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
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
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)goodG2BSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_42_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1c8 [51];
  uint *local_30;
  uint *local_28;
  uint *local_20;
  uint **local_18;
  uint **local_10;
  
  bVar3 = 0;
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_20 = (uint *)malloc(200);
  if (local_20 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = local_20;
  local_28 = *local_18;
  lVar1 = 0x32;
  puVar2 = local_1c8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_28,local_1c8,400);
  printIntLine((ulong)*local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1c8 [51];
  uint *local_30;
  uint *local_28;
  uint *local_20;
  uint **local_18;
  uint **local_10;
  
  bVar3 = 0;
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_20 = (uint *)malloc(400);
  if (local_20 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = local_20;
  local_28 = *local_18;
  lVar1 = 0x32;
  puVar2 = local_1c8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_28,local_1c8,400);
  printIntLine((ulong)*local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51b_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51b_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67b_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = puParm1;
  memcpy(puParm1,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_67b_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = puParm1;
  memcpy(puParm1,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52c_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_52c_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_badData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68b_badSink();
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_goodG2BData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_51_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00410437) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_12_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  uint *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_badData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_badData;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(__dest,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_badData = pvVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  uint *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_goodG2BData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_goodG2BData;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(__dest,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(200);
  if (local_28 == (void *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66b_badSink(local_38);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00410a0c) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66b_badSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66b_goodG2BSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_05_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_badSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_16_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(0x32);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(400);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(800);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(800);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_10_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_16_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52_bad(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51b_badSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51b_goodG2BSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_42_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
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
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)goodG2BSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51b_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51b_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_34_bad(void)

{
  undefined4 local_348 [200];
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_28 = malloc(400);
  if (local_28 == (void *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memmove(local_28,local_348,800);
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  undefined4 local_348 [200];
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memmove(local_28,local_348,800);
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(200);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(400);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54e_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54e_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66b_badSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66b_goodG2BSink(long lParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *(void **)(lParm1 + 0x10);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66_bad(void)

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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66b_badSink(local_38);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64b_badSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  uint **local_10;
  
  local_18 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = ppuParm1;
  memcpy(local_18,local_1a8,400);
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64b_goodG2BSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  uint **local_10;
  
  local_18 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = ppuParm1;
  memcpy(local_18,local_1a8,400);
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_10_good(void)

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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51_bad(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_51_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_51_good(void)

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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_08_bad(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68b_badSink(void)

{
  undefined8 *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_badData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_badData;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(__dest,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68b_goodG2BSink(void)

{
  undefined8 *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_goodG2BData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_goodG2BData;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(__dest,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54e_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54e_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66_bad(void)

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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66b_badSink(local_38);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_06_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memcpy(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004133b5) */

void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memcpy(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memcpy(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52c_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52c_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(200);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_64_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_badData;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_bad(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_goodG2BData;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_goodG2BData = puVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_45_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  puVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_badData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_badData;
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puVar1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puVar1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_badData = pvVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  puVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_goodG2BData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_goodG2BData;
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puVar1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puVar1);
  free(local_18);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66b_badSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = *(undefined8 **)(lParm1 + 0x10);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66b_goodG2BSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = *(undefined8 **)(lParm1 + 0x10);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_06_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(0x32);
  if (local_10 != (char *)0x0) {
    *local_10 = 0;
    memset(local_78,0x43,99);
    local_15 = 0;
    snprintf(local_10,100,"%s",local_78);
    printLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00413b8a) */

void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 != (char *)0x0) {
    *local_10 = 0;
    memset(local_78,0x43,99);
    local_15 = 0;
    snprintf(local_10,100,"%s",local_78);
    printLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 != (char *)0x0) {
    *local_10 = 0;
    memset(local_78,0x43,99);
    local_15 = 0;
    snprintf(local_10,100,"%s",local_78);
    printLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
      local_18 = local_18 + 1;
    }
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00413d86) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
      local_18 = local_18 + 1;
    }
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
      local_18 = local_18 + 1;
    }
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52c_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52c_goodG2BSink
               (undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51b_badSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51b_goodG2BSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66_bad(void)

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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66b_badSink(local_38);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_badData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68b_badSink();
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_goodG2BData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_16_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(400);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64b_badSink(void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memcpy(local_20,local_348,800);
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64b_goodG2BSink(void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memcpy(local_20,local_348,800);
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54e_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54e_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66_bad(void)

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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66b_badSink(local_38);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64b_badSink(char **ppcParm1)

{
  undefined local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  snprintf(local_18,100,"%s",local_88);
  printLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64b_goodG2BSink(char **ppcParm1)

{
  undefined local_88 [99];
  undefined local_25;
  char *local_18;
  char **local_10;
  
  local_18 = *ppcParm1;
  local_10 = ppcParm1;
  memset(local_88,0x43,99);
  local_25 = 0;
  snprintf(local_18,100,"%s",local_88);
  printLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64b_badSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1b8 [51];
  uint *local_20;
  uint **local_18;
  ulong local_10;
  
  local_20 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_20[local_10] = *(uint *)((long)local_1b8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  local_18 = ppuParm1;
  printIntLine((ulong)*local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64b_goodG2BSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1b8 [51];
  uint *local_20;
  uint **local_18;
  ulong local_10;
  
  local_20 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_20[local_10] = *(uint *)((long)local_1b8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  local_18 = ppuParm1;
  printIntLine((ulong)*local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFalse == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_13_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (char *)malloc(0x32);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_06_bad(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(auStack840 + local_18) = 0;
      *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
      local_18 = local_18 + 1;
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
      local_20 = local_20 + 1;
    }
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004151c7) */

void goodG2B1(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(auStack840 + local_18) = 0;
      *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
      local_18 = local_18 + 1;
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
      local_20 = local_20 + 1;
    }
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(auStack840 + local_18) = 0;
      *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
      local_18 = local_18 + 1;
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
      local_20 = local_20 + 1;
    }
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64_bad(void)

{
  undefined *local_10;
  
  local_10 = (undefined *)0x0;
  local_10 = (undefined *)malloc(0x32);
  if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined *local_10;
  
  local_10 = (undefined *)0x0;
  local_10 = (undefined *)malloc(100);
  if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(200);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1c8 [51];
  uint *local_30;
  uint *local_28;
  uint *local_20;
  uint **local_18;
  uint **local_10;
  
  bVar3 = 0;
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_20 = (uint *)malloc(200);
  if (local_20 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = local_20;
  local_28 = *local_18;
  lVar1 = 0x32;
  puVar2 = local_1c8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_28,local_1c8,400);
  printIntLine((ulong)*local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1c8 [51];
  uint *local_30;
  uint *local_28;
  uint *local_20;
  uint **local_18;
  uint **local_10;
  
  bVar3 = 0;
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_20 = (uint *)malloc(400);
  if (local_20 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = local_20;
  local_28 = *local_18;
  lVar1 = 0x32;
  puVar2 = local_1c8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_28,local_1c8,400);
  printIntLine((ulong)*local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 0x32;
      puVar2 = local_1a8;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      memmove(local_18,local_1a8,400);
      printIntLine((ulong)*local_18);
      free(local_18);
      return;
    }
    local_18 = (uint *)malloc(200);
    if (local_18 == (uint *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 0x32;
      puVar2 = local_1a8;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      memmove(local_18,local_1a8,400);
      printIntLine((ulong)*local_18);
      free(local_18);
      return;
    }
    local_18 = (uint *)malloc(400);
    if (local_18 == (uint *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_17_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67b_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = puParm1;
  memmove(puParm1,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67b_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = puParm1;
  memmove(puParm1,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63b_badSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  local_10 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_63b_goodG2BSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  local_10 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64b_badSink(void **ppvParm1)

{
  undefined8 auStack840 [100];
  void *local_28;
  void **local_20;
  ulong local_18;
  ulong local_10;
  
  local_28 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_28) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  local_20 = ppvParm1;
  printStructLine(local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64b_goodG2BSink(void **ppvParm1)

{
  undefined8 auStack840 [100];
  void *local_28;
  void **local_20;
  ulong local_18;
  ulong local_10;
  
  local_28 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_28) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  local_20 = ppvParm1;
  printStructLine(local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_badData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68b_badSink();
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_goodG2BData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_358 [101];
  void *local_30;
  undefined8 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  bVar3 = 0;
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
  local_28 = (undefined8 *)*local_18;
  lVar1 = 100;
  puVar2 = local_358;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_28,local_358,800);
  printLongLongLine(*local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_358 [101];
  void *local_30;
  undefined8 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  bVar3 = 0;
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
  local_28 = (undefined8 *)*local_18;
  lVar1 = 100;
  puVar2 = local_358;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_28,local_358,800);
  printLongLongLine(*local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51b_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51b_goodG2BSink
               (undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68b_badSink(void)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  puVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_badData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_badData;
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puVar1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puVar1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68b_goodG2BSink(void)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  puVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_goodG2BData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_goodG2BData;
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puVar1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puVar1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_14_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_51_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00416adf) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memcpy(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [101];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_20 = (undefined8 *)malloc(400);
  if (local_20 == (undefined8 *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_20;
  local_10 = local_20;
  memcpy(local_20,local_348,800);
  printLongLongLine(*local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [101];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_20 = (undefined8 *)malloc(800);
  if (local_20 == (undefined8 *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_20;
  local_10 = local_20;
  memcpy(local_20,local_348,800);
  printLongLongLine(*local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_31_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_32_bad(void)

{
  undefined4 local_358 [200];
  void *local_38;
  void *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = (void *)0x0;
  local_28 = (void *)0x0;
  local_28 = malloc(400);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_18 = local_28;
  local_30 = *local_20;
  local_10 = 0;
  while (local_10 < 100) {
    local_358[local_10 * 2] = 0;
    local_358[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_30,local_358,800);
  printStructLine(local_30);
  free(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined4 local_358 [200];
  void *local_38;
  void *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = (void *)0x0;
  local_28 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_18 = local_28;
  local_30 = *local_20;
  local_10 = 0;
  while (local_10 < 100) {
    local_358[local_10 * 2] = 0;
    local_358[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_30,local_358,800);
  printStructLine(local_30);
  free(local_30);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65b_badSink(pvVar1,uParm2,pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67b_badSink(void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memmove(pvParm1,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = pvParm1;
  memmove(pvParm1,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  undefined8 *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_badData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_badData;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(__dest,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_badData = pvVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_goodG2BData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_goodG2BData;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(__dest,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_badSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66b_badSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_66b_goodG2BSink(long lParm1)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *(char **)(lParm1 + 0x10);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004175b6) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_badGlobal = 1;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B1Global = 0;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B1Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B2Global = 1;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B2Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_badGlobal != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_goodG2B1Global == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_goodG2B2Global != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_31_bad(void)

{
  undefined4 local_348 [200];
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_28 = malloc(400);
  if (local_28 == (void *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memmove(local_28,local_348,800);
  printStructLine(local_28);
  free(local_28);
  return;
}


void goodG2B(void)

{
  undefined4 local_348 [200];
  void *local_28;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  memmove(local_28,local_348,800);
  printStructLine(local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63b_badSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  local_18 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_63b_goodG2BSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  local_18 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 0x32;
      puVar2 = local_1a8;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      memcpy(local_18,local_1a8,400);
      printIntLine((ulong)*local_18);
      free(local_18);
      return;
    }
    local_18 = (uint *)malloc(200);
    if (local_18 == (uint *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 0x32;
      puVar2 = local_1a8;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      memcpy(local_18,local_1a8,400);
      printIntLine((ulong)*local_18);
      free(local_18);
      return;
    }
    local_18 = (uint *)malloc(400);
    if (local_18 == (uint *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_17_good(void)

{
  goodG2B();
  return;
}


void badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54e_goodG2BSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_358 [100];
  void *local_38;
  undefined8 *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = (void *)0x0;
  local_28 = (void *)0x0;
  local_28 = malloc(400);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_18 = local_28;
  local_30 = (undefined8 *)*local_20;
  lVar1 = 100;
  puVar2 = local_358;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_30[local_10] = local_358[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_30);
  free(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_358 [100];
  void *local_38;
  undefined8 *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = (void *)0x0;
  local_28 = (void *)0x0;
  local_28 = malloc(800);
  if (local_28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_18 = local_28;
  local_30 = (undefined8 *)*local_20;
  lVar1 = 100;
  puVar2 = local_358;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_30[local_10] = local_358[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_30);
  free(local_30);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65b_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_65b_goodG2BSink
               (undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_63_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_goodG2B1Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_goodG2B2Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64b_badSink(void **ppvParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  void **local_10;
  
  local_18 = (undefined8 *)*ppvParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = ppvParm1;
  memmove(local_18,local_338,800);
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64b_goodG2BSink(void **ppvParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  void **local_10;
  
  local_18 = (undefined8 *)*ppvParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = ppvParm1;
  memmove(local_18,local_338,800);
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_badGlobal != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_goodG2B1Global == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_goodG2B2Global != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63_bad(void)

{
  undefined *local_10;
  
  local_10 = (undefined *)0x0;
  local_10 = (undefined *)malloc(0x32);
  if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined *local_10;
  
  local_10 = (undefined *)0x0;
  local_10 = (undefined *)malloc(100);
  if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63_good(void)

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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53d_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_53d_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_badData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68b_badSink();
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_goodG2BData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [100];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(400);
  if (local_28 == (undefined8 *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_28[local_10] = local_348[local_10];
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  printLongLongLine(*local_28);
  free(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [100];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(800);
  if (local_28 == (undefined8 *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_28[local_10] = local_348[local_10];
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  printLongLongLine(*local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(200);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(400);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(400);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (badStatic != 0) {
    local_10 = malloc(200);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_21_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  badStatic = 1;
  local_10 = (uint *)badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  goodG2B1Static = 0;
  local_10 = (uint *)goodG2B1Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (goodG2B2Static != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  goodG2B2Static = 1;
  local_10 = (uint *)goodG2B2Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61b_badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61b_goodG2BSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_17_bad(void)

{
  undefined4 local_348 [202];
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_20 = 0;
      while (local_20 < 100) {
        local_348[local_20 * 2] = 0;
        local_348[local_20 * 2 + 1] = 0;
        local_20 = local_20 + 1;
      }
      memcpy(local_18,local_348,800);
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = malloc(400);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined4 local_348 [202];
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_20 = 0;
      while (local_20 < 100) {
        local_348[local_20 * 2] = 0;
        local_348[local_20 * 2 + 1] = 0;
        local_20 = local_20 + 1;
      }
      memcpy(local_18,local_348,800);
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_17_good(void)

{
  goodG2B();
  return;
}


void badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_18_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_17_bad(void)

{
  undefined local_88 [99];
  undefined local_25;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_88,0x43,99);
      local_25 = 0;
      snprintf(local_18,100,"%s",local_88);
      printLine(local_18);
      free(local_18);
      return;
    }
    local_18 = (char *)malloc(0x32);
    if (local_18 == (char *)0x0) break;
    *local_18 = 0;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined local_88 [99];
  undefined local_25;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      memset(local_88,0x43,99);
      local_25 = 0;
      snprintf(local_18,100,"%s",local_88);
      printLine(local_18);
      free(local_18);
      return;
    }
    local_18 = (char *)malloc(100);
    if (local_18 == (char *)0x0) break;
    *local_18 = 0;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_17_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [51];
  ulong local_20;
  uint *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 0x32;
      puVar2 = local_1b8;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      local_20 = 0;
      while (local_20 < 100) {
        local_18[local_20] = *(uint *)((long)local_1b8 + local_20 * 4);
        local_20 = local_20 + 1;
      }
      printIntLine((ulong)*local_18);
      free(local_18);
      return;
    }
    local_18 = (uint *)malloc(200);
    if (local_18 == (uint *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [51];
  ulong local_20;
  uint *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 0x32;
      puVar2 = local_1b8;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      local_20 = 0;
      while (local_20 < 100) {
        local_18[local_20] = *(uint *)((long)local_1b8 + local_20 * 4);
        local_20 = local_20 + 1;
      }
      printIntLine((ulong)*local_18);
      free(local_18);
      return;
    }
    local_18 = (uint *)malloc(400);
    if (local_18 == (uint *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_17_good(void)

{
  goodG2B();
  return;
}


void badSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2BSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  goodG2BSink(puVar1,uParm2,puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_44_good(void)

{
  goodG2B();
  return;
}


void badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_44_good(void)

{
  goodG2B();
  return;
}


void * badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (badStatic != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_21_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (goodG2B2Static != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [100];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(400);
  if (local_28 == (undefined8 *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_28[local_10] = local_348[local_10];
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  printLongLongLine(*local_28);
  free(local_20);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [100];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(800);
  if (local_28 == (undefined8 *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_28[local_10] = local_348[local_10];
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  printLongLongLine(*local_28);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_badGlobal = 1;
  local_18 = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_goodG2B1Global = 0;
  local_18 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_goodG2B1Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_goodG2B2Global = 1;
  local_18 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_goodG2B2Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61b_badSource(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  return puVar1;
}


undefined * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61b_goodG2BSource(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  return puVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (badStatic != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_21_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  badStatic = 1;
  local_18 = (void *)badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  goodG2B1Static = 0;
  local_18 = (void *)goodG2B1Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (goodG2B2Static != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  goodG2B2Static = 1;
  local_18 = (void *)goodG2B2Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61b_badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61b_goodG2BSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61b_badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61b_goodG2BSource(0)
  ;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65b_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65b_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_18_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_13_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61b_badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61b_goodG2BSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_07_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67b_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  local_18 = puParm1;
  printLongLongLine(*puParm1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67b_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  local_18 = puParm1;
  printLongLongLine(*puParm1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_17_bad(void)

{
  undefined8 auStack840 [100];
  ulong local_28;
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_20 = 0;
      while (local_20 < 100) {
        *(undefined4 *)(auStack840 + local_20) = 0;
        *(undefined4 *)((long)auStack840 + local_20 * 8 + 4) = 0;
        local_20 = local_20 + 1;
      }
      local_28 = 0;
      while (local_28 < 100) {
        *(undefined8 *)(local_28 * 8 + (long)local_18) = auStack840[local_28];
        local_28 = local_28 + 1;
      }
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = malloc(400);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined8 auStack840 [100];
  ulong local_28;
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_20 = 0;
      while (local_20 < 100) {
        *(undefined4 *)(auStack840 + local_20) = 0;
        *(undefined4 *)((long)auStack840 + local_20 * 8 + 4) = 0;
        local_20 = local_20 + 1;
      }
      local_28 = 0;
      while (local_28 < 100) {
        *(undefined8 *)(local_28 * 8 + (long)local_18) = auStack840[local_28];
        local_28 = local_28 + 1;
      }
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_17_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53d_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_53d_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_12_bad(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_07_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFive == 5) {
    local_10 = (char *)malloc(0x32);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFive == 5) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (staticFive == 5) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodG2BSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63b_badSink(void **ppvParm1)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_63b_goodG2BSink(void **ppvParm1)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041d20d) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_338,800);
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63b_badSink(void **ppvParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)*ppvParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63b_goodG2BSink(void **ppvParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)*ppvParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void * badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (badStatic != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_21_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  badStatic = 1;
  local_18 = (undefined8 *)badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  goodG2B1Static = 0;
  local_18 = (undefined8 *)goodG2B1Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (goodG2B2Static != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  goodG2B2Static = 1;
  local_18 = (undefined8 *)goodG2B2Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(400);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(800);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(800);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_03_good(void)

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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_08_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(400);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(800);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53d_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_53d_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_02_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54c_goodG2BSink(uParm1);
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_42_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
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
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)goodG2BSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_01_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_07_bad(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65b_badSink(pvVar1,uParm2,pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_badData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68b_badSink();
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_goodG2BData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(400);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(800);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)malloc(800);
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFalse == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined *
CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_badSource(undefined *puParm1)

{
  undefined *local_10;
  
  local_10 = puParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_badGlobal != 0) {
    local_10 = (undefined *)malloc(0x32);
    if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  return local_10;
}


undefined *
CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B1Source(undefined *puParm1)

{
  undefined *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B1Global == 0) {
    local_10 = (undefined *)malloc(100);
    if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_10 = puParm1;
  }
  return local_10;
}


undefined *
CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B2Source(undefined *puParm1)

{
  undefined *local_10;
  
  local_10 = puParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B2Global != 0) {
    local_10 = (undefined *)malloc(100);
    if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_badGlobal != 0) {
    local_10 = malloc(200);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_goodG2B1Global == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_goodG2B2Global != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_04_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memmove(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041f598) */

void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memmove(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 0;
      local_338[local_18 * 2 + 1] = 0;
      local_18 = local_18 + 1;
    }
    memmove(local_10,local_338,800);
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_14_bad(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67b_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = puParm1;
  memcpy(puParm1,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_67b_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = puParm1;
  memcpy(puParm1,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_badGlobal = 1;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_goodG2B1Global = 0;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_goodG2B1Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_goodG2B2Global = 1;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_goodG2B2Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64b_badSink(void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memmove(local_20,local_348,800);
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64b_goodG2BSink(void **ppvParm1)

{
  undefined4 local_348 [202];
  void *local_20;
  void **local_18;
  ulong local_10;
  
  local_20 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 0;
    local_348[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  local_18 = ppvParm1;
  memmove(local_20,local_348,800);
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67b_badSink(void *pvParm1)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  local_20 = pvParm1;
  printStructLine(pvParm1);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67b_goodG2BSink(void *pvParm1)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  local_20 = pvParm1;
  printStructLine(pvParm1);
  free(local_20);
  return;
}


void badSink(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  puVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_badData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_badData;
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puVar1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puVar1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_badData = pvVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  puVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_goodG2BData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_goodG2BData;
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puVar1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puVar1);
  free(local_18);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63b_badSink(char **ppcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_63b_goodG2BSink(char **ppcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = *ppcParm1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_06_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = local_338[local_18];
      local_18 = local_18 + 1;
    }
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00420421) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = local_338[local_18];
      local_18 = local_18 + 1;
    }
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 != (undefined8 *)0x0) {
    lVar1 = 100;
    puVar2 = local_338;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = local_338[local_18];
      local_18 = local_18 + 1;
    }
    printLongLongLine(*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_badGlobal = 1;
  local_10 = (char *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B1Global = 0;
  local_10 = (char *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B1Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B2Global = 1;
  local_10 = (char *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_goodG2B2Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_badGlobal = 1;
  local_18 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_goodG2B1Global = 0;
  local_18 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_goodG2B1Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_goodG2B2Global = 1;
  local_18 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_goodG2B2Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66b_badSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  local_10 = *(uint **)(lParm1 + 0x10);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_66b_goodG2BSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  local_10 = *(uint **)(lParm1 + 0x10);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66b_badSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  local_10 = *(undefined8 **)(lParm1 + 0x10);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_66b_goodG2BSink(long lParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  local_10 = *(undefined8 **)(lParm1 + 0x10);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_04_bad(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(auStack840 + local_18) = 0;
      *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
      local_18 = local_18 + 1;
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
      local_20 = local_20 + 1;
    }
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00420ba1) */

void goodG2B1(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(auStack840 + local_18) = 0;
      *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
      local_18 = local_18 + 1;
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
      local_20 = local_20 + 1;
    }
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(800);
  if (local_10 != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(auStack840 + local_18) = 0;
      *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
      local_18 = local_18 + 1;
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
      local_20 = local_20 + 1;
    }
    printStructLine(local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_31_bad(void)

{
  undefined8 auStack856 [101];
  void *local_30;
  void *local_28;
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_30 = malloc(400);
  if (local_30 == (void *)0x0) {
    local_20 = local_30;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack856 + local_10) = 0;
    *(undefined4 *)((long)auStack856 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_30) = auStack856[local_18];
    local_18 = local_18 + 1;
  }
  local_28 = local_30;
  local_20 = local_30;
  printStructLine(local_30);
  free(local_30);
  return;
}


void goodG2B(void)

{
  undefined8 auStack856 [101];
  void *local_30;
  void *local_28;
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_30 = malloc(800);
  if (local_30 == (void *)0x0) {
    local_20 = local_30;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack856 + local_10) = 0;
    *(undefined4 *)((long)auStack856 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_30) = auStack856[local_18];
    local_18 = local_18 + 1;
  }
  local_28 = local_30;
  local_20 = local_30;
  printStructLine(local_30);
  free(local_30);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54e_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_54e_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_13_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_67_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  void *pvVar1;
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  pvVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_badData;
  local_20 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_badData;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvVar1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvVar1);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_badData = pvVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  void *pvVar1;
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  pvVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_goodG2BData;
  local_20 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvVar1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvVar1);
  free(local_20);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65b_badSink(pvVar1,uParm2,pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(200);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54c_goodG2BSink(uParm1);
  return;
}


void * badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (badStatic != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_21_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  badStatic = 1;
  local_18 = (void *)badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  goodG2B1Static = 0;
  local_18 = (void *)goodG2B1Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (goodG2B2Static != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  goodG2B2Static = 1;
  local_18 = (void *)goodG2B2Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_03_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63b_badSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  local_10 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_63b_goodG2BSink(uint **ppuParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  local_10 = *ppuParm1;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFalse == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined * badSource(undefined *puParm1)

{
  undefined *local_10;
  
  local_10 = puParm1;
  if (badStatic != 0) {
    local_10 = (undefined *)malloc(0x32);
    if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_21_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  badStatic = 1;
  local_10 = (char *)badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


undefined * goodG2B1Source(undefined *puParm1)

{
  undefined *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = (undefined *)malloc(100);
    if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
    local_10 = puParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  goodG2B1Static = 0;
  local_10 = (char *)goodG2B1Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


undefined * goodG2B2Source(undefined *puParm1)

{
  undefined *local_10;
  
  local_10 = puParm1;
  if (goodG2B2Static != 0) {
    local_10 = (undefined *)malloc(100);
    if (local_10 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  return local_10;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  goodG2B2Static = 1;
  local_10 = (char *)goodG2B2Source(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (badStatic != 0) {
    local_10 = malloc(200);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_21_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  badStatic = 1;
  local_18 = (uint *)badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  goodG2B1Static = 0;
  local_18 = (uint *)goodG2B1Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (goodG2B2Static != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  goodG2B2Static = 1;
  local_18 = (uint *)goodG2B2Source(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_03_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(200);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(400);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(400);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_badGlobal = 1;
  local_20 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_goodG2B1Global = 0;
  local_20 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_goodG2B1Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_goodG2B2Global = 1;
  local_20 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_goodG2B2Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_14_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_32_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_358 [101];
  void *local_30;
  undefined8 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  bVar3 = 0;
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
  local_28 = (undefined8 *)*local_18;
  lVar1 = 100;
  puVar2 = local_358;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_28,local_358,800);
  printLongLongLine(*local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_358 [101];
  void *local_30;
  undefined8 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  bVar3 = 0;
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
  local_28 = (undefined8 *)*local_18;
  lVar1 = 100;
  puVar2 = local_358;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_28,local_358,800);
  printLongLongLine(*local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_18_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(0x32);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(200);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(400);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53d_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53d_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_12_bad(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_04_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004235e8) */

void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 != (uint *)0x0) {
    lVar1 = 0x32;
    puVar2 = local_1a8;
    while (lVar1 != 0) {
      lVar1 = lVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
    }
    memmove(local_10,local_1a8,400);
    printIntLine((ulong)*local_10);
    free(local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67b_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = puParm1;
  memmove(puParm1,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_67b_goodG2BSink
               (undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = puParm1;
  memmove(puParm1,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63b_badSink(void **ppvParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)*ppvParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_63b_goodG2BSink(void **ppvParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)*ppvParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_12_bad(void)

{
  int iVar1;
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    local_10 = (char *)malloc(0x32);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52c_badSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52c_goodG2BSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_13_bad(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64b_badSink(long *plParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_348 [101];
  undefined8 *local_20;
  long *local_18;
  ulong local_10;
  
  local_20 = (undefined8 *)*plParm1;
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_20[local_10] = local_348[local_10];
    local_10 = local_10 + 1;
  }
  local_18 = plParm1;
  printLongLongLine(*local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64b_goodG2BSink(long *plParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_348 [101];
  undefined8 *local_20;
  long *local_18;
  ulong local_10;
  
  local_20 = (undefined8 *)*plParm1;
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_20[local_10] = local_348[local_10];
    local_10 = local_10 + 1;
  }
  local_18 = plParm1;
  printLongLongLine(*local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [101];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_20 = (undefined8 *)malloc(400);
  if (local_20 == (undefined8 *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_20;
  local_10 = local_20;
  memmove(local_20,local_348,800);
  printLongLongLine(*local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [101];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_20 = (undefined8 *)malloc(800);
  if (local_20 == (undefined8 *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_348;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_20;
  local_10 = local_20;
  memmove(local_20,local_348,800);
  printLongLongLine(*local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_11_bad(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_02_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_02_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(0x32);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63b_badSink(void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63b_goodG2BSink(void **ppvParm1)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = *ppvParm1;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void * badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (badStatic != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_21_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  badStatic = 1;
  local_20 = (void *)badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  goodG2B1Static = 0;
  local_20 = (void *)goodG2B1Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (goodG2B2Static != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  goodG2B2Static = 1;
  local_20 = (void *)goodG2B2Source(0);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_03_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(400);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_badGlobal != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_goodG2B1Global == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_goodG2B2Global != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_10_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalTrue != 0) {
    local_10 = (char *)malloc(0x32);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalFalse == 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  if (globalTrue != 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalFalse == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (globalTrue != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_18_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(400);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65b_badSink(pvVar1,uParm2,pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_01_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [51];
  uint *local_20;
  uint *local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_20 = (uint *)malloc(200);
  if (local_20 == (uint *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_20;
  local_10 = local_20;
  memmove(local_20,local_1b8,400);
  printIntLine((ulong)*local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [51];
  uint *local_20;
  uint *local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_20 = (uint *)malloc(400);
  if (local_20 == (uint *)0x0) {
    local_10 = local_20;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_20;
  local_10 = local_20;
  memmove(local_20,local_1b8,400);
  printIntLine((ulong)*local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53d_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53d_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_44_good(void)

{
  goodG2B();
  return;
}


void badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [101];
  ulong local_10;
  
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puParm1);
  free(puParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_01_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(0x32);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)malloc(100);
  if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(200);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_18 = (uint *)malloc(400);
  if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53d_badSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53d_goodG2BSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53d_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53d_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_63_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_12_bad(void)

{
  int iVar1;
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_badGlobal = 1;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_goodG2B1Global = 0;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_goodG2B1Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_goodG2B2Global = 1;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_goodG2B2Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_13_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63b_badSink(long *plParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = (undefined8 *)*plParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63b_goodG2BSink(long *plParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = (undefined8 *)*plParm1;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_09_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memcpy(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 100;
      puVar2 = local_338;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      memcpy(local_18,local_338,800);
      printLongLongLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(400);
    if (local_18 == (undefined8 *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 100;
      puVar2 = local_338;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      memcpy(local_18,local_338,800);
      printLongLongLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_17_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51b_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_51b_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_44_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_63_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54e_goodG2BSink(uParm1);
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


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_08_bad(void)

{
  int iVar1;
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)malloc(0x32);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  else {
    printLine("Benign, fixed string");
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (char *)malloc(100);
    if (local_10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_09_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [50];
  ulong local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = *(uint *)((long)local_1a8 + local_18 * 4);
    local_18 = local_18 + 1;
  }
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_11_bad(void)

{
  int iVar1;
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_02_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(400);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_32_bad(void)

{
  undefined8 auStack872 [101];
  void *local_40;
  void *local_38;
  void *local_30;
  void **local_28;
  void **local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = &local_40;
  local_28 = &local_40;
  local_40 = (void *)0x0;
  local_30 = (void *)0x0;
  local_30 = malloc(400);
  if (local_30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = local_30;
  local_38 = *local_28;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack872 + local_10) = 0;
    *(undefined4 *)((long)auStack872 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_38) = auStack872[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_38);
  free(local_38);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 auStack872 [101];
  void *local_40;
  void *local_38;
  void *local_30;
  void **local_28;
  void **local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = &local_40;
  local_28 = &local_40;
  local_40 = (void *)0x0;
  local_30 = (void *)0x0;
  local_30 = malloc(800);
  if (local_30 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = local_30;
  local_38 = *local_28;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack872 + local_10) = 0;
    *(undefined4 *)((long)auStack872 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_38) = auStack872[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_38);
  free(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61b_badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61b_goodG2BSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_61_good(void)

{
  goodG2B();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_badGlobal = 1;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_goodG2B1Global = 0;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_goodG2B1Source(0)
  ;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_goodG2B2Global = 1;
  local_18 = (void *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_goodG2B2Source(0)
  ;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(400);
  if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63b_badSink(&local_10);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_63_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_17_bad(void)

{
  undefined4 local_348 [202];
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_20 = 0;
      while (local_20 < 100) {
        local_348[local_20 * 2] = 0;
        local_348[local_20 * 2 + 1] = 0;
        local_20 = local_20 + 1;
      }
      memmove(local_18,local_348,800);
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = malloc(400);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined4 local_348 [202];
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_20 = 0;
      while (local_20 < 100) {
        local_348[local_20 * 2] = 0;
        local_348[local_20 * 2 + 1] = 0;
        local_20 = local_20 + 1;
      }
      memmove(local_18,local_348,800);
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_17_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53d_goodG2BSink(uParm1);
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_badGlobal != 0) {
    local_10 = malloc(200);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B1Global == 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_22_goodG2B2Global != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFive == 5) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_01_bad(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(400);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void goodG2B(void)

{
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_20 = malloc(800);
  if (local_20 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)local_20) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(local_20);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53d_badSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53d_goodG2BSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65b_badSink(pvVar1,uParm2,pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65_good(void)

{
  goodG2B();
  return;
}


void * badSource(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (badStatic != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_21_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  badStatic = 1;
  local_10 = (undefined8 *)badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void * goodG2B1Source(void *pvParm1)

{
  void *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
    local_10 = pvParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  goodG2B1Static = 0;
  local_10 = (undefined8 *)goodG2B1Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void * goodG2B2Source(void *pvParm1)

{
  void *local_10;
  
  local_10 = pvParm1;
  if (goodG2B2Static != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  return local_10;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  goodG2B2Static = 1;
  local_10 = (undefined8 *)goodG2B2Source(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61b_badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61b_goodG2BSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_61_good(void)

{
  goodG2B();
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_51_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_18_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68b_badSink(void)

{
  uint *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_badData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_badData;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(__dest,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68b_goodG2BSink(void)

{
  uint *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_goodG2BData;
  local_10 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_goodG2BData;
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(__dest,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54_bad(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_09_bad(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 auStack840 [101];
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(auStack840 + local_18) = 0;
    *(undefined4 *)((long)auStack840 + local_18 * 8 + 4) = 0;
    local_18 = local_18 + 1;
  }
  local_20 = 0;
  while (local_20 < 100) {
    *(undefined8 *)(local_20 * 8 + (long)local_10) = auStack840[local_20];
    local_20 = local_20 + 1;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_17_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [101];
  ulong local_20;
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 100;
      puVar2 = local_348;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      local_20 = 0;
      while (local_20 < 100) {
        local_18[local_20] = local_348[local_20];
        local_20 = local_20 + 1;
      }
      printLongLongLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(400);
    if (local_18 == (undefined8 *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_348 [101];
  ulong local_20;
  undefined8 *local_18;
  int local_c;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      lVar1 = 100;
      puVar2 = local_348;
      while (lVar1 != 0) {
        lVar1 = lVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
      }
      local_20 = 0;
      while (local_20 < 100) {
        local_18[local_20] = local_348[local_20];
        local_20 = local_20 + 1;
      }
      printLongLongLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) break;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_17_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65b_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65b_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65b_badSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65b_goodG2BSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65b_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_65b_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar4 = 0;
  local_10 = (uint *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 0x32;
  puVar3 = local_1a8;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_10_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68b_badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_badData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68b_goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_goodG2BData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_68_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(__dest,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void * CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61b_goodG2BSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_badData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68b_badSink();
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_goodG2BData = pvVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_11_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar4 = 0;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_02_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65b_badSink(pvVar1,uParm2,pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61_bad(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61b_badSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  undefined local_78 [99];
  undefined local_15;
  char *local_10;
  
  local_10 = (char *)0x0;
  local_10 = (char *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61b_goodG2BSource(0);
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_10,100,"%s",local_78);
  printLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65b_badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65b_goodG2BSink(puVar1,uParm2,puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61b_badSource(0)
  ;
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (undefined8 *)0x0;
  local_18 = (undefined8 *)
             CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61b_goodG2BSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_18[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68b_badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_badData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(__dest,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68b_goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_goodG2BData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_68_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(__dest,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_54_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_badData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_badData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(__dest,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_badData = pvVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  void *__dest;
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  __dest = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_goodG2BData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(__dest,local_338,800);
  printStructLine(local_18);
  free(local_18);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_01_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53d_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_53d_goodG2BSink
               (undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_07_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [100];
  ulong local_18;
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_10[local_18] = local_338[local_18];
    local_18 = local_18 + 1;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_09_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65b_badSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_65b_goodG2BSink(void *pvParm1)

{
  undefined8 auStack824 [100];
  ulong local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack824 + local_10) = 0;
    *(undefined4 *)((long)auStack824 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvParm1) = auStack824[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_52c_goodG2BSink(uParm1);
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_42_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)badSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
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
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)goodG2BSource(0);
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52c_badSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_52c_goodG2BSink(void *pvParm1)

{
  undefined4 local_338 [202];
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memcpy(pvParm1,local_338,800);
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65b_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_65b_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52c_badSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_52c_goodG2BSink(char *pcParm1)

{
  undefined local_78 [99];
  undefined local_15;
  
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(pcParm1,100,"%s",local_78);
  printLine(pcParm1);
  free(pcParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52c_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_52c_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_1a8 [51];
  ulong local_10;
  
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puParm1[local_10] = *(uint *)((long)local_1a8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_bad(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_badData = puVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_goodG2BData = puVar1;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_15_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(400);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(800);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memcpy_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_10 = (uint *)malloc(200);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticFalse == 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  if (staticTrue != 0) {
    local_10 = (uint *)malloc(400);
    if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memmove(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_42_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)badSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
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
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)goodG2BSource(0);
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51b_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51b_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_badSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_badSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_goodG2BSink(uint *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_198 [50];
  
  lVar1 = 0x32;
  puVar2 = local_198;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memmove(puParm1,local_198,400);
  printIntLine((ulong)*puParm1);
  free(puParm1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_16_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(200);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1a8 [51];
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_10 = (uint *)malloc(400);
  if (local_10 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1a8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_1a8,400);
  printIntLine((ulong)*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53_bad(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(0x32);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)malloc(100);
  if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_snprintf_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68b_badSink(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  puVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_badData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_badData;
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puVar1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puVar1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68b_goodG2BSink(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_338 [100];
  undefined8 *local_18;
  ulong local_10;
  
  puVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_goodG2BData;
  local_18 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_68_goodG2BData;
  lVar2 = 100;
  puVar3 = local_338;
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    puVar1[local_10] = local_338[local_10];
    local_10 = local_10 + 1;
  }
  printLongLongLine(*puVar1);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [50];
  uint *local_28;
  uint *local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_28 = (uint *)malloc(200);
  if (local_28 == (uint *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_28;
  local_10 = local_28;
  memmove(local_28,local_1b8,400);
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [50];
  uint *local_28;
  uint *local_18;
  uint *local_10;
  
  bVar3 = 0;
  local_10 = (uint *)0x0;
  local_28 = (uint *)malloc(400);
  if (local_28 == (uint *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_18 = local_28;
  local_10 = local_28;
  memmove(local_28,local_1b8,400);
  printIntLine((ulong)*local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memmove_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_31_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [50];
  uint *local_28;
  uint *local_20;
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_28 = (uint *)malloc(200);
  if (local_28 == (uint *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_28[local_10] = *(uint *)((long)local_1b8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  printIntLine((ulong)*local_28);
  free(local_28);
  return;
}


void goodG2B(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_1b8 [50];
  uint *local_28;
  uint *local_20;
  uint *local_18;
  ulong local_10;
  
  bVar3 = 0;
  local_18 = (uint *)0x0;
  local_28 = (uint *)malloc(400);
  if (local_28 == (uint *)0x0) {
    local_18 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  lVar1 = 0x32;
  puVar2 = local_1b8;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_28[local_10] = *(uint *)((long)local_1b8 + local_10 * 4);
    local_10 = local_10 + 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  printIntLine((ulong)*local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_loop_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68b_badSink(void)

{
  void *pvVar1;
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  pvVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_badData;
  local_20 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_badData;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvVar1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvVar1);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68b_goodG2BSink(void)

{
  void *pvVar1;
  undefined8 auStack840 [101];
  void *local_20;
  ulong local_18;
  ulong local_10;
  
  pvVar1 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_goodG2BData;
  local_20 = CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_68_goodG2BData;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(auStack840 + local_10) = 0;
    *(undefined4 *)((long)auStack840 + local_10 * 8 + 4) = 0;
    local_10 = local_10 + 1;
  }
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(local_18 * 8 + (long)pvVar1) = auStack840[local_18];
    local_18 = local_18 + 1;
  }
  printStructLine(pvVar1);
  free(local_20);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_11_bad(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_07_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(400);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  ulong local_18;
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
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 0;
    local_338[local_18 * 2 + 1] = 0;
    local_18 = local_18 + 1;
  }
  memmove(local_10,local_338,800);
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_15_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(400);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_05_bad(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(400);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_338 [101];
  undefined8 *local_10;
  
  bVar3 = 0;
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  lVar1 = 100;
  puVar2 = local_338;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + (ulong)bVar3 * 0x1ffffffffffffffe + 1;
  }
  memcpy(local_10,local_338,800);
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(200);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int_memcpy_51_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_badSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_badSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_goodG2BSink(undefined8 *puParm1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_328 [100];
  
  lVar1 = 100;
  puVar2 = local_328;
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  memcpy(puParm1,local_328,800);
  printLongLongLine(*puParm1);
  free(puParm1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memcpy_41_good(void)

{
  goodG2B();
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return pvVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_42_bad(void)

{
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = (void *)badSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
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
  undefined4 local_338 [200];
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_18 = (void *)goodG2BSource(0);
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 0;
    local_338[local_10 * 2 + 1] = 0;
    local_10 = local_10 + 1;
  }
  memmove(local_18,local_338,800);
  printStructLine(local_18);
  free(local_18);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54b_badSink(pvVar1);
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
  CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54b_goodG2BSink(pvVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_memmove_54_good(void)

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
  printf((char *)(double)fParm1,&DAT_0043d885);
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
  printf(pcParm1,&DAT_0043d8a2);
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
    __isoc99_sscanf(lVar1,&DAT_0043d8b0,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0043d8b8,&local_14);
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

