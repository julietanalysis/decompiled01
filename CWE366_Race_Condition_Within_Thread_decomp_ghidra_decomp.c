
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0060cff8;
  if (PTR___gmon_start___0060cff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_004008d0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0060d010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0060d018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0060d020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0060d028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0060d030)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0060d038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0060d040)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0060d048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0060d050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0060d058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0060d060)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0060d068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0060d070)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0060d078)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0060d080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0060d088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0060d090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0060d098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0060d0a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0060d0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0060d0b0)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0060cff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400a77) */
/* WARNING: Removing unreachable block (ram,0x00400a81) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400ab4) */
/* WARNING: Removing unreachable block (ram,0x00400abe) */

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


/* WARNING: Removing unreachable block (ram,0x00400b04) */
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
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_14_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_14_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_08_good();");
  CWE366_Race_Condition_Within_Thread__global_int_08_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_02_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_02_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_03_good();");
  CWE366_Race_Condition_Within_Thread__global_int_03_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_04_good();");
  CWE366_Race_Condition_Within_Thread__global_int_04_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_10_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_10_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_16_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_16_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_07_good();");
  CWE366_Race_Condition_Within_Thread__global_int_07_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_01_good();");
  CWE366_Race_Condition_Within_Thread__global_int_01_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_03_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_03_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_13_good();");
  CWE366_Race_Condition_Within_Thread__global_int_13_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_11_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_11_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_10_good();");
  CWE366_Race_Condition_Within_Thread__global_int_10_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_06_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_06_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_09_good();");
  CWE366_Race_Condition_Within_Thread__global_int_09_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_01_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_01_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_17_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_17_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_13_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_13_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_06_good();");
  CWE366_Race_Condition_Within_Thread__global_int_06_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_12_good();");
  CWE366_Race_Condition_Within_Thread__global_int_12_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_08_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_08_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_12_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_12_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_18_good();");
  CWE366_Race_Condition_Within_Thread__global_int_18_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_15_good();");
  CWE366_Race_Condition_Within_Thread__global_int_15_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_17_good();");
  CWE366_Race_Condition_Within_Thread__global_int_17_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_07_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_07_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_02_good();");
  CWE366_Race_Condition_Within_Thread__global_int_02_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_05_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_05_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_11_good();");
  CWE366_Race_Condition_Within_Thread__global_int_11_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_14_good();");
  CWE366_Race_Condition_Within_Thread__global_int_14_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_05_good();");
  CWE366_Race_Condition_Within_Thread__global_int_05_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_04_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_04_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_15_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_15_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_09_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_09_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_16_good();");
  CWE366_Race_Condition_Within_Thread__global_int_16_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_18_good();");
  CWE366_Race_Condition_Within_Thread__int_byref_18_good();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_14_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_14_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_08_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_08_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_02_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_02_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_03_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_03_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_04_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_04_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_10_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_10_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_16_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_16_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_07_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_07_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_01_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_01_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_03_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_03_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_13_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_13_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_11_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_11_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_10_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_10_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_06_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_06_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_09_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_09_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_01_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_01_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_17_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_17_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_13_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_13_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_06_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_06_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_12_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_12_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_08_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_08_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_12_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_12_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_18_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_18_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_15_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_15_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_17_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_17_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_07_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_07_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_02_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_02_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_05_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_05_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_11_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_11_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_14_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_14_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_05_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_05_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_04_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_04_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_15_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_15_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_09_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_09_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__global_int_16_bad();");
  CWE366_Race_Condition_Within_Thread__global_int_16_bad();
  printLine("Calling CWE366_Race_Condition_Within_Thread__int_byref_18_bad();");
  CWE366_Race_Condition_Within_Thread__int_byref_18_bad();
  return 0;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_03_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  gBadInt = 0;
  iVar1 = stdThreadCreate(helperBad,0,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,0,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)gBadInt);
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_03_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_10_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (globalTrue != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)local_1c);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (globalFalse == 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (globalTrue != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_10_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_14_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (globalFive == 5) {
    local_10 = 0;
    local_18 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)gBadInt);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (globalFive == 5) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (globalFive == 5) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_14_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_01_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  gBadInt = 0;
  iVar1 = stdThreadCreate(helperBad,0,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,0,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)gBadInt);
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_01_good(void)

{
  good1();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_18_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  gBadInt = 0;
  iVar1 = stdThreadCreate(helperBad,0,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,0,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)gBadInt);
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_18_good(void)

{
  good1();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_09_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0;
    local_18 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)gBadInt);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_09_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_14_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (globalFive == 5) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)local_1c);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (globalFive == 5) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (globalFive == 5) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_14_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_01_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)local_1c);
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_01_good(void)

{
  good1();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_18_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)local_1c);
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_18_good(void)

{
  good1();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_06_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
    stdThreadDestroy(local_10);
  }
  if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
    stdThreadDestroy(local_18);
  }
  printIntLine((ulong)local_1c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402b16) */

void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
      stdThreadDestroy(local_10);
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
      stdThreadDestroy(local_10);
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_06_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_12_bad(void)

{
  int iVar1;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0;
    local_28 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_20);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_28);
      if (iVar1 == 0) {
        local_28 = 0;
      }
      if (local_20 != 0) {
        iVar1 = stdThreadJoin(local_20);
        if (iVar1 != 0) {
          stdThreadDestroy(local_20);
        }
      }
      if (local_28 != 0) {
        iVar1 = stdThreadJoin(local_28);
        if (iVar1 != 0) {
          stdThreadDestroy(local_28);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    local_10 = 0;
    local_18 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)gBadInt);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_20 = 0;
    local_28 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_20);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_28);
      if (iVar1 == 0) {
        local_28 = 0;
      }
      if (local_20 != 0) {
        iVar1 = stdThreadJoin(local_20);
        if (iVar1 != 0) {
          stdThreadDestroy(local_20);
        }
      }
      if (local_28 != 0) {
        iVar1 = stdThreadJoin(local_28);
        if (iVar1 != 0) {
          stdThreadDestroy(local_28);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_12_good(void)

{
  good1();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_07_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (staticFive == 5) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)local_1c);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (staticFive == 5) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (staticFive == 5) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_07_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_12_bad(void)

{
  int iVar1;
  uint local_34;
  long local_30;
  long local_28;
  uint local_1c;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_28 = 0;
    local_30 = 0;
    local_34 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_34,&local_28);
      if (iVar1 == 0) {
        local_28 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_34,&local_30);
      if (iVar1 == 0) {
        local_30 = 0;
      }
      if (local_28 != 0) {
        iVar1 = stdThreadJoin(local_28);
        if (iVar1 != 0) {
          stdThreadDestroy(local_28);
        }
      }
      if (local_30 != 0) {
        iVar1 = stdThreadJoin(local_30);
        if (iVar1 != 0) {
          stdThreadDestroy(local_30);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_34);
    }
  }
  else {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)local_1c);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_34;
  long local_30;
  long local_28;
  uint local_1c;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_28 = 0;
    local_30 = 0;
    local_34 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_34,&local_28);
      if (iVar1 == 0) {
        local_28 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_34,&local_30);
      if (iVar1 == 0) {
        local_30 = 0;
      }
      if (local_28 != 0) {
        iVar1 = stdThreadJoin(local_28);
        if (iVar1 != 0) {
          stdThreadDestroy(local_28);
        }
      }
      if (local_30 != 0) {
        iVar1 = stdThreadJoin(local_30);
        if (iVar1 != 0) {
          stdThreadDestroy(local_30);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_34);
    }
  }
  else {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_12_good(void)

{
  good1();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_06_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  gBadInt = 0;
  iVar1 = stdThreadCreate(helperBad,0,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,0,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
    stdThreadDestroy(local_10);
  }
  if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
    stdThreadDestroy(local_18);
  }
  printIntLine((ulong)gBadInt);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403981) */

void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
      stdThreadDestroy(local_10);
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
      stdThreadDestroy(local_10);
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_06_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_15_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  gBadInt = 0;
  iVar1 = stdThreadCreate(helperBad,0,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,0,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)gBadInt);
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_15_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_05_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (staticTrue != 0) {
    local_10 = 0;
    local_18 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)gBadInt);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (staticFalse == 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (staticTrue != 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_05_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
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


void CWE366_Race_Condition_Within_Thread__int_byref_08_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)local_1c);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_08_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_13_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0;
    local_18 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)gBadInt);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_13_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_05_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (staticTrue != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)local_1c);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (staticFalse == 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (staticTrue != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_05_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_17_bad(void)

{
  int iVar1;
  long local_20;
  long local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0;
    local_20 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    if (local_20 != 0) {
      iVar1 = stdThreadJoin(local_20);
      if (iVar1 != 0) {
        stdThreadDestroy(local_20);
      }
    }
    printIntLine((ulong)gBadInt);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_20;
  long local_18;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    local_18 = 0;
    local_20 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 == 0) break;
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    if ((local_20 != 0) && (iVar1 = stdThreadJoin(local_20), iVar1 != 0)) {
      stdThreadDestroy(local_20);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
    local_c = local_c + 1;
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_17_good(void)

{
  good1();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_09_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)local_1c);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_09_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
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


void CWE366_Race_Condition_Within_Thread__global_int_08_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0;
    local_18 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)gBadInt);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_08_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_07_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (staticFive == 5) {
    local_10 = 0;
    local_18 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)gBadInt);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (staticFive == 5) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (staticFive == 5) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_07_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_13_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)local_1c);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_13_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_11_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0;
    local_18 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)gBadInt);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_11_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_02_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  gBadInt = 0;
  iVar1 = stdThreadCreate(helperBad,0,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,0,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)gBadInt);
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_02_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_17_bad(void)

{
  int iVar1;
  uint local_24;
  long local_20;
  long local_18;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0;
    local_20 = 0;
    local_24 = 0;
    iVar1 = stdThreadCreate(helperBad,&local_24,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_24,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    if (local_20 != 0) {
      iVar1 = stdThreadJoin(local_20);
      if (iVar1 != 0) {
        stdThreadDestroy(local_20);
      }
    }
    printIntLine((ulong)local_24);
    local_c = local_c + 1;
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_24;
  long local_20;
  long local_18;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    local_18 = 0;
    local_20 = 0;
    local_24 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 == 0) break;
    iVar1 = stdThreadCreate(helperGood,&local_24,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_24,&local_20);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    if ((local_20 != 0) && (iVar1 = stdThreadJoin(local_20), iVar1 != 0)) {
      stdThreadDestroy(local_20);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_24);
    local_c = local_c + 1;
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_17_good(void)

{
  good1();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_04_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
    stdThreadDestroy(local_10);
  }
  if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
    stdThreadDestroy(local_18);
  }
  printIntLine((ulong)local_1c);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040651d) */

void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
      stdThreadDestroy(local_10);
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
      stdThreadDestroy(local_10);
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_04_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_04_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  gBadInt = 0;
  iVar1 = stdThreadCreate(helperBad,0,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,0,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
    stdThreadDestroy(local_10);
  }
  if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
    stdThreadDestroy(local_18);
  }
  printIntLine((ulong)gBadInt);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406858) */

void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
      stdThreadDestroy(local_10);
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if ((local_10 != 0) && (iVar1 = stdThreadJoin(local_10), iVar1 != 0)) {
      stdThreadDestroy(local_10);
    }
    if ((local_18 != 0) && (iVar1 = stdThreadJoin(local_18), iVar1 != 0)) {
      stdThreadDestroy(local_18);
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_04_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_11_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)local_1c);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 0;
    local_18 = 0;
    local_1c = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)local_1c);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_11_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_02_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)local_1c);
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_02_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_16_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  gBadInt = 0;
  iVar1 = stdThreadCreate(helperBad,0,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,0,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)gBadInt);
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)gGoodInt);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_16_good(void)

{
  good1();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_15_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)local_1c);
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_15_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    gBadInt = gBadInt + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(void)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    gGoodInt = gGoodInt + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_10_bad(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (globalTrue != 0) {
    local_10 = 0;
    local_18 = 0;
    gBadInt = 0;
    iVar1 = stdThreadCreate(helperBad,0,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperBad,0,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    printIntLine((ulong)gBadInt);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (globalFalse == 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long local_18;
  long local_10;
  
  if (globalTrue != 0) {
    local_10 = 0;
    local_18 = 0;
    iVar1 = stdThreadLockCreate(&gGoodLock);
    if (iVar1 != 0) {
      iVar1 = stdThreadCreate(helperGood,0,&local_10);
      if (iVar1 == 0) {
        local_10 = 0;
      }
      iVar1 = stdThreadCreate(helperGood,0,&local_18);
      if (iVar1 == 0) {
        local_18 = 0;
      }
      if (local_10 != 0) {
        iVar1 = stdThreadJoin(local_10);
        if (iVar1 != 0) {
          stdThreadDestroy(local_10);
        }
      }
      if (local_18 != 0) {
        iVar1 = stdThreadJoin(local_18);
        if (iVar1 != 0) {
          stdThreadDestroy(local_18);
        }
      }
      stdThreadLockDestroy(gGoodLock);
      printIntLine((ulong)gGoodInt);
    }
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__global_int_10_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_16_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)local_1c);
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_16_good(void)

{
  good1();
  return;
}


void helperBad(int *piParm1)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  return;
}


void helperGood(int *piParm1)

{
  int local_c;
  
  stdThreadLockAcquire(gGoodLock);
  local_c = 0;
  while (local_c < 1000000) {
    *piParm1 = *piParm1 + 1;
    local_c = local_c + 1;
  }
  stdThreadLockRelease(gGoodLock);
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_03_bad(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_10);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  iVar1 = stdThreadCreate(helperBad,&local_1c,&local_18);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  if (local_10 != 0) {
    iVar1 = stdThreadJoin(local_10);
    if (iVar1 != 0) {
      stdThreadDestroy(local_10);
    }
  }
  if (local_18 != 0) {
    iVar1 = stdThreadJoin(local_18);
    if (iVar1 != 0) {
      stdThreadDestroy(local_18);
    }
  }
  printIntLine((ulong)local_1c);
  return;
}


void good1(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  iVar1 = stdThreadLockCreate(&gGoodLock);
  if (iVar1 != 0) {
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_10);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    iVar1 = stdThreadCreate(helperGood,&local_1c,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
    if (local_10 != 0) {
      iVar1 = stdThreadJoin(local_10);
      if (iVar1 != 0) {
        stdThreadDestroy(local_10);
      }
    }
    if (local_18 != 0) {
      iVar1 = stdThreadJoin(local_18);
      if (iVar1 != 0) {
        stdThreadDestroy(local_18);
      }
    }
    stdThreadLockDestroy(gGoodLock);
    printIntLine((ulong)local_1c);
  }
  return;
}


void CWE366_Race_Condition_Within_Thread__int_byref_03_good(void)

{
  good1();
  good2();
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
  printf((char *)(double)fParm1,&DAT_00409b8d);
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
  printf(pcParm1,&DAT_00409baa);
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
    __isoc99_sscanf(lVar1,&DAT_00409bb8,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00409bc0,&local_14);
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

